/*

	DU3.H

	JY

	Main interface for DU3

*/

#ifndef DU3_H_
#define DU3_H_

#include <string>
#include "literal_storage.hpp"

namespace mlc {

	// literal storages
	typedef mlaskal::lit_storage<int> ls_int_type;
	typedef mlaskal::lit_storage<double> ls_real_type;
	typedef mlaskal::lit_storage<std::string> ls_str_type;
	typedef mlaskal::lit_storage<std::string> ls_id_type;

	extern ls_int_type ls_int;
	extern ls_real_type ls_real;
	extern ls_str_type ls_str;
	extern ls_id_type ls_id;

	// compiler's semantic value
	struct MlaskalLval {
		int								dtge_;		// group element
		ls_int_type::const_pointer		int_ci_;	// const iterator into INT literal table
		ls_real_type::const_pointer		real_ci_;	// const iterator into REAL literal table
		ls_str_type::const_pointer		str_ci_;	// const iterator into STRING literal table
		ls_id_type::const_pointer		id_ci_;		// const iterator into identifier table
	};

	// dummy structure for DU3 context
	struct MlaskalCtx {
		char		dummy_;
	};

}

// lex interface
#define YY_DECL			int yylex(mlc::MlaskalLval *lv, unsigned *l)
YY_DECL;

// parser interface
int yyparse(mlc::MlaskalCtx *ctx);

#endif
