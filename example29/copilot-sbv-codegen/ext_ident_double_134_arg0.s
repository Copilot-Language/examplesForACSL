@ File generated by CompCert 2.4
@ Command line: -fnone -dasm -c ext_ident_double_134_arg0.c -o ext_ident_double_134_arg0.o
	.syntax	unified
	.arch	armv7-a
	.fpu	vfpv3-d16
	.arm
	.text
	.balign 4
	.globl ext_ident_double_134_arg0
ext_ident_double_134_arg0:
	.cfi_startproc
	vmov	d2, r2, r3
	mov	r12, sp
	sub	sp, sp, #8
	.cfi_adjust_cfa_offset	8
	str	r12, [sp, #4]
	str	lr, [sp, #0]
	.cfi_rel_offset	lr, 0
	vldr	d0, [r12, #48]
	cmp	r0, #0
	bne	.L100
	vmov.f64 d0, #-1.
.L100:
	ldr	lr, [sp, #0]
	add	sp, sp, #8
	vmov	r0, r1, d0
	bx	lr
	.balign	4
	.cfi_endproc
	.type	ext_ident_double_134_arg0, %function
	.size	ext_ident_double_134_arg0, . - ext_ident_double_134_arg0
