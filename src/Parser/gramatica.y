%{
// Declaraciones de código C si es necesario
%}

%token ID  // Identificador
%token COMMA  // Coma
%token LBRACE  // Llave izquierda '{'
%token RBRACE  // Llave derecha '}'
%token LPAREN
%token RPAREN
%token SHORT UINT DOUBLE VOID STRING CLASS INTERFACE IMPLEMENT  // Palabras clave
%token LESS_EQUAL GREATER_EQUAL EQUAL NOT_EQUAL  // Operadores de comparación
%token IF ELSE END_IF PRINT FOR IN RANGE  // Palabras clave adicionales
%left '=' '+='  // Asociatividad izquierda para asignación y asignación con adición
%left '.'  // Asociatividad izquierda para acceso a atributos y métodos

%left '+' '-'  // Operadores aritméticos de suma y resta
%left '*' '/'  // Operadores aritméticos de multiplicación y división
%nonassoc UMINUS  // Operador de negación unaria (para expresiones negativas) Esto lo recomendo chatgpt, veremos

%start programa

%%

sentencias: sentencias sentencia
          | sentencia;

sentencia: declarativa COMMA
         | ejecutable COMMA;

tipo: SHORT
    | UINT
    | DOUBLE;

lista_variables: lista_variables ID
              | ID;

declarativa: tipo lista_variables COMMA
          | clase_declaration
          | objeto_declaration
          | interface_declaration
          | implement_declaration;

interface_declaration: INTERFACE ID LBRACE interface_metodos RBRACE;

interface_metodos: interface_metodos interface_metodo_declaration
                | /* Puede no haber métodos en la interfaz */;

interface_metodo_declaration: VOID ID LPAREN RPAREN COMMA;

implement_declaration: CLASS ID IMPLEMENT ID LBRACE implement_metodos RBRACE;

implement_metodos: implement_metodos implement_metodo_declaration
                | /* Puede no haber métodos implementados */;

implement_metodo_declaration: VOID ID LPAREN RPAREN LBRACE sentencias RBRACE;

clase_declaration: CLASS ID LBRACE atributos metodos RBRACE;

atributos: atributos atributo_declaration
         | /* Puede no haber atributos */;

atributo_declaration: tipo lista_variables COMMA;

metodos: metodos metodo_declaration
       | /* Puede no haber métodos */;

metodo_declaration: VOID ID LPAREN RPAREN LBRACE sentencias RBRACE;

objeto_declaration: ID lista_objetos COMMA;

lista_objetos: lista_objetos objeto
            | objeto;

objeto: ID
     | ID '.' ID;  // Acceso a atributos o métodos de un objeto

ejecutable: asignacion
          | invocacion
          | seleccion
          | print
          | bucle_for
          | acceso_objeto;  // Nueva regla para el acceso a atributos y métodos

asignacion: ID asignador expresion
         | ID '.' ID asignador expresion;  // Asignación de atributo

asignador: '='
        | '+=';

expresion: 
    expresion '+' termino | expresion '-' termino | termino

termino:
        factor | termino '*' factor | termino '/' factor;

factor: ID | constante

constante: UINT
        | SHORT
        | DOUBLE;

invocacion: ID '(' parametros ')';

parametros: expresion
         | /* Puede no haber parámetros */;

seleccion: IF '(' condicion ')' bloque_sentencias ELSE bloque_sentencias END_IF | IF '(' condicion ')' bloque_sentencias END_IF;

condicion:
        expresion '<' expresion
        | expresion '>' expresion
        | expresion LESS_EQUAL expresion
        | expresion GREATER_EQUAL expresion
        | expresion EQUAL expresion
        | expresion NOT_EQUAL expresion;
        

bloque_sentencias: sentencia
               | LBRACE sentencias RBRACE;

print: PRINT '(' STRING ')';

bucle_for: FOR ID IN RANGE '(' constante ';' constante ';' constante ')' bloque_sentencias;

acceso_objeto: ID '.' ID
             | ID '.' ID '(' parametros ')';  // Invocación de método de objeto

%%

// Código de acciones semánticas si es necesario
