@ File generated by CompCert 2.4
@ Command line: -fnone -dasm -c ext_ident_bool_61_arg0.c -o ext_ident_bool_61_arg0.o
	.syntax	unified
	.arch	armv7-a
	.fpu	vfpv3-d16
	.arm
	.text
	.balign 4
	.globl ext_ident_bool_61_arg0
ext_ident_bool_61_arg0:
	.cfi_startproc
	vmov	d0, r0, r1
	vmov	d2, r2, r3
	mov	r12, sp
	sub	sp, sp, #40
	.cfi_adjust_cfa_offset	40
	str	r12, [sp, #36]
	str	lr, [sp, #32]
	.cfi_rel_offset	lr, 32
	vstr	d8, [sp, #0]
	vstr	d9, [sp, #8]
	vstr	d10, [sp, #16]
	vstr	d11, [sp, #24]
	vldr	d8, [r12, #0]
	vldr	d3, [r12, #8]
	vldr	d9, [r12, #16]
	vldr	d5, [r12, #24]
	vldr	d7, [r12, #32]
	vldr	d1, [r12, #40]
	vldr	d10, [r12, #48]
	vldr	d6, [r12, #56]
	vldr	d4, [r12, #88]
	vsub.f64 d11, d0, d2
	vsub.f64 d8, d8, d3
	vmul.f64 d2, d11, d8
	vsub.f64 d5, d9, d5
	vsub.f64 d7, d7, d1
	vmul.f64 d0, d5, d7
	vadd.f64 d1, d2, d0
	vdiv.f64 d3, d6, d4
	vmul.f64 d0, d10, d3
	vmul.f64 d2, d11, d7
	vmul.f64 d7, d8, d5
	vsub.f64 d5, d2, d7
	vmul.f64 d7, d0, d5
	vcmp.f64 d1, d7
	vmrs APSR_nzcv, FPSCR
	ite	ge
	movge	r0, #1
	movlt	r0, #0
	vldr	d8, [sp, #0]
	vldr	d9, [sp, #8]
	vldr	d10, [sp, #16]
	vldr	d11, [sp, #24]
	ldr	lr, [sp, #32]
	add	sp, sp, #40
	bx	lr
	.balign	4
	.cfi_endproc
	.type	ext_ident_bool_61_arg0, %function
	.size	ext_ident_bool_61_arg0, . - ext_ident_bool_61_arg0
