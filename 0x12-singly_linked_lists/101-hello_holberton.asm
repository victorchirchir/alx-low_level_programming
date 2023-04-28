section .data
	msg db "Hello, Holberton", 10, 0
	fmt db "%s"
section .text
	global main
	extern printf
main:
	;args for printf
	mov rdi, fmt
	mov rsi, msg

	;calling print f func
	xor eax, eax
	call printf

	;exiting
	xor eax, eax
	ret
