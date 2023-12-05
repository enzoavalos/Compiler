.386
.model flat, stdcall
option casemap :none
include \masm32\include\windows.inc
include \masm32\include\kernel32.inc
include \masm32\include\user32.inc
include \masm32\include\masm32.inc
includelib \masm32\lib\kernel32.lib
includelib \masm32\lib\user32.lib
.data
msg1 db "Error: Double overflow", 0
msg2 db "Error: Int overflow", 0
msg3 db "Error: Resultado de entero sin signo negativo", 0
arg@main@funcion dw ?
int1@main db ?
int2@main db ?
var1@main dw ?
x@main@funcion dw ?
.code
doubleOverflow:
invoke MessageBox, NULL, addr msg1, addr msg1, MB_OK
invoke ExitProcess, NULL
intOverflow:
invoke MessageBox, NULL, addr msg2, addr msg2, MB_OK
invoke ExitProcess, NULL
uintNegative:
invoke MessageBox, NULL, addr msg3, addr msg3, MB_OK
invoke ExitProcess, NULL
funcion@main:
mov ax, x@main@funcion
add ax, 5
jo intOverflow
js uintNegative
mov bx, arg@main@funcion
add bx, 1
mov arg@main@funcion, bx
end_funcion@main:
ret
start:
mov ah, 10
sub ah, int2@main
jo intOverflow
mov int1@main, ah
push var1@main
call funcion@main
end start
