@ File generated by CompCert 2.4
@ Command line: -fnone -dasm -c ext_ident_bool_52_arg0.c -o ext_ident_bool_52_arg0.o
	.syntax	unified
	.arch	armv7-a
	.fpu	vfpv3-d16
	.arm
	.text
	.balign 4
	.globl ext_ident_bool_52_arg0
ext_ident_bool_52_arg0:
	.cfi_startproc
	vmov	d2, r2, r3
	mov	r12, sp
	sub	sp, sp, #8
	.cfi_adjust_cfa_offset	8
	str	r12, [sp, #4]
	str	lr, [sp, #0]
	.cfi_rel_offset	lr, 0
	ldr	r2, [r12, #32]
	ldr	r3, [r12, #268]
	cmp	r0, #0
	ite	ne
	movne	r12, #1
	moveq	r12, #0
	cmp	r3, #0
	ite	ne
	movne	r0, #1
	moveq	r0, #0
	cmp	r2, #0
	bne	.L100
	mov	r0, #0
.L100:
	cmp	r12, #0
	bne	.L101
	mov	r0, #0
.L101:
	ldr	lr, [sp, #0]
	add	sp, sp, #8
	bx	lr
	.balign	4
	.cfi_endproc
	.type	ext_ident_bool_52_arg0, %function
	.size	ext_ident_bool_52_arg0, . - ext_ident_bool_52_arg0
