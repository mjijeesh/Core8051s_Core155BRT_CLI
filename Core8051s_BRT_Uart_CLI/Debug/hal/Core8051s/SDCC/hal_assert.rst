                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.3 #4543 (Dec 31 2006)
                              4 ; This file generated Wed May 04 10:48:17 2016
                              5 ;--------------------------------------------------------
                              6 	.module ___hal_Core8051s_SDCC_hal_assert
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _HAL_assert_fail_PARM_2
                             13 	.globl _HAL_assert_fail
                             14 ;--------------------------------------------------------
                             15 ; special function registers
                             16 ;--------------------------------------------------------
                             17 	.area RSEG    (DATA)
                             18 ;--------------------------------------------------------
                             19 ; special function bits
                             20 ;--------------------------------------------------------
                             21 	.area RSEG    (DATA)
                             22 ;--------------------------------------------------------
                             23 ; overlayable register banks
                             24 ;--------------------------------------------------------
                             25 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                      26 	.ds 8
                             27 ;--------------------------------------------------------
                             28 ; internal ram data
                             29 ;--------------------------------------------------------
                             30 	.area DSEG    (DATA)
                             31 ;--------------------------------------------------------
                             32 ; overlayable items in internal ram 
                             33 ;--------------------------------------------------------
                             34 	.area OSEG    (OVR,DATA)
                             35 ;--------------------------------------------------------
                             36 ; indirectly addressable internal ram data
                             37 ;--------------------------------------------------------
                             38 	.area ISEG    (DATA)
                             39 ;--------------------------------------------------------
                             40 ; absolute internal ram data
                             41 ;--------------------------------------------------------
                             42 	.area IABS    (ABS,DATA)
                             43 	.area IABS    (ABS,DATA)
                             44 ;--------------------------------------------------------
                             45 ; bit data
                             46 ;--------------------------------------------------------
                             47 	.area BSEG    (BIT)
                             48 ;--------------------------------------------------------
                             49 ; paged external ram data
                             50 ;--------------------------------------------------------
                             51 	.area PSEG    (PAG,XDATA)
                             52 ;--------------------------------------------------------
                             53 ; external ram data
                             54 ;--------------------------------------------------------
                             55 	.area XSEG    (XDATA)
                    0000     56 LHAL_assert_fail$line_no$1$1==.
   0580                      57 _HAL_assert_fail_PARM_2:
   0580                      58 	.ds 4
                    0004     59 LHAL_assert_fail$file_name$1$1==.
   0584                      60 _HAL_assert_fail_file_name_1_1:
   0584                      61 	.ds 3
                    0007     62 LHAL_assert_fail$assert_file$2$2==.
   0587                      63 _HAL_assert_fail_assert_file_2_2:
   0587                      64 	.ds 3
                    000A     65 LHAL_assert_fail$assert_line$2$2==.
   058A                      66 _HAL_assert_fail_assert_line_2_2:
   058A                      67 	.ds 4
                    000E     68 LHAL_assert_fail$dummy$2$2==.
   058E                      69 _HAL_assert_fail_dummy_2_2:
   058E                      70 	.ds 1
                             71 ;--------------------------------------------------------
                             72 ; external initialized ram data
                             73 ;--------------------------------------------------------
                             74 	.area XISEG   (XDATA)
                             75 	.area HOME    (CODE)
                             76 	.area GSINIT0 (CODE)
                             77 	.area GSINIT1 (CODE)
                             78 	.area GSINIT2 (CODE)
                             79 	.area GSINIT3 (CODE)
                             80 	.area GSINIT4 (CODE)
                             81 	.area GSINIT5 (CODE)
                             82 	.area GSINIT  (CODE)
                             83 	.area GSFINAL (CODE)
                             84 	.area CSEG    (CODE)
                             85 ;--------------------------------------------------------
                             86 ; global & static initialisations
                             87 ;--------------------------------------------------------
                             88 	.area HOME    (CODE)
                             89 	.area GSINIT  (CODE)
                             90 	.area GSFINAL (CODE)
                             91 	.area GSINIT  (CODE)
                             92 ;--------------------------------------------------------
                             93 ; Home
                             94 ;--------------------------------------------------------
                             95 	.area HOME    (CODE)
                             96 	.area HOME    (CODE)
                             97 ;--------------------------------------------------------
                             98 ; code
                             99 ;--------------------------------------------------------
                            100 	.area CSEG    (CODE)
                            101 ;------------------------------------------------------------
                            102 ;Allocation info for local variables in function 'HAL_assert_fail'
                            103 ;------------------------------------------------------------
                            104 ;line_no                   Allocated with name '_HAL_assert_fail_PARM_2'
                            105 ;file_name                 Allocated with name '_HAL_assert_fail_file_name_1_1'
                            106 ;assert_file               Allocated with name '_HAL_assert_fail_assert_file_2_2'
                            107 ;assert_line               Allocated with name '_HAL_assert_fail_assert_line_2_2'
                            108 ;dummy                     Allocated with name '_HAL_assert_fail_dummy_2_2'
                            109 ;------------------------------------------------------------
                    0000    110 	G$HAL_assert_fail$0$0 ==.
                    0000    111 	C$hal_assert.c$111$0$0 ==.
                            112 ;	../hal/Core8051s/SDCC/hal_assert.c:111: void HAL_assert_fail
                            113 ;	-----------------------------------------
                            114 ;	 function HAL_assert_fail
                            115 ;	-----------------------------------------
   1BCC                     116 _HAL_assert_fail:
                    0002    117 	ar2 = 0x02
                    0003    118 	ar3 = 0x03
                    0004    119 	ar4 = 0x04
                    0005    120 	ar5 = 0x05
                    0006    121 	ar6 = 0x06
                    0007    122 	ar7 = 0x07
                    0000    123 	ar0 = 0x00
                    0001    124 	ar1 = 0x01
                            125 ;	genReceive
   1BCC AA F0               126 	mov	r2,b
   1BCE AB 83               127 	mov	r3,dph
   1BD0 E5 82               128 	mov	a,dpl
   1BD2 90 05 84            129 	mov	dptr,#_HAL_assert_fail_file_name_1_1
   1BD5 F0                  130 	movx	@dptr,a
   1BD6 A3                  131 	inc	dptr
   1BD7 EB                  132 	mov	a,r3
   1BD8 F0                  133 	movx	@dptr,a
   1BD9 A3                  134 	inc	dptr
   1BDA EA                  135 	mov	a,r2
   1BDB F0                  136 	movx	@dptr,a
                    0010    137 	C$hal_assert.c$117$1$1 ==.
                            138 ;	../hal/Core8051s/SDCC/hal_assert.c:117: while(1)
   1BDC                     139 00102$:
                    0010    140 	C$hal_assert.c$119$2$1 ==.
                            141 ;	../hal/Core8051s/SDCC/hal_assert.c:119: volatile const uint8_t * assert_file = file_name;
                            142 ;	genAssign
   1BDC 90 05 84            143 	mov	dptr,#_HAL_assert_fail_file_name_1_1
   1BDF E0                  144 	movx	a,@dptr
   1BE0 FA                  145 	mov	r2,a
   1BE1 A3                  146 	inc	dptr
   1BE2 E0                  147 	movx	a,@dptr
   1BE3 FB                  148 	mov	r3,a
   1BE4 A3                  149 	inc	dptr
   1BE5 E0                  150 	movx	a,@dptr
   1BE6 FC                  151 	mov	r4,a
                            152 ;	genAssign
   1BE7 90 05 87            153 	mov	dptr,#_HAL_assert_fail_assert_file_2_2
   1BEA EA                  154 	mov	a,r2
   1BEB F0                  155 	movx	@dptr,a
   1BEC A3                  156 	inc	dptr
   1BED EB                  157 	mov	a,r3
   1BEE F0                  158 	movx	@dptr,a
   1BEF A3                  159 	inc	dptr
   1BF0 EC                  160 	mov	a,r4
   1BF1 F0                  161 	movx	@dptr,a
                    0026    162 	C$hal_assert.c$120$2$1 ==.
                            163 ;	../hal/Core8051s/SDCC/hal_assert.c:120: volatile uint32_t assert_line = line_no;
                            164 ;	genAssign
   1BF2 90 05 80            165 	mov	dptr,#_HAL_assert_fail_PARM_2
   1BF5 E0                  166 	movx	a,@dptr
   1BF6 FA                  167 	mov	r2,a
   1BF7 A3                  168 	inc	dptr
   1BF8 E0                  169 	movx	a,@dptr
   1BF9 FB                  170 	mov	r3,a
   1BFA A3                  171 	inc	dptr
   1BFB E0                  172 	movx	a,@dptr
   1BFC FC                  173 	mov	r4,a
   1BFD A3                  174 	inc	dptr
   1BFE E0                  175 	movx	a,@dptr
   1BFF FD                  176 	mov	r5,a
                            177 ;	genAssign
   1C00 90 05 8A            178 	mov	dptr,#_HAL_assert_fail_assert_line_2_2
   1C03 EA                  179 	mov	a,r2
   1C04 F0                  180 	movx	@dptr,a
   1C05 A3                  181 	inc	dptr
   1C06 EB                  182 	mov	a,r3
   1C07 F0                  183 	movx	@dptr,a
   1C08 A3                  184 	inc	dptr
   1C09 EC                  185 	mov	a,r4
   1C0A F0                  186 	movx	@dptr,a
   1C0B A3                  187 	inc	dptr
   1C0C ED                  188 	mov	a,r5
   1C0D F0                  189 	movx	@dptr,a
                    0042    190 	C$hal_assert.c$121$2$2 ==.
                            191 ;	../hal/Core8051s/SDCC/hal_assert.c:121: volatile uint8_t dummy;        dummy = *assert_file;
                            192 ;	genAssign
   1C0E 90 05 87            193 	mov	dptr,#_HAL_assert_fail_assert_file_2_2
   1C11 E0                  194 	movx	a,@dptr
   1C12 FA                  195 	mov	r2,a
   1C13 A3                  196 	inc	dptr
   1C14 E0                  197 	movx	a,@dptr
   1C15 FB                  198 	mov	r3,a
   1C16 A3                  199 	inc	dptr
   1C17 E0                  200 	movx	a,@dptr
   1C18 FC                  201 	mov	r4,a
                            202 ;	genPointerGet
                            203 ;	genGenPointerGet
   1C19 8A 82               204 	mov	dpl,r2
   1C1B 8B 83               205 	mov	dph,r3
   1C1D 8C F0               206 	mov	b,r4
   1C1F 12 71 F6            207 	lcall	__gptrget
   1C22 FA                  208 	mov	r2,a
                            209 ;	genAssign
   1C23 90 05 8E            210 	mov	dptr,#_HAL_assert_fail_dummy_2_2
   1C26 EA                  211 	mov	a,r2
   1C27 F0                  212 	movx	@dptr,a
   1C28 02 1B DC            213 	ljmp	00102$
   1C2B                     214 00104$:
                    005F    215 	C$hal_assert.c$123$1$1 ==.
                    005F    216 	XG$HAL_assert_fail$0$0 ==.
   1C2B 22                  217 	ret
                            218 	.area CSEG    (CODE)
                            219 	.area CONST   (CODE)
                            220 	.area XINIT   (CODE)
                            221 	.area CABS    (ABS,CODE)
