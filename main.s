	.file	"main.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Number %d - \0"
.LC1:
	.ascii "%d \0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$1, -8(%rbp)
	jmp	.L2
.L6:
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	jmp	.L3
.L5:
	movl	-4(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L4
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC1(%rip), %rcx
	call	printf
	jmp	.L3
.L4:
	movl	-4(%rbp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC1(%rip), %rcx
	call	printf
.L3:
	cmpl	$1, -4(%rbp)
	jg	.L5
	movl	$10, %ecx
	call	putchar
	addl	$1, -8(%rbp)
.L2:
	cmpl	$99, -8(%rbp)
	jle	.L6
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	putchar;	.scl	2;	.type	32;	.endef
