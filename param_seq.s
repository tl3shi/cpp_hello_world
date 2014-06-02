	.section	__TEXT,__text,regular,pure_instructions
	.globl	__Z1fi
	.align	4, 0x90
__Z1fi:                                 ## @_Z1fi
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rax
	leaq	L_.str(%rip), %rsi
	movl	%edi, -20(%rbp)
	movq	%rax, %rdi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	leaq	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rsi
	movq	%rax, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	*-16(%rbp)
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	addq	$32, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__textcoal_nt,coalesced,pure_instructions
	.globl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.weak_def_can_be_hidden	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.align	4, 0x90
__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc: ## @_ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
Leh_func_begin1:
	.cfi_lsda 16, Lexception1
## BB#0:
	pushq	%rbp
Ltmp39:
	.cfi_def_cfa_offset 16
Ltmp40:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp41:
	.cfi_def_cfa_register %rbp
	subq	$432, %rsp              ## imm = 0x1B0
	movq	%rdi, -216(%rbp)
	movq	%rsi, -224(%rbp)
	movq	-216(%rbp), %rsi
Ltmp5:
	leaq	-240(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp6:
	jmp	LBB1_1
LBB1_1:
	leaq	-240(%rbp), %rax
	movq	%rax, -208(%rbp)
	movq	-208(%rbp), %rax
	movb	(%rax), %cl
	movb	%cl, -281(%rbp)         ## 1-byte Spill
## BB#2:
	movb	-281(%rbp), %al         ## 1-byte Reload
	testb	$1, %al
	jne	LBB1_3
	jmp	LBB1_28
LBB1_3:
	movq	-224(%rbp), %rax
	movq	%rax, -200(%rbp)
Ltmp7:
	movq	%rax, %rdi
	callq	_strlen
Ltmp8:
	movq	%rax, -296(%rbp)        ## 8-byte Spill
	jmp	LBB1_4
LBB1_4:                                 ## %_ZNSt3__111char_traitsIcE6lengthEPKc.exit
	jmp	LBB1_5
LBB1_5:
	leaq	-272(%rbp), %rax
	movq	-296(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -264(%rbp)
	movq	-216(%rbp), %rdx
	movq	%rax, -184(%rbp)
	movq	%rdx, -192(%rbp)
	movq	-184(%rbp), %rax
	movq	-192(%rbp), %rdx
	movq	%rax, -152(%rbp)
	movq	%rdx, -160(%rbp)
	movq	-152(%rbp), %rax
	movq	-160(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-24(%rsi), %rsi
	addq	%rsi, %rdx
	movq	%rdx, -144(%rbp)
	movq	-144(%rbp), %rdx
	movq	%rdx, -136(%rbp)
	movq	-136(%rbp), %rdx
	movq	40(%rdx), %rdx
	movq	%rdx, (%rax)
	movq	-224(%rbp), %rsi
	movq	-216(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rdx), %rdx
	addq	%rdx, %rax
	movq	%rax, -96(%rbp)
	movq	-96(%rbp), %rax
	movl	8(%rax), %edi
	movq	%rsi, -304(%rbp)        ## 8-byte Spill
	movl	%edi, -308(%rbp)        ## 4-byte Spill
## BB#6:
	movl	-308(%rbp), %eax        ## 4-byte Reload
	andl	$176, %eax
	cmpl	$32, %eax
	jne	LBB1_8
## BB#7:
	movq	-224(%rbp), %rax
	addq	-264(%rbp), %rax
	movq	%rax, -320(%rbp)        ## 8-byte Spill
	jmp	LBB1_9
LBB1_8:
	movq	-224(%rbp), %rax
	movq	%rax, -320(%rbp)        ## 8-byte Spill
LBB1_9:
	movq	-320(%rbp), %rax        ## 8-byte Reload
	movq	-224(%rbp), %rcx
	addq	-264(%rbp), %rcx
	movq	-216(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	-24(%rsi), %rsi
	addq	%rsi, %rdx
	movq	-216(%rbp), %rsi
	movq	(%rsi), %rdi
	movq	-24(%rdi), %rdi
	addq	%rdi, %rsi
	movq	%rsi, -80(%rbp)
	movq	-80(%rbp), %rsi
	movl	144(%rsi), %r8d
	movl	$-1, -4(%rbp)
	movl	%r8d, -8(%rbp)
	movl	-4(%rbp), %r8d
	cmpl	-8(%rbp), %r8d
	movq	%rax, -328(%rbp)        ## 8-byte Spill
	movq	%rcx, -336(%rbp)        ## 8-byte Spill
	movq	%rdx, -344(%rbp)        ## 8-byte Spill
	movq	%rsi, -352(%rbp)        ## 8-byte Spill
	jne	LBB1_18
## BB#10:
	movq	-352(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -40(%rbp)
	movb	$32, -41(%rbp)
	movq	-40(%rbp), %rsi
Ltmp9:
	leaq	-56(%rbp), %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp10:
	jmp	LBB1_11
LBB1_11:                                ## %.noexc
	leaq	-56(%rbp), %rax
	movq	%rax, -32(%rbp)
Ltmp11:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%rax, %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp12:
	movq	%rax, -360(%rbp)        ## 8-byte Spill
	jmp	LBB1_12
LBB1_12:                                ## %_ZNSt3__19use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE.exit.i.i
	movb	-41(%rbp), %al
	movq	-360(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -16(%rbp)
	movb	%al, -17(%rbp)
	movq	-16(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	56(%rsi), %rsi
	movsbl	-17(%rbp), %edi
Ltmp13:
	movl	%edi, -364(%rbp)        ## 4-byte Spill
	movq	%rdx, %rdi
	movl	-364(%rbp), %r8d        ## 4-byte Reload
	movq	%rsi, -376(%rbp)        ## 8-byte Spill
	movl	%r8d, %esi
	movq	-376(%rbp), %rdx        ## 8-byte Reload
	callq	*%rdx
Ltmp14:
	movb	%al, -377(%rbp)         ## 1-byte Spill
	jmp	LBB1_16
LBB1_13:
Ltmp15:
	movl	%edx, %ecx
	movq	%rax, -64(%rbp)
	movl	%ecx, -68(%rbp)
Ltmp16:
	leaq	-56(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp17:
	jmp	LBB1_14
LBB1_14:
	movq	-64(%rbp), %rax
	movl	-68(%rbp), %ecx
	movq	%rax, -392(%rbp)        ## 8-byte Spill
	movl	%ecx, -396(%rbp)        ## 4-byte Spill
	jmp	LBB1_26
LBB1_15:
Ltmp18:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -400(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
LBB1_16:                                ## %_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc.exit.i
Ltmp19:
	leaq	-56(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp20:
	jmp	LBB1_17
LBB1_17:                                ## %.noexc1
	movb	-377(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %ecx
	movq	-352(%rbp), %rdx        ## 8-byte Reload
	movl	%ecx, 144(%rdx)
LBB1_18:                                ## %_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv.exit
	movq	-352(%rbp), %rax        ## 8-byte Reload
	movl	144(%rax), %ecx
	movb	%cl, %dl
	movb	%dl, -401(%rbp)         ## 1-byte Spill
## BB#19:
	movq	-272(%rbp), %rdi
Ltmp21:
	movb	-401(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %r9d
	movq	-304(%rbp), %rsi        ## 8-byte Reload
	movq	-328(%rbp), %rdx        ## 8-byte Reload
	movq	-336(%rbp), %rcx        ## 8-byte Reload
	movq	-344(%rbp), %r8         ## 8-byte Reload
	callq	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp22:
	movq	%rax, -416(%rbp)        ## 8-byte Spill
	jmp	LBB1_20
LBB1_20:
	leaq	-280(%rbp), %rax
	movq	-416(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -280(%rbp)
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	cmpq	$0, (%rax)
	jne	LBB1_27
## BB#21:
	movq	-216(%rbp), %rax
	movq	(%rax), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rax
	movq	%rax, -120(%rbp)
	movl	$5, -124(%rbp)
	movq	-120(%rbp), %rax
	movq	%rax, -104(%rbp)
	movl	$5, -108(%rbp)
	movq	-104(%rbp), %rax
	movl	32(%rax), %edx
	orl	$5, %edx
Ltmp23:
	movq	%rax, %rdi
	movl	%edx, %esi
	callq	__ZNSt3__18ios_base5clearEj
Ltmp24:
	jmp	LBB1_22
LBB1_22:                                ## %_ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj.exit
	jmp	LBB1_23
LBB1_23:
	jmp	LBB1_27
LBB1_24:
Ltmp30:
	movl	%edx, %ecx
	movq	%rax, -248(%rbp)
	movl	%ecx, -252(%rbp)
	jmp	LBB1_31
LBB1_25:
Ltmp25:
	movl	%edx, %ecx
	movq	%rax, -392(%rbp)        ## 8-byte Spill
	movl	%ecx, -396(%rbp)        ## 4-byte Spill
LBB1_26:                                ## %.body
	movl	-396(%rbp), %eax        ## 4-byte Reload
	movq	-392(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -248(%rbp)
	movl	%eax, -252(%rbp)
Ltmp26:
	leaq	-240(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp27:
	jmp	LBB1_30
LBB1_27:
	jmp	LBB1_28
LBB1_28:
Ltmp28:
	leaq	-240(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp29:
	jmp	LBB1_29
LBB1_29:
	jmp	LBB1_33
LBB1_30:
	jmp	LBB1_31
LBB1_31:
	movq	-248(%rbp), %rdi
	callq	___cxa_begin_catch
	movq	-216(%rbp), %rdi
	movq	(%rdi), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rdi
Ltmp31:
	movq	%rax, -424(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp32:
	jmp	LBB1_32
LBB1_32:
	callq	___cxa_end_catch
LBB1_33:
	movq	-216(%rbp), %rax
	addq	$432, %rsp              ## imm = 0x1B0
	popq	%rbp
	ret
LBB1_34:
Ltmp33:
	movl	%edx, %ecx
	movq	%rax, -248(%rbp)
	movl	%ecx, -252(%rbp)
Ltmp34:
	callq	___cxa_end_catch
Ltmp35:
	jmp	LBB1_35
LBB1_35:
	jmp	LBB1_36
LBB1_36:
	movq	-248(%rbp), %rdi
	callq	__Unwind_Resume
LBB1_37:
Ltmp36:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -428(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
	.cfi_endproc
Leh_func_end1:
	.section	__TEXT,__gcc_except_tab
	.align	2
GCC_except_table1:
Lexception1:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\253\201"              ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.ascii	"\234\001"              ## Call site table length
Lset0 = Ltmp5-Leh_func_begin1           ## >> Call Site 1 <<
	.long	Lset0
Lset1 = Ltmp6-Ltmp5                     ##   Call between Ltmp5 and Ltmp6
	.long	Lset1
Lset2 = Ltmp30-Leh_func_begin1          ##     jumps to Ltmp30
	.long	Lset2
	.byte	5                       ##   On action: 3
Lset3 = Ltmp7-Leh_func_begin1           ## >> Call Site 2 <<
	.long	Lset3
Lset4 = Ltmp10-Ltmp7                    ##   Call between Ltmp7 and Ltmp10
	.long	Lset4
Lset5 = Ltmp25-Leh_func_begin1          ##     jumps to Ltmp25
	.long	Lset5
	.byte	5                       ##   On action: 3
Lset6 = Ltmp11-Leh_func_begin1          ## >> Call Site 3 <<
	.long	Lset6
Lset7 = Ltmp14-Ltmp11                   ##   Call between Ltmp11 and Ltmp14
	.long	Lset7
Lset8 = Ltmp15-Leh_func_begin1          ##     jumps to Ltmp15
	.long	Lset8
	.byte	3                       ##   On action: 2
Lset9 = Ltmp16-Leh_func_begin1          ## >> Call Site 4 <<
	.long	Lset9
Lset10 = Ltmp17-Ltmp16                  ##   Call between Ltmp16 and Ltmp17
	.long	Lset10
Lset11 = Ltmp18-Leh_func_begin1         ##     jumps to Ltmp18
	.long	Lset11
	.byte	7                       ##   On action: 4
Lset12 = Ltmp19-Leh_func_begin1         ## >> Call Site 5 <<
	.long	Lset12
Lset13 = Ltmp24-Ltmp19                  ##   Call between Ltmp19 and Ltmp24
	.long	Lset13
Lset14 = Ltmp25-Leh_func_begin1         ##     jumps to Ltmp25
	.long	Lset14
	.byte	5                       ##   On action: 3
Lset15 = Ltmp26-Leh_func_begin1         ## >> Call Site 6 <<
	.long	Lset15
Lset16 = Ltmp27-Ltmp26                  ##   Call between Ltmp26 and Ltmp27
	.long	Lset16
Lset17 = Ltmp36-Leh_func_begin1         ##     jumps to Ltmp36
	.long	Lset17
	.byte	5                       ##   On action: 3
Lset18 = Ltmp28-Leh_func_begin1         ## >> Call Site 7 <<
	.long	Lset18
Lset19 = Ltmp29-Ltmp28                  ##   Call between Ltmp28 and Ltmp29
	.long	Lset19
Lset20 = Ltmp30-Leh_func_begin1         ##     jumps to Ltmp30
	.long	Lset20
	.byte	5                       ##   On action: 3
Lset21 = Ltmp29-Leh_func_begin1         ## >> Call Site 8 <<
	.long	Lset21
Lset22 = Ltmp31-Ltmp29                  ##   Call between Ltmp29 and Ltmp31
	.long	Lset22
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset23 = Ltmp31-Leh_func_begin1         ## >> Call Site 9 <<
	.long	Lset23
Lset24 = Ltmp32-Ltmp31                  ##   Call between Ltmp31 and Ltmp32
	.long	Lset24
Lset25 = Ltmp33-Leh_func_begin1         ##     jumps to Ltmp33
	.long	Lset25
	.byte	0                       ##   On action: cleanup
Lset26 = Ltmp32-Leh_func_begin1         ## >> Call Site 10 <<
	.long	Lset26
Lset27 = Ltmp34-Ltmp32                  ##   Call between Ltmp32 and Ltmp34
	.long	Lset27
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset28 = Ltmp34-Leh_func_begin1         ## >> Call Site 11 <<
	.long	Lset28
Lset29 = Ltmp35-Ltmp34                  ##   Call between Ltmp34 and Ltmp35
	.long	Lset29
Lset30 = Ltmp36-Leh_func_begin1         ##     jumps to Ltmp36
	.long	Lset30
	.byte	5                       ##   On action: 3
Lset31 = Ltmp35-Leh_func_begin1         ## >> Call Site 12 <<
	.long	Lset31
Lset32 = Leh_func_end1-Ltmp35           ##   Call between Ltmp35 and Leh_func_end1
	.long	Lset32
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	0                       ## >> Action Record 1 <<
                                        ##   Cleanup
	.byte	0                       ##   No further actions
	.byte	1                       ## >> Action Record 2 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 1
	.byte	1                       ## >> Action Record 3 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.byte	1                       ## >> Action Record 4 <<
                                        ##   Catch TypeInfo 1
	.byte	125                     ##   Continue to action 3
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.align	2

	.section	__TEXT,__textcoal_nt,coalesced,pure_instructions
	.private_extern	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.globl	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.weak_definition	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.align	4, 0x90
__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_: ## @_ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
Leh_func_begin2:
	.cfi_lsda 16, Lexception2
## BB#0:
	pushq	%rbp
Ltmp52:
	.cfi_def_cfa_offset 16
Ltmp53:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp54:
	.cfi_def_cfa_register %rbp
	subq	$144, %rsp
	movq	%rdi, -72(%rbp)
	movq	%rdi, %rax
	movq	(%rdi), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rdi
	movq	%rdi, -32(%rbp)
	movb	$10, -33(%rbp)
	movq	-32(%rbp), %rsi
	leaq	-48(%rbp), %rcx
	movq	%rcx, %rdi
	movq	%rax, -80(%rbp)         ## 8-byte Spill
	movq	%rcx, -88(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__18ios_base6getlocEv
	movq	-88(%rbp), %rax         ## 8-byte Reload
	movq	%rax, -24(%rbp)
Ltmp42:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%rax, %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp43:
	movq	%rax, -96(%rbp)         ## 8-byte Spill
	jmp	LBB2_1
LBB2_1:                                 ## %_ZNSt3__19use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE.exit.i
	movb	-33(%rbp), %al
	movq	-96(%rbp), %rcx         ## 8-byte Reload
	movq	%rcx, -8(%rbp)
	movb	%al, -9(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	56(%rsi), %rsi
	movsbl	-9(%rbp), %edi
Ltmp44:
	movl	%edi, -100(%rbp)        ## 4-byte Spill
	movq	%rdx, %rdi
	movl	-100(%rbp), %r8d        ## 4-byte Reload
	movq	%rsi, -112(%rbp)        ## 8-byte Spill
	movl	%r8d, %esi
	movq	-112(%rbp), %rdx        ## 8-byte Reload
	callq	*%rdx
Ltmp45:
	movb	%al, -113(%rbp)         ## 1-byte Spill
	jmp	LBB2_5
LBB2_2:
Ltmp46:
	movl	%edx, %ecx
	movq	%rax, -56(%rbp)
	movl	%ecx, -60(%rbp)
Ltmp47:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp48:
	jmp	LBB2_3
LBB2_3:
	movq	-56(%rbp), %rdi
	callq	__Unwind_Resume
LBB2_4:
Ltmp49:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -120(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
LBB2_5:                                 ## %_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc.exit
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movq	-80(%rbp), %rdi         ## 8-byte Reload
	movb	-113(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %esi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	movq	-72(%rbp), %rdi
	movq	%rax, -128(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	movq	-72(%rbp), %rdi
	movq	%rax, -136(%rbp)        ## 8-byte Spill
	movq	%rdi, %rax
	addq	$144, %rsp
	popq	%rbp
	ret
	.cfi_endproc
Leh_func_end2:
	.section	__TEXT,__gcc_except_tab
	.align	2
GCC_except_table2:
Lexception2:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\274"                  ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	52                      ## Call site table length
Lset33 = Leh_func_begin2-Leh_func_begin2 ## >> Call Site 1 <<
	.long	Lset33
Lset34 = Ltmp42-Leh_func_begin2         ##   Call between Leh_func_begin2 and Ltmp42
	.long	Lset34
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset35 = Ltmp42-Leh_func_begin2         ## >> Call Site 2 <<
	.long	Lset35
Lset36 = Ltmp45-Ltmp42                  ##   Call between Ltmp42 and Ltmp45
	.long	Lset36
Lset37 = Ltmp46-Leh_func_begin2         ##     jumps to Ltmp46
	.long	Lset37
	.byte	0                       ##   On action: cleanup
Lset38 = Ltmp47-Leh_func_begin2         ## >> Call Site 3 <<
	.long	Lset38
Lset39 = Ltmp48-Ltmp47                  ##   Call between Ltmp47 and Ltmp48
	.long	Lset39
Lset40 = Ltmp49-Leh_func_begin2         ##     jumps to Ltmp49
	.long	Lset40
	.byte	1                       ##   On action: 1
Lset41 = Ltmp48-Leh_func_begin2         ## >> Call Site 4 <<
	.long	Lset41
Lset42 = Leh_func_end2-Ltmp48           ##   Call between Ltmp48 and Leh_func_end2
	.long	Lset42
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.align	2

	.section	__TEXT,__text,regular,pure_instructions
	.globl	__Z1gRKi
	.align	4, 0x90
__Z1gRKi:                               ## @_Z1gRKi
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp57:
	.cfi_def_cfa_offset 16
Ltmp58:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp59:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rax
	leaq	L_.str1(%rip), %rsi
	movq	%rdi, -24(%rbp)
	movq	%rax, %rdi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	leaq	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rsi
	movq	%rax, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	*-16(%rbp)
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	addq	$32, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp62:
	.cfi_def_cfa_offset 16
Ltmp63:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp64:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	-8(%rbp), %edi
	callq	__Z1fi
	leaq	-8(%rbp), %rdi
	callq	__Z1gRKi
	movl	$0, %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__textcoal_nt,coalesced,pure_instructions
	.private_extern	___clang_call_terminate
	.globl	___clang_call_terminate
	.weak_def_can_be_hidden	___clang_call_terminate
	.align	4, 0x90
___clang_call_terminate:                ## @__clang_call_terminate
## BB#0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	callq	___cxa_begin_catch
	movq	%rax, -8(%rbp)          ## 8-byte Spill
	callq	__ZSt9terminatev

	.private_extern	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.globl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.weak_def_can_be_hidden	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.align	4, 0x90
__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_: ## @_ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
Leh_func_begin6:
	.cfi_lsda 16, Lexception6
## BB#0:
	pushq	%rbp
Ltmp73:
	.cfi_def_cfa_offset 16
Ltmp74:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp75:
	.cfi_def_cfa_register %rbp
	subq	$720, %rsp              ## imm = 0x2D0
	movb	%r9b, %al
	leaq	-552(%rbp), %r10
	leaq	-488(%rbp), %r11
	movq	%rdi, -504(%rbp)
	movq	%rsi, -512(%rbp)
	movq	%rdx, -520(%rbp)
	movq	%rcx, -528(%rbp)
	movq	%r8, -536(%rbp)
	movb	%al, -537(%rbp)
	movq	-504(%rbp), %rcx
	movq	%r11, -472(%rbp)
	movq	$-1, -480(%rbp)
	movq	-472(%rbp), %rdx
	movq	-480(%rbp), %rsi
	movq	%rdx, -456(%rbp)
	movq	%rsi, -464(%rbp)
	movq	-456(%rbp), %rdx
	movq	$0, (%rdx)
	movq	-488(%rbp), %rdx
	movq	%rdx, -552(%rbp)
	movq	%r10, -448(%rbp)
	cmpq	$0, %rcx
	jne	LBB6_2
## BB#1:
	movq	-504(%rbp), %rax
	movq	%rax, -496(%rbp)
	jmp	LBB6_29
LBB6_2:
	movq	-528(%rbp), %rax
	movq	-512(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -560(%rbp)
	movq	-536(%rbp), %rax
	movq	%rax, -344(%rbp)
	movq	-344(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -568(%rbp)
	movq	-568(%rbp), %rax
	cmpq	-560(%rbp), %rax
	jle	LBB6_4
## BB#3:
	movq	-560(%rbp), %rax
	movq	-568(%rbp), %rcx
	subq	%rax, %rcx
	movq	%rcx, -568(%rbp)
	jmp	LBB6_5
LBB6_4:
	movq	$0, -568(%rbp)
LBB6_5:
	movq	-520(%rbp), %rax
	movq	-512(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -576(%rbp)
	cmpq	$0, -576(%rbp)
	jle	LBB6_9
## BB#6:
	movq	-504(%rbp), %rax
	movq	-512(%rbp), %rcx
	movq	-576(%rbp), %rdx
	movq	%rax, -248(%rbp)
	movq	%rcx, -256(%rbp)
	movq	%rdx, -264(%rbp)
	movq	-248(%rbp), %rax
	movq	(%rax), %rcx
	movq	96(%rcx), %rcx
	movq	-256(%rbp), %rsi
	movq	-264(%rbp), %rdx
	movq	%rax, %rdi
	callq	*%rcx
	cmpq	-576(%rbp), %rax
	je	LBB6_8
## BB#7:
	leaq	-584(%rbp), %rax
	leaq	-240(%rbp), %rcx
	movq	%rcx, -224(%rbp)
	movq	$-1, -232(%rbp)
	movq	-224(%rbp), %rcx
	movq	-232(%rbp), %rdx
	movq	%rcx, -208(%rbp)
	movq	%rdx, -216(%rbp)
	movq	-208(%rbp), %rcx
	movq	$0, (%rcx)
	movq	-240(%rbp), %rcx
	movq	%rcx, -584(%rbp)
	movq	%rax, -8(%rbp)
	movq	$0, -504(%rbp)
	movq	-504(%rbp), %rax
	movq	%rax, -496(%rbp)
	jmp	LBB6_29
LBB6_8:
	jmp	LBB6_9
LBB6_9:
	cmpq	$0, -568(%rbp)
	jle	LBB6_24
## BB#10:
	leaq	-608(%rbp), %rax
	movq	-568(%rbp), %rcx
	movb	-537(%rbp), %dl
	movq	%rax, -72(%rbp)
	movq	%rcx, -80(%rbp)
	movb	%dl, -81(%rbp)
	movq	-72(%rbp), %rax
	movq	-80(%rbp), %rcx
	movb	-81(%rbp), %dl
	movq	%rax, -48(%rbp)
	movq	%rcx, -56(%rbp)
	movb	%dl, -57(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rcx
	movq	%rcx, -32(%rbp)
	movq	-32(%rbp), %rcx
	movq	%rcx, -24(%rbp)
	movq	-24(%rbp), %rcx
	movq	%rcx, -16(%rbp)
	movq	-56(%rbp), %rsi
	movq	%rax, %rdi
	movsbl	-57(%rbp), %edx
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
	leaq	-608(%rbp), %rax
	movq	-504(%rbp), %rcx
	movq	%rax, -200(%rbp)
	movq	-200(%rbp), %rax
	movq	%rax, -192(%rbp)
	movq	-192(%rbp), %rax
	movq	%rax, -184(%rbp)
	movq	-184(%rbp), %rsi
	movq	%rsi, -176(%rbp)
	movq	-176(%rbp), %rsi
	movq	%rsi, -168(%rbp)
	movq	-168(%rbp), %rsi
	movzbl	(%rsi), %edx
	andl	$1, %edx
	cmpl	$0, %edx
	movq	%rcx, -656(%rbp)        ## 8-byte Spill
	movq	%rax, -664(%rbp)        ## 8-byte Spill
	je	LBB6_12
## BB#11:
	movq	-664(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -120(%rbp)
	movq	-120(%rbp), %rcx
	movq	%rcx, -112(%rbp)
	movq	-112(%rbp), %rcx
	movq	%rcx, -104(%rbp)
	movq	-104(%rbp), %rcx
	movq	16(%rcx), %rcx
	movq	%rcx, -672(%rbp)        ## 8-byte Spill
	jmp	LBB6_13
LBB6_12:
	movq	-664(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -160(%rbp)
	movq	-160(%rbp), %rcx
	movq	%rcx, -152(%rbp)
	movq	-152(%rbp), %rcx
	movq	%rcx, -144(%rbp)
	movq	-144(%rbp), %rcx
	addq	$1, %rcx
	movq	%rcx, -136(%rbp)
	movq	-136(%rbp), %rcx
	movq	%rcx, -128(%rbp)
	movq	-128(%rbp), %rcx
	movq	%rcx, -672(%rbp)        ## 8-byte Spill
LBB6_13:                                ## %_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv.exit
	movq	-672(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -96(%rbp)
	movq	-568(%rbp), %rcx
	movq	-656(%rbp), %rdx        ## 8-byte Reload
	movq	%rdx, -272(%rbp)
	movq	%rax, -280(%rbp)
	movq	%rcx, -288(%rbp)
	movq	-272(%rbp), %rax
	movq	(%rax), %rsi
	movq	96(%rsi), %rsi
	movq	-280(%rbp), %rdi
Ltmp65:
	movq	%rdi, -680(%rbp)        ## 8-byte Spill
	movq	%rax, %rdi
	movq	-680(%rbp), %rax        ## 8-byte Reload
	movq	%rsi, -688(%rbp)        ## 8-byte Spill
	movq	%rax, %rsi
	movq	%rcx, %rdx
	movq	-688(%rbp), %rcx        ## 8-byte Reload
	callq	*%rcx
Ltmp66:
	movq	%rax, -696(%rbp)        ## 8-byte Spill
	jmp	LBB6_14
LBB6_14:                                ## %_ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl.exit
	jmp	LBB6_15
LBB6_15:
	movq	-696(%rbp), %rax        ## 8-byte Reload
	cmpq	-568(%rbp), %rax
	je	LBB6_20
## BB#16:
	leaq	-328(%rbp), %rax
	movq	%rax, -312(%rbp)
	movq	$-1, -320(%rbp)
	movq	-312(%rbp), %rax
	movq	-320(%rbp), %rcx
	movq	%rax, -296(%rbp)
	movq	%rcx, -304(%rbp)
	movq	-296(%rbp), %rax
	movq	$0, (%rax)
	movq	-328(%rbp), %rax
	movq	%rax, -704(%rbp)        ## 8-byte Spill
## BB#17:
	leaq	-632(%rbp), %rax
	movq	-704(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -632(%rbp)
	movq	%rax, -336(%rbp)
## BB#18:
	movq	$0, -504(%rbp)
	movq	-504(%rbp), %rax
	movq	%rax, -496(%rbp)
	movl	$1, -636(%rbp)
	jmp	LBB6_21
LBB6_19:
Ltmp67:
	movl	%edx, %ecx
	movq	%rax, -616(%rbp)
	movl	%ecx, -620(%rbp)
Ltmp68:
	leaq	-608(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
Ltmp69:
	jmp	LBB6_23
LBB6_20:
	movl	$0, -636(%rbp)
LBB6_21:
	leaq	-608(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	movl	-636(%rbp), %eax
	movl	%eax, %ecx
	subl	$1, %ecx
	movl	%eax, -708(%rbp)        ## 4-byte Spill
	movl	%ecx, -712(%rbp)        ## 4-byte Spill
	je	LBB6_29
	jmp	LBB6_33
LBB6_33:
	movl	-708(%rbp), %eax        ## 4-byte Reload
	testl	%eax, %eax
	jne	LBB6_32
	jmp	LBB6_22
LBB6_22:
	jmp	LBB6_24
LBB6_23:
	jmp	LBB6_30
LBB6_24:
	movq	-528(%rbp), %rax
	movq	-520(%rbp), %rcx
	subq	%rcx, %rax
	movq	%rax, -576(%rbp)
	cmpq	$0, -576(%rbp)
	jle	LBB6_28
## BB#25:
	movq	-504(%rbp), %rax
	movq	-520(%rbp), %rcx
	movq	-576(%rbp), %rdx
	movq	%rax, -352(%rbp)
	movq	%rcx, -360(%rbp)
	movq	%rdx, -368(%rbp)
	movq	-352(%rbp), %rax
	movq	(%rax), %rcx
	movq	96(%rcx), %rcx
	movq	-360(%rbp), %rsi
	movq	-368(%rbp), %rdx
	movq	%rax, %rdi
	callq	*%rcx
	cmpq	-576(%rbp), %rax
	je	LBB6_27
## BB#26:
	leaq	-648(%rbp), %rax
	leaq	-408(%rbp), %rcx
	movq	%rcx, -392(%rbp)
	movq	$-1, -400(%rbp)
	movq	-392(%rbp), %rcx
	movq	-400(%rbp), %rdx
	movq	%rcx, -376(%rbp)
	movq	%rdx, -384(%rbp)
	movq	-376(%rbp), %rcx
	movq	$0, (%rcx)
	movq	-408(%rbp), %rcx
	movq	%rcx, -648(%rbp)
	movq	%rax, -416(%rbp)
	movq	$0, -504(%rbp)
	movq	-504(%rbp), %rax
	movq	%rax, -496(%rbp)
	jmp	LBB6_29
LBB6_27:
	jmp	LBB6_28
LBB6_28:
	movq	-536(%rbp), %rax
	movq	%rax, -424(%rbp)
	movq	$0, -432(%rbp)
	movq	-424(%rbp), %rax
	movq	24(%rax), %rcx
	movq	%rcx, -440(%rbp)
	movq	-432(%rbp), %rcx
	movq	%rcx, 24(%rax)
	movq	-504(%rbp), %rax
	movq	%rax, -496(%rbp)
LBB6_29:
	movq	-496(%rbp), %rax
	addq	$720, %rsp              ## imm = 0x2D0
	popq	%rbp
	ret
LBB6_30:
	movq	-616(%rbp), %rdi
	callq	__Unwind_Resume
LBB6_31:
Ltmp70:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -716(%rbp)        ## 4-byte Spill
	callq	___clang_call_terminate
LBB6_32:
	.cfi_endproc
Leh_func_end6:
	.section	__TEXT,__gcc_except_tab
	.align	2
GCC_except_table6:
Lexception6:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\274"                  ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	52                      ## Call site table length
Lset43 = Leh_func_begin6-Leh_func_begin6 ## >> Call Site 1 <<
	.long	Lset43
Lset44 = Ltmp65-Leh_func_begin6         ##   Call between Leh_func_begin6 and Ltmp65
	.long	Lset44
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset45 = Ltmp65-Leh_func_begin6         ## >> Call Site 2 <<
	.long	Lset45
Lset46 = Ltmp66-Ltmp65                  ##   Call between Ltmp65 and Ltmp66
	.long	Lset46
Lset47 = Ltmp67-Leh_func_begin6         ##     jumps to Ltmp67
	.long	Lset47
	.byte	0                       ##   On action: cleanup
Lset48 = Ltmp68-Leh_func_begin6         ## >> Call Site 3 <<
	.long	Lset48
Lset49 = Ltmp69-Ltmp68                  ##   Call between Ltmp68 and Ltmp69
	.long	Lset49
Lset50 = Ltmp70-Leh_func_begin6         ##     jumps to Ltmp70
	.long	Lset50
	.byte	1                       ##   On action: 1
Lset51 = Ltmp69-Leh_func_begin6         ## >> Call Site 4 <<
	.long	Lset51
Lset52 = Leh_func_end6-Ltmp69           ##   Call between Ltmp69 and Leh_func_end6
	.long	Lset52
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.align	2

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"f(int i)"

L_.str1:                                ## @.str1
	.asciz	"g(const int &i)"

	.section	__TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support

.subsections_via_symbols
