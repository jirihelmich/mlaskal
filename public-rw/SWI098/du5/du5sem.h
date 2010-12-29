/*

	DU5SEM.H

*/

#ifndef DU5SEM_H_
#define DU5SEM_H_

#include "du5.h"
#include "du5lval.hpp"

using namespace std;

namespace mlc {

	// adds a constant into the semantic table
	void add_const(vector<const_def_struct> & const_def, MlaskalCtx * ctx);

	void conditionally_fill_constant(const_def_struct & constant, mlc::ls_id_index & ident, int line, MlaskalCtx * ctx, bool minus);

	void check_type(mlc::type_pointer & typeptr, mlc::ls_id_index & ident, int line, MlaskalCtx * ctx);

	void define_vars(vector<mlc::ls_id_index> & idents, mlc::type_pointer & typeptr, int line, MlaskalCtx * ctx);

	void define_proc(mlc::ls_id_index & ident, vector<params> & parameters, int line, MlaskalCtx * ctx);

	void define_func(mlc::ls_id_index & ident, vector<params> & parameters, mlc::ls_id_index & returnident, int line, MlaskalCtx * ctx);

	mlc::parameter_list * build_param_list(vector<params> & parameters);

	void add_param(vector<params> & parameters, bool is_var, vector<mlc::ls_id_index> & idents, mlc::ls_id_index & typeident,int line, MlaskalCtx * ctx);

	mlc::type_pointer add_rangetype(const_def_struct & c1, const_def_struct & c2, MlaskalCtx * ctx);

	mlc::type_pointer add_array(
		vector<mlc::type_pointer> & rangetypes,
		mlc::type_pointer & elemtype,
		MlaskalCtx * ctx);

	mlc::type_pointer get_type(mlc::ls_id_index & ident, int line, MlaskalCtx * ctx);

	/** DU5 - implementation */

	void assign(expr_struct & result, mlc::ls_id_index & ident, expr_struct & expr, MlaskalCtx * ctx);

	void params_block(expr_struct & result, expr_struct & expr, expr_struct & params_block);

	void relation(expr_struct & result, expr_struct & expr, int oper_rel, expr_struct & expr2);

	void compute(expr_struct & result, expr_struct & expr, int oper, expr_struct & expr2);

	void or(expr_struct & result, expr_struct & expr, expr_struct & expr2);

	void unary_operator(expr_struct & result, expr_struct & expr, int oper);

	void get_block_val(expr_struct & result, const_def_struct & expr);

	void negation(expr_struct & result, expr_struct & expr);

	void callfunc(expr_struct & result, mlc::ls_id_index & ident, params & p, MlaskalCtx * ctx);

}

#endif
