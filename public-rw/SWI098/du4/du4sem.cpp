/*

DU4SEM.CPP

JY

Mlaskal's semantic interface for DU4

*/

#include "du4sem.h"
#include "du4tok.h"
#include "du4.h"
#include "duerr.h"

namespace mlc {

	void add_const(vector<const_def_struct> & const_def, MlaskalCtx * ctx)
	{
		while (!const_def.empty())
		{
			switch (const_def.back().type)
			{
			case 'S':
				ctx->tab->add_const_str(const_def.back().line, const_def.back().ident_index, const_def.back().str_);
				break;
			case 'B':
				ctx->tab->add_const_bool(const_def.back().line, const_def.back().ident_index, const_def.back().bool_);
				break;
			case 'I':
				ctx->tab->add_const_int(const_def.back().line, const_def.back().ident_index, const_def.back().int_);
				break;
			case 'R':
				ctx->tab->add_const_real(const_def.back().line, const_def.back().ident_index, const_def.back().real_);
				break;
			}
			
			const_def.pop_back();
		}
	}

	void check_type(mlc::type_pointer & typeptr, mlc::ls_id_index & ident, int line, MlaskalCtx * ctx)
	{
		mlc::symbol_pointer sp = ctx->tab->find_symbol(ident);

		if (sp->kind() != mlc::SKIND_TYPE)
		{
			mlc::error(DUERR_NOTTYPE, line, *ident);
		}

		typeptr = sp->access_typed()->type();
	}

	mlc::type_pointer get_type(mlc::ls_id_index & ident, int line, MlaskalCtx * ctx)
	{
		mlc::symbol_pointer sp = ctx->tab->find_symbol(ident);

		if (sp->kind() != mlc::SKIND_TYPE)
		{
			mlc::error(DUERR_NOTTYPE, line, *ident);
			return sp->access_type()->type();
		}

		return sp->access_typed()->type();
	}

	void define_vars(vector<mlc::ls_id_index> & idents, mlc::type_pointer & typeptr, int line, MlaskalCtx * ctx)
	{
		while (!idents.empty())
		{
			ctx->tab->add_var(line, idents.back(), typeptr);

			idents.pop_back();
		}
	}

	void conditionally_fill_constant(const_def_struct & constant, mlc::ls_id_index & ident, int line, MlaskalCtx * ctx, bool minus)
	{
		//get pointer to stored symbol
		mlc::symbol_pointer sp = ctx->tab->find_symbol(ident);

		//get its type
		type_pointer tp = sp->access_typed()->type();

		//check if it is constant
		if (sp->kind() == mlc::SKIND_CONST)
		{
			//fill the info about the constant
			switch(tp->cat())
			{
			case TCAT_BOOL:
				constant.line = line;
				constant.type = 'B';
				constant.bool_ = sp->access_const()->access_bool_const()->bool_value();
					break;
			case TCAT_INT:
				constant.line = line;
				constant.type = 'I';
				constant.int_ = sp->access_const()->access_int_const()->int_value();
				constant.int_ = (minus ? ctx->tab->ls_int().add(-(*constant.int_)) : constant.int_);
					break;
			case TCAT_REAL:
				constant.line = line;
				constant.type = 'R';
				constant.real_ = sp->access_const()->access_real_const()->real_value();
				constant.real_ = (minus ? ctx->tab->ls_real().add(-(*constant.real_)) : constant.real_);
					break;
			case TCAT_STR:
				constant.line = line;
				constant.type = 'S';
				constant.str_ = sp->access_const()->access_str_const()->str_value();
					break;
			}
		}
	}

	mlc::parameter_list * build_param_list(vector<params> & parameters)
	{
		mlc::parameter_list * paramlist = create_parameter_list();

		while (!parameters.empty())
		{
			if (parameters.back().is_var)
			{
				paramlist->append_parameter_by_reference(parameters.back().ident_index, parameters.back().typeptr);
			}else
			{
				paramlist->append_parameter_by_value(parameters.back().ident_index, parameters.back().typeptr);
			}

			parameters.pop_back();
		}

		return paramlist;
	}


	void define_proc(mlc::ls_id_index & ident, vector<params> & parameters, int line, MlaskalCtx * ctx)
	{
		ctx->tab->add_proc(line, ident, build_param_list(parameters));
		ctx->tab->enter(line, ident);
	}

	void define_func(mlc::ls_id_index & ident, vector<params> & parameters, mlc::ls_id_index & returnident, int line, MlaskalCtx * ctx)
	{
		mlc::symbol_pointer sp = ctx->tab->find_symbol(returnident);

		if (sp->kind() != mlc::SKIND_TYPE)
		{
			mlc::error(DUERR_NOTTYPE, line, *returnident);
		}

		mlc::type_pointer typeptr = sp->access_typed()->type();

		ctx->tab->add_fnc(line, ident, typeptr, build_param_list(parameters));
		ctx->tab->enter(line, ident);
	}
	
	mlc::type_pointer add_array(
		vector<mlc::type_pointer> & rangetypes,
		mlc::type_pointer & elemtype,
		MlaskalCtx * ctx)
	{
		mlc::type_pointer ptr = elemtype;

		while (!rangetypes.empty())
		{
			ptr = ctx->tab->create_array_type(rangetypes.back(), ptr);

			rangetypes.pop_back();
		}	

		//ctx->tab->add_type(line, ident, ptr);

		return ptr;
	}

	mlc::type_pointer add_rangetype(const_def_struct & c1, const_def_struct & c2, MlaskalCtx * ctx)
	{
		return ctx->tab->create_range_type(c1.int_, c2.int_);
	}

	void add_param(
		vector<params> & parameters,
		bool is_var,
		vector<mlc::ls_id_index> & idents,
		mlc::ls_id_index & typeident,
		int line,
		MlaskalCtx * ctx
	)
	{
		mlc::symbol_pointer sp = ctx->tab->find_symbol(typeident);

		mlc::type_pointer typeptr = sp->access_typed()->type();

		if (sp->kind() != mlc::SKIND_TYPE)
		{		
			mlc::error(DUERR_NOTTYPE, line, *typeident);
		}

		while (!idents.empty())
		{

			params p;

			p.is_var = is_var;
			p.ident_index = idents.back();
			p.typeptr = typeptr;

			parameters.push_back(p);

			idents.pop_back();
		}
	}

}
