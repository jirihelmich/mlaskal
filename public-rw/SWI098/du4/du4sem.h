/*

	DU4SEM.H

	DB

	Mlaskal's semantic interface for DU4

*/

#ifndef __DU4SEM_H
#define __DU4SEM_H

#include "du4.h"
#include "du4lval.hpp"

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

}

#endif
