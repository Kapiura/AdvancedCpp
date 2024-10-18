	.file	"main.cpp"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.section	.text._ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev,"axG",@progbits,_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED5Ev,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev
	.type	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev, @function
_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev:
.LFB2697:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	movq	%rdi, %r12
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	movq	8(%rdi), %rbp
	movq	(%rdi), %rbx
	cmpq	%rbx, %rbp
	je	.L2
	.p2align 4
	.p2align 3
.L4:
	movq	(%rbx), %rdi
	leaq	16(%rbx), %rax
	cmpq	%rax, %rdi
	je	.L3
	movq	16(%rbx), %rax
	leaq	1(%rax), %rsi
	call	_ZdlPvm
.L3:
	addq	$32, %rbx
	cmpq	%rbx, %rbp
	jne	.L4
	movq	(%r12), %rbx
.L2:
	testq	%rbx, %rbx
	je	.L1
	movq	16(%r12), %rsi
	movq	%rbx, %rdi
	subq	%rbx, %rsi
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	jmp	_ZdlPvm
	.p2align 4,,10
	.p2align 3
.L1:
	.cfi_restore_state
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE2697:
	.size	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev, .-_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev
	.weak	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev
	.set	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev,_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev
	.section	.rodata._ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE.str1.1,"aMS",@progbits,1
.LC0:
	.string	"{"
.LC1:
	.string	", "
.LC2:
	.string	"}\n"
	.section	.text._ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE,"axG",@progbits,_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE,comdat
	.p2align 4
	.weak	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE
	.type	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE, @function
_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE:
.LFB2716:
	.cfi_startproc
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	movl	$1, %edx
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	movq	%rsi, %r12
	movl	$.LC0, %esi
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	movq	%rdi, %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	subq	$8, %rsp
	.cfi_def_cfa_offset 48
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	movq	(%r12), %rbx
	movq	8(%r12), %r13
	cmpq	%rbx, %r13
	jne	.L13
	jmp	.L10
	.p2align 4,,10
	.p2align 3
.L11:
	movl	$2, %edx
	movl	$.LC1, %esi
	movq	%rbp, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
.L12:
	addq	$32, %rbx
	cmpq	%rbx, %r13
	je	.L10
.L13:
	movq	8(%rbx), %rdx
	movq	(%rbx), %rsi
	movq	%rbp, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	movq	8(%r12), %rax
	movq	8(%rbx), %rdx
	cmpq	-24(%rax), %rdx
	jne	.L11
	testq	%rdx, %rdx
	je	.L12
	movq	-32(%rax), %rsi
	movq	(%rbx), %rdi
	call	memcmp
	testl	%eax, %eax
	jne	.L11
	addq	$32, %rbx
	cmpq	%rbx, %r13
	jne	.L13
.L10:
	movq	%rbp, %rdi
	movl	$2, %edx
	movl	$.LC2, %esi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	addq	$8, %rsp
	.cfi_def_cfa_offset 40
	movq	%rbp, %rax
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE2716:
	.size	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE, .-_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE
	.section	.text._ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev,"axG",@progbits,_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED5Ev,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev
	.type	_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev, @function
_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev:
.LFB2840:
	.cfi_startproc
	movq	(%rdi), %rax
	testq	%rax, %rax
	je	.L23
	movq	16(%rdi), %rsi
	movq	%rax, %rdi
	subq	%rax, %rsi
	jmp	_ZdlPvm
	.p2align 4,,10
	.p2align 3
.L23:
	ret
	.cfi_endproc
.LFE2840:
	.size	_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev, .-_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev
	.weak	_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev
	.set	_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev,_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev
	.section	.text._ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2ERKS7_,"axG",@progbits,_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC5ERKS7_,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2ERKS7_
	.type	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2ERKS7_, @function
_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2ERKS7_:
.LFB2694:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA2694
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pxor	%xmm0, %xmm0
	movq	%rdi, %r15
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	movq	%rsi, %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$40, %rsp
	.cfi_def_cfa_offset 96
	movq	8(%rsi), %rbx
	subq	(%rsi), %rbx
	movups	%xmm0, (%rdi)
	movq	$0, 16(%rdi)
	je	.L39
	movabsq	$9223372036854775776, %rax
	cmpq	%rbx, %rax
	jb	.L49
	movq	%rbx, %rdi
.LEHB0:
	call	_Znwm
.LEHE0:
	movq	%rax, 8(%rsp)
.L26:
	movq	8(%rsp), %rax
	movq	%rax, %xmm0
	addq	%rax, %rbx
	punpcklqdq	%xmm0, %xmm0
	movq	%rbx, 16(%r15)
	movups	%xmm0, (%r15)
	movq	8(%rbp), %r14
	movq	0(%rbp), %r12
	cmpq	%r14, %r12
	je	.L40
	movq	%rax, %rbx
	jmp	.L34
	.p2align 4,,10
	.p2align 3
.L29:
	cmpq	$1, %rbp
	je	.L50
	testq	%rbp, %rbp
	jne	.L30
.L32:
	addq	$32, %r12
	movq	%rbp, 8(%rbx)
	addq	$32, %rbx
	movb	$0, (%rdi,%rbp)
	cmpq	%r12, %r14
	je	.L28
.L34:
	movq	8(%r12), %rbp
	leaq	16(%rbx), %rdi
	movq	%rdi, (%rbx)
	movq	(%r12), %r13
	movq	%rbp, 24(%rsp)
	cmpq	$15, %rbp
	jbe	.L29
	xorl	%edx, %edx
	leaq	24(%rsp), %rsi
	movq	%rbx, %rdi
.LEHB1:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
.LEHE1:
	movq	%rax, (%rbx)
	movq	%rax, %rdi
	movq	24(%rsp), %rax
	movq	%rax, 16(%rbx)
.L30:
	movq	%rbp, %rdx
	movq	%r13, %rsi
	call	memcpy
	movq	24(%rsp), %rbp
	movq	(%rbx), %rdi
	jmp	.L32
	.p2align 4,,10
	.p2align 3
.L50:
	movzbl	0(%r13), %eax
	movb	%al, 16(%rbx)
	jmp	.L32
	.p2align 4,,10
	.p2align 3
.L40:
	movq	8(%rsp), %rbx
.L28:
	movq	%rbx, 8(%r15)
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L39:
	.cfi_restore_state
	movq	$0, 8(%rsp)
	jmp	.L26
.L49:
.LEHB2:
	call	_ZSt28__throw_bad_array_new_lengthv
.LEHE2:
.L42:
	movq	%rax, %rdi
.L35:
	call	__cxa_begin_catch
.L36:
	movq	8(%rsp), %rax
	cmpq	%rax, %rbx
	je	.L51
	movq	8(%rsp), %r14
	movq	%r14, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	movq	%r14, %rax
	addq	$32, %rax
	movq	%rax, 8(%rsp)
	jmp	.L36
.L51:
.LEHB3:
	call	__cxa_rethrow
.LEHE3:
.L41:
	movq	%rax, %rbx
.L38:
	call	__cxa_end_catch
	movq	%r15, %rdi
	call	_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev
	movq	%rbx, %rdi
.LEHB4:
	call	_Unwind_Resume
.LEHE4:
	.cfi_endproc
.LFE2694:
	.section	.gcc_except_table._ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2ERKS7_,"aG",@progbits,_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC5ERKS7_,comdat
	.align 4
.LLSDA2694:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATT2694-.LLSDATTD2694
.LLSDATTD2694:
	.byte	0x1
	.uleb128 .LLSDACSE2694-.LLSDACSB2694
.LLSDACSB2694:
	.uleb128 .LEHB0-.LFB2694
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB2694
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L42-.LFB2694
	.uleb128 0x1
	.uleb128 .LEHB2-.LFB2694
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB2694
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L41-.LFB2694
	.uleb128 0
	.uleb128 .LEHB4-.LFB2694
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
.LLSDACSE2694:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT2694:
	.section	.text._ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2ERKS7_,"axG",@progbits,_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC5ERKS7_,comdat
	.size	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2ERKS7_, .-_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2ERKS7_
	.weak	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC1ERKS7_
	.set	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC1ERKS7_,_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2ERKS7_
	.text
	.p2align 4
	.globl	_Z11insert_sortINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEESt6vectorIT_SaIS7_EERS9_
	.type	_Z11insert_sortINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEESt6vectorIT_SaIS7_EERS9_, @function
_Z11insert_sortINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEESt6vectorIT_SaIS7_EERS9_:
.LFB2417:
	.cfi_startproc
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	movq	%rdi, %r13
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	movl	$1, %r12d
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	movq	%rsi, %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	subq	$8, %rsp
	.cfi_def_cfa_offset 48
	movq	(%rsi), %rax
	movq	8(%rsi), %rdx
	subq	%rax, %rdx
	cmpq	$32, %rdx
	jbe	.L56
	.p2align 4
	.p2align 3
.L53:
	movq	%r12, %rbx
	salq	$5, %rbx
	.p2align 4
	.p2align 3
.L55:
	leaq	(%rax,%rbx), %rdi
	subq	$32, %rbx
	leaq	(%rax,%rbx), %rsi
	movq	8(%rsi), %rcx
	cmpq	%rcx, 8(%rdi)
	jnb	.L54
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4swapERS4_
	movq	0(%rbp), %rax
	testq	%rbx, %rbx
	jne	.L55
.L54:
	movq	8(%rbp), %rdx
	addq	$1, %r12
	subq	%rax, %rdx
	sarq	$5, %rdx
	cmpq	%rdx, %r12
	jb	.L53
.L56:
	movq	%rbp, %rsi
	movq	%r13, %rdi
	call	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC1ERKS7_
	addq	$8, %rsp
	.cfi_def_cfa_offset 40
	movq	%r13, %rax
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE2417:
	.size	_Z11insert_sortINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEESt6vectorIT_SaIS7_EERS9_, .-_Z11insert_sortINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEESt6vectorIT_SaIS7_EERS9_
	.section	.text._ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_,"axG",@progbits,_ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_,comdat
	.p2align 4
	.weak	_ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_
	.type	_ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_, @function
_ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_:
.LFB3069:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3069
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$40, %rsp
	.cfi_def_cfa_offset 96
	movq	%rdx, 8(%rsp)
	cmpq	%rsi, %rdi
	je	.L75
	movq	%rdi, %r12
	movq	%rsi, %r14
	leaq	24(%rsp), %r15
	movq	%rdx, %rbx
	jmp	.L70
	.p2align 4,,10
	.p2align 3
.L84:
	movzbl	0(%r13), %eax
	movb	%al, 16(%rbx)
.L68:
	addq	$32, %r12
	movq	%rbp, 8(%rbx)
	addq	$32, %rbx
	movb	$0, (%rdi,%rbp)
	cmpq	%r12, %r14
	je	.L63
.L70:
	movq	8(%r12), %rbp
	leaq	16(%rbx), %rdi
	movq	%rdi, (%rbx)
	movq	(%r12), %r13
	movq	%rbp, 24(%rsp)
	cmpq	$15, %rbp
	ja	.L83
	cmpq	$1, %rbp
	je	.L84
	testq	%rbp, %rbp
	je	.L68
	jmp	.L66
	.p2align 4,,10
	.p2align 3
.L83:
	xorl	%edx, %edx
	movq	%r15, %rsi
	movq	%rbx, %rdi
.LEHB5:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
.LEHE5:
	movq	%rax, (%rbx)
	movq	%rax, %rdi
	movq	24(%rsp), %rax
	movq	%rax, 16(%rbx)
.L66:
	movq	%rbp, %rdx
	movq	%r13, %rsi
	call	memcpy
	movq	24(%rsp), %rbp
	movq	(%rbx), %rdi
	jmp	.L68
	.p2align 4,,10
	.p2align 3
.L75:
	movq	8(%rsp), %rbx
.L63:
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	movq	%rbx, %rax
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
.L76:
	.cfi_restore_state
	movq	%rax, %rdi
.L71:
	call	__cxa_begin_catch
.L72:
	cmpq	%rbx, 8(%rsp)
	je	.L85
	movq	8(%rsp), %r15
	movq	%r15, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	movq	%r15, %rax
	addq	$32, %rax
	movq	%rax, 8(%rsp)
	jmp	.L72
.L85:
.LEHB6:
	call	__cxa_rethrow
.LEHE6:
.L77:
	movq	%rax, %rbx
.L74:
	call	__cxa_end_catch
	movq	%rbx, %rdi
.LEHB7:
	call	_Unwind_Resume
.LEHE7:
	.cfi_endproc
.LFE3069:
	.section	.gcc_except_table._ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_,"aG",@progbits,_ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_,comdat
	.align 4
.LLSDA3069:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATT3069-.LLSDATTD3069
.LLSDATTD3069:
	.byte	0x1
	.uleb128 .LLSDACSE3069-.LLSDACSB3069
.LLSDACSB3069:
	.uleb128 .LEHB5-.LFB3069
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L76-.LFB3069
	.uleb128 0x1
	.uleb128 .LEHB6-.LFB3069
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L77-.LFB3069
	.uleb128 0
	.uleb128 .LEHB7-.LFB3069
	.uleb128 .LEHE7-.LEHB7
	.uleb128 0
	.uleb128 0
.LLSDACSE3069:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3069:
	.section	.text._ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_,"axG",@progbits,_ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_,comdat
	.size	_ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_, .-_ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_
	.section	.text._ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS8_EET0_T_SD_SC_,"axG",@progbits,_ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS8_EET0_T_SD_SC_,comdat
	.p2align 4
	.weak	_ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS8_EET0_T_SD_SC_
	.type	_ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS8_EET0_T_SD_SC_, @function
_ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS8_EET0_T_SD_SC_:
.LFB3078:
	.cfi_startproc
	subq	%rdi, %rsi
	pushq	%r14
	.cfi_def_cfa_offset 16
	.cfi_offset 14, -16
	pushq	%r13
	.cfi_def_cfa_offset 24
	.cfi_offset 13, -24
	movq	%rdx, %r13
	pushq	%r12
	.cfi_def_cfa_offset 32
	.cfi_offset 12, -32
	pushq	%rbp
	.cfi_def_cfa_offset 40
	.cfi_offset 6, -40
	movq	%rsi, %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 48
	.cfi_offset 3, -48
	sarq	$5, %rbp
	testq	%rsi, %rsi
	jle	.L89
	movq	%rdi, %rbx
	movq	%rsi, %r14
	movq	%rdx, %r12
	.p2align 4
	.p2align 3
.L88:
	movq	%rbx, %rsi
	movq	%r12, %rdi
	addq	$32, %rbx
	addq	$32, %r12
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
	subq	$1, %rbp
	jne	.L88
	leaq	-32(%r14), %rax
	testq	%r14, %r14
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 40
	cmove	%rbp, %rax
	popq	%rbp
	.cfi_def_cfa_offset 32
	popq	%r12
	.cfi_def_cfa_offset 24
	leaq	32(%r13,%rax), %rax
	popq	%r13
	.cfi_def_cfa_offset 16
	popq	%r14
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L89:
	.cfi_restore_state
	popq	%rbx
	.cfi_def_cfa_offset 40
	movq	%rdx, %rax
	popq	%rbp
	.cfi_def_cfa_offset 32
	popq	%r12
	.cfi_def_cfa_offset 24
	popq	%r13
	.cfi_def_cfa_offset 16
	popq	%r14
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE3078:
	.size	_ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS8_EET0_T_SD_SC_, .-_ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS8_EET0_T_SD_SC_
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC3:
	.string	"cannot create std::vector larger than max_size()"
	.section	.text.unlikely,"ax",@progbits
	.align 2
.LCOLDB4:
	.text
.LHOTB4:
	.align 2
	.p2align 4
	.type	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_assign_auxIPKS5_EEvT_SB_St20forward_iterator_tag.isra.0, @function
_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_assign_auxIPKS5_EEvT_SB_St20forward_iterator_tag.isra.0:
.LFB3100:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3100
	pushq	%r14
	.cfi_def_cfa_offset 16
	.cfi_offset 14, -16
	pushq	%r13
	.cfi_def_cfa_offset 24
	.cfi_offset 13, -24
	pushq	%r12
	.cfi_def_cfa_offset 32
	.cfi_offset 12, -32
	movq	%rdx, %r12
	pushq	%rbp
	.cfi_def_cfa_offset 40
	.cfi_offset 6, -40
	movq	%r12, %r14
	movq	%rdi, %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 48
	.cfi_offset 3, -48
	movq	(%rdi), %rdx
	subq	%rsi, %r14
	movq	%rsi, %rbx
	movq	16(%rdi), %rax
	subq	%rdx, %rax
	cmpq	%r14, %rax
	jnb	.L93
	movabsq	$9223372036854775776, %rax
	cmpq	%r14, %rax
	jb	.L111
	movq	%r14, %rdi
.LEHB8:
	call	_Znwm
.LEHE8:
	movq	%r12, %rsi
	movq	%rbx, %rdi
	movq	%rax, %rdx
	movq	%rax, %r13
.LEHB9:
	call	_ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_
.LEHE9:
	movq	0(%rbp), %rdi
	movq	8(%rbp), %r12
	movq	%rdi, %rbx
	cmpq	%rdi, %r12
	je	.L101
	.p2align 4
	.p2align 3
.L95:
	movq	(%rbx), %rdi
	leaq	16(%rbx), %rax
	cmpq	%rax, %rdi
	je	.L100
	movq	16(%rbx), %rax
	leaq	1(%rax), %rsi
	call	_ZdlPvm
.L100:
	addq	$32, %rbx
	cmpq	%rbx, %r12
	jne	.L95
	movq	0(%rbp), %rdi
.L101:
	testq	%rdi, %rdi
	je	.L97
	movq	16(%rbp), %rsi
	subq	%rdi, %rsi
	call	_ZdlPvm
.L97:
	movq	%r13, 0(%rbp)
	addq	%r14, %r13
	movq	%r13, 8(%rbp)
	movq	%r13, 16(%rbp)
.L92:
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 40
	popq	%rbp
	.cfi_def_cfa_offset 32
	popq	%r12
	.cfi_def_cfa_offset 24
	popq	%r13
	.cfi_def_cfa_offset 16
	popq	%r14
	.cfi_def_cfa_offset 8
	ret
.L93:
	.cfi_restore_state
	movq	8(%rdi), %rax
	subq	%rdx, %rax
	cmpq	%r14, %rax
	jb	.L103
	movq	%r12, %rsi
	movq	%rbx, %rdi
.LEHB10:
	call	_ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS8_EET0_T_SD_SC_
	movq	8(%rbp), %r12
	movq	%rax, %r13
	cmpq	%r12, %rax
	je	.L92
	movq	%rax, %rbx
	.p2align 4
	.p2align 3
.L105:
	movq	(%rbx), %rdi
	leaq	16(%rbx), %rax
	cmpq	%rax, %rdi
	je	.L104
	movq	16(%rbx), %rax
	leaq	1(%rax), %rsi
	call	_ZdlPvm
.L104:
	addq	$32, %rbx
	cmpq	%rbx, %r12
	jne	.L105
	movq	%r13, 8(%rbp)
	jmp	.L92
.L103:
	leaq	(%rsi,%rax), %r13
	movq	%rbx, %rdi
	movq	%r13, %rsi
	call	_ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS8_EET0_T_SD_SC_
	movq	8(%rbp), %rdx
	movq	%r12, %rsi
	movq	%r13, %rdi
	call	_ZSt16__do_uninit_copyIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS5_ET0_T_SA_S9_
.LEHE10:
	movq	%rax, 8(%rbp)
	jmp	.L92
.L106:
	movq	%rax, %rdi
	jmp	.L98
	.section	.gcc_except_table,"a",@progbits
	.align 4
.LLSDA3100:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATT3100-.LLSDATTD3100
.LLSDATTD3100:
	.byte	0x1
	.uleb128 .LLSDACSE3100-.LLSDACSB3100
.LLSDACSB3100:
	.uleb128 .LEHB8-.LFB3100
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB9-.LFB3100
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L106-.LFB3100
	.uleb128 0x1
	.uleb128 .LEHB10-.LFB3100
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
.LLSDACSE3100:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3100:
	.text
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDAC3100
	.type	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_assign_auxIPKS5_EEvT_SB_St20forward_iterator_tag.isra.0.cold, @function
_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_assign_auxIPKS5_EEvT_SB_St20forward_iterator_tag.isra.0.cold:
.LFSB3100:
.L111:
	.cfi_def_cfa_offset 48
	.cfi_offset 3, -48
	.cfi_offset 6, -40
	.cfi_offset 12, -32
	.cfi_offset 13, -24
	.cfi_offset 14, -16
	movl	$.LC3, %edi
.LEHB11:
	call	_ZSt20__throw_length_errorPKc
.LEHE11:
.L98:
	call	__cxa_begin_catch
	movq	%r14, %rsi
	movq	%r13, %rdi
	call	_ZdlPvm
.LEHB12:
	call	__cxa_rethrow
.LEHE12:
.L107:
	movq	%rax, %rbx
	call	__cxa_end_catch
	movq	%rbx, %rdi
.LEHB13:
	call	_Unwind_Resume
.LEHE13:
	.cfi_endproc
.LFE3100:
	.section	.gcc_except_table
	.align 4
.LLSDAC3100:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATTC3100-.LLSDATTDC3100
.LLSDATTDC3100:
	.byte	0x1
	.uleb128 .LLSDACSEC3100-.LLSDACSBC3100
.LLSDACSBC3100:
	.uleb128 .LEHB11-.LCOLDB4
	.uleb128 .LEHE11-.LEHB11
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB12-.LCOLDB4
	.uleb128 .LEHE12-.LEHB12
	.uleb128 .L107-.LCOLDB4
	.uleb128 0
	.uleb128 .LEHB13-.LCOLDB4
	.uleb128 .LEHE13-.LEHB13
	.uleb128 0
	.uleb128 0
.LLSDACSEC3100:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATTC3100:
	.section	.text.unlikely
	.text
	.size	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_assign_auxIPKS5_EEvT_SB_St20forward_iterator_tag.isra.0, .-_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_assign_auxIPKS5_EEvT_SB_St20forward_iterator_tag.isra.0
	.section	.text.unlikely
	.size	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_assign_auxIPKS5_EEvT_SB_St20forward_iterator_tag.isra.0.cold, .-_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_assign_auxIPKS5_EEvT_SB_St20forward_iterator_tag.isra.0.cold
.LCOLDE4:
	.text
.LHOTE4:
	.section	.rodata.str1.8
	.align 8
.LC5:
	.string	"basic_string: construction from null is not valid"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC6:
	.string	"Unsorted vector:\n"
.LC7:
	.string	"Sorted vector :\n"
.LC8:
	.string	"\n"
	.section	.text.unlikely
.LCOLDB9:
	.section	.text.startup,"ax",@progbits
.LHOTB9:
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB2422:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA2422
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pxor	%xmm0, %xmm0
	movl	$160, %edi
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$232, %rsp
	.cfi_def_cfa_offset 288
	movq	$0, 48(%rsp)
	movaps	%xmm0, 32(%rsp)
.LEHB14:
	call	_Znwm
.LEHE14:
	movq	%rax, %r14
	movq	%rax, 32(%rsp)
	leaq	160(%rax), %rax
	movl	$C.13.0, %r12d
	movq	%rax, 48(%rsp)
	movq	%r14, %rbx
	jmp	.L120
	.p2align 4,,10
	.p2align 3
.L205:
	movzbl	0(%r13), %edx
	movb	%dl, 16(%rbx)
.L118:
	addq	$8, %r12
	movq	%rax, 8(%rbx)
	addq	$32, %rbx
	movb	$0, (%r15,%rax)
	cmpq	$C.13.0+40, %r12
	je	.L203
.L120:
	movq	(%r12), %r13
	leaq	16(%rbx), %r15
	movq	%r15, (%rbx)
	testq	%r13, %r13
	je	.L194
	movq	%r13, %rdi
	call	strlen
	movq	%rax, 64(%rsp)
	movq	%rax, %rbp
	cmpq	$15, %rax
	ja	.L204
	cmpq	$1, %rax
	je	.L205
	testq	%rax, %rax
	je	.L118
	jmp	.L116
	.p2align 4,,10
	.p2align 3
.L204:
	xorl	%edx, %edx
	leaq	64(%rsp), %rsi
	movq	%rbx, %rdi
.LEHB15:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
.LEHE15:
	movq	%rax, (%rbx)
	movq	%rax, %r15
	movq	64(%rsp), %rax
	movq	%rax, 16(%rbx)
.L116:
	movq	%r15, %rdi
	movq	%rbp, %rdx
	movq	%r13, %rsi
	call	memcpy
	movq	64(%rsp), %rax
	movq	(%rbx), %r15
	jmp	.L118
	.p2align 4,,10
	.p2align 3
.L203:
	leaq	32(%rsp), %rax
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
	movq	%rbx, 40(%rsp)
	movq	%rax, (%rsp)
.LEHB16:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdi
	leaq	32(%rsp), %rax
	movq	%rax, %rsi
	movq	%rax, (%rsp)
	call	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE
	movq	%rax, %rdi
	movl	$.LC7, %esi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	64(%rsp), %r12
	movq	(%rsp), %rsi
	movq	%r12, %rdi
	call	_Z11insert_sortINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEESt6vectorIT_SaIS7_EERS9_
.LEHE16:
	movq	%r12, %rsi
	movl	$_ZSt4cout, %edi
.LEHB17:
	call	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE
	movq	%rax, %rdi
	movl	$.LC8, %esi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.LEHE17:
	movq	%r12, %rdi
	xorl	%r15d, %r15d
	movq	%r12, %rbx
	call	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev
.L133:
	movl	$4, %eax
	movq	C.15.1(,%r15,8), %r14
	leaq	16(%rbx), %r13
	subq	%r15, %rax
	movq	%r13, (%rbx)
	movq	%rax, 8(%rsp)
	testq	%r14, %r14
	je	.L195
	movq	%r14, %rdi
	call	strlen
	movq	%rax, 24(%rsp)
	movq	%rax, %rbp
	cmpq	$15, %rax
	ja	.L206
	cmpq	$1, %rax
	jne	.L130
	movzbl	(%r14), %edx
	movb	%dl, 16(%rbx)
.L131:
	addq	$1, %r15
	movq	%rax, 8(%rbx)
	addq	$32, %rbx
	movb	$0, 0(%r13,%rax)
	cmpq	$5, %r15
	jne	.L133
	movq	(%rsp), %rdi
	leaq	224(%rsp), %rdx
	movq	%r12, %rsi
.LEHB18:
	call	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_assign_auxIPKS5_EEvT_SB_St20forward_iterator_tag.isra.0
.LEHE18:
	leaq	224(%rsp), %rbx
	.p2align 4
	.p2align 3
.L134:
	subq	$32, %rbx
	movq	(%rbx), %rdi
	leaq	16(%rbx), %rax
	cmpq	%rax, %rdi
	je	.L137
	movq	16(%rbx), %rax
	leaq	1(%rax), %rsi
	call	_ZdlPvm
.L137:
	cmpq	%r12, %rbx
	jne	.L134
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
.LEHB19:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	(%rsp), %rbx
	movq	%rax, %rdi
	movq	%rbx, %rsi
	call	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE
	movq	%rax, %rdi
	movl	$.LC7, %esi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, %rsi
	movq	%r12, %rdi
	call	_Z11insert_sortINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEESt6vectorIT_SaIS7_EERS9_
.LEHE19:
	movq	%r12, %rsi
	movl	$_ZSt4cout, %edi
.LEHB20:
	call	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE
	movq	%rax, %rdi
	movl	$.LC8, %esi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.LEHE20:
	movq	%r12, %rdi
	xorl	%r15d, %r15d
	movq	%r12, %rbx
	call	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev
.L144:
	movl	$3, %eax
	movq	C.17.2(,%r15,8), %r13
	leaq	16(%rbx), %r14
	subq	%r15, %rax
	movq	%r14, (%rbx)
	movq	%rax, 8(%rsp)
	testq	%r13, %r13
	je	.L196
	movq	%r13, %rdi
	call	strlen
	movq	%rax, 24(%rsp)
	movq	%rax, %rbp
	cmpq	$15, %rax
	ja	.L207
	cmpq	$1, %rax
	jne	.L141
	movzbl	0(%r13), %edx
	movb	%dl, 16(%rbx)
.L142:
	addq	$1, %r15
	movq	%rax, 8(%rbx)
	addq	$32, %rbx
	movb	$0, (%r14,%rax)
	cmpq	$4, %r15
	jne	.L144
	leaq	192(%rsp), %rbx
	movq	(%rsp), %rdi
	movq	%r12, %rsi
	movq	%rbx, %rdx
.LEHB21:
	call	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_assign_auxIPKS5_EEvT_SB_St20forward_iterator_tag.isra.0
.LEHE21:
.L145:
	subq	$32, %rbx
	movq	(%rbx), %rdi
	leaq	16(%rbx), %rax
	cmpq	%rax, %rdi
	je	.L148
	movq	16(%rbx), %rax
	leaq	1(%rax), %rsi
	call	_ZdlPvm
.L148:
	cmpq	%r12, %rbx
	jne	.L145
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
.LEHB22:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	(%rsp), %rbx
	movq	%rax, %rdi
	movq	%rbx, %rsi
	call	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE
	movq	%rax, %rdi
	movl	$.LC7, %esi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, %rsi
	movq	%r12, %rdi
	call	_Z11insert_sortINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEESt6vectorIT_SaIS7_EERS9_
.LEHE22:
	movq	%r12, %rsi
	movl	$_ZSt4cout, %edi
.LEHB23:
	call	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RKSt6vectorIT_SaIS8_EE
	movq	%rax, %rdi
	movl	$.LC8, %esi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.LEHE23:
	movq	%r12, %rdi
	call	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev
	movq	%rbx, %rdi
	call	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev
	addq	$232, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L130:
	.cfi_restore_state
	testq	%rax, %rax
	je	.L131
	jmp	.L129
	.p2align 4,,10
	.p2align 3
.L206:
	leaq	24(%rsp), %rsi
	xorl	%edx, %edx
	movq	%rbx, %rdi
.LEHB24:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
.LEHE24:
	movq	%rax, (%rbx)
	movq	%rax, %r13
	movq	24(%rsp), %rax
	movq	%rax, 16(%rbx)
.L129:
	movq	%r13, %rdi
	movq	%rbp, %rdx
	movq	%r14, %rsi
	call	memcpy
	movq	24(%rsp), %rax
	movq	(%rbx), %r13
	jmp	.L131
	.p2align 4,,10
	.p2align 3
.L141:
	testq	%rax, %rax
	je	.L142
	jmp	.L140
	.p2align 4,,10
	.p2align 3
.L207:
	leaq	24(%rsp), %rsi
	xorl	%edx, %edx
	movq	%rbx, %rdi
.LEHB25:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
.LEHE25:
	movq	%rax, (%rbx)
	movq	%rax, %r14
	movq	24(%rsp), %rax
	movq	%rax, 16(%rbx)
.L140:
	movq	%r14, %rdi
	movq	%rbp, %rdx
	movq	%r13, %rsi
	call	memcpy
	movq	24(%rsp), %rax
	movq	(%rbx), %r14
	jmp	.L142
.L171:
	movq	%rax, %rbx
	jmp	.L126
.L190:
	jmp	.L191
.L170:
	movq	%rax, %rbx
	jmp	.L160
.L188:
	jmp	.L189
.L169:
	movq	%rax, %rbp
	jmp	.L147
.L167:
	movq	%rax, %rbx
	jmp	.L160
.L166:
	movq	%rax, %rbx
	jmp	.L135
.L164:
	movq	%rax, %rbx
	jmp	.L160
.L192:
	jmp	.L193
.L163:
	movq	%rax, %rbx
	jmp	.L150
	.section	.gcc_except_table
	.align 4
.LLSDA2422:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATT2422-.LLSDATTD2422
.LLSDATTD2422:
	.byte	0x1
	.uleb128 .LLSDACSE2422-.LLSDACSB2422
.LLSDACSB2422:
	.uleb128 .LEHB14-.LFB2422
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L171-.LFB2422
	.uleb128 0
	.uleb128 .LEHB15-.LFB2422
	.uleb128 .LEHE15-.LEHB15
	.uleb128 .L192-.LFB2422
	.uleb128 0x1
	.uleb128 .LEHB16-.LFB2422
	.uleb128 .LEHE16-.LEHB16
	.uleb128 .L163-.LFB2422
	.uleb128 0
	.uleb128 .LEHB17-.LFB2422
	.uleb128 .LEHE17-.LEHB17
	.uleb128 .L164-.LFB2422
	.uleb128 0
	.uleb128 .LEHB18-.LFB2422
	.uleb128 .LEHE18-.LEHB18
	.uleb128 .L166-.LFB2422
	.uleb128 0
	.uleb128 .LEHB19-.LFB2422
	.uleb128 .LEHE19-.LEHB19
	.uleb128 .L163-.LFB2422
	.uleb128 0
	.uleb128 .LEHB20-.LFB2422
	.uleb128 .LEHE20-.LEHB20
	.uleb128 .L167-.LFB2422
	.uleb128 0
	.uleb128 .LEHB21-.LFB2422
	.uleb128 .LEHE21-.LEHB21
	.uleb128 .L169-.LFB2422
	.uleb128 0
	.uleb128 .LEHB22-.LFB2422
	.uleb128 .LEHE22-.LEHB22
	.uleb128 .L163-.LFB2422
	.uleb128 0
	.uleb128 .LEHB23-.LFB2422
	.uleb128 .LEHE23-.LEHB23
	.uleb128 .L170-.LFB2422
	.uleb128 0
	.uleb128 .LEHB24-.LFB2422
	.uleb128 .LEHE24-.LEHB24
	.uleb128 .L188-.LFB2422
	.uleb128 0
	.uleb128 .LEHB25-.LFB2422
	.uleb128 .LEHE25-.LEHB25
	.uleb128 .L190-.LFB2422
	.uleb128 0
.LLSDACSE2422:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT2422:
	.section	.text.startup
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDAC2422
	.type	main.cold, @function
main.cold:
.LFSB2422:
	nop
.L172:
	.cfi_def_cfa_offset 288
	.cfi_offset 3, -56
	.cfi_offset 6, -48
	.cfi_offset 12, -40
	.cfi_offset 13, -32
	.cfi_offset 14, -24
	.cfi_offset 15, -16
	movq	%rax, %rbx
	call	__cxa_end_catch
.L126:
	leaq	32(%rsp), %rdi
	call	_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev
	movq	%rbx, %rdi
.LEHB26:
	call	_Unwind_Resume
.L168:
.L191:
	movq	%rax, %rbx
.L157:
	movq	8(%rsp), %rax
	movl	$3, %ebp
	subq	%rax, %rbp
	salq	$5, %rbp
	addq	%r12, %rbp
.L159:
	cmpq	%r12, %rbp
	je	.L150
	subq	$32, %rbp
	movq	%rbp, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	jmp	.L159
.L165:
.L189:
	movq	%rax, %rbx
.L152:
	movq	8(%rsp), %rax
	movl	$4, %ebp
	subq	%rax, %rbp
	salq	$5, %rbp
	addq	%r12, %rbp
.L154:
	cmpq	%r12, %rbp
	je	.L150
	subq	$32, %rbp
	movq	%rbp, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	jmp	.L154
.L160:
	movq	%r12, %rdi
	call	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev
.L150:
	movq	(%rsp), %rdi
	call	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev
	movq	%rbx, %rdi
	call	_Unwind_Resume
.LEHE26:
.L147:
	subq	$32, %rbx
	movq	%rbx, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	cmpq	%r12, %rbx
	jne	.L147
	movq	$3, 8(%rsp)
	movq	%rbp, %rbx
	jmp	.L157
.L196:
	movl	$.LC5, %edi
.LEHB27:
	call	_ZSt19__throw_logic_errorPKc
.LEHE27:
.L195:
	movl	$.LC5, %edi
.LEHB28:
	call	_ZSt19__throw_logic_errorPKc
.LEHE28:
.L135:
	leaq	224(%rsp), %rbp
.L136:
	subq	$32, %rbp
	movq	%rbp, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	cmpq	%r12, %rbp
	jne	.L136
	movq	$4, 8(%rsp)
	jmp	.L152
.L194:
	movl	$.LC5, %edi
.LEHB29:
	call	_ZSt19__throw_logic_errorPKc
.LEHE29:
.L173:
.L193:
	movq	%rax, %rdi
	call	__cxa_begin_catch
.L123:
	cmpq	%rbx, %r14
	je	.L208
	movq	%r14, %rdi
	addq	$32, %r14
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	jmp	.L123
.L208:
.LEHB30:
	call	__cxa_rethrow
.LEHE30:
	.cfi_endproc
.LFE2422:
	.section	.gcc_except_table
	.align 4
.LLSDAC2422:
	.byte	0xff
	.byte	0x3
	.uleb128 .LLSDATTC2422-.LLSDATTDC2422
.LLSDATTDC2422:
	.byte	0x1
	.uleb128 .LLSDACSEC2422-.LLSDACSBC2422
.LLSDACSBC2422:
	.uleb128 .LEHB26-.LCOLDB9
	.uleb128 .LEHE26-.LEHB26
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB27-.LCOLDB9
	.uleb128 .LEHE27-.LEHB27
	.uleb128 .L168-.LCOLDB9
	.uleb128 0
	.uleb128 .LEHB28-.LCOLDB9
	.uleb128 .LEHE28-.LEHB28
	.uleb128 .L165-.LCOLDB9
	.uleb128 0
	.uleb128 .LEHB29-.LCOLDB9
	.uleb128 .LEHE29-.LEHB29
	.uleb128 .L173-.LCOLDB9
	.uleb128 0x1
	.uleb128 .LEHB30-.LCOLDB9
	.uleb128 .LEHE30-.LEHB30
	.uleb128 .L172-.LCOLDB9
	.uleb128 0
.LLSDACSEC2422:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATTC2422:
	.section	.text.unlikely
	.section	.text.startup
	.size	main, .-main
	.section	.text.unlikely
	.size	main.cold, .-main.cold
.LCOLDE9:
	.section	.text.startup
.LHOTE9:
	.section	.rodata.str1.1
.LC10:
	.string	"goat"
.LC11:
	.string	"tower"
.LC12:
	.string	"know"
.LC13:
	.string	"olo"
	.section	.rodata
	.align 32
	.type	C.17.2, @object
	.size	C.17.2, 32
C.17.2:
	.quad	.LC10
	.quad	.LC11
	.quad	.LC12
	.quad	.LC13
	.section	.rodata.str1.1
.LC14:
	.string	"ananas"
.LC15:
	.string	"banan"
.LC16:
	.string	"morela"
.LC17:
	.string	"brokul"
.LC18:
	.string	"dzem"
	.section	.rodata
	.align 32
	.type	C.15.1, @object
	.size	C.15.1, 40
C.15.1:
	.quad	.LC14
	.quad	.LC15
	.quad	.LC16
	.quad	.LC17
	.quad	.LC18
	.section	.rodata.str1.1
.LC19:
	.string	"abc"
.LC20:
	.string	"abcd"
.LC21:
	.string	"aaa"
.LC22:
	.string	"aa"
.LC23:
	.string	"abaca"
	.section	.rodata
	.align 32
	.type	C.13.0, @object
	.size	C.13.0, 40
C.13.0:
	.quad	.LC19
	.quad	.LC20
	.quad	.LC21
	.quad	.LC22
	.quad	.LC23
	.globl	__gxx_personality_v0
	.ident	"GCC: (GNU) 14.2.1 20240912 (Red Hat 14.2.1-3)"
	.section	.note.GNU-stack,"",@progbits
