%{
	#include “src/Lexer.h”
%}

%token 	ID STRING SHORT UINT DOUBLE
	IF ELSE END_IF PRINT CLASS VOID FOR IN RANGE IMPL INTERFACE IMPLEMENT RETURN
	LESS_OR_EQUAL GREATER_OR_EQUAL EQUAL NOT_EQUAL PLUS_EQUAL
	ERROR

%start programa

%%%

expresion	: expresion '+' termino 	{}
			| expresion '-' termino		{}
			| termino					{}
			;

termino		: termino '*' factor	{}
			| termino '/' factor	{}
			| factor				{}
			;

factor 		: ID			{}
			| UINT			{}
			| SHORT			{}
			| '-' SHORT		{}
			| DOUBLE		{}
			| '-' DOUBLE	{}
			;

tipo 	: UINT			{}
		| SHORT			{}
		| DOUBLE 		{}
		;

comparador 	: EQUAL				{}
			| NOT_EQUAL			{}
			| LESS_OR_EQUAL		{}
			| GREATER_OR_EQUAL	{}
			| '<'				{}
			| '>'				{}
			;