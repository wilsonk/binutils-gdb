	.text
	.globl _start
_start:
	ret

	.section .text.bar,"ax",@progbits
	.globl bar
bar:
	movl	%gs:foo@GPOFF, %eax