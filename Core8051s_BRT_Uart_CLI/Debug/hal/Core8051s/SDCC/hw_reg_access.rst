                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.3 #4543 (Dec 31 2006)
                              4 ; This file generated Wed May 04 10:48:18 2016
                              5 ;--------------------------------------------------------
                              6 	.module ___hal_Core8051s_SDCC_hw_reg_access
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _HW_get_8bit_reg_field_PARM_3
                             13 	.globl _HW_get_8bit_reg_field_PARM_2
                             14 	.globl _HW_set_8bit_reg_field_PARM_4
                             15 	.globl _HW_set_8bit_reg_field_PARM_3
                             16 	.globl _HW_set_8bit_reg_field_PARM_2
                             17 	.globl _HW_get_16bit_reg_field_PARM_3
                             18 	.globl _HW_get_16bit_reg_field_PARM_2
                             19 	.globl _HW_set_16bit_reg_field_PARM_4
                             20 	.globl _HW_set_16bit_reg_field_PARM_3
                             21 	.globl _HW_set_16bit_reg_field_PARM_2
                             22 	.globl _HW_get_32bit_reg_field_PARM_3
                             23 	.globl _HW_get_32bit_reg_field_PARM_2
                             24 	.globl _HW_set_32bit_reg_field_PARM_4
                             25 	.globl _HW_set_32bit_reg_field_PARM_3
                             26 	.globl _HW_set_32bit_reg_field_PARM_2
                             27 	.globl _HW_set_32bit_reg_field
                             28 	.globl _HW_get_32bit_reg_field
                             29 	.globl _HW_set_16bit_reg_field
                             30 	.globl _HW_get_16bit_reg_field
                             31 	.globl _HW_set_8bit_reg_field
                             32 	.globl _HW_get_8bit_reg_field
                             33 ;--------------------------------------------------------
                             34 ; special function registers
                             35 ;--------------------------------------------------------
                             36 	.area RSEG    (DATA)
                             37 ;--------------------------------------------------------
                             38 ; special function bits
                             39 ;--------------------------------------------------------
                             40 	.area RSEG    (DATA)
                             41 ;--------------------------------------------------------
                             42 ; overlayable register banks
                             43 ;--------------------------------------------------------
                             44 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                      45 	.ds 8
                             46 ;--------------------------------------------------------
                             47 ; internal ram data
                             48 ;--------------------------------------------------------
                             49 	.area DSEG    (DATA)
                    0000     50 LHW_set_32bit_reg_field$sloc0$1$0==.
   002D                      51 _HW_set_32bit_reg_field_sloc0_1_0:
   002D                      52 	.ds 2
                    0002     53 LHW_set_32bit_reg_field$sloc1$1$0==.
   002F                      54 _HW_set_32bit_reg_field_sloc1_1_0:
   002F                      55 	.ds 4
                    0006     56 LHW_set_32bit_reg_field$sloc2$1$0==.
   0033                      57 _HW_set_32bit_reg_field_sloc2_1_0:
   0033                      58 	.ds 1
                    0007     59 LHW_set_16bit_reg_field$sloc0$1$0==.
   0034                      60 _HW_set_16bit_reg_field_sloc0_1_0:
   0034                      61 	.ds 1
                             62 ;--------------------------------------------------------
                             63 ; overlayable items in internal ram 
                             64 ;--------------------------------------------------------
                             65 	.area OSEG    (OVR,DATA)
                             66 ;--------------------------------------------------------
                             67 ; indirectly addressable internal ram data
                             68 ;--------------------------------------------------------
                             69 	.area ISEG    (DATA)
                             70 ;--------------------------------------------------------
                             71 ; absolute internal ram data
                             72 ;--------------------------------------------------------
                             73 	.area IABS    (ABS,DATA)
                             74 	.area IABS    (ABS,DATA)
                             75 ;--------------------------------------------------------
                             76 ; bit data
                             77 ;--------------------------------------------------------
                             78 	.area BSEG    (BIT)
                             79 ;--------------------------------------------------------
                             80 ; paged external ram data
                             81 ;--------------------------------------------------------
                             82 	.area PSEG    (PAG,XDATA)
                             83 ;--------------------------------------------------------
                             84 ; external ram data
                             85 ;--------------------------------------------------------
                             86 	.area XSEG    (XDATA)
                    0000     87 LHW_set_32bit_reg_field$shift$1$1==.
   05A2                      88 _HW_set_32bit_reg_field_PARM_2:
   05A2                      89 	.ds 1
                    0001     90 LHW_set_32bit_reg_field$mask$1$1==.
   05A3                      91 _HW_set_32bit_reg_field_PARM_3:
   05A3                      92 	.ds 4
                    0005     93 LHW_set_32bit_reg_field$value$1$1==.
   05A7                      94 _HW_set_32bit_reg_field_PARM_4:
   05A7                      95 	.ds 4
                    0009     96 LHW_set_32bit_reg_field$reg_addr$1$1==.
   05AB                      97 _HW_set_32bit_reg_field_reg_addr_1_1:
   05AB                      98 	.ds 2
                    000B     99 LHW_set_32bit_reg_field$temp32$1$1==.
   05AD                     100 _HW_set_32bit_reg_field_temp32_1_1:
   05AD                     101 	.ds 4
                    000F    102 LHW_get_32bit_reg_field$shift$1$1==.
   05B1                     103 _HW_get_32bit_reg_field_PARM_2:
   05B1                     104 	.ds 1
                    0010    105 LHW_get_32bit_reg_field$mask$1$1==.
   05B2                     106 _HW_get_32bit_reg_field_PARM_3:
   05B2                     107 	.ds 4
                    0014    108 LHW_get_32bit_reg_field$reg_addr$1$1==.
   05B6                     109 _HW_get_32bit_reg_field_reg_addr_1_1:
   05B6                     110 	.ds 2
                    0016    111 LHW_get_32bit_reg_field$temp32$1$1==.
   05B8                     112 _HW_get_32bit_reg_field_temp32_1_1:
   05B8                     113 	.ds 4
                    001A    114 LHW_set_16bit_reg_field$shift$1$1==.
   05BC                     115 _HW_set_16bit_reg_field_PARM_2:
   05BC                     116 	.ds 1
                    001B    117 LHW_set_16bit_reg_field$mask$1$1==.
   05BD                     118 _HW_set_16bit_reg_field_PARM_3:
   05BD                     119 	.ds 2
                    001D    120 LHW_set_16bit_reg_field$in_value16$1$1==.
   05BF                     121 _HW_set_16bit_reg_field_PARM_4:
   05BF                     122 	.ds 2
                    001F    123 LHW_set_16bit_reg_field$reg_addr$1$1==.
   05C1                     124 _HW_set_16bit_reg_field_reg_addr_1_1:
   05C1                     125 	.ds 2
                    0021    126 LHW_set_16bit_reg_field$temp16$1$1==.
   05C3                     127 _HW_set_16bit_reg_field_temp16_1_1:
   05C3                     128 	.ds 2
                    0023    129 LHW_get_16bit_reg_field$shift$1$1==.
   05C5                     130 _HW_get_16bit_reg_field_PARM_2:
   05C5                     131 	.ds 1
                    0024    132 LHW_get_16bit_reg_field$mask$1$1==.
   05C6                     133 _HW_get_16bit_reg_field_PARM_3:
   05C6                     134 	.ds 2
                    0026    135 LHW_get_16bit_reg_field$reg_addr$1$1==.
   05C8                     136 _HW_get_16bit_reg_field_reg_addr_1_1:
   05C8                     137 	.ds 2
                    0028    138 LHW_get_16bit_reg_field$temp16$1$1==.
   05CA                     139 _HW_get_16bit_reg_field_temp16_1_1:
   05CA                     140 	.ds 2
                    002A    141 LHW_set_8bit_reg_field$shift$1$1==.
   05CC                     142 _HW_set_8bit_reg_field_PARM_2:
   05CC                     143 	.ds 1
                    002B    144 LHW_set_8bit_reg_field$mask$1$1==.
   05CD                     145 _HW_set_8bit_reg_field_PARM_3:
   05CD                     146 	.ds 1
                    002C    147 LHW_set_8bit_reg_field$value$1$1==.
   05CE                     148 _HW_set_8bit_reg_field_PARM_4:
   05CE                     149 	.ds 1
                    002D    150 LHW_set_8bit_reg_field$reg_addr$1$1==.
   05CF                     151 _HW_set_8bit_reg_field_reg_addr_1_1:
   05CF                     152 	.ds 2
                    002F    153 LHW_set_8bit_reg_field$temp8$1$1==.
   05D1                     154 _HW_set_8bit_reg_field_temp8_1_1:
   05D1                     155 	.ds 1
                    0030    156 LHW_get_8bit_reg_field$shift$1$1==.
   05D2                     157 _HW_get_8bit_reg_field_PARM_2:
   05D2                     158 	.ds 1
                    0031    159 LHW_get_8bit_reg_field$mask$1$1==.
   05D3                     160 _HW_get_8bit_reg_field_PARM_3:
   05D3                     161 	.ds 1
                    0032    162 LHW_get_8bit_reg_field$reg_addr$1$1==.
   05D4                     163 _HW_get_8bit_reg_field_reg_addr_1_1:
   05D4                     164 	.ds 2
                    0034    165 LHW_get_8bit_reg_field$temp8$1$1==.
   05D6                     166 _HW_get_8bit_reg_field_temp8_1_1:
   05D6                     167 	.ds 1
                            168 ;--------------------------------------------------------
                            169 ; external initialized ram data
                            170 ;--------------------------------------------------------
                            171 	.area XISEG   (XDATA)
                            172 	.area HOME    (CODE)
                            173 	.area GSINIT0 (CODE)
                            174 	.area GSINIT1 (CODE)
                            175 	.area GSINIT2 (CODE)
                            176 	.area GSINIT3 (CODE)
                            177 	.area GSINIT4 (CODE)
                            178 	.area GSINIT5 (CODE)
                            179 	.area GSINIT  (CODE)
                            180 	.area GSFINAL (CODE)
                            181 	.area CSEG    (CODE)
                            182 ;--------------------------------------------------------
                            183 ; global & static initialisations
                            184 ;--------------------------------------------------------
                            185 	.area HOME    (CODE)
                            186 	.area GSINIT  (CODE)
                            187 	.area GSFINAL (CODE)
                            188 	.area GSINIT  (CODE)
                            189 ;--------------------------------------------------------
                            190 ; Home
                            191 ;--------------------------------------------------------
                            192 	.area HOME    (CODE)
                            193 	.area HOME    (CODE)
                            194 ;--------------------------------------------------------
                            195 ; code
                            196 ;--------------------------------------------------------
                            197 	.area CSEG    (CODE)
                            198 ;------------------------------------------------------------
                            199 ;Allocation info for local variables in function 'HW_set_32bit_reg_field'
                            200 ;------------------------------------------------------------
                            201 ;sloc0                     Allocated with name '_HW_set_32bit_reg_field_sloc0_1_0'
                            202 ;sloc1                     Allocated with name '_HW_set_32bit_reg_field_sloc1_1_0'
                            203 ;sloc2                     Allocated with name '_HW_set_32bit_reg_field_sloc2_1_0'
                            204 ;shift                     Allocated with name '_HW_set_32bit_reg_field_PARM_2'
                            205 ;mask                      Allocated with name '_HW_set_32bit_reg_field_PARM_3'
                            206 ;value                     Allocated with name '_HW_set_32bit_reg_field_PARM_4'
                            207 ;reg_addr                  Allocated with name '_HW_set_32bit_reg_field_reg_addr_1_1'
                            208 ;temp32                    Allocated with name '_HW_set_32bit_reg_field_temp32_1_1'
                            209 ;------------------------------------------------------------
                    0000    210 	G$HW_set_32bit_reg_field$0$0 ==.
                    0000    211 	C$hw_reg_access.c$16$0$0 ==.
                            212 ;	../hal/Core8051s/SDCC/hw_reg_access.c:16: HW_set_32bit_reg_field
                            213 ;	-----------------------------------------
                            214 ;	 function HW_set_32bit_reg_field
                            215 ;	-----------------------------------------
   1C90                     216 _HW_set_32bit_reg_field:
                    0002    217 	ar2 = 0x02
                    0003    218 	ar3 = 0x03
                    0004    219 	ar4 = 0x04
                    0005    220 	ar5 = 0x05
                    0006    221 	ar6 = 0x06
                    0007    222 	ar7 = 0x07
                    0000    223 	ar0 = 0x00
                    0001    224 	ar1 = 0x01
                            225 ;	genReceive
   1C90 AA 83               226 	mov	r2,dph
   1C92 E5 82               227 	mov	a,dpl
   1C94 90 05 AB            228 	mov	dptr,#_HW_set_32bit_reg_field_reg_addr_1_1
   1C97 F0                  229 	movx	@dptr,a
   1C98 A3                  230 	inc	dptr
   1C99 EA                  231 	mov	a,r2
   1C9A F0                  232 	movx	@dptr,a
                    000B    233 	C$hw_reg_access.c$25$1$1 ==.
                            234 ;	../hal/Core8051s/SDCC/hw_reg_access.c:25: temp32 = HW_get_32bit_reg( reg_addr );
                            235 ;	genAssign
   1C9B 90 05 AB            236 	mov	dptr,#_HW_set_32bit_reg_field_reg_addr_1_1
   1C9E E0                  237 	movx	a,@dptr
   1C9F F5 2D               238 	mov	_HW_set_32bit_reg_field_sloc0_1_0,a
   1CA1 A3                  239 	inc	dptr
   1CA2 E0                  240 	movx	a,@dptr
   1CA3 F5 2E               241 	mov	(_HW_set_32bit_reg_field_sloc0_1_0 + 1),a
                            242 ;	genCall
   1CA5 85 2D 82            243 	mov	dpl,_HW_set_32bit_reg_field_sloc0_1_0
   1CA8 85 2E 83            244 	mov	dph,(_HW_set_32bit_reg_field_sloc0_1_0 + 1)
   1CAB 12 1C 2C            245 	lcall	_HW_get_32bit_reg
   1CAE AC 82               246 	mov	r4,dpl
   1CB0 AD 83               247 	mov	r5,dph
   1CB2 AE F0               248 	mov	r6,b
   1CB4 FF                  249 	mov	r7,a
                            250 ;	genAssign
   1CB5 90 05 AD            251 	mov	dptr,#_HW_set_32bit_reg_field_temp32_1_1
   1CB8 EC                  252 	mov	a,r4
   1CB9 F0                  253 	movx	@dptr,a
   1CBA A3                  254 	inc	dptr
   1CBB ED                  255 	mov	a,r5
   1CBC F0                  256 	movx	@dptr,a
   1CBD A3                  257 	inc	dptr
   1CBE EE                  258 	mov	a,r6
   1CBF F0                  259 	movx	@dptr,a
   1CC0 A3                  260 	inc	dptr
   1CC1 EF                  261 	mov	a,r7
   1CC2 F0                  262 	movx	@dptr,a
                    0033    263 	C$hw_reg_access.c$26$1$1 ==.
                            264 ;	../hal/Core8051s/SDCC/hw_reg_access.c:26: temp32 = ((temp32 & ~mask) | (((value) << shift) & mask));
                            265 ;	genAssign
   1CC3 90 05 A3            266 	mov	dptr,#_HW_set_32bit_reg_field_PARM_3
   1CC6 E0                  267 	movx	a,@dptr
   1CC7 FC                  268 	mov	r4,a
   1CC8 A3                  269 	inc	dptr
   1CC9 E0                  270 	movx	a,@dptr
   1CCA FD                  271 	mov	r5,a
   1CCB A3                  272 	inc	dptr
   1CCC E0                  273 	movx	a,@dptr
   1CCD FE                  274 	mov	r6,a
   1CCE A3                  275 	inc	dptr
   1CCF E0                  276 	movx	a,@dptr
   1CD0 FF                  277 	mov	r7,a
                            278 ;	genCpl
   1CD1 EC                  279 	mov	a,r4
   1CD2 F4                  280 	cpl	a
   1CD3 F5 2F               281 	mov	_HW_set_32bit_reg_field_sloc1_1_0,a
   1CD5 ED                  282 	mov	a,r5
   1CD6 F4                  283 	cpl	a
   1CD7 F5 30               284 	mov	(_HW_set_32bit_reg_field_sloc1_1_0 + 1),a
   1CD9 EE                  285 	mov	a,r6
   1CDA F4                  286 	cpl	a
   1CDB F5 31               287 	mov	(_HW_set_32bit_reg_field_sloc1_1_0 + 2),a
   1CDD EF                  288 	mov	a,r7
   1CDE F4                  289 	cpl	a
   1CDF F5 32               290 	mov	(_HW_set_32bit_reg_field_sloc1_1_0 + 3),a
                            291 ;	genAssign
   1CE1 90 05 AD            292 	mov	dptr,#_HW_set_32bit_reg_field_temp32_1_1
   1CE4 E0                  293 	movx	a,@dptr
   1CE5 FA                  294 	mov	r2,a
   1CE6 A3                  295 	inc	dptr
   1CE7 E0                  296 	movx	a,@dptr
   1CE8 FB                  297 	mov	r3,a
   1CE9 A3                  298 	inc	dptr
   1CEA E0                  299 	movx	a,@dptr
   1CEB F8                  300 	mov	r0,a
   1CEC A3                  301 	inc	dptr
   1CED E0                  302 	movx	a,@dptr
   1CEE F9                  303 	mov	r1,a
                            304 ;	genAnd
   1CEF EA                  305 	mov	a,r2
   1CF0 52 2F               306 	anl	_HW_set_32bit_reg_field_sloc1_1_0,a
   1CF2 EB                  307 	mov	a,r3
   1CF3 52 30               308 	anl	(_HW_set_32bit_reg_field_sloc1_1_0 + 1),a
   1CF5 E8                  309 	mov	a,r0
   1CF6 52 31               310 	anl	(_HW_set_32bit_reg_field_sloc1_1_0 + 2),a
   1CF8 E9                  311 	mov	a,r1
   1CF9 52 32               312 	anl	(_HW_set_32bit_reg_field_sloc1_1_0 + 3),a
                            313 ;	genAssign
   1CFB 90 05 A2            314 	mov	dptr,#_HW_set_32bit_reg_field_PARM_2
   1CFE E0                  315 	movx	a,@dptr
   1CFF F5 33               316 	mov	_HW_set_32bit_reg_field_sloc2_1_0,a
                            317 ;	genAssign
   1D01 90 05 A7            318 	mov	dptr,#_HW_set_32bit_reg_field_PARM_4
   1D04 E0                  319 	movx	a,@dptr
   1D05 FB                  320 	mov	r3,a
   1D06 A3                  321 	inc	dptr
   1D07 E0                  322 	movx	a,@dptr
   1D08 F8                  323 	mov	r0,a
   1D09 A3                  324 	inc	dptr
   1D0A E0                  325 	movx	a,@dptr
   1D0B F9                  326 	mov	r1,a
   1D0C A3                  327 	inc	dptr
   1D0D E0                  328 	movx	a,@dptr
   1D0E FA                  329 	mov	r2,a
                            330 ;	genLeftShift
   1D0F 85 33 F0            331 	mov	b,_HW_set_32bit_reg_field_sloc2_1_0
   1D12 05 F0               332 	inc	b
   1D14 80 0D               333 	sjmp	00104$
   1D16                     334 00103$:
   1D16 EB                  335 	mov	a,r3
   1D17 25 E0               336 	add	a,acc
   1D19 FB                  337 	mov	r3,a
   1D1A E8                  338 	mov	a,r0
   1D1B 33                  339 	rlc	a
   1D1C F8                  340 	mov	r0,a
   1D1D E9                  341 	mov	a,r1
   1D1E 33                  342 	rlc	a
   1D1F F9                  343 	mov	r1,a
   1D20 EA                  344 	mov	a,r2
   1D21 33                  345 	rlc	a
   1D22 FA                  346 	mov	r2,a
   1D23                     347 00104$:
   1D23 D5 F0 F0            348 	djnz	b,00103$
                            349 ;	genAnd
   1D26 EB                  350 	mov	a,r3
   1D27 52 04               351 	anl	ar4,a
   1D29 E8                  352 	mov	a,r0
   1D2A 52 05               353 	anl	ar5,a
   1D2C E9                  354 	mov	a,r1
   1D2D 52 06               355 	anl	ar6,a
   1D2F EA                  356 	mov	a,r2
   1D30 52 07               357 	anl	ar7,a
                            358 ;	genOr
   1D32 90 05 AD            359 	mov	dptr,#_HW_set_32bit_reg_field_temp32_1_1
   1D35 EC                  360 	mov	a,r4
   1D36 45 2F               361 	orl	a,_HW_set_32bit_reg_field_sloc1_1_0
   1D38 F0                  362 	movx	@dptr,a
   1D39 ED                  363 	mov	a,r5
   1D3A 45 30               364 	orl	a,(_HW_set_32bit_reg_field_sloc1_1_0 + 1)
   1D3C A3                  365 	inc	dptr
   1D3D F0                  366 	movx	@dptr,a
   1D3E EE                  367 	mov	a,r6
   1D3F 45 31               368 	orl	a,(_HW_set_32bit_reg_field_sloc1_1_0 + 2)
   1D41 A3                  369 	inc	dptr
   1D42 F0                  370 	movx	@dptr,a
   1D43 EF                  371 	mov	a,r7
   1D44 45 32               372 	orl	a,(_HW_set_32bit_reg_field_sloc1_1_0 + 3)
   1D46 A3                  373 	inc	dptr
   1D47 F0                  374 	movx	@dptr,a
                    00B8    375 	C$hw_reg_access.c$27$1$1 ==.
                            376 ;	../hal/Core8051s/SDCC/hw_reg_access.c:27: HW_set_32bit_reg(reg_addr, temp32);
                            377 ;	genAssign
   1D48 90 05 AD            378 	mov	dptr,#_HW_set_32bit_reg_field_temp32_1_1
   1D4B E0                  379 	movx	a,@dptr
   1D4C FA                  380 	mov	r2,a
   1D4D A3                  381 	inc	dptr
   1D4E E0                  382 	movx	a,@dptr
   1D4F FB                  383 	mov	r3,a
   1D50 A3                  384 	inc	dptr
   1D51 E0                  385 	movx	a,@dptr
   1D52 FC                  386 	mov	r4,a
   1D53 A3                  387 	inc	dptr
   1D54 E0                  388 	movx	a,@dptr
   1D55 FD                  389 	mov	r5,a
                            390 ;	genAssign
   1D56 90 05 9E            391 	mov	dptr,#_HW_set_32bit_reg_PARM_2
   1D59 EA                  392 	mov	a,r2
   1D5A F0                  393 	movx	@dptr,a
   1D5B A3                  394 	inc	dptr
   1D5C EB                  395 	mov	a,r3
   1D5D F0                  396 	movx	@dptr,a
   1D5E A3                  397 	inc	dptr
   1D5F EC                  398 	mov	a,r4
   1D60 F0                  399 	movx	@dptr,a
   1D61 A3                  400 	inc	dptr
   1D62 ED                  401 	mov	a,r5
   1D63 F0                  402 	movx	@dptr,a
                            403 ;	genCall
   1D64 85 2D 82            404 	mov	dpl,_HW_set_32bit_reg_field_sloc0_1_0
   1D67 85 2E 83            405 	mov	dph,(_HW_set_32bit_reg_field_sloc0_1_0 + 1)
   1D6A 12 1C 38            406 	lcall	_HW_set_32bit_reg
   1D6D                     407 00101$:
                    00DD    408 	C$hw_reg_access.c$28$1$1 ==.
                    00DD    409 	XG$HW_set_32bit_reg_field$0$0 ==.
   1D6D 22                  410 	ret
                            411 ;------------------------------------------------------------
                            412 ;Allocation info for local variables in function 'HW_get_32bit_reg_field'
                            413 ;------------------------------------------------------------
                            414 ;shift                     Allocated with name '_HW_get_32bit_reg_field_PARM_2'
                            415 ;mask                      Allocated with name '_HW_get_32bit_reg_field_PARM_3'
                            416 ;reg_addr                  Allocated with name '_HW_get_32bit_reg_field_reg_addr_1_1'
                            417 ;temp32                    Allocated with name '_HW_get_32bit_reg_field_temp32_1_1'
                            418 ;------------------------------------------------------------
                    00DE    419 	G$HW_get_32bit_reg_field$0$0 ==.
                    00DE    420 	C$hw_reg_access.c$34$1$1 ==.
                            421 ;	../hal/Core8051s/SDCC/hw_reg_access.c:34: HW_get_32bit_reg_field
                            422 ;	-----------------------------------------
                            423 ;	 function HW_get_32bit_reg_field
                            424 ;	-----------------------------------------
   1D6E                     425 _HW_get_32bit_reg_field:
                            426 ;	genReceive
   1D6E AA 83               427 	mov	r2,dph
   1D70 E5 82               428 	mov	a,dpl
   1D72 90 05 B6            429 	mov	dptr,#_HW_get_32bit_reg_field_reg_addr_1_1
   1D75 F0                  430 	movx	@dptr,a
   1D76 A3                  431 	inc	dptr
   1D77 EA                  432 	mov	a,r2
   1D78 F0                  433 	movx	@dptr,a
                    00E9    434 	C$hw_reg_access.c$42$1$1 ==.
                            435 ;	../hal/Core8051s/SDCC/hw_reg_access.c:42: temp32 = (HW_get_32bit_reg(reg_addr) & mask) >> shift;
                            436 ;	genAssign
   1D79 90 05 B6            437 	mov	dptr,#_HW_get_32bit_reg_field_reg_addr_1_1
   1D7C E0                  438 	movx	a,@dptr
   1D7D FA                  439 	mov	r2,a
   1D7E A3                  440 	inc	dptr
   1D7F E0                  441 	movx	a,@dptr
   1D80 FB                  442 	mov	r3,a
                            443 ;	genCall
   1D81 8A 82               444 	mov	dpl,r2
   1D83 8B 83               445 	mov	dph,r3
   1D85 12 1C 2C            446 	lcall	_HW_get_32bit_reg
   1D88 AA 82               447 	mov	r2,dpl
   1D8A AB 83               448 	mov	r3,dph
   1D8C AC F0               449 	mov	r4,b
   1D8E FD                  450 	mov	r5,a
                            451 ;	genAssign
   1D8F 90 05 B2            452 	mov	dptr,#_HW_get_32bit_reg_field_PARM_3
   1D92 E0                  453 	movx	a,@dptr
   1D93 FE                  454 	mov	r6,a
   1D94 A3                  455 	inc	dptr
   1D95 E0                  456 	movx	a,@dptr
   1D96 FF                  457 	mov	r7,a
   1D97 A3                  458 	inc	dptr
   1D98 E0                  459 	movx	a,@dptr
   1D99 F8                  460 	mov	r0,a
   1D9A A3                  461 	inc	dptr
   1D9B E0                  462 	movx	a,@dptr
   1D9C F9                  463 	mov	r1,a
                            464 ;	genAnd
   1D9D EE                  465 	mov	a,r6
   1D9E 52 02               466 	anl	ar2,a
   1DA0 EF                  467 	mov	a,r7
   1DA1 52 03               468 	anl	ar3,a
   1DA3 E8                  469 	mov	a,r0
   1DA4 52 04               470 	anl	ar4,a
   1DA6 E9                  471 	mov	a,r1
   1DA7 52 05               472 	anl	ar5,a
                            473 ;	genAssign
   1DA9 90 05 B1            474 	mov	dptr,#_HW_get_32bit_reg_field_PARM_2
   1DAC E0                  475 	movx	a,@dptr
   1DAD FE                  476 	mov	r6,a
                            477 ;	genRightShift
   1DAE 8E F0               478 	mov	b,r6
   1DB0 05 F0               479 	inc	b
   1DB2 80 0D               480 	sjmp	00104$
   1DB4                     481 00103$:
   1DB4 C3                  482 	clr	c
   1DB5 ED                  483 	mov	a,r5
   1DB6 13                  484 	rrc	a
   1DB7 FD                  485 	mov	r5,a
   1DB8 EC                  486 	mov	a,r4
   1DB9 13                  487 	rrc	a
   1DBA FC                  488 	mov	r4,a
   1DBB EB                  489 	mov	a,r3
   1DBC 13                  490 	rrc	a
   1DBD FB                  491 	mov	r3,a
   1DBE EA                  492 	mov	a,r2
   1DBF 13                  493 	rrc	a
   1DC0 FA                  494 	mov	r2,a
   1DC1                     495 00104$:
   1DC1 D5 F0 F0            496 	djnz	b,00103$
                            497 ;	genAssign
   1DC4 90 05 B8            498 	mov	dptr,#_HW_get_32bit_reg_field_temp32_1_1
   1DC7 EA                  499 	mov	a,r2
   1DC8 F0                  500 	movx	@dptr,a
   1DC9 A3                  501 	inc	dptr
   1DCA EB                  502 	mov	a,r3
   1DCB F0                  503 	movx	@dptr,a
   1DCC A3                  504 	inc	dptr
   1DCD EC                  505 	mov	a,r4
   1DCE F0                  506 	movx	@dptr,a
   1DCF A3                  507 	inc	dptr
   1DD0 ED                  508 	mov	a,r5
   1DD1 F0                  509 	movx	@dptr,a
                    0142    510 	C$hw_reg_access.c$43$1$1 ==.
                            511 ;	../hal/Core8051s/SDCC/hw_reg_access.c:43: return temp32;
                            512 ;	genAssign
   1DD2 90 05 B8            513 	mov	dptr,#_HW_get_32bit_reg_field_temp32_1_1
   1DD5 E0                  514 	movx	a,@dptr
   1DD6 FA                  515 	mov	r2,a
   1DD7 A3                  516 	inc	dptr
   1DD8 E0                  517 	movx	a,@dptr
   1DD9 FB                  518 	mov	r3,a
   1DDA A3                  519 	inc	dptr
   1DDB E0                  520 	movx	a,@dptr
   1DDC FC                  521 	mov	r4,a
   1DDD A3                  522 	inc	dptr
   1DDE E0                  523 	movx	a,@dptr
   1DDF FD                  524 	mov	r5,a
                            525 ;	genRet
   1DE0 8A 82               526 	mov	dpl,r2
   1DE2 8B 83               527 	mov	dph,r3
   1DE4 8C F0               528 	mov	b,r4
   1DE6 ED                  529 	mov	a,r5
   1DE7                     530 00101$:
                    0157    531 	C$hw_reg_access.c$44$1$1 ==.
                    0157    532 	XG$HW_get_32bit_reg_field$0$0 ==.
   1DE7 22                  533 	ret
                            534 ;------------------------------------------------------------
                            535 ;Allocation info for local variables in function 'HW_set_16bit_reg_field'
                            536 ;------------------------------------------------------------
                            537 ;sloc0                     Allocated with name '_HW_set_16bit_reg_field_sloc0_1_0'
                            538 ;shift                     Allocated with name '_HW_set_16bit_reg_field_PARM_2'
                            539 ;mask                      Allocated with name '_HW_set_16bit_reg_field_PARM_3'
                            540 ;in_value16                Allocated with name '_HW_set_16bit_reg_field_PARM_4'
                            541 ;reg_addr                  Allocated with name '_HW_set_16bit_reg_field_reg_addr_1_1'
                            542 ;temp16                    Allocated with name '_HW_set_16bit_reg_field_temp16_1_1'
                            543 ;------------------------------------------------------------
                    0158    544 	G$HW_set_16bit_reg_field$0$0 ==.
                    0158    545 	C$hw_reg_access.c$49$1$1 ==.
                            546 ;	../hal/Core8051s/SDCC/hw_reg_access.c:49: void HW_set_16bit_reg_field
                            547 ;	-----------------------------------------
                            548 ;	 function HW_set_16bit_reg_field
                            549 ;	-----------------------------------------
   1DE8                     550 _HW_set_16bit_reg_field:
                            551 ;	genReceive
   1DE8 AA 83               552 	mov	r2,dph
   1DEA E5 82               553 	mov	a,dpl
   1DEC 90 05 C1            554 	mov	dptr,#_HW_set_16bit_reg_field_reg_addr_1_1
   1DEF F0                  555 	movx	@dptr,a
   1DF0 A3                  556 	inc	dptr
   1DF1 EA                  557 	mov	a,r2
   1DF2 F0                  558 	movx	@dptr,a
                    0163    559 	C$hw_reg_access.c$58$1$1 ==.
                            560 ;	../hal/Core8051s/SDCC/hw_reg_access.c:58: temp16 = HW_get_16bit_reg( reg_addr );
                            561 ;	genAssign
   1DF3 90 05 C1            562 	mov	dptr,#_HW_set_16bit_reg_field_reg_addr_1_1
   1DF6 E0                  563 	movx	a,@dptr
   1DF7 FA                  564 	mov	r2,a
   1DF8 A3                  565 	inc	dptr
   1DF9 E0                  566 	movx	a,@dptr
   1DFA FB                  567 	mov	r3,a
                            568 ;	genCall
   1DFB 8A 82               569 	mov	dpl,r2
   1DFD 8B 83               570 	mov	dph,r3
   1DFF C0 02               571 	push	ar2
   1E01 C0 03               572 	push	ar3
   1E03 12 1C 68            573 	lcall	_HW_get_16bit_reg
   1E06 E5 82               574 	mov	a,dpl
   1E08 85 83 F0            575 	mov	b,dph
   1E0B D0 03               576 	pop	ar3
   1E0D D0 02               577 	pop	ar2
                            578 ;	genAssign
   1E0F 90 05 C3            579 	mov	dptr,#_HW_set_16bit_reg_field_temp16_1_1
   1E12 F0                  580 	movx	@dptr,a
   1E13 A3                  581 	inc	dptr
   1E14 E5 F0               582 	mov	a,b
   1E16 F0                  583 	movx	@dptr,a
                    0187    584 	C$hw_reg_access.c$59$1$1 ==.
                            585 ;	../hal/Core8051s/SDCC/hw_reg_access.c:59: temp16 = ((temp16  & ~mask) | (((in_value16) << shift) & mask));
                            586 ;	genAssign
   1E17 90 05 BD            587 	mov	dptr,#_HW_set_16bit_reg_field_PARM_3
   1E1A E0                  588 	movx	a,@dptr
   1E1B FC                  589 	mov	r4,a
   1E1C A3                  590 	inc	dptr
   1E1D E0                  591 	movx	a,@dptr
   1E1E FD                  592 	mov	r5,a
                            593 ;	genCpl
   1E1F EC                  594 	mov	a,r4
   1E20 F4                  595 	cpl	a
   1E21 FE                  596 	mov	r6,a
   1E22 ED                  597 	mov	a,r5
   1E23 F4                  598 	cpl	a
   1E24 FF                  599 	mov	r7,a
                            600 ;	genAssign
   1E25 90 05 C3            601 	mov	dptr,#_HW_set_16bit_reg_field_temp16_1_1
   1E28 E0                  602 	movx	a,@dptr
   1E29 F8                  603 	mov	r0,a
   1E2A A3                  604 	inc	dptr
   1E2B E0                  605 	movx	a,@dptr
   1E2C F9                  606 	mov	r1,a
                            607 ;	genAnd
   1E2D E8                  608 	mov	a,r0
   1E2E 52 06               609 	anl	ar6,a
   1E30 E9                  610 	mov	a,r1
   1E31 52 07               611 	anl	ar7,a
                            612 ;	genAssign
   1E33 90 05 BC            613 	mov	dptr,#_HW_set_16bit_reg_field_PARM_2
   1E36 E0                  614 	movx	a,@dptr
   1E37 F5 34               615 	mov	_HW_set_16bit_reg_field_sloc0_1_0,a
                            616 ;	genAssign
   1E39 90 05 BF            617 	mov	dptr,#_HW_set_16bit_reg_field_PARM_4
   1E3C E0                  618 	movx	a,@dptr
   1E3D F9                  619 	mov	r1,a
   1E3E A3                  620 	inc	dptr
   1E3F E0                  621 	movx	a,@dptr
   1E40 F8                  622 	mov	r0,a
                            623 ;	genLeftShift
   1E41 85 34 F0            624 	mov	b,_HW_set_16bit_reg_field_sloc0_1_0
   1E44 05 F0               625 	inc	b
   1E46 80 07               626 	sjmp	00104$
   1E48                     627 00103$:
   1E48 E9                  628 	mov	a,r1
   1E49 25 E0               629 	add	a,acc
   1E4B F9                  630 	mov	r1,a
   1E4C E8                  631 	mov	a,r0
   1E4D 33                  632 	rlc	a
   1E4E F8                  633 	mov	r0,a
   1E4F                     634 00104$:
   1E4F D5 F0 F6            635 	djnz	b,00103$
                            636 ;	genAnd
   1E52 E9                  637 	mov	a,r1
   1E53 52 04               638 	anl	ar4,a
   1E55 E8                  639 	mov	a,r0
   1E56 52 05               640 	anl	ar5,a
                            641 ;	genOr
   1E58 90 05 C3            642 	mov	dptr,#_HW_set_16bit_reg_field_temp16_1_1
   1E5B EC                  643 	mov	a,r4
   1E5C 4E                  644 	orl	a,r6
   1E5D F0                  645 	movx	@dptr,a
   1E5E ED                  646 	mov	a,r5
   1E5F 4F                  647 	orl	a,r7
   1E60 A3                  648 	inc	dptr
   1E61 F0                  649 	movx	@dptr,a
                    01D2    650 	C$hw_reg_access.c$60$1$1 ==.
                            651 ;	../hal/Core8051s/SDCC/hw_reg_access.c:60: HW_set_16bit_reg(reg_addr, temp16);
                            652 ;	genAssign
   1E62 90 05 C3            653 	mov	dptr,#_HW_set_16bit_reg_field_temp16_1_1
   1E65 E0                  654 	movx	a,@dptr
   1E66 FC                  655 	mov	r4,a
   1E67 A3                  656 	inc	dptr
   1E68 E0                  657 	movx	a,@dptr
   1E69 FD                  658 	mov	r5,a
                            659 ;	genAssign
   1E6A 90 05 9B            660 	mov	dptr,#_HW_set_16bit_reg_PARM_2
   1E6D EC                  661 	mov	a,r4
   1E6E F0                  662 	movx	@dptr,a
   1E6F A3                  663 	inc	dptr
   1E70 ED                  664 	mov	a,r5
   1E71 F0                  665 	movx	@dptr,a
                            666 ;	genCall
   1E72 8A 82               667 	mov	dpl,r2
   1E74 8B 83               668 	mov	dph,r3
   1E76 12 1C 54            669 	lcall	_HW_set_16bit_reg
   1E79                     670 00101$:
                    01E9    671 	C$hw_reg_access.c$61$1$1 ==.
                    01E9    672 	XG$HW_set_16bit_reg_field$0$0 ==.
   1E79 22                  673 	ret
                            674 ;------------------------------------------------------------
                            675 ;Allocation info for local variables in function 'HW_get_16bit_reg_field'
                            676 ;------------------------------------------------------------
                            677 ;shift                     Allocated with name '_HW_get_16bit_reg_field_PARM_2'
                            678 ;mask                      Allocated with name '_HW_get_16bit_reg_field_PARM_3'
                            679 ;reg_addr                  Allocated with name '_HW_get_16bit_reg_field_reg_addr_1_1'
                            680 ;temp16                    Allocated with name '_HW_get_16bit_reg_field_temp16_1_1'
                            681 ;------------------------------------------------------------
                    01EA    682 	G$HW_get_16bit_reg_field$0$0 ==.
                    01EA    683 	C$hw_reg_access.c$66$1$1 ==.
                            684 ;	../hal/Core8051s/SDCC/hw_reg_access.c:66: uint16_t HW_get_16bit_reg_field
                            685 ;	-----------------------------------------
                            686 ;	 function HW_get_16bit_reg_field
                            687 ;	-----------------------------------------
   1E7A                     688 _HW_get_16bit_reg_field:
                            689 ;	genReceive
   1E7A AA 83               690 	mov	r2,dph
   1E7C E5 82               691 	mov	a,dpl
   1E7E 90 05 C8            692 	mov	dptr,#_HW_get_16bit_reg_field_reg_addr_1_1
   1E81 F0                  693 	movx	@dptr,a
   1E82 A3                  694 	inc	dptr
   1E83 EA                  695 	mov	a,r2
   1E84 F0                  696 	movx	@dptr,a
                    01F5    697 	C$hw_reg_access.c$74$1$1 ==.
                            698 ;	../hal/Core8051s/SDCC/hw_reg_access.c:74: temp16 = (HW_get_16bit_reg(reg_addr) & mask) >> shift;
                            699 ;	genAssign
   1E85 90 05 C8            700 	mov	dptr,#_HW_get_16bit_reg_field_reg_addr_1_1
   1E88 E0                  701 	movx	a,@dptr
   1E89 FA                  702 	mov	r2,a
   1E8A A3                  703 	inc	dptr
   1E8B E0                  704 	movx	a,@dptr
   1E8C FB                  705 	mov	r3,a
                            706 ;	genCall
   1E8D 8A 82               707 	mov	dpl,r2
   1E8F 8B 83               708 	mov	dph,r3
   1E91 12 1C 68            709 	lcall	_HW_get_16bit_reg
   1E94 AA 82               710 	mov	r2,dpl
   1E96 AB 83               711 	mov	r3,dph
                            712 ;	genAssign
   1E98 90 05 C6            713 	mov	dptr,#_HW_get_16bit_reg_field_PARM_3
   1E9B E0                  714 	movx	a,@dptr
   1E9C FC                  715 	mov	r4,a
   1E9D A3                  716 	inc	dptr
   1E9E E0                  717 	movx	a,@dptr
   1E9F FD                  718 	mov	r5,a
                            719 ;	genAnd
   1EA0 EC                  720 	mov	a,r4
   1EA1 52 02               721 	anl	ar2,a
   1EA3 ED                  722 	mov	a,r5
   1EA4 52 03               723 	anl	ar3,a
                            724 ;	genAssign
   1EA6 90 05 C5            725 	mov	dptr,#_HW_get_16bit_reg_field_PARM_2
   1EA9 E0                  726 	movx	a,@dptr
   1EAA FC                  727 	mov	r4,a
                            728 ;	genRightShift
   1EAB 8C F0               729 	mov	b,r4
   1EAD 05 F0               730 	inc	b
   1EAF 80 07               731 	sjmp	00104$
   1EB1                     732 00103$:
   1EB1 C3                  733 	clr	c
   1EB2 EB                  734 	mov	a,r3
   1EB3 13                  735 	rrc	a
   1EB4 FB                  736 	mov	r3,a
   1EB5 EA                  737 	mov	a,r2
   1EB6 13                  738 	rrc	a
   1EB7 FA                  739 	mov	r2,a
   1EB8                     740 00104$:
   1EB8 D5 F0 F6            741 	djnz	b,00103$
                            742 ;	genAssign
   1EBB 90 05 CA            743 	mov	dptr,#_HW_get_16bit_reg_field_temp16_1_1
   1EBE EA                  744 	mov	a,r2
   1EBF F0                  745 	movx	@dptr,a
   1EC0 A3                  746 	inc	dptr
   1EC1 EB                  747 	mov	a,r3
   1EC2 F0                  748 	movx	@dptr,a
                    0233    749 	C$hw_reg_access.c$75$1$1 ==.
                            750 ;	../hal/Core8051s/SDCC/hw_reg_access.c:75: return temp16;
                            751 ;	genAssign
   1EC3 90 05 CA            752 	mov	dptr,#_HW_get_16bit_reg_field_temp16_1_1
   1EC6 E0                  753 	movx	a,@dptr
   1EC7 FA                  754 	mov	r2,a
   1EC8 A3                  755 	inc	dptr
   1EC9 E0                  756 	movx	a,@dptr
   1ECA FB                  757 	mov	r3,a
                            758 ;	genRet
   1ECB 8A 82               759 	mov	dpl,r2
   1ECD 8B 83               760 	mov	dph,r3
   1ECF                     761 00101$:
                    023F    762 	C$hw_reg_access.c$76$1$1 ==.
                    023F    763 	XG$HW_get_16bit_reg_field$0$0 ==.
   1ECF 22                  764 	ret
                            765 ;------------------------------------------------------------
                            766 ;Allocation info for local variables in function 'HW_set_8bit_reg_field'
                            767 ;------------------------------------------------------------
                            768 ;shift                     Allocated with name '_HW_set_8bit_reg_field_PARM_2'
                            769 ;mask                      Allocated with name '_HW_set_8bit_reg_field_PARM_3'
                            770 ;value                     Allocated with name '_HW_set_8bit_reg_field_PARM_4'
                            771 ;reg_addr                  Allocated with name '_HW_set_8bit_reg_field_reg_addr_1_1'
                            772 ;temp8                     Allocated with name '_HW_set_8bit_reg_field_temp8_1_1'
                            773 ;------------------------------------------------------------
                    0240    774 	G$HW_set_8bit_reg_field$0$0 ==.
                    0240    775 	C$hw_reg_access.c$81$1$1 ==.
                            776 ;	../hal/Core8051s/SDCC/hw_reg_access.c:81: void HW_set_8bit_reg_field
                            777 ;	-----------------------------------------
                            778 ;	 function HW_set_8bit_reg_field
                            779 ;	-----------------------------------------
   1ED0                     780 _HW_set_8bit_reg_field:
                            781 ;	genReceive
   1ED0 AA 83               782 	mov	r2,dph
   1ED2 E5 82               783 	mov	a,dpl
   1ED4 90 05 CF            784 	mov	dptr,#_HW_set_8bit_reg_field_reg_addr_1_1
   1ED7 F0                  785 	movx	@dptr,a
   1ED8 A3                  786 	inc	dptr
   1ED9 EA                  787 	mov	a,r2
   1EDA F0                  788 	movx	@dptr,a
                    024B    789 	C$hw_reg_access.c$90$1$1 ==.
                            790 ;	../hal/Core8051s/SDCC/hw_reg_access.c:90: temp8 = HW_get_8bit_reg( reg_addr );
                            791 ;	genAssign
   1EDB 90 05 CF            792 	mov	dptr,#_HW_set_8bit_reg_field_reg_addr_1_1
   1EDE E0                  793 	movx	a,@dptr
   1EDF FA                  794 	mov	r2,a
   1EE0 A3                  795 	inc	dptr
   1EE1 E0                  796 	movx	a,@dptr
   1EE2 FB                  797 	mov	r3,a
                            798 ;	genCall
   1EE3 8A 82               799 	mov	dpl,r2
   1EE5 8B 83               800 	mov	dph,r3
   1EE7 C0 02               801 	push	ar2
   1EE9 C0 03               802 	push	ar3
   1EEB 12 1C 7D            803 	lcall	_HW_get_8bit_reg
   1EEE E5 82               804 	mov	a,dpl
   1EF0 D0 03               805 	pop	ar3
   1EF2 D0 02               806 	pop	ar2
                            807 ;	genAssign
   1EF4 90 05 D1            808 	mov	dptr,#_HW_set_8bit_reg_field_temp8_1_1
   1EF7 F0                  809 	movx	@dptr,a
                    0268    810 	C$hw_reg_access.c$91$1$1 ==.
                            811 ;	../hal/Core8051s/SDCC/hw_reg_access.c:91: temp8 = ((temp8  & ~mask) | (((value) << shift) & mask));
                            812 ;	genAssign
   1EF8 90 05 CD            813 	mov	dptr,#_HW_set_8bit_reg_field_PARM_3
   1EFB E0                  814 	movx	a,@dptr
   1EFC FC                  815 	mov	r4,a
                            816 ;	genCpl
   1EFD EC                  817 	mov	a,r4
   1EFE F4                  818 	cpl	a
   1EFF FD                  819 	mov	r5,a
                            820 ;	genAssign
   1F00 90 05 D1            821 	mov	dptr,#_HW_set_8bit_reg_field_temp8_1_1
   1F03 E0                  822 	movx	a,@dptr
   1F04 FE                  823 	mov	r6,a
                            824 ;	genAnd
   1F05 EE                  825 	mov	a,r6
   1F06 52 05               826 	anl	ar5,a
                            827 ;	genAssign
   1F08 90 05 CC            828 	mov	dptr,#_HW_set_8bit_reg_field_PARM_2
   1F0B E0                  829 	movx	a,@dptr
   1F0C FE                  830 	mov	r6,a
                            831 ;	genAssign
   1F0D 90 05 CE            832 	mov	dptr,#_HW_set_8bit_reg_field_PARM_4
   1F10 E0                  833 	movx	a,@dptr
   1F11 FF                  834 	mov	r7,a
                            835 ;	genLeftShift
   1F12 8E F0               836 	mov	b,r6
   1F14 05 F0               837 	inc	b
   1F16 EF                  838 	mov	a,r7
   1F17 80 02               839 	sjmp	00105$
   1F19                     840 00103$:
   1F19 25 E0               841 	add	a,acc
   1F1B                     842 00105$:
   1F1B D5 F0 FB            843 	djnz	b,00103$
                            844 ;	genAnd
   1F1E 5C                  845 	anl	a,r4
                            846 ;	genOr
   1F1F 90 05 D1            847 	mov	dptr,#_HW_set_8bit_reg_field_temp8_1_1
   1F22 4D                  848 	orl	a,r5
   1F23 F0                  849 	movx	@dptr,a
                    0294    850 	C$hw_reg_access.c$92$1$1 ==.
                            851 ;	../hal/Core8051s/SDCC/hw_reg_access.c:92: HW_set_8bit_reg(reg_addr, temp8);
                            852 ;	genAssign
   1F24 90 05 D1            853 	mov	dptr,#_HW_set_8bit_reg_field_temp8_1_1
   1F27 E0                  854 	movx	a,@dptr
   1F28 FC                  855 	mov	r4,a
                            856 ;	genAssign
   1F29 90 05 9D            857 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   1F2C EC                  858 	mov	a,r4
   1F2D F0                  859 	movx	@dptr,a
                            860 ;	genCall
   1F2E 8A 82               861 	mov	dpl,r2
   1F30 8B 83               862 	mov	dph,r3
   1F32 12 1C 6F            863 	lcall	_HW_set_8bit_reg
   1F35                     864 00101$:
                    02A5    865 	C$hw_reg_access.c$93$1$1 ==.
                    02A5    866 	XG$HW_set_8bit_reg_field$0$0 ==.
   1F35 22                  867 	ret
                            868 ;------------------------------------------------------------
                            869 ;Allocation info for local variables in function 'HW_get_8bit_reg_field'
                            870 ;------------------------------------------------------------
                            871 ;shift                     Allocated with name '_HW_get_8bit_reg_field_PARM_2'
                            872 ;mask                      Allocated with name '_HW_get_8bit_reg_field_PARM_3'
                            873 ;reg_addr                  Allocated with name '_HW_get_8bit_reg_field_reg_addr_1_1'
                            874 ;temp8                     Allocated with name '_HW_get_8bit_reg_field_temp8_1_1'
                            875 ;------------------------------------------------------------
                    02A6    876 	G$HW_get_8bit_reg_field$0$0 ==.
                    02A6    877 	C$hw_reg_access.c$98$1$1 ==.
                            878 ;	../hal/Core8051s/SDCC/hw_reg_access.c:98: uint8_t HW_get_8bit_reg_field
                            879 ;	-----------------------------------------
                            880 ;	 function HW_get_8bit_reg_field
                            881 ;	-----------------------------------------
   1F36                     882 _HW_get_8bit_reg_field:
                            883 ;	genReceive
   1F36 AA 83               884 	mov	r2,dph
   1F38 E5 82               885 	mov	a,dpl
   1F3A 90 05 D4            886 	mov	dptr,#_HW_get_8bit_reg_field_reg_addr_1_1
   1F3D F0                  887 	movx	@dptr,a
   1F3E A3                  888 	inc	dptr
   1F3F EA                  889 	mov	a,r2
   1F40 F0                  890 	movx	@dptr,a
                    02B1    891 	C$hw_reg_access.c$106$1$1 ==.
                            892 ;	../hal/Core8051s/SDCC/hw_reg_access.c:106: temp8 = (HW_get_8bit_reg(reg_addr) & mask) >> shift;
                            893 ;	genAssign
   1F41 90 05 D4            894 	mov	dptr,#_HW_get_8bit_reg_field_reg_addr_1_1
   1F44 E0                  895 	movx	a,@dptr
   1F45 FA                  896 	mov	r2,a
   1F46 A3                  897 	inc	dptr
   1F47 E0                  898 	movx	a,@dptr
   1F48 FB                  899 	mov	r3,a
                            900 ;	genCall
   1F49 8A 82               901 	mov	dpl,r2
   1F4B 8B 83               902 	mov	dph,r3
   1F4D 12 1C 7D            903 	lcall	_HW_get_8bit_reg
   1F50 AA 82               904 	mov	r2,dpl
                            905 ;	genAssign
   1F52 90 05 D3            906 	mov	dptr,#_HW_get_8bit_reg_field_PARM_3
   1F55 E0                  907 	movx	a,@dptr
   1F56 FB                  908 	mov	r3,a
                            909 ;	genAnd
   1F57 EB                  910 	mov	a,r3
   1F58 52 02               911 	anl	ar2,a
                            912 ;	genAssign
   1F5A 90 05 D2            913 	mov	dptr,#_HW_get_8bit_reg_field_PARM_2
   1F5D E0                  914 	movx	a,@dptr
   1F5E FB                  915 	mov	r3,a
                            916 ;	genRightShift
   1F5F 8B F0               917 	mov	b,r3
   1F61 05 F0               918 	inc	b
   1F63 EA                  919 	mov	a,r2
   1F64 80 02               920 	sjmp	00104$
   1F66                     921 00103$:
   1F66 C3                  922 	clr	c
   1F67 13                  923 	rrc	a
   1F68                     924 00104$:
   1F68 D5 F0 FB            925 	djnz	b,00103$
                            926 ;	genAssign
   1F6B 90 05 D6            927 	mov	dptr,#_HW_get_8bit_reg_field_temp8_1_1
   1F6E F0                  928 	movx	@dptr,a
                    02DF    929 	C$hw_reg_access.c$107$1$1 ==.
                            930 ;	../hal/Core8051s/SDCC/hw_reg_access.c:107: return temp8;
                            931 ;	genAssign
   1F6F 90 05 D6            932 	mov	dptr,#_HW_get_8bit_reg_field_temp8_1_1
   1F72 E0                  933 	movx	a,@dptr
   1F73 FA                  934 	mov	r2,a
                            935 ;	genRet
   1F74 8A 82               936 	mov	dpl,r2
   1F76                     937 00101$:
                    02E6    938 	C$hw_reg_access.c$108$1$1 ==.
                    02E6    939 	XG$HW_get_8bit_reg_field$0$0 ==.
   1F76 22                  940 	ret
                            941 	.area CSEG    (CODE)
                            942 	.area CONST   (CODE)
                            943 	.area XINIT   (CODE)
                            944 	.area CABS    (ABS,CODE)
