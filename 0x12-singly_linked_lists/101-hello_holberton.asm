section .data
	text db "Hello, Holberton",10
	fmt db "%s",0

section .text
	global main
	extern printf

main:
	mov esi, text
	mov edi, fmt
	mov eax, 0
	call printf

	mov ebx, 0
	mov eax, 1
	int 0x80
