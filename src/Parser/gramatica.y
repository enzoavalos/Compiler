%{
// Declaraciones de código C si es necesario
%}

%token ID ERROR

%token SHORT UINT DOUBLE VOID STRING CLASS INTERFACE IMPLEMENT IMPL
%token IF ELSE END_IF PRINT FOR IN RANGE RETURN

%token LESS_EQUAL GREATER_EQUAL EQUAL NOT_EQUAL PLUS_EQUAL // Operadores de comparación

%left '=' '+='  // Asociatividad izquierda para asignación y asignación con adición
%left '.'  // Asociatividad izquierda para acceso a atributos y métodos

%nonassoc UMINUS  // Operador de negación unaria (para expresiones negativas) Esto lo recomendo chatgpt, veremos

%start programa

%%

programa        : '{' sentencias '}'
                ;

sentencias      : sentencias sentencia
                | sentencia
                ;

sentencia       : declarativa ','
                | ejecutable ','
                ;

declarativa     : tipo lista_variables ','
                | clase_declaration
                | objeto_declaration
                | interface_declaration
                | implement_declaration
                ;

ejecutable      : asignacion
                | invocacion
                | seleccion
                | print
                | bucle_for
                | acceso_objeto  // Nueva regla para el acceso a atributos y métodos
                ;

lista_variables : lista_variables ID
                | ID
                ;

clase_declaration       : CLASS ID '{' atributos metodos '}'
                        ;

interface_declaration   : INTERFACE ID '{' interface_metodos '}'
                        ;

interface_metodos       : interface_metodos interface_metodo_declaration
                        | /* Puede no haber métodos en la interfaz */
                        ;

// REVISAR PARAMETROS DE LAS INTERFACES
interface_metodo_declaration    : VOID ID '(' ')' ','
                                ;

implement_declaration   : CLASS ID IMPLEMENT ID '{' implement_metodos '}'
                        ;

implement_metodos       : implement_metodos implement_metodo_declaration
                        | /* Puede no haber métodos implementados */;

implement_metodo_declaration    : VOID ID '(' ')' '{' sentencias '}'
                                ;

atributos               : atributos atributo_declaration
                        | /* Puede no haber atributos */
                        ;

atributo_declaration    : tipo lista_variables ','
                        ;

metodos                 : metodos metodo_declaration
                        | /* Puede no haber métodos */
                        ;

// REVISAR PARAMETROS DE FUNCIONES Y METODOS
metodo_declaration      : VOID ID '(' ')' '{' sentencias retorno '}'
                        ;
                        
// REVISAR SENTENCIA DE RETORNO
retorno                 : RETURN
                        | // Puede no aparecer la palabra return
                        ;

objeto_declaration      : ID lista_objetos ','
                        ;

lista_objetos           : lista_objetos objeto
                        | objeto
                        ;

objeto          : ID
                ;

asignacion      : ID asignador expresion
                | ID '.' ID asignador expresion  // Asignación de atributo
                ;

asignador       : '='
                | '+='
                ;

invocacion      : ID '(' parametros ')'
                ;

parametros      : expresion
                | /* Puede no haber parámetros */
                ;

seleccion       : IF '(' condicion ')' bloque_sentencias ELSE bloque_sentencias END_IF
                | IF '(' condicion ')' bloque_sentencias END_IF
                ;

condicion       : expresion comparador expresion
                ;

comparador      : '<'
                | '>'
                | LESS_EQUAL
                | GREATER_EQUAL
                | EQUAL
                | NOT_EQUAL
                ;
        
bloque_sentencias       : sentencia
                        | '{' sentencias '}'
                        ;

print   : PRINT '(' STRING ')'
        ;

bucle_for       : FOR ID IN RANGE '(' constante ';' constante ';' constante ')' bloque_sentencias
                ;

acceso_objeto   : ID '.' ID
                | ID '.' ID '(' parametros ')'  // Invocación de método de objeto
                ;

expresion       : expresion '+' termino
                | expresion '-' termino
                | termino
                ;

termino         : factor
                | termino '*' factor
                | termino '/' factor
                ;

factor          : ID
                | constante
                ;

constante       : UINT
                | SHORT
                | DOUBLE;

tipo    : SHORT
        | UINT
        | DOUBLE
        ;