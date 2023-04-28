global	main

;program to be compiled with asm and gcc

		section	.text
main:	mov	rax, 1			;move the exit syscall
		mov	rdi, 1
		mov	rsi, holberton
		mov	rdx, 17
		syscall
		mov     rax, 60
		xor	rdi, rdi
		syscall
		section	.data		;contain data of information to be printed
holberton:db	"Hello, Holberton", 0xA
