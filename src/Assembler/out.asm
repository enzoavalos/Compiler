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
msg1 db "Error: Division by zero", 0
msg2 db "Error: Index out of bounds", 0
msg3 db "Error: Invalid memory access", 0
test:main dw ?
.code
mov eax, 2_s
add eax, 1_s
mov test, eax
