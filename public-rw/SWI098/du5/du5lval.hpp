/*

DU5LVAL.H

*/

#ifndef DU5LVAL_H_
#define DU5LVAL_H_

#include "literal_storage.hpp"
#include "flat_icblock.hpp"
#include "dutables.h"
#include "abstract_instr.hpp"
#include "gen_ainstr.hpp"

using namespace std;

struct const_def_struct	{   //const definition structure

	char					type;				//the type of the constant
	mlc::ls_id_index		ident_index;		//identifier name
	int						line;				//line number

	//pointer to values, usage with respect to const_type
	mlc::ls_int_index		int_;
	mlc::ls_real_index		real_;
	mlc::ls_str_index		str_;
	bool					bool_;
};

struct params{
	bool					is_var;
	mlc::ls_id_index		ident_index;
	mlc::type_pointer		typeptr;
};

struct expr_struct{
	mlc::icblock_pointer	block;
	char					type;				//the type of the expr
};

namespace mlc {

		// compiler's semantic value
		struct MlaskalLval {
				int										dtge_;			// group element
				mlc::ls_int_type::const_pointer			int_ci_;		// const iterator into INT literal table
				mlc::ls_real_type::const_pointer		real_ci_;		// const iterator into REAL literal table
				mlc::ls_str_type::const_pointer			str_ci_;		// const iterator into STRING literal table
				mlc::ls_id_type::const_pointer			id_ci_;			// const iterator into identifier table

				vector<const_def_struct>				vector_const_def_struct_;
				const_def_struct						const_def_struct_;

				vector<mlc::ls_id_type::const_pointer>	vector_id_;

				type_pointer							type_;
				vector<type_pointer>					type_list_;

				vector<params>							params_;

				bool									is_var_;

				expr_struct								expr_;

		};

		/*************************************************************/

}

// lex interface
#define YYLEX_PARAM		ctx
#define YY_DECL			int yylex(mlc::MlaskalLval *lv, unsigned *l, mlc::MlaskalCtx *ctx)
YY_DECL;

#endif
