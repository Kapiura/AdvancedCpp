	.file	"task2.cpp"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"\n"
#NO_APP
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB2040:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$120, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$1, %edx
	movl	$.LC0, %esi
	movq	%rax, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE2040:
	.size	main, .-main
	.ident	"GCC: (GNU) 14.2.1 20240912 (Red Hat 14.2.1-3)"
	.section	.note.GNU-stack,"",@progbits
