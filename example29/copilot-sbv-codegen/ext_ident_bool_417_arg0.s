@ File generated by CompCert 2.4
@ Command line: -fnone -dasm -c ext_ident_bool_417_arg0.c -o ext_ident_bool_417_arg0.o
	.syntax	unified
	.arch	armv7-a
	.fpu	vfpv3-d16
	.arm
	.text
	.balign 4
	.globl ext_ident_bool_417_arg0
ext_ident_bool_417_arg0:
	.cfi_startproc
	vmov	d0, r0, r1
	vmov	d2, r2, r3
	mov	r12, sp
	sub	sp, sp, #8
	.cfi_adjust_cfa_offset	8
	str	r12, [sp, #4]
	str	lr, [sp, #0]
	.cfi_rel_offset	lr, 0
	vldr	d5, [r12, #0]
	vldr	d3, [r12, #8]
	vldr	d6, [r12, #192]
	vldr	d4, [r12, #944]
	vldr	d1, [r12, #952]
	vsub.f64 d5, d2, d5
	vsub.f64 d7, d4, d1
	vmul.f64 d2, d3, d7
	vadd.f64 d1, d5, d2
	vmul.f64 d5, d0, d1
	vmul.f64 d4, d0, d6
	vmul.f64 d6, d0, d4
	vcmp.f64 d5, d6
	vmrs APSR_nzcv, FPSCR
	ite	ge
	movge	r0, #1
	movlt	r0, #0
	ldr	lr, [sp, #0]
	add	sp, sp, #8
	bx	lr
	.balign	4
	.cfi_endproc
	.type	ext_ident_bool_417_arg0, %function
	.size	ext_ident_bool_417_arg0, . - ext_ident_bool_417_arg0
