                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.3 #4543 (Dec 31 2006)
                              4 ; This file generated Wed May 04 10:48:17 2016
                              5 ;--------------------------------------------------------
                              6 	.module ___misc
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _xatoi_PARM_2
                             13 	.globl _int_to_dec_int_PARM_2
                             14 	.globl _int_to_hex_int_PARM_3
                             15 	.globl _int_to_hex_int_PARM_2
                             16 	.globl _dp_display_array_PARM_3
                             17 	.globl _dp_display_array_PARM_2
                             18 	.globl _dp_display_value_PARM_2
                             19 	.globl _g_stdio_uart
                             20 	.globl _dp_display_text
                             21 	.globl _dp_display_value
                             22 	.globl _dp_display_array
                             23 	.globl _int_to_hex_int
                             24 	.globl _int_to_dec_int
                             25 	.globl _xatoi
                             26 	.globl _getParity
                             27 ;--------------------------------------------------------
                             28 ; special function registers
                             29 ;--------------------------------------------------------
                             30 	.area RSEG    (DATA)
                             31 ;--------------------------------------------------------
                             32 ; special function bits
                             33 ;--------------------------------------------------------
                             34 	.area RSEG    (DATA)
                             35 ;--------------------------------------------------------
                             36 ; overlayable register banks
                             37 ;--------------------------------------------------------
                             38 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                      39 	.ds 8
                             40 ;--------------------------------------------------------
                             41 ; internal ram data
                             42 ;--------------------------------------------------------
                             43 	.area DSEG    (DATA)
                    0000     44 Ldp_display_array$sloc0$1$0==.
   0021                      45 _dp_display_array_sloc0_1_0:
   0021                      46 	.ds 2
                    0002     47 Ldp_display_array$sloc1$1$0==.
   0023                      48 _dp_display_array_sloc1_1_0:
   0023                      49 	.ds 2
                    0004     50 Lint_to_hex_int$sloc0$1$0==.
   0025                      51 _int_to_hex_int_sloc0_1_0:
   0025                      52 	.ds 2
                    0006     53 Lint_to_hex_int$sloc1$1$0==.
   0027                      54 _int_to_hex_int_sloc1_1_0:
   0027                      55 	.ds 3
                    0009     56 Lint_to_dec_int$sloc0$1$0==.
   002A                      57 _int_to_dec_int_sloc0_1_0:
   002A                      58 	.ds 3
                             59 ;--------------------------------------------------------
                             60 ; overlayable items in internal ram 
                             61 ;--------------------------------------------------------
                             62 	.area OSEG    (OVR,DATA)
                             63 ;--------------------------------------------------------
                             64 ; indirectly addressable internal ram data
                             65 ;--------------------------------------------------------
                             66 	.area ISEG    (DATA)
                             67 ;--------------------------------------------------------
                             68 ; absolute internal ram data
                             69 ;--------------------------------------------------------
                             70 	.area IABS    (ABS,DATA)
                             71 	.area IABS    (ABS,DATA)
                             72 ;--------------------------------------------------------
                             73 ; bit data
                             74 ;--------------------------------------------------------
                             75 	.area BSEG    (BIT)
                             76 ;--------------------------------------------------------
                             77 ; paged external ram data
                             78 ;--------------------------------------------------------
                             79 	.area PSEG    (PAG,XDATA)
                             80 ;--------------------------------------------------------
                             81 ; external ram data
                             82 ;--------------------------------------------------------
                             83 	.area XSEG    (XDATA)
                    0000     84 G$g_stdio_uart$0$0==.
   042F                      85 _g_stdio_uart::
   042F                      86 	.ds 3
                    0003     87 Ldp_display_text$text$1$1==.
   0432                      88 _dp_display_text_text_1_1:
   0432                      89 	.ds 3
                    0006     90 Ldp_display_text$length$1$1==.
   0435                      91 _dp_display_text_length_1_1:
   0435                      92 	.ds 2
                    0008     93 Ldp_display_value$descriptive$1$1==.
   0437                      94 _dp_display_value_PARM_2:
   0437                      95 	.ds 2
                    000A     96 Ldp_display_value$value$1$1==.
   0439                      97 _dp_display_value_value_1_1:
   0439                      98 	.ds 4
                    000E     99 Ldp_display_value$value_text$1$1==.
   043D                     100 _dp_display_value_value_text_1_1:
   043D                     101 	.ds 256
                    010E    102 Ldp_display_value$text_size$1$1==.
   053D                     103 _dp_display_value_text_size_1_1:
   053D                     104 	.ds 2
                    0110    105 Ldp_display_array$bytes$1$1==.
   053F                     106 _dp_display_array_PARM_2:
   053F                     107 	.ds 2
                    0112    108 Ldp_display_array$descriptive$1$1==.
   0541                     109 _dp_display_array_PARM_3:
   0541                     110 	.ds 2
                    0114    111 Ldp_display_array$value$1$1==.
   0543                     112 _dp_display_array_value_1_1:
   0543                     113 	.ds 3
                    0117    114 Ldp_display_array$idx$1$1==.
   0546                     115 _dp_display_array_idx_1_1:
   0546                     116 	.ds 2
                    0119    117 Lint_to_hex_int$p_result$1$1==.
   0548                     118 _int_to_hex_int_PARM_2:
   0548                     119 	.ds 3
                    011C    120 Lint_to_hex_int$result_size$1$1==.
   054B                     121 _int_to_hex_int_PARM_3:
   054B                     122 	.ds 2
                    011E    123 Lint_to_hex_int$value$1$1==.
   054D                     124 _int_to_hex_int_value_1_1:
   054D                     125 	.ds 2
                    0120    126 Lint_to_hex_int$nibble_idx$1$1==.
   054F                     127 _int_to_hex_int_nibble_idx_1_1:
   054F                     128 	.ds 2
                    0122    129 Lint_to_hex_int$nb_nibbles$1$1==.
   0551                     130 _int_to_hex_int_nb_nibbles_1_1:
   0551                     131 	.ds 2
                    0124    132 Lint_to_hex_int$conv_array$1$1==.
   0553                     133 _int_to_hex_int_conv_array_1_1:
   0553                     134 	.ds 8
                    012C    135 Lint_to_hex_int$uvalue$1$1==.
   055B                     136 _int_to_hex_int_uvalue_1_1:
   055B                     137 	.ds 2
                    012E    138 Lint_to_dec_int$p_result$1$1==.
   055D                     139 _int_to_dec_int_PARM_2:
   055D                     140 	.ds 3
                    0131    141 Lint_to_dec_int$value$1$1==.
   0560                     142 _int_to_dec_int_value_1_1:
   0560                     143 	.ds 2
                    0133    144 Lint_to_dec_int$conv_array$1$1==.
   0562                     145 _int_to_dec_int_conv_array_1_1:
   0562                     146 	.ds 8
                    013B    147 Lint_to_dec_int$uvalue$1$1==.
   056A                     148 _int_to_dec_int_uvalue_1_1:
   056A                     149 	.ds 2
                    013D    150 Lint_to_dec_int$digit_idx$1$1==.
   056C                     151 _int_to_dec_int_digit_idx_1_1:
   056C                     152 	.ds 2
                    013F    153 Lint_to_dec_int$nb_digits$1$1==.
   056E                     154 _int_to_dec_int_nb_digits_1_1:
   056E                     155 	.ds 2
                    0141    156 Lxatoi$res$1$1==.
   0570                     157 _xatoi_PARM_2:
   0570                     158 	.ds 3
                    0144    159 Lxatoi$str$1$1==.
   0573                     160 _xatoi_str_1_1:
   0573                     161 	.ds 3
                    0147    162 Lxatoi$val$1$1==.
   0576                     163 _xatoi_val_1_1:
   0576                     164 	.ds 4
                    014B    165 Lxatoi$c$1$1==.
   057A                     166 _xatoi_c_1_1:
   057A                     167 	.ds 1
                    014C    168 Lxatoi$r$1$1==.
   057B                     169 _xatoi_r_1_1:
   057B                     170 	.ds 1
                    014D    171 Lxatoi$s$1$1==.
   057C                     172 _xatoi_s_1_1:
   057C                     173 	.ds 1
                    014E    174 LgetParity$n$1$1==.
   057D                     175 _getParity_n_1_1:
   057D                     176 	.ds 2
                    0150    177 LgetParity$parity$1$1==.
   057F                     178 _getParity_parity_1_1:
   057F                     179 	.ds 1
                            180 ;--------------------------------------------------------
                            181 ; external initialized ram data
                            182 ;--------------------------------------------------------
                            183 	.area XISEG   (XDATA)
                            184 	.area HOME    (CODE)
                            185 	.area GSINIT0 (CODE)
                            186 	.area GSINIT1 (CODE)
                            187 	.area GSINIT2 (CODE)
                            188 	.area GSINIT3 (CODE)
                            189 	.area GSINIT4 (CODE)
                            190 	.area GSINIT5 (CODE)
                            191 	.area GSINIT  (CODE)
                            192 	.area GSFINAL (CODE)
                            193 	.area CSEG    (CODE)
                            194 ;--------------------------------------------------------
                            195 ; global & static initialisations
                            196 ;--------------------------------------------------------
                            197 	.area HOME    (CODE)
                            198 	.area GSINIT  (CODE)
                            199 	.area GSFINAL (CODE)
                            200 	.area GSINIT  (CODE)
                            201 ;--------------------------------------------------------
                            202 ; Home
                            203 ;--------------------------------------------------------
                            204 	.area HOME    (CODE)
                            205 	.area HOME    (CODE)
                            206 ;--------------------------------------------------------
                            207 ; code
                            208 ;--------------------------------------------------------
                            209 	.area CSEG    (CODE)
                            210 ;------------------------------------------------------------
                            211 ;Allocation info for local variables in function 'dp_display_text'
                            212 ;------------------------------------------------------------
                            213 ;text                      Allocated with name '_dp_display_text_text_1_1'
                            214 ;length                    Allocated with name '_dp_display_text_length_1_1'
                            215 ;------------------------------------------------------------
                    0000    216 	G$dp_display_text$0$0 ==.
                    0000    217 	C$misc.c$9$0$0 ==.
                            218 ;	../misc.c:9: void dp_display_text(uint8_t * text)
                            219 ;	-----------------------------------------
                            220 ;	 function dp_display_text
                            221 ;	-----------------------------------------
   1284                     222 _dp_display_text:
                    0002    223 	ar2 = 0x02
                    0003    224 	ar3 = 0x03
                    0004    225 	ar4 = 0x04
                    0005    226 	ar5 = 0x05
                    0006    227 	ar6 = 0x06
                    0007    228 	ar7 = 0x07
                    0000    229 	ar0 = 0x00
                    0001    230 	ar1 = 0x01
                            231 ;	genReceive
   1284 AA F0               232 	mov	r2,b
   1286 AB 83               233 	mov	r3,dph
   1288 E5 82               234 	mov	a,dpl
   128A 90 04 32            235 	mov	dptr,#_dp_display_text_text_1_1
   128D F0                  236 	movx	@dptr,a
   128E A3                  237 	inc	dptr
   128F EB                  238 	mov	a,r3
   1290 F0                  239 	movx	@dptr,a
   1291 A3                  240 	inc	dptr
   1292 EA                  241 	mov	a,r2
   1293 F0                  242 	movx	@dptr,a
                    0010    243 	C$misc.c$13$1$1 ==.
                            244 ;	../misc.c:13: length = 0;
                            245 ;	genAssign
   1294 90 04 35            246 	mov	dptr,#_dp_display_text_length_1_1
   1297 E4                  247 	clr	a
   1298 F0                  248 	movx	@dptr,a
   1299 A3                  249 	inc	dptr
   129A F0                  250 	movx	@dptr,a
                    0017    251 	C$misc.c$14$1$1 ==.
                            252 ;	../misc.c:14: while (text[length++]!='\0');
                            253 ;	genAssign
   129B 90 04 32            254 	mov	dptr,#_dp_display_text_text_1_1
   129E E0                  255 	movx	a,@dptr
   129F FA                  256 	mov	r2,a
   12A0 A3                  257 	inc	dptr
   12A1 E0                  258 	movx	a,@dptr
   12A2 FB                  259 	mov	r3,a
   12A3 A3                  260 	inc	dptr
   12A4 E0                  261 	movx	a,@dptr
   12A5 FC                  262 	mov	r4,a
   12A6                     263 00101$:
                            264 ;	genAssign
   12A6 90 04 35            265 	mov	dptr,#_dp_display_text_length_1_1
   12A9 E0                  266 	movx	a,@dptr
   12AA FD                  267 	mov	r5,a
   12AB A3                  268 	inc	dptr
   12AC E0                  269 	movx	a,@dptr
   12AD FE                  270 	mov	r6,a
                            271 ;	genPlus
   12AE 90 04 35            272 	mov	dptr,#_dp_display_text_length_1_1
                            273 ;	genPlusIncr
   12B1 74 01               274 	mov	a,#0x01
   12B3 25 05               275 	add	a,ar5
   12B5 F0                  276 	movx	@dptr,a
   12B6 74 00               277 	mov	a,#0x00
   12B8 35 06               278 	addc	a,ar6
   12BA A3                  279 	inc	dptr
   12BB F0                  280 	movx	@dptr,a
                            281 ;	genPlus
   12BC E5 05               282 	mov	a,ar5
   12BE 25 02               283 	add	a,ar2
   12C0 FD                  284 	mov	r5,a
   12C1 E5 06               285 	mov	a,ar6
   12C3 35 03               286 	addc	a,ar3
   12C5 FE                  287 	mov	r6,a
   12C6 8C 07               288 	mov	ar7,r4
                            289 ;	genPointerGet
                            290 ;	genGenPointerGet
   12C8 8D 82               291 	mov	dpl,r5
   12CA 8E 83               292 	mov	dph,r6
   12CC 8F F0               293 	mov	b,r7
   12CE 12 71 F6            294 	lcall	__gptrget
   12D1 FD                  295 	mov	r5,a
                            296 ;	genCmpEq
                            297 ;	gencjneshort
   12D2 BD 00 02            298 	cjne	r5,#0x00,00108$
   12D5 80 03               299 	sjmp	00109$
   12D7                     300 00108$:
   12D7 02 12 A6            301 	ljmp	00101$
   12DA                     302 00109$:
                    0056    303 	C$misc.c$16$1$1 ==.
                            304 ;	../misc.c:16: UART_send(&g_stdio_uart, (uint8_t *)text,length);
                            305 ;	genAssign
   12DA 90 04 35            306 	mov	dptr,#_dp_display_text_length_1_1
   12DD E0                  307 	movx	a,@dptr
   12DE FD                  308 	mov	r5,a
   12DF A3                  309 	inc	dptr
   12E0 E0                  310 	movx	a,@dptr
   12E1 FE                  311 	mov	r6,a
                            312 ;	genAssign
   12E2 90 07 B0            313 	mov	dptr,#_UART_send_PARM_2
   12E5 EA                  314 	mov	a,r2
   12E6 F0                  315 	movx	@dptr,a
   12E7 A3                  316 	inc	dptr
   12E8 EB                  317 	mov	a,r3
   12E9 F0                  318 	movx	@dptr,a
   12EA A3                  319 	inc	dptr
   12EB EC                  320 	mov	a,r4
   12EC F0                  321 	movx	@dptr,a
                            322 ;	genAssign
   12ED 90 07 B3            323 	mov	dptr,#_UART_send_PARM_3
   12F0 ED                  324 	mov	a,r5
   12F1 F0                  325 	movx	@dptr,a
   12F2 A3                  326 	inc	dptr
   12F3 EE                  327 	mov	a,r6
   12F4 F0                  328 	movx	@dptr,a
                            329 ;	genCall
   12F5 75 82 2F            330 	mov	dpl,#_g_stdio_uart
   12F8 75 83 04            331 	mov	dph,#(_g_stdio_uart >> 8)
   12FB 75 F0 00            332 	mov	b,#0x00
   12FE 12 30 66            333 	lcall	_UART_send
   1301                     334 00104$:
                    007D    335 	C$misc.c$17$1$1 ==.
                    007D    336 	XG$dp_display_text$0$0 ==.
   1301 22                  337 	ret
                            338 ;------------------------------------------------------------
                            339 ;Allocation info for local variables in function 'dp_display_value'
                            340 ;------------------------------------------------------------
                            341 ;descriptive               Allocated with name '_dp_display_value_PARM_2'
                            342 ;value                     Allocated with name '_dp_display_value_value_1_1'
                            343 ;value_text                Allocated with name '_dp_display_value_value_text_1_1'
                            344 ;text_size                 Allocated with name '_dp_display_value_text_size_1_1'
                            345 ;------------------------------------------------------------
                    007E    346 	G$dp_display_value$0$0 ==.
                    007E    347 	C$misc.c$19$1$1 ==.
                            348 ;	../misc.c:19: void dp_display_value(uint32_t value,DPUINT descriptive)
                            349 ;	-----------------------------------------
                            350 ;	 function dp_display_value
                            351 ;	-----------------------------------------
   1302                     352 _dp_display_value:
                            353 ;	genReceive
   1302 AA 82               354 	mov	r2,dpl
   1304 AB 83               355 	mov	r3,dph
   1306 AC F0               356 	mov	r4,b
   1308 FD                  357 	mov	r5,a
   1309 90 04 39            358 	mov	dptr,#_dp_display_value_value_1_1
   130C EA                  359 	mov	a,r2
   130D F0                  360 	movx	@dptr,a
   130E A3                  361 	inc	dptr
   130F EB                  362 	mov	a,r3
   1310 F0                  363 	movx	@dptr,a
   1311 A3                  364 	inc	dptr
   1312 EC                  365 	mov	a,r4
   1313 F0                  366 	movx	@dptr,a
   1314 A3                  367 	inc	dptr
   1315 ED                  368 	mov	a,r5
   1316 F0                  369 	movx	@dptr,a
                    0093    370 	C$misc.c$24$1$1 ==.
                            371 ;	../misc.c:24: if (descriptive == HEX)
                            372 ;	genAssign
   1317 90 04 37            373 	mov	dptr,#_dp_display_value_PARM_2
   131A E0                  374 	movx	a,@dptr
   131B FA                  375 	mov	r2,a
   131C A3                  376 	inc	dptr
   131D E0                  377 	movx	a,@dptr
   131E FB                  378 	mov	r3,a
                            379 ;	genIfx
   131F EA                  380 	mov	a,r2
   1320 4B                  381 	orl	a,r3
                            382 ;	genIfxJump
   1321 60 03               383 	jz	00107$
   1323 02 13 62            384 	ljmp	00102$
   1326                     385 00107$:
                    00A2    386 	C$misc.c$26$2$2 ==.
                            387 ;	../misc.c:26: text_size = int_to_hex_int( value, value_text, 8);
                            388 ;	genAssign
   1326 90 04 39            389 	mov	dptr,#_dp_display_value_value_1_1
   1329 E0                  390 	movx	a,@dptr
   132A FA                  391 	mov	r2,a
   132B A3                  392 	inc	dptr
   132C E0                  393 	movx	a,@dptr
   132D FB                  394 	mov	r3,a
   132E A3                  395 	inc	dptr
   132F E0                  396 	movx	a,@dptr
   1330 FC                  397 	mov	r4,a
   1331 A3                  398 	inc	dptr
   1332 E0                  399 	movx	a,@dptr
   1333 FD                  400 	mov	r5,a
                            401 ;	genCast
                            402 ;	genCast
   1334 90 05 48            403 	mov	dptr,#_int_to_hex_int_PARM_2
   1337 74 3D               404 	mov	a,#_dp_display_value_value_text_1_1
   1339 F0                  405 	movx	@dptr,a
   133A A3                  406 	inc	dptr
   133B 74 04               407 	mov	a,#(_dp_display_value_value_text_1_1 >> 8)
   133D F0                  408 	movx	@dptr,a
   133E A3                  409 	inc	dptr
   133F 74 00               410 	mov	a,#0x0
   1341 F0                  411 	movx	@dptr,a
                            412 ;	genAssign
   1342 90 05 4B            413 	mov	dptr,#_int_to_hex_int_PARM_3
   1345 74 08               414 	mov	a,#0x08
   1347 F0                  415 	movx	@dptr,a
   1348 E4                  416 	clr	a
   1349 A3                  417 	inc	dptr
   134A F0                  418 	movx	@dptr,a
                            419 ;	genCall
   134B 8A 82               420 	mov	dpl,r2
   134D 8B 83               421 	mov	dph,r3
   134F 12 14 9E            422 	lcall	_int_to_hex_int
   1352 E5 82               423 	mov	a,dpl
   1354 85 83 F0            424 	mov	b,dph
                            425 ;	genAssign
   1357 90 05 3D            426 	mov	dptr,#_dp_display_value_text_size_1_1
   135A F0                  427 	movx	@dptr,a
   135B A3                  428 	inc	dptr
   135C E5 F0               429 	mov	a,b
   135E F0                  430 	movx	@dptr,a
   135F 02 13 92            431 	ljmp	00103$
   1362                     432 00102$:
                    00DE    433 	C$misc.c$30$2$3 ==.
                            434 ;	../misc.c:30: text_size = int_to_dec_int( value, value_text);
                            435 ;	genAssign
   1362 90 04 39            436 	mov	dptr,#_dp_display_value_value_1_1
   1365 E0                  437 	movx	a,@dptr
   1366 FA                  438 	mov	r2,a
   1367 A3                  439 	inc	dptr
   1368 E0                  440 	movx	a,@dptr
   1369 FB                  441 	mov	r3,a
   136A A3                  442 	inc	dptr
   136B E0                  443 	movx	a,@dptr
   136C FC                  444 	mov	r4,a
   136D A3                  445 	inc	dptr
   136E E0                  446 	movx	a,@dptr
   136F FD                  447 	mov	r5,a
                            448 ;	genCast
                            449 ;	genCast
   1370 90 05 5D            450 	mov	dptr,#_int_to_dec_int_PARM_2
   1373 74 3D               451 	mov	a,#_dp_display_value_value_text_1_1
   1375 F0                  452 	movx	@dptr,a
   1376 A3                  453 	inc	dptr
   1377 74 04               454 	mov	a,#(_dp_display_value_value_text_1_1 >> 8)
   1379 F0                  455 	movx	@dptr,a
   137A A3                  456 	inc	dptr
   137B 74 00               457 	mov	a,#0x0
   137D F0                  458 	movx	@dptr,a
                            459 ;	genCall
   137E 8A 82               460 	mov	dpl,r2
   1380 8B 83               461 	mov	dph,r3
   1382 12 16 37            462 	lcall	_int_to_dec_int
   1385 E5 82               463 	mov	a,dpl
   1387 85 83 F0            464 	mov	b,dph
                            465 ;	genAssign
   138A 90 05 3D            466 	mov	dptr,#_dp_display_value_text_size_1_1
   138D F0                  467 	movx	@dptr,a
   138E A3                  468 	inc	dptr
   138F E5 F0               469 	mov	a,b
   1391 F0                  470 	movx	@dptr,a
   1392                     471 00103$:
                    010E    472 	C$misc.c$32$1$1 ==.
                            473 ;	../misc.c:32: UART_send (&g_stdio_uart, value_text, text_size);
                            474 ;	genAssign
   1392 90 05 3D            475 	mov	dptr,#_dp_display_value_text_size_1_1
   1395 E0                  476 	movx	a,@dptr
   1396 FA                  477 	mov	r2,a
   1397 A3                  478 	inc	dptr
   1398 E0                  479 	movx	a,@dptr
   1399 FB                  480 	mov	r3,a
                            481 ;	genAssign
   139A 90 07 B0            482 	mov	dptr,#_UART_send_PARM_2
   139D 74 3D               483 	mov	a,#_dp_display_value_value_text_1_1
   139F F0                  484 	movx	@dptr,a
   13A0 A3                  485 	inc	dptr
   13A1 74 04               486 	mov	a,#(_dp_display_value_value_text_1_1 >> 8)
   13A3 F0                  487 	movx	@dptr,a
   13A4 A3                  488 	inc	dptr
   13A5 74 00               489 	mov	a,#0x00
   13A7 F0                  490 	movx	@dptr,a
                            491 ;	genAssign
   13A8 90 07 B3            492 	mov	dptr,#_UART_send_PARM_3
   13AB EA                  493 	mov	a,r2
   13AC F0                  494 	movx	@dptr,a
   13AD A3                  495 	inc	dptr
   13AE EB                  496 	mov	a,r3
   13AF F0                  497 	movx	@dptr,a
                            498 ;	genCall
   13B0 75 82 2F            499 	mov	dpl,#_g_stdio_uart
   13B3 75 83 04            500 	mov	dph,#(_g_stdio_uart >> 8)
   13B6 75 F0 00            501 	mov	b,#0x00
   13B9 12 30 66            502 	lcall	_UART_send
   13BC                     503 00104$:
                    0138    504 	C$misc.c$34$1$1 ==.
                    0138    505 	XG$dp_display_value$0$0 ==.
   13BC 22                  506 	ret
                            507 ;------------------------------------------------------------
                            508 ;Allocation info for local variables in function 'dp_display_array'
                            509 ;------------------------------------------------------------
                            510 ;sloc0                     Allocated with name '_dp_display_array_sloc0_1_0'
                            511 ;sloc1                     Allocated with name '_dp_display_array_sloc1_1_0'
                            512 ;bytes                     Allocated with name '_dp_display_array_PARM_2'
                            513 ;descriptive               Allocated with name '_dp_display_array_PARM_3'
                            514 ;value                     Allocated with name '_dp_display_array_value_1_1'
                            515 ;idx                       Allocated with name '_dp_display_array_idx_1_1'
                            516 ;------------------------------------------------------------
                    0139    517 	G$dp_display_array$0$0 ==.
                    0139    518 	C$misc.c$35$1$1 ==.
                            519 ;	../misc.c:35: void dp_display_array(uint8_t *value,DPUINT bytes, DPUINT descriptive)
                            520 ;	-----------------------------------------
                            521 ;	 function dp_display_array
                            522 ;	-----------------------------------------
   13BD                     523 _dp_display_array:
                            524 ;	genReceive
   13BD AA F0               525 	mov	r2,b
   13BF AB 83               526 	mov	r3,dph
   13C1 E5 82               527 	mov	a,dpl
   13C3 90 05 43            528 	mov	dptr,#_dp_display_array_value_1_1
   13C6 F0                  529 	movx	@dptr,a
   13C7 A3                  530 	inc	dptr
   13C8 EB                  531 	mov	a,r3
   13C9 F0                  532 	movx	@dptr,a
   13CA A3                  533 	inc	dptr
   13CB EA                  534 	mov	a,r2
   13CC F0                  535 	movx	@dptr,a
                    0149    536 	C$misc.c$38$1$1 ==.
                            537 ;	../misc.c:38: for (idx=0;idx<bytes;idx++)
                            538 ;	genAssign
   13CD 90 05 46            539 	mov	dptr,#_dp_display_array_idx_1_1
   13D0 E4                  540 	clr	a
   13D1 F0                  541 	movx	@dptr,a
   13D2 A3                  542 	inc	dptr
   13D3 F0                  543 	movx	@dptr,a
                            544 ;	genAssign
   13D4 90 05 43            545 	mov	dptr,#_dp_display_array_value_1_1
   13D7 E0                  546 	movx	a,@dptr
   13D8 FA                  547 	mov	r2,a
   13D9 A3                  548 	inc	dptr
   13DA E0                  549 	movx	a,@dptr
   13DB FB                  550 	mov	r3,a
   13DC A3                  551 	inc	dptr
   13DD E0                  552 	movx	a,@dptr
   13DE FC                  553 	mov	r4,a
                            554 ;	genAssign
   13DF 90 05 41            555 	mov	dptr,#_dp_display_array_PARM_3
   13E2 E0                  556 	movx	a,@dptr
   13E3 F5 23               557 	mov	_dp_display_array_sloc1_1_0,a
   13E5 A3                  558 	inc	dptr
   13E6 E0                  559 	movx	a,@dptr
   13E7 F5 24               560 	mov	(_dp_display_array_sloc1_1_0 + 1),a
                            561 ;	genAssign
   13E9 90 05 3F            562 	mov	dptr,#_dp_display_array_PARM_2
   13EC E0                  563 	movx	a,@dptr
   13ED FF                  564 	mov	r7,a
   13EE A3                  565 	inc	dptr
   13EF E0                  566 	movx	a,@dptr
   13F0 F8                  567 	mov	r0,a
   13F1                     568 00101$:
                            569 ;	genIpush
                            570 ;	genAssign
   13F1 90 05 46            571 	mov	dptr,#_dp_display_array_idx_1_1
   13F4 E0                  572 	movx	a,@dptr
   13F5 F5 21               573 	mov	_dp_display_array_sloc0_1_0,a
   13F7 A3                  574 	inc	dptr
   13F8 E0                  575 	movx	a,@dptr
   13F9 F5 22               576 	mov	(_dp_display_array_sloc0_1_0 + 1),a
                            577 ;	genAssign
   13FB A9 21               578 	mov	r1,_dp_display_array_sloc0_1_0
   13FD AD 22               579 	mov	r5,(_dp_display_array_sloc0_1_0 + 1)
                            580 ;	genCmpLt
                            581 ;	genCmp
   13FF C3                  582 	clr	c
   1400 E9                  583 	mov	a,r1
   1401 9F                  584 	subb	a,r7
   1402 ED                  585 	mov	a,r5
   1403 98                  586 	subb	a,r0
   1404 E4                  587 	clr	a
   1405 33                  588 	rlc	a
                            589 ;	genIpop
                            590 ;	genIfx
                            591 ;	genIfxJump
   1406 70 03               592 	jnz	00109$
   1408 02 14 9D            593 	ljmp	00105$
   140B                     594 00109$:
                    0187    595 	C$misc.c$40$2$2 ==.
                            596 ;	../misc.c:40: dp_display_value(value[bytes-1-idx], descriptive);
                            597 ;	genMinus
                            598 ;	genMinusDec
   140B EF                  599 	mov	a,r7
   140C 24 FF               600 	add	a,#0xff
   140E F9                  601 	mov	r1,a
   140F E8                  602 	mov	a,r0
   1410 34 FF               603 	addc	a,#0xff
   1412 FD                  604 	mov	r5,a
                            605 ;	genMinus
   1413 E9                  606 	mov	a,r1
   1414 C3                  607 	clr	c
   1415 95 21               608 	subb	a,_dp_display_array_sloc0_1_0
   1417 F9                  609 	mov	r1,a
   1418 ED                  610 	mov	a,r5
   1419 95 22               611 	subb	a,(_dp_display_array_sloc0_1_0 + 1)
   141B FD                  612 	mov	r5,a
                            613 ;	genPlus
   141C E5 01               614 	mov	a,ar1
   141E 25 02               615 	add	a,ar2
   1420 F9                  616 	mov	r1,a
   1421 E5 05               617 	mov	a,ar5
   1423 35 03               618 	addc	a,ar3
   1425 FD                  619 	mov	r5,a
   1426 8C 06               620 	mov	ar6,r4
                            621 ;	genPointerGet
                            622 ;	genGenPointerGet
   1428 89 82               623 	mov	dpl,r1
   142A 8D 83               624 	mov	dph,r5
   142C 8E F0               625 	mov	b,r6
   142E 12 71 F6            626 	lcall	__gptrget
   1431 F9                  627 	mov	r1,a
                            628 ;	genIpush
   1432 C0 02               629 	push	ar2
   1434 C0 03               630 	push	ar3
   1436 C0 04               631 	push	ar4
                            632 ;	genCast
   1438 7D 00               633 	mov	r5,#0x00
   143A 7E 00               634 	mov	r6,#0x00
   143C 7A 00               635 	mov	r2,#0x00
                            636 ;	genAssign
   143E 90 04 37            637 	mov	dptr,#_dp_display_value_PARM_2
   1441 E5 23               638 	mov	a,_dp_display_array_sloc1_1_0
   1443 F0                  639 	movx	@dptr,a
   1444 A3                  640 	inc	dptr
   1445 E5 24               641 	mov	a,(_dp_display_array_sloc1_1_0 + 1)
   1447 F0                  642 	movx	@dptr,a
                            643 ;	genCall
   1448 89 82               644 	mov	dpl,r1
   144A 8D 83               645 	mov	dph,r5
   144C 8E F0               646 	mov	b,r6
   144E EA                  647 	mov	a,r2
   144F C0 02               648 	push	ar2
   1451 C0 03               649 	push	ar3
   1453 C0 04               650 	push	ar4
   1455 C0 07               651 	push	ar7
   1457 C0 00               652 	push	ar0
   1459 12 13 02            653 	lcall	_dp_display_value
   145C D0 00               654 	pop	ar0
   145E D0 07               655 	pop	ar7
   1460 D0 04               656 	pop	ar4
   1462 D0 03               657 	pop	ar3
   1464 D0 02               658 	pop	ar2
                    01E2    659 	C$misc.c$41$2$2 ==.
                            660 ;	../misc.c:41: dp_display_text(" ");
                            661 ;	genCall
   1466 75 82 3C            662 	mov	dpl,#__str_0
   1469 75 83 73            663 	mov	dph,#(__str_0 >> 8)
   146C 75 F0 80            664 	mov	b,#0x80
   146F C0 02               665 	push	ar2
   1471 C0 03               666 	push	ar3
   1473 C0 04               667 	push	ar4
   1475 C0 07               668 	push	ar7
   1477 C0 00               669 	push	ar0
   1479 12 12 84            670 	lcall	_dp_display_text
   147C D0 00               671 	pop	ar0
   147E D0 07               672 	pop	ar7
   1480 D0 04               673 	pop	ar4
   1482 D0 03               674 	pop	ar3
   1484 D0 02               675 	pop	ar2
                    0202    676 	C$misc.c$38$1$1 ==.
                            677 ;	../misc.c:38: for (idx=0;idx<bytes;idx++)
                            678 ;	genPlus
   1486 90 05 46            679 	mov	dptr,#_dp_display_array_idx_1_1
                            680 ;	genPlusIncr
   1489 74 01               681 	mov	a,#0x01
   148B 25 21               682 	add	a,_dp_display_array_sloc0_1_0
   148D F0                  683 	movx	@dptr,a
   148E 74 00               684 	mov	a,#0x00
   1490 35 22               685 	addc	a,(_dp_display_array_sloc0_1_0 + 1)
   1492 A3                  686 	inc	dptr
   1493 F0                  687 	movx	@dptr,a
                            688 ;	genIpop
   1494 D0 04               689 	pop	ar4
   1496 D0 03               690 	pop	ar3
   1498 D0 02               691 	pop	ar2
   149A 02 13 F1            692 	ljmp	00101$
   149D                     693 00105$:
                    0219    694 	C$misc.c$44$1$1 ==.
                    0219    695 	XG$dp_display_array$0$0 ==.
   149D 22                  696 	ret
                            697 ;------------------------------------------------------------
                            698 ;Allocation info for local variables in function 'int_to_hex_int'
                            699 ;------------------------------------------------------------
                            700 ;sloc0                     Allocated with name '_int_to_hex_int_sloc0_1_0'
                            701 ;sloc1                     Allocated with name '_int_to_hex_int_sloc1_1_0'
                            702 ;p_result                  Allocated with name '_int_to_hex_int_PARM_2'
                            703 ;result_size               Allocated with name '_int_to_hex_int_PARM_3'
                            704 ;value                     Allocated with name '_int_to_hex_int_value_1_1'
                            705 ;nibble_idx                Allocated with name '_int_to_hex_int_nibble_idx_1_1'
                            706 ;nb_nibbles                Allocated with name '_int_to_hex_int_nb_nibbles_1_1'
                            707 ;conv_array                Allocated with name '_int_to_hex_int_conv_array_1_1'
                            708 ;uvalue                    Allocated with name '_int_to_hex_int_uvalue_1_1'
                            709 ;nibble                    Allocated with name '_int_to_hex_int_nibble_2_2'
                            710 ;------------------------------------------------------------
                    021A    711 	G$int_to_hex_int$0$0 ==.
                    021A    712 	C$misc.c$49$1$1 ==.
                            713 ;	../misc.c:49: DPUINT int_to_hex_int(DPUINT value, uint8_t * p_result, DPUINT result_size)
                            714 ;	-----------------------------------------
                            715 ;	 function int_to_hex_int
                            716 ;	-----------------------------------------
   149E                     717 _int_to_hex_int:
                            718 ;	genReceive
   149E AA 83               719 	mov	r2,dph
   14A0 E5 82               720 	mov	a,dpl
   14A2 90 05 4D            721 	mov	dptr,#_int_to_hex_int_value_1_1
   14A5 F0                  722 	movx	@dptr,a
   14A6 A3                  723 	inc	dptr
   14A7 EA                  724 	mov	a,r2
   14A8 F0                  725 	movx	@dptr,a
                    0225    726 	C$misc.c$54$1$1 ==.
                            727 ;	../misc.c:54: nibble_idx = 0;
                            728 ;	genAssign
   14A9 90 05 4F            729 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
   14AC E4                  730 	clr	a
   14AD F0                  731 	movx	@dptr,a
   14AE A3                  732 	inc	dptr
   14AF F0                  733 	movx	@dptr,a
                    022C    734 	C$misc.c$55$1$1 ==.
                            735 ;	../misc.c:55: uvalue = (unsigned int)value;
                            736 ;	genAssign
   14B0 90 05 4D            737 	mov	dptr,#_int_to_hex_int_value_1_1
   14B3 E0                  738 	movx	a,@dptr
   14B4 FA                  739 	mov	r2,a
   14B5 A3                  740 	inc	dptr
   14B6 E0                  741 	movx	a,@dptr
   14B7 FB                  742 	mov	r3,a
                            743 ;	genAssign
   14B8 90 05 5B            744 	mov	dptr,#_int_to_hex_int_uvalue_1_1
   14BB EA                  745 	mov	a,r2
   14BC F0                  746 	movx	@dptr,a
   14BD A3                  747 	inc	dptr
   14BE EB                  748 	mov	a,r3
   14BF F0                  749 	movx	@dptr,a
                    023C    750 	C$misc.c$57$2$2 ==.
                            751 ;	../misc.c:57: do {
   14C0                     752 00105$:
                    023C    753 	C$misc.c$58$2$2 ==.
                            754 ;	../misc.c:58: int nibble = uvalue & 0x0F;
                            755 ;	genAssign
   14C0 90 05 5B            756 	mov	dptr,#_int_to_hex_int_uvalue_1_1
   14C3 E0                  757 	movx	a,@dptr
   14C4 FA                  758 	mov	r2,a
   14C5 A3                  759 	inc	dptr
   14C6 E0                  760 	movx	a,@dptr
   14C7 FB                  761 	mov	r3,a
                            762 ;	genAnd
   14C8 53 02 0F            763 	anl	ar2,#0x0F
   14CB 7B 00               764 	mov	r3,#0x00
                    0249    765 	C$misc.c$60$2$2 ==.
                            766 ;	../misc.c:60: if ( nibble < 10 )
                            767 ;	genAssign
   14CD 8A 04               768 	mov	ar4,r2
   14CF 8B 05               769 	mov	ar5,r3
                            770 ;	genCmpLt
                            771 ;	genCmp
   14D1 C3                  772 	clr	c
   14D2 EC                  773 	mov	a,r4
   14D3 94 0A               774 	subb	a,#0x0A
   14D5 ED                  775 	mov	a,r5
   14D6 64 80               776 	xrl	a,#0x80
   14D8 94 80               777 	subb	a,#0x80
                            778 ;	genIfxJump
   14DA 40 03               779 	jc	00121$
   14DC 02 15 01            780 	ljmp	00102$
   14DF                     781 00121$:
                    025B    782 	C$misc.c$61$2$2 ==.
                            783 ;	../misc.c:61: conv_array[nibble_idx] = nibble + '0';
                            784 ;	genAssign
   14DF 90 05 4F            785 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
   14E2 E0                  786 	movx	a,@dptr
   14E3 FC                  787 	mov	r4,a
   14E4 A3                  788 	inc	dptr
   14E5 E0                  789 	movx	a,@dptr
   14E6 FD                  790 	mov	r5,a
                            791 ;	genPlus
   14E7 E5 04               792 	mov	a,ar4
   14E9 24 53               793 	add	a,#_int_to_hex_int_conv_array_1_1
   14EB F5 82               794 	mov	dpl,a
   14ED E5 05               795 	mov	a,ar5
   14EF 34 05               796 	addc	a,#(_int_to_hex_int_conv_array_1_1 >> 8)
   14F1 F5 83               797 	mov	dph,a
                            798 ;	genAssign
   14F3 8A 04               799 	mov	ar4,r2
   14F5 8B 05               800 	mov	ar5,r3
                            801 ;	genCast
                            802 ;	genPlus
                            803 ;	genPlusIncr
   14F7 74 30               804 	mov	a,#0x30
   14F9 25 04               805 	add	a,ar4
   14FB FC                  806 	mov	r4,a
                            807 ;	genPointerSet
                            808 ;     genFarPointerSet
   14FC EC                  809 	mov	a,r4
   14FD F0                  810 	movx	@dptr,a
   14FE 02 15 1C            811 	ljmp	00103$
   1501                     812 00102$:
                    027D    813 	C$misc.c$63$2$2 ==.
                            814 ;	../misc.c:63: conv_array[nibble_idx] = nibble  - 10 + 'A';
                            815 ;	genAssign
   1501 90 05 4F            816 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
   1504 E0                  817 	movx	a,@dptr
   1505 FC                  818 	mov	r4,a
   1506 A3                  819 	inc	dptr
   1507 E0                  820 	movx	a,@dptr
   1508 FD                  821 	mov	r5,a
                            822 ;	genPlus
   1509 E5 04               823 	mov	a,ar4
   150B 24 53               824 	add	a,#_int_to_hex_int_conv_array_1_1
   150D F5 82               825 	mov	dpl,a
   150F E5 05               826 	mov	a,ar5
   1511 34 05               827 	addc	a,#(_int_to_hex_int_conv_array_1_1 >> 8)
   1513 F5 83               828 	mov	dph,a
                            829 ;	genAssign
                            830 ;	genCast
                            831 ;	genPlus
                            832 ;	genPlusIncr
   1515 74 37               833 	mov	a,#0x37
   1517 25 02               834 	add	a,ar2
   1519 FA                  835 	mov	r2,a
                            836 ;	genPointerSet
                            837 ;     genFarPointerSet
   151A EA                  838 	mov	a,r2
   151B F0                  839 	movx	@dptr,a
   151C                     840 00103$:
                    0298    841 	C$misc.c$64$2$2 ==.
                            842 ;	../misc.c:64: uvalue = (uvalue >> 4);
                            843 ;	genAssign
   151C 90 05 5B            844 	mov	dptr,#_int_to_hex_int_uvalue_1_1
   151F E0                  845 	movx	a,@dptr
   1520 FA                  846 	mov	r2,a
   1521 A3                  847 	inc	dptr
   1522 E0                  848 	movx	a,@dptr
   1523 FB                  849 	mov	r3,a
                            850 ;	genRightShift
                            851 ;	genRightShiftLiteral
                            852 ;	genrshTwo
   1524 EB                  853 	mov	a,r3
   1525 C4                  854 	swap	a
   1526 CA                  855 	xch	a,r2
   1527 C4                  856 	swap	a
   1528 54 0F               857 	anl	a,#0x0f
   152A 6A                  858 	xrl	a,r2
   152B CA                  859 	xch	a,r2
   152C 54 0F               860 	anl	a,#0x0f
   152E CA                  861 	xch	a,r2
   152F 6A                  862 	xrl	a,r2
   1530 CA                  863 	xch	a,r2
   1531 FB                  864 	mov	r3,a
                            865 ;	genAssign
   1532 90 05 5B            866 	mov	dptr,#_int_to_hex_int_uvalue_1_1
   1535 EA                  867 	mov	a,r2
   1536 F0                  868 	movx	@dptr,a
   1537 A3                  869 	inc	dptr
   1538 EB                  870 	mov	a,r3
   1539 F0                  871 	movx	@dptr,a
                    02B6    872 	C$misc.c$65$2$2 ==.
                            873 ;	../misc.c:65: nibble_idx++;
                            874 ;	genAssign
   153A 90 05 4F            875 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
   153D E0                  876 	movx	a,@dptr
   153E FA                  877 	mov	r2,a
   153F A3                  878 	inc	dptr
   1540 E0                  879 	movx	a,@dptr
   1541 FB                  880 	mov	r3,a
                            881 ;	genPlus
   1542 90 05 4F            882 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
                            883 ;	genPlusIncr
   1545 74 01               884 	mov	a,#0x01
   1547 25 02               885 	add	a,ar2
   1549 F0                  886 	movx	@dptr,a
   154A 74 00               887 	mov	a,#0x00
   154C 35 03               888 	addc	a,ar3
   154E A3                  889 	inc	dptr
   154F F0                  890 	movx	@dptr,a
                    02CC    891 	C$misc.c$66$1$1 ==.
                            892 ;	../misc.c:66: } while ( ( nibble_idx < NB_NIBBLES_IN_INT ) && ( uvalue > 0 ) );
                            893 ;	genAssign
   1550 90 05 4F            894 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
   1553 E0                  895 	movx	a,@dptr
   1554 FA                  896 	mov	r2,a
   1555 A3                  897 	inc	dptr
   1556 E0                  898 	movx	a,@dptr
   1557 FB                  899 	mov	r3,a
                            900 ;	genCmpLt
                            901 ;	genCmp
   1558 C3                  902 	clr	c
   1559 EA                  903 	mov	a,r2
   155A 94 08               904 	subb	a,#0x08
   155C EB                  905 	mov	a,r3
   155D 64 80               906 	xrl	a,#0x80
   155F 94 80               907 	subb	a,#0x80
                            908 ;	genIfxJump
   1561 40 03               909 	jc	00122$
   1563 02 15 75            910 	ljmp	00107$
   1566                     911 00122$:
                            912 ;	genAssign
   1566 90 05 5B            913 	mov	dptr,#_int_to_hex_int_uvalue_1_1
   1569 E0                  914 	movx	a,@dptr
   156A FA                  915 	mov	r2,a
   156B A3                  916 	inc	dptr
   156C E0                  917 	movx	a,@dptr
   156D FB                  918 	mov	r3,a
                            919 ;	genIfx
   156E EA                  920 	mov	a,r2
   156F 4B                  921 	orl	a,r3
                            922 ;	genIfxJump
   1570 60 03               923 	jz	00123$
   1572 02 14 C0            924 	ljmp	00105$
   1575                     925 00123$:
   1575                     926 00107$:
                    02F1    927 	C$misc.c$68$1$1 ==.
                            928 ;	../misc.c:68: nb_nibbles = nibble_idx;
                            929 ;	genAssign
   1575 90 05 4F            930 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
   1578 E0                  931 	movx	a,@dptr
   1579 FA                  932 	mov	r2,a
   157A A3                  933 	inc	dptr
   157B E0                  934 	movx	a,@dptr
   157C FB                  935 	mov	r3,a
                            936 ;	genAssign
   157D 90 05 51            937 	mov	dptr,#_int_to_hex_int_nb_nibbles_1_1
   1580 EA                  938 	mov	a,r2
   1581 F0                  939 	movx	@dptr,a
   1582 A3                  940 	inc	dptr
   1583 EB                  941 	mov	a,r3
   1584 F0                  942 	movx	@dptr,a
                    0301    943 	C$misc.c$69$1$1 ==.
                            944 ;	../misc.c:69: for ( nibble_idx = 0; (nibble_idx < nb_nibbles) && (nibble_idx < result_size) ;nibble_idx++ )
                            945 ;	genAssign
   1585 90 05 4F            946 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
   1588 E4                  947 	clr	a
   1589 F0                  948 	movx	@dptr,a
   158A A3                  949 	inc	dptr
   158B F0                  950 	movx	@dptr,a
                            951 ;	genAssign
   158C 90 05 4B            952 	mov	dptr,#_int_to_hex_int_PARM_3
   158F E0                  953 	movx	a,@dptr
   1590 FA                  954 	mov	r2,a
   1591 A3                  955 	inc	dptr
   1592 E0                  956 	movx	a,@dptr
   1593 FB                  957 	mov	r3,a
                            958 ;	genAssign
   1594 90 05 48            959 	mov	dptr,#_int_to_hex_int_PARM_2
   1597 E0                  960 	movx	a,@dptr
   1598 FC                  961 	mov	r4,a
   1599 A3                  962 	inc	dptr
   159A E0                  963 	movx	a,@dptr
   159B FD                  964 	mov	r5,a
   159C A3                  965 	inc	dptr
   159D E0                  966 	movx	a,@dptr
   159E FE                  967 	mov	r6,a
                            968 ;	genAssign
   159F 90 05 51            969 	mov	dptr,#_int_to_hex_int_nb_nibbles_1_1
   15A2 E0                  970 	movx	a,@dptr
   15A3 FF                  971 	mov	r7,a
   15A4 A3                  972 	inc	dptr
   15A5 E0                  973 	movx	a,@dptr
   15A6 F8                  974 	mov	r0,a
   15A7                     975 00109$:
                            976 ;	genAssign
   15A7 90 05 4F            977 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
   15AA E0                  978 	movx	a,@dptr
   15AB F5 25               979 	mov	_int_to_hex_int_sloc0_1_0,a
   15AD A3                  980 	inc	dptr
   15AE E0                  981 	movx	a,@dptr
   15AF F5 26               982 	mov	(_int_to_hex_int_sloc0_1_0 + 1),a
                            983 ;	genCmpLt
                            984 ;	genCmp
   15B1 C3                  985 	clr	c
   15B2 E5 25               986 	mov	a,_int_to_hex_int_sloc0_1_0
   15B4 9F                  987 	subb	a,r7
   15B5 E5 26               988 	mov	a,(_int_to_hex_int_sloc0_1_0 + 1)
   15B7 64 80               989 	xrl	a,#0x80
   15B9 88 F0               990 	mov	b,r0
   15BB 63 F0 80            991 	xrl	b,#0x80
   15BE 95 F0               992 	subb	a,b
                            993 ;	genIfxJump
   15C0 40 03               994 	jc	00124$
   15C2 02 16 2A            995 	ljmp	00112$
   15C5                     996 00124$:
                            997 ;	genIpush
   15C5 C0 04               998 	push	ar4
   15C7 C0 05               999 	push	ar5
   15C9 C0 06              1000 	push	ar6
                           1001 ;	genAssign
   15CB A9 25              1002 	mov	r1,_int_to_hex_int_sloc0_1_0
   15CD AC 26              1003 	mov	r4,(_int_to_hex_int_sloc0_1_0 + 1)
                           1004 ;	genCmpLt
                           1005 ;	genCmp
   15CF C3                 1006 	clr	c
   15D0 E9                 1007 	mov	a,r1
   15D1 9A                 1008 	subb	a,r2
   15D2 EC                 1009 	mov	a,r4
   15D3 9B                 1010 	subb	a,r3
   15D4 E4                 1011 	clr	a
   15D5 33                 1012 	rlc	a
                           1013 ;	genIpop
   15D6 D0 06              1014 	pop	ar6
   15D8 D0 05              1015 	pop	ar5
   15DA D0 04              1016 	pop	ar4
                           1017 ;	genIfx
                           1018 ;	genIfxJump
   15DC 70 03              1019 	jnz	00125$
   15DE 02 16 2A           1020 	ljmp	00112$
   15E1                    1021 00125$:
                    035D   1022 	C$misc.c$71$1$1 ==.
                           1023 ;	../misc.c:71: p_result[nibble_idx] = conv_array[nb_nibbles - nibble_idx - 1];
                           1024 ;	genIpush
   15E1 C0 02              1025 	push	ar2
   15E3 C0 03              1026 	push	ar3
                           1027 ;	genPlus
   15E5 E5 25              1028 	mov	a,_int_to_hex_int_sloc0_1_0
   15E7 25 04              1029 	add	a,ar4
   15E9 F5 27              1030 	mov	_int_to_hex_int_sloc1_1_0,a
   15EB E5 26              1031 	mov	a,(_int_to_hex_int_sloc0_1_0 + 1)
   15ED 35 05              1032 	addc	a,ar5
   15EF F5 28              1033 	mov	(_int_to_hex_int_sloc1_1_0 + 1),a
   15F1 8E 29              1034 	mov	(_int_to_hex_int_sloc1_1_0 + 2),r6
                           1035 ;	genCast
   15F3 8F 02              1036 	mov	ar2,r7
                           1037 ;	genCast
   15F5 AB 25              1038 	mov	r3,_int_to_hex_int_sloc0_1_0
                           1039 ;	genMinus
   15F7 EA                 1040 	mov	a,r2
   15F8 C3                 1041 	clr	c
   15F9 95 03              1042 	subb	a,ar3
                           1043 ;	genMinus
                           1044 ;	genMinusDec
   15FB 14                 1045 	dec	a
                           1046 ;	genPlus
   15FC 24 53              1047 	add	a,#_int_to_hex_int_conv_array_1_1
   15FE F5 82              1048 	mov	dpl,a
   1600 74 05              1049 	mov	a,#(_int_to_hex_int_conv_array_1_1 >> 8)
   1602 34 00              1050 	addc	a,#0x00
   1604 F5 83              1051 	mov	dph,a
                           1052 ;	genPointerGet
                           1053 ;	genFarPointerGet
   1606 E0                 1054 	movx	a,@dptr
   1607 FA                 1055 	mov	r2,a
                           1056 ;	genPointerSet
                           1057 ;	genGenPointerSet
   1608 85 27 82           1058 	mov	dpl,_int_to_hex_int_sloc1_1_0
   160B 85 28 83           1059 	mov	dph,(_int_to_hex_int_sloc1_1_0 + 1)
   160E 85 29 F0           1060 	mov	b,(_int_to_hex_int_sloc1_1_0 + 2)
   1611 EA                 1061 	mov	a,r2
   1612 12 70 A4           1062 	lcall	__gptrput
                    0391   1063 	C$misc.c$69$1$1 ==.
                           1064 ;	../misc.c:69: for ( nibble_idx = 0; (nibble_idx < nb_nibbles) && (nibble_idx < result_size) ;nibble_idx++ )
                           1065 ;	genPlus
   1615 90 05 4F           1066 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
                           1067 ;	genPlusIncr
   1618 74 01              1068 	mov	a,#0x01
   161A 25 25              1069 	add	a,_int_to_hex_int_sloc0_1_0
   161C F0                 1070 	movx	@dptr,a
   161D 74 00              1071 	mov	a,#0x00
   161F 35 26              1072 	addc	a,(_int_to_hex_int_sloc0_1_0 + 1)
   1621 A3                 1073 	inc	dptr
   1622 F0                 1074 	movx	@dptr,a
                           1075 ;	genIpop
   1623 D0 03              1076 	pop	ar3
   1625 D0 02              1077 	pop	ar2
   1627 02 15 A7           1078 	ljmp	00109$
   162A                    1079 00112$:
                    03A6   1080 	C$misc.c$73$1$1 ==.
                           1081 ;	../misc.c:73: return nibble_idx;
                           1082 ;	genAssign
   162A 90 05 4F           1083 	mov	dptr,#_int_to_hex_int_nibble_idx_1_1
   162D E0                 1084 	movx	a,@dptr
   162E FA                 1085 	mov	r2,a
   162F A3                 1086 	inc	dptr
   1630 E0                 1087 	movx	a,@dptr
   1631 FB                 1088 	mov	r3,a
                           1089 ;	genRet
   1632 8A 82              1090 	mov	dpl,r2
   1634 8B 83              1091 	mov	dph,r3
   1636                    1092 00113$:
                    03B2   1093 	C$misc.c$74$1$1 ==.
                    03B2   1094 	XG$int_to_hex_int$0$0 ==.
   1636 22                 1095 	ret
                           1096 ;------------------------------------------------------------
                           1097 ;Allocation info for local variables in function 'int_to_dec_int'
                           1098 ;------------------------------------------------------------
                           1099 ;sloc0                     Allocated with name '_int_to_dec_int_sloc0_1_0'
                           1100 ;p_result                  Allocated with name '_int_to_dec_int_PARM_2'
                           1101 ;value                     Allocated with name '_int_to_dec_int_value_1_1'
                           1102 ;conv_array                Allocated with name '_int_to_dec_int_conv_array_1_1'
                           1103 ;uvalue                    Allocated with name '_int_to_dec_int_uvalue_1_1'
                           1104 ;remainder                 Allocated with name '_int_to_dec_int_remainder_1_1'
                           1105 ;digit_idx                 Allocated with name '_int_to_dec_int_digit_idx_1_1'
                           1106 ;nb_digits                 Allocated with name '_int_to_dec_int_nb_digits_1_1'
                           1107 ;------------------------------------------------------------
                    03B3   1108 	G$int_to_dec_int$0$0 ==.
                    03B3   1109 	C$misc.c$76$1$1 ==.
                           1110 ;	../misc.c:76: DPUINT int_to_dec_int(DPUINT value, uint8_t * p_result)
                           1111 ;	-----------------------------------------
                           1112 ;	 function int_to_dec_int
                           1113 ;	-----------------------------------------
   1637                    1114 _int_to_dec_int:
                           1115 ;	genReceive
   1637 AA 83              1116 	mov	r2,dph
   1639 E5 82              1117 	mov	a,dpl
   163B 90 05 60           1118 	mov	dptr,#_int_to_dec_int_value_1_1
   163E F0                 1119 	movx	@dptr,a
   163F A3                 1120 	inc	dptr
   1640 EA                 1121 	mov	a,r2
   1641 F0                 1122 	movx	@dptr,a
                    03BE   1123 	C$misc.c$84$1$1 ==.
                           1124 ;	../misc.c:84: uvalue = (unsigned int)value;
                           1125 ;	genAssign
   1642 90 05 60           1126 	mov	dptr,#_int_to_dec_int_value_1_1
   1645 E0                 1127 	movx	a,@dptr
   1646 FA                 1128 	mov	r2,a
   1647 A3                 1129 	inc	dptr
   1648 E0                 1130 	movx	a,@dptr
   1649 FB                 1131 	mov	r3,a
                           1132 ;	genAssign
   164A 90 05 6A           1133 	mov	dptr,#_int_to_dec_int_uvalue_1_1
   164D EA                 1134 	mov	a,r2
   164E F0                 1135 	movx	@dptr,a
   164F A3                 1136 	inc	dptr
   1650 EB                 1137 	mov	a,r3
   1651 F0                 1138 	movx	@dptr,a
                    03CE   1139 	C$misc.c$85$1$1 ==.
                           1140 ;	../misc.c:85: digit_idx=0;
                           1141 ;	genAssign
   1652 90 05 6C           1142 	mov	dptr,#_int_to_dec_int_digit_idx_1_1
   1655 E4                 1143 	clr	a
   1656 F0                 1144 	movx	@dptr,a
   1657 A3                 1145 	inc	dptr
   1658 F0                 1146 	movx	@dptr,a
                    03D5   1147 	C$misc.c$86$1$1 ==.
                           1148 ;	../misc.c:86: if (uvalue)
                           1149 ;	genIfx
   1659 EA                 1150 	mov	a,r2
   165A 4B                 1151 	orl	a,r3
                           1152 ;	genIfxJump
   165B 70 03              1153 	jnz	00117$
   165D 02 16 DC           1154 	ljmp	00105$
   1660                    1155 00117$:
                    03DC   1156 	C$misc.c$88$3$3 ==.
                           1157 ;	../misc.c:88: while (uvalue)
   1660                    1158 00101$:
                           1159 ;	genAssign
   1660 90 05 6A           1160 	mov	dptr,#_int_to_dec_int_uvalue_1_1
   1663 E0                 1161 	movx	a,@dptr
   1664 FA                 1162 	mov	r2,a
   1665 A3                 1163 	inc	dptr
   1666 E0                 1164 	movx	a,@dptr
   1667 FB                 1165 	mov	r3,a
                           1166 ;	genIfx
   1668 EA                 1167 	mov	a,r2
   1669 4B                 1168 	orl	a,r3
                           1169 ;	genIfxJump
   166A 70 03              1170 	jnz	00118$
   166C 02 16 EB           1171 	ljmp	00106$
   166F                    1172 00118$:
                    03EB   1173 	C$misc.c$90$1$1 ==.
                           1174 ;	../misc.c:90: remainder = uvalue % 10;
                           1175 ;	genAssign
   166F 90 0D 9C           1176 	mov	dptr,#__moduint_PARM_2
   1672 74 0A              1177 	mov	a,#0x0A
   1674 F0                 1178 	movx	@dptr,a
   1675 E4                 1179 	clr	a
   1676 A3                 1180 	inc	dptr
   1677 F0                 1181 	movx	@dptr,a
                    03F4   1182 	C$misc.c$91$1$1 ==.
                           1183 ;	../misc.c:91: conv_array[digit_idx] = remainder + '0';
                           1184 ;	genCall
   1678 8A 82              1185 	mov	dpl,r2
   167A 8B 83              1186 	mov	dph,r3
   167C C0 02              1187 	push	ar2
   167E C0 03              1188 	push	ar3
   1680 12 71 49           1189 	lcall	__moduint
   1683 AC 82              1190 	mov	r4,dpl
   1685 AD 83              1191 	mov	r5,dph
   1687 D0 03              1192 	pop	ar3
   1689 D0 02              1193 	pop	ar2
                           1194 ;	genAssign
   168B 90 05 6C           1195 	mov	dptr,#_int_to_dec_int_digit_idx_1_1
   168E E0                 1196 	movx	a,@dptr
   168F FE                 1197 	mov	r6,a
   1690 A3                 1198 	inc	dptr
   1691 E0                 1199 	movx	a,@dptr
   1692 FF                 1200 	mov	r7,a
                           1201 ;	genPlus
   1693 E5 06              1202 	mov	a,ar6
   1695 24 62              1203 	add	a,#_int_to_dec_int_conv_array_1_1
   1697 F5 82              1204 	mov	dpl,a
   1699 E5 07              1205 	mov	a,ar7
   169B 34 05              1206 	addc	a,#(_int_to_dec_int_conv_array_1_1 >> 8)
   169D F5 83              1207 	mov	dph,a
                           1208 ;	genCast
                           1209 ;	genPlus
                           1210 ;	genPlusIncr
   169F 74 30              1211 	mov	a,#0x30
   16A1 25 04              1212 	add	a,ar4
   16A3 FC                 1213 	mov	r4,a
                           1214 ;	genPointerSet
                           1215 ;     genFarPointerSet
   16A4 EC                 1216 	mov	a,r4
   16A5 F0                 1217 	movx	@dptr,a
                    0422   1218 	C$misc.c$92$1$1 ==.
                           1219 ;	../misc.c:92: uvalue /= 10;
                           1220 ;	genAssign
   16A6 90 0D 8F           1221 	mov	dptr,#__divuint_PARM_2
   16A9 74 0A              1222 	mov	a,#0x0A
   16AB F0                 1223 	movx	@dptr,a
   16AC E4                 1224 	clr	a
   16AD A3                 1225 	inc	dptr
   16AE F0                 1226 	movx	@dptr,a
                           1227 ;	genCall
   16AF 8A 82              1228 	mov	dpl,r2
   16B1 8B 83              1229 	mov	dph,r3
   16B3 C0 06              1230 	push	ar6
   16B5 C0 07              1231 	push	ar7
   16B7 12 70 0A           1232 	lcall	__divuint
   16BA E5 82              1233 	mov	a,dpl
   16BC 85 83 F0           1234 	mov	b,dph
   16BF D0 07              1235 	pop	ar7
   16C1 D0 06              1236 	pop	ar6
                           1237 ;	genAssign
   16C3 90 05 6A           1238 	mov	dptr,#_int_to_dec_int_uvalue_1_1
   16C6 F0                 1239 	movx	@dptr,a
   16C7 A3                 1240 	inc	dptr
   16C8 E5 F0              1241 	mov	a,b
   16CA F0                 1242 	movx	@dptr,a
                    0447   1243 	C$misc.c$93$3$3 ==.
                           1244 ;	../misc.c:93: digit_idx++;
                           1245 ;	genPlus
   16CB 90 05 6C           1246 	mov	dptr,#_int_to_dec_int_digit_idx_1_1
                           1247 ;	genPlusIncr
   16CE 74 01              1248 	mov	a,#0x01
   16D0 25 06              1249 	add	a,ar6
   16D2 F0                 1250 	movx	@dptr,a
   16D3 74 00              1251 	mov	a,#0x00
   16D5 35 07              1252 	addc	a,ar7
   16D7 A3                 1253 	inc	dptr
   16D8 F0                 1254 	movx	@dptr,a
   16D9 02 16 60           1255 	ljmp	00101$
   16DC                    1256 00105$:
                    0458   1257 	C$misc.c$98$2$4 ==.
                           1258 ;	../misc.c:98: conv_array[digit_idx] = '0';
                           1259 ;	genPointerSet
                           1260 ;     genFarPointerSet
   16DC 90 05 62           1261 	mov	dptr,#_int_to_dec_int_conv_array_1_1
   16DF 74 30              1262 	mov	a,#0x30
   16E1 F0                 1263 	movx	@dptr,a
                    045E   1264 	C$misc.c$99$2$4 ==.
                           1265 ;	../misc.c:99: digit_idx++;
                           1266 ;	genAssign
   16E2 90 05 6C           1267 	mov	dptr,#_int_to_dec_int_digit_idx_1_1
   16E5 74 01              1268 	mov	a,#0x01
   16E7 F0                 1269 	movx	@dptr,a
   16E8 E4                 1270 	clr	a
   16E9 A3                 1271 	inc	dptr
   16EA F0                 1272 	movx	@dptr,a
   16EB                    1273 00106$:
                    0467   1274 	C$misc.c$103$1$1 ==.
                           1275 ;	../misc.c:103: nb_digits = digit_idx;
                           1276 ;	genAssign
   16EB 90 05 6C           1277 	mov	dptr,#_int_to_dec_int_digit_idx_1_1
   16EE E0                 1278 	movx	a,@dptr
   16EF FA                 1279 	mov	r2,a
   16F0 A3                 1280 	inc	dptr
   16F1 E0                 1281 	movx	a,@dptr
   16F2 FB                 1282 	mov	r3,a
                           1283 ;	genAssign
   16F3 90 05 6E           1284 	mov	dptr,#_int_to_dec_int_nb_digits_1_1
   16F6 EA                 1285 	mov	a,r2
   16F7 F0                 1286 	movx	@dptr,a
   16F8 A3                 1287 	inc	dptr
   16F9 EB                 1288 	mov	a,r3
   16FA F0                 1289 	movx	@dptr,a
                    0477   1290 	C$misc.c$104$1$1 ==.
                           1291 ;	../misc.c:104: for ( digit_idx = 0; (digit_idx < nb_digits); digit_idx++ )
                           1292 ;	genAssign
   16FB 90 05 6C           1293 	mov	dptr,#_int_to_dec_int_digit_idx_1_1
   16FE E4                 1294 	clr	a
   16FF F0                 1295 	movx	@dptr,a
   1700 A3                 1296 	inc	dptr
   1701 F0                 1297 	movx	@dptr,a
                           1298 ;	genAssign
   1702 90 05 5D           1299 	mov	dptr,#_int_to_dec_int_PARM_2
   1705 E0                 1300 	movx	a,@dptr
   1706 F5 2A              1301 	mov	_int_to_dec_int_sloc0_1_0,a
   1708 A3                 1302 	inc	dptr
   1709 E0                 1303 	movx	a,@dptr
   170A F5 2B              1304 	mov	(_int_to_dec_int_sloc0_1_0 + 1),a
   170C A3                 1305 	inc	dptr
   170D E0                 1306 	movx	a,@dptr
   170E F5 2C              1307 	mov	(_int_to_dec_int_sloc0_1_0 + 2),a
                           1308 ;	genAssign
   1710 90 05 6E           1309 	mov	dptr,#_int_to_dec_int_nb_digits_1_1
   1713 E0                 1310 	movx	a,@dptr
   1714 FD                 1311 	mov	r5,a
   1715 A3                 1312 	inc	dptr
   1716 E0                 1313 	movx	a,@dptr
   1717 FE                 1314 	mov	r6,a
   1718                    1315 00107$:
                           1316 ;	genAssign
   1718 90 05 6C           1317 	mov	dptr,#_int_to_dec_int_digit_idx_1_1
   171B E0                 1318 	movx	a,@dptr
   171C FF                 1319 	mov	r7,a
   171D A3                 1320 	inc	dptr
   171E E0                 1321 	movx	a,@dptr
   171F F8                 1322 	mov	r0,a
                           1323 ;	genCmpLt
                           1324 ;	genCmp
   1720 C3                 1325 	clr	c
   1721 EF                 1326 	mov	a,r7
   1722 9D                 1327 	subb	a,r5
   1723 E8                 1328 	mov	a,r0
   1724 9E                 1329 	subb	a,r6
                           1330 ;	genIfxJump
   1725 40 03              1331 	jc	00119$
   1727 02 17 6E           1332 	ljmp	00110$
   172A                    1333 00119$:
                    04A6   1334 	C$misc.c$106$2$5 ==.
                           1335 ;	../misc.c:106: p_result[digit_idx] = conv_array[nb_digits - digit_idx - 1];
                           1336 ;	genPlus
   172A E5 07              1337 	mov	a,ar7
   172C 25 2A              1338 	add	a,_int_to_dec_int_sloc0_1_0
   172E F9                 1339 	mov	r1,a
   172F E5 00              1340 	mov	a,ar0
   1731 35 2B              1341 	addc	a,(_int_to_dec_int_sloc0_1_0 + 1)
   1733 FA                 1342 	mov	r2,a
   1734 AB 2C              1343 	mov	r3,(_int_to_dec_int_sloc0_1_0 + 2)
                           1344 ;	genCast
   1736 8D 04              1345 	mov	ar4,r5
                           1346 ;	genIpush
   1738 C0 05              1347 	push	ar5
   173A C0 06              1348 	push	ar6
                           1349 ;	genCast
   173C 8F 05              1350 	mov	ar5,r7
                           1351 ;	genMinus
   173E EC                 1352 	mov	a,r4
   173F C3                 1353 	clr	c
   1740 95 05              1354 	subb	a,ar5
                           1355 ;	genMinus
                           1356 ;	genMinusDec
   1742 14                 1357 	dec	a
                           1358 ;	genPlus
   1743 24 62              1359 	add	a,#_int_to_dec_int_conv_array_1_1
   1745 F5 82              1360 	mov	dpl,a
   1747 74 05              1361 	mov	a,#(_int_to_dec_int_conv_array_1_1 >> 8)
   1749 34 00              1362 	addc	a,#0x00
   174B F5 83              1363 	mov	dph,a
                           1364 ;	genPointerGet
                           1365 ;	genFarPointerGet
   174D E0                 1366 	movx	a,@dptr
   174E FC                 1367 	mov	r4,a
                           1368 ;	genPointerSet
                           1369 ;	genGenPointerSet
   174F 89 82              1370 	mov	dpl,r1
   1751 8A 83              1371 	mov	dph,r2
   1753 8B F0              1372 	mov	b,r3
   1755 EC                 1373 	mov	a,r4
   1756 12 70 A4           1374 	lcall	__gptrput
                    04D5   1375 	C$misc.c$104$1$1 ==.
                           1376 ;	../misc.c:104: for ( digit_idx = 0; (digit_idx < nb_digits); digit_idx++ )
                           1377 ;	genPlus
   1759 90 05 6C           1378 	mov	dptr,#_int_to_dec_int_digit_idx_1_1
                           1379 ;	genPlusIncr
   175C 74 01              1380 	mov	a,#0x01
   175E 25 07              1381 	add	a,ar7
   1760 F0                 1382 	movx	@dptr,a
   1761 74 00              1383 	mov	a,#0x00
   1763 35 00              1384 	addc	a,ar0
   1765 A3                 1385 	inc	dptr
   1766 F0                 1386 	movx	@dptr,a
                           1387 ;	genIpop
   1767 D0 06              1388 	pop	ar6
   1769 D0 05              1389 	pop	ar5
   176B 02 17 18           1390 	ljmp	00107$
   176E                    1391 00110$:
                    04EA   1392 	C$misc.c$108$1$1 ==.
                           1393 ;	../misc.c:108: return digit_idx;
                           1394 ;	genRet
   176E 8F 82              1395 	mov	dpl,r7
   1770 88 83              1396 	mov	dph,r0
   1772                    1397 00111$:
                    04EE   1398 	C$misc.c$109$1$1 ==.
                    04EE   1399 	XG$int_to_dec_int$0$0 ==.
   1772 22                 1400 	ret
                           1401 ;------------------------------------------------------------
                           1402 ;Allocation info for local variables in function 'xatoi'
                           1403 ;------------------------------------------------------------
                           1404 ;sloc0                     Allocated with name '_xatoi_sloc0_1_0'
                           1405 ;res                       Allocated with name '_xatoi_PARM_2'
                           1406 ;str                       Allocated with name '_xatoi_str_1_1'
                           1407 ;val                       Allocated with name '_xatoi_val_1_1'
                           1408 ;c                         Allocated with name '_xatoi_c_1_1'
                           1409 ;r                         Allocated with name '_xatoi_r_1_1'
                           1410 ;s                         Allocated with name '_xatoi_s_1_1'
                           1411 ;------------------------------------------------------------
                    04EF   1412 	G$xatoi$0$0 ==.
                    04EF   1413 	C$misc.c$116$1$1 ==.
                           1414 ;	../misc.c:116: int xatoi (                                             /* 0:Failed, 1:Successful */
                           1415 ;	-----------------------------------------
                           1416 ;	 function xatoi
                           1417 ;	-----------------------------------------
   1773                    1418 _xatoi:
                           1419 ;	genReceive
   1773 AA F0              1420 	mov	r2,b
   1775 AB 83              1421 	mov	r3,dph
   1777 E5 82              1422 	mov	a,dpl
   1779 90 05 73           1423 	mov	dptr,#_xatoi_str_1_1
   177C F0                 1424 	movx	@dptr,a
   177D A3                 1425 	inc	dptr
   177E EB                 1426 	mov	a,r3
   177F F0                 1427 	movx	@dptr,a
   1780 A3                 1428 	inc	dptr
   1781 EA                 1429 	mov	a,r2
   1782 F0                 1430 	movx	@dptr,a
                    04FF   1431 	C$misc.c$122$1$1 ==.
                           1432 ;	../misc.c:122: unsigned char c, r, s = 0;
                           1433 ;	genAssign
   1783 90 05 7C           1434 	mov	dptr,#_xatoi_s_1_1
   1786 74 00              1435 	mov	a,#0x00
   1788 F0                 1436 	movx	@dptr,a
                    0505   1437 	C$misc.c$125$1$1 ==.
                           1438 ;	../misc.c:125: *res = 0;
                           1439 ;	genAssign
   1789 90 05 70           1440 	mov	dptr,#_xatoi_PARM_2
   178C E0                 1441 	movx	a,@dptr
   178D FA                 1442 	mov	r2,a
   178E A3                 1443 	inc	dptr
   178F E0                 1444 	movx	a,@dptr
   1790 FB                 1445 	mov	r3,a
   1791 A3                 1446 	inc	dptr
   1792 E0                 1447 	movx	a,@dptr
   1793 FC                 1448 	mov	r4,a
                           1449 ;	genPointerSet
                           1450 ;	genGenPointerSet
   1794 8A 82              1451 	mov	dpl,r2
   1796 8B 83              1452 	mov	dph,r3
   1798 8C F0              1453 	mov	b,r4
   179A 74 00              1454 	mov	a,#0x00
   179C 12 70 A4           1455 	lcall	__gptrput
   179F A3                 1456 	inc	dptr
   17A0 74 00              1457 	mov	a,#0x00
   17A2 12 70 A4           1458 	lcall	__gptrput
                    0521   1459 	C$misc.c$127$1$1 ==.
                           1460 ;	../misc.c:127: while ((c = **str) == ' ') (*str)++;               /* Skip leading spaces */
   17A5                    1461 00101$:
                           1462 ;	genIpush
   17A5 C0 02              1463 	push	ar2
   17A7 C0 03              1464 	push	ar3
   17A9 C0 04              1465 	push	ar4
                           1466 ;	genAssign
   17AB 90 05 73           1467 	mov	dptr,#_xatoi_str_1_1
   17AE E0                 1468 	movx	a,@dptr
   17AF FD                 1469 	mov	r5,a
   17B0 A3                 1470 	inc	dptr
   17B1 E0                 1471 	movx	a,@dptr
   17B2 FE                 1472 	mov	r6,a
   17B3 A3                 1473 	inc	dptr
   17B4 E0                 1474 	movx	a,@dptr
   17B5 FF                 1475 	mov	r7,a
                           1476 ;	genPointerGet
                           1477 ;	genGenPointerGet
   17B6 8D 82              1478 	mov	dpl,r5
   17B8 8E 83              1479 	mov	dph,r6
   17BA 8F F0              1480 	mov	b,r7
   17BC 12 71 F6           1481 	lcall	__gptrget
   17BF F8                 1482 	mov	r0,a
   17C0 A3                 1483 	inc	dptr
   17C1 12 71 F6           1484 	lcall	__gptrget
   17C4 F9                 1485 	mov	r1,a
   17C5 A3                 1486 	inc	dptr
   17C6 12 71 F6           1487 	lcall	__gptrget
   17C9 FA                 1488 	mov	r2,a
                           1489 ;	genPointerGet
                           1490 ;	genGenPointerGet
   17CA 88 82              1491 	mov	dpl,r0
   17CC 89 83              1492 	mov	dph,r1
   17CE 8A F0              1493 	mov	b,r2
   17D0 12 71 F6           1494 	lcall	__gptrget
   17D3 F8                 1495 	mov	r0,a
                           1496 ;	genAssign
   17D4 90 05 7A           1497 	mov	dptr,#_xatoi_c_1_1
   17D7 E8                 1498 	mov	a,r0
   17D8 F0                 1499 	movx	@dptr,a
                           1500 ;	genCmpEq
                           1501 ;	gencjne
                           1502 ;	gencjneshort
   17D9 B8 20 04           1503 	cjne	r0,#0x20,00155$
   17DC 74 01              1504 	mov	a,#0x01
   17DE 80 01              1505 	sjmp	00156$
   17E0                    1506 00155$:
   17E0 E4                 1507 	clr	a
   17E1                    1508 00156$:
                           1509 ;	genIpop
   17E1 D0 04              1510 	pop	ar4
   17E3 D0 03              1511 	pop	ar3
   17E5 D0 02              1512 	pop	ar2
                           1513 ;	genIfx
                           1514 ;	genIfxJump
   17E7 70 03              1515 	jnz	00157$
   17E9 02 18 28           1516 	ljmp	00103$
   17EC                    1517 00157$:
                           1518 ;	genIpush
   17EC C0 02              1519 	push	ar2
   17EE C0 03              1520 	push	ar3
   17F0 C0 04              1521 	push	ar4
                           1522 ;	genPointerGet
                           1523 ;	genGenPointerGet
   17F2 8D 82              1524 	mov	dpl,r5
   17F4 8E 83              1525 	mov	dph,r6
   17F6 8F F0              1526 	mov	b,r7
   17F8 12 71 F6           1527 	lcall	__gptrget
   17FB F8                 1528 	mov	r0,a
   17FC A3                 1529 	inc	dptr
   17FD 12 71 F6           1530 	lcall	__gptrget
   1800 F9                 1531 	mov	r1,a
   1801 A3                 1532 	inc	dptr
   1802 12 71 F6           1533 	lcall	__gptrget
   1805 FA                 1534 	mov	r2,a
                           1535 ;	genPlus
                           1536 ;	genPlusIncr
   1806 08                 1537 	inc	r0
   1807 B8 00 01           1538 	cjne	r0,#0x00,00158$
   180A 09                 1539 	inc	r1
   180B                    1540 00158$:
                           1541 ;	genPointerSet
                           1542 ;	genGenPointerSet
   180B 8D 82              1543 	mov	dpl,r5
   180D 8E 83              1544 	mov	dph,r6
   180F 8F F0              1545 	mov	b,r7
   1811 E8                 1546 	mov	a,r0
   1812 12 70 A4           1547 	lcall	__gptrput
   1815 A3                 1548 	inc	dptr
   1816 E9                 1549 	mov	a,r1
   1817 12 70 A4           1550 	lcall	__gptrput
   181A A3                 1551 	inc	dptr
   181B EA                 1552 	mov	a,r2
   181C 12 70 A4           1553 	lcall	__gptrput
                           1554 ;	genIpop
   181F D0 04              1555 	pop	ar4
   1821 D0 03              1556 	pop	ar3
   1823 D0 02              1557 	pop	ar2
   1825 02 17 A5           1558 	ljmp	00101$
   1828                    1559 00103$:
                    05A4   1560 	C$misc.c$129$1$1 ==.
                           1561 ;	../misc.c:129: if (c == '-') {                         /* negative? */
                           1562 ;	genCmpEq
                           1563 ;	gencjneshort
   1828 B8 2D 02           1564 	cjne	r0,#0x2D,00159$
   182B 80 03              1565 	sjmp	00160$
   182D                    1566 00159$:
   182D 02 18 7E           1567 	ljmp	00105$
   1830                    1568 00160$:
                    05AC   1569 	C$misc.c$130$1$1 ==.
                           1570 ;	../misc.c:130: s = 1;
                           1571 ;	genIpush
   1830 C0 02              1572 	push	ar2
   1832 C0 03              1573 	push	ar3
   1834 C0 04              1574 	push	ar4
                           1575 ;	genAssign
   1836 90 05 7C           1576 	mov	dptr,#_xatoi_s_1_1
   1839 74 01              1577 	mov	a,#0x01
   183B F0                 1578 	movx	@dptr,a
                    05B8   1579 	C$misc.c$131$2$2 ==.
                           1580 ;	../misc.c:131: c = *(++(*str));
                           1581 ;	genPointerGet
                           1582 ;	genGenPointerGet
   183C 8D 82              1583 	mov	dpl,r5
   183E 8E 83              1584 	mov	dph,r6
   1840 8F F0              1585 	mov	b,r7
   1842 12 71 F6           1586 	lcall	__gptrget
   1845 F8                 1587 	mov	r0,a
   1846 A3                 1588 	inc	dptr
   1847 12 71 F6           1589 	lcall	__gptrget
   184A F9                 1590 	mov	r1,a
   184B A3                 1591 	inc	dptr
   184C 12 71 F6           1592 	lcall	__gptrget
   184F FA                 1593 	mov	r2,a
                           1594 ;	genPlus
                           1595 ;	genPlusIncr
   1850 08                 1596 	inc	r0
   1851 B8 00 01           1597 	cjne	r0,#0x00,00161$
   1854 09                 1598 	inc	r1
   1855                    1599 00161$:
                           1600 ;	genPointerSet
                           1601 ;	genGenPointerSet
   1855 8D 82              1602 	mov	dpl,r5
   1857 8E 83              1603 	mov	dph,r6
   1859 8F F0              1604 	mov	b,r7
   185B E8                 1605 	mov	a,r0
   185C 12 70 A4           1606 	lcall	__gptrput
   185F A3                 1607 	inc	dptr
   1860 E9                 1608 	mov	a,r1
   1861 12 70 A4           1609 	lcall	__gptrput
   1864 A3                 1610 	inc	dptr
   1865 EA                 1611 	mov	a,r2
   1866 12 70 A4           1612 	lcall	__gptrput
                           1613 ;	genPointerGet
                           1614 ;	genGenPointerGet
   1869 88 82              1615 	mov	dpl,r0
   186B 89 83              1616 	mov	dph,r1
   186D 8A F0              1617 	mov	b,r2
   186F 12 71 F6           1618 	lcall	__gptrget
   1872 F8                 1619 	mov	r0,a
                           1620 ;	genAssign
   1873 90 05 7A           1621 	mov	dptr,#_xatoi_c_1_1
   1876 E8                 1622 	mov	a,r0
   1877 F0                 1623 	movx	@dptr,a
                    05F4   1624 	C$misc.c$172$1$1 ==.
                           1625 ;	../misc.c:172: return 1;
                           1626 ;	genIpop
   1878 D0 04              1627 	pop	ar4
   187A D0 03              1628 	pop	ar3
   187C D0 02              1629 	pop	ar2
                    05FA   1630 	C$misc.c$131$1$1 ==.
                           1631 ;	../misc.c:131: c = *(++(*str));
   187E                    1632 00105$:
                    05FA   1633 	C$misc.c$134$1$1 ==.
                           1634 ;	../misc.c:134: if (c == '0') {
                           1635 ;	genAssign
   187E 90 05 7A           1636 	mov	dptr,#_xatoi_c_1_1
   1881 E0                 1637 	movx	a,@dptr
   1882 FD                 1638 	mov	r5,a
                           1639 ;	genCmpEq
                           1640 ;	gencjneshort
   1883 BD 30 02           1641 	cjne	r5,#0x30,00162$
   1886 80 03              1642 	sjmp	00163$
   1888                    1643 00162$:
   1888 02 19 EC           1644 	ljmp	00121$
   188B                    1645 00163$:
                    0607   1646 	C$misc.c$135$1$1 ==.
                           1647 ;	../misc.c:135: c = *(++(*str));
                           1648 ;	genIpush
   188B C0 02              1649 	push	ar2
   188D C0 03              1650 	push	ar3
   188F C0 04              1651 	push	ar4
                           1652 ;	genAssign
   1891 90 05 73           1653 	mov	dptr,#_xatoi_str_1_1
   1894 E0                 1654 	movx	a,@dptr
   1895 FE                 1655 	mov	r6,a
   1896 A3                 1656 	inc	dptr
   1897 E0                 1657 	movx	a,@dptr
   1898 FF                 1658 	mov	r7,a
   1899 A3                 1659 	inc	dptr
   189A E0                 1660 	movx	a,@dptr
   189B F8                 1661 	mov	r0,a
                           1662 ;	genPointerGet
                           1663 ;	genGenPointerGet
   189C 8E 82              1664 	mov	dpl,r6
   189E 8F 83              1665 	mov	dph,r7
   18A0 88 F0              1666 	mov	b,r0
   18A2 12 71 F6           1667 	lcall	__gptrget
   18A5 F9                 1668 	mov	r1,a
   18A6 A3                 1669 	inc	dptr
   18A7 12 71 F6           1670 	lcall	__gptrget
   18AA FA                 1671 	mov	r2,a
   18AB A3                 1672 	inc	dptr
   18AC 12 71 F6           1673 	lcall	__gptrget
   18AF FB                 1674 	mov	r3,a
                           1675 ;	genPlus
                           1676 ;	genPlusIncr
   18B0 09                 1677 	inc	r1
   18B1 B9 00 01           1678 	cjne	r1,#0x00,00164$
   18B4 0A                 1679 	inc	r2
   18B5                    1680 00164$:
                           1681 ;	genPointerSet
                           1682 ;	genGenPointerSet
   18B5 8E 82              1683 	mov	dpl,r6
   18B7 8F 83              1684 	mov	dph,r7
   18B9 88 F0              1685 	mov	b,r0
   18BB E9                 1686 	mov	a,r1
   18BC 12 70 A4           1687 	lcall	__gptrput
   18BF A3                 1688 	inc	dptr
   18C0 EA                 1689 	mov	a,r2
   18C1 12 70 A4           1690 	lcall	__gptrput
   18C4 A3                 1691 	inc	dptr
   18C5 EB                 1692 	mov	a,r3
   18C6 12 70 A4           1693 	lcall	__gptrput
                           1694 ;	genPointerGet
                           1695 ;	genGenPointerGet
   18C9 89 82              1696 	mov	dpl,r1
   18CB 8A 83              1697 	mov	dph,r2
   18CD 8B F0              1698 	mov	b,r3
   18CF 12 71 F6           1699 	lcall	__gptrget
   18D2 FD                 1700 	mov	r5,a
                           1701 ;	genAssign
   18D3 90 05 7A           1702 	mov	dptr,#_xatoi_c_1_1
   18D6 ED                 1703 	mov	a,r5
   18D7 F0                 1704 	movx	@dptr,a
                    0654   1705 	C$misc.c$136$2$3 ==.
                           1706 ;	../misc.c:136: switch (c) {
                           1707 ;	genCmpEq
                           1708 ;	gencjne
                           1709 ;	gencjneshort
   18D8 BD 42 04           1710 	cjne	r5,#0x42,00165$
   18DB 74 01              1711 	mov	a,#0x01
   18DD 80 01              1712 	sjmp	00166$
   18DF                    1713 00165$:
   18DF E4                 1714 	clr	a
   18E0                    1715 00166$:
                           1716 ;	genIpop
   18E0 D0 04              1717 	pop	ar4
   18E2 D0 03              1718 	pop	ar3
   18E4 D0 02              1719 	pop	ar2
                           1720 ;	genIfx
                           1721 ;	genIfxJump
   18E6 60 03              1722 	jz	00167$
   18E8 02 19 5B           1723 	ljmp	00109$
   18EB                    1724 00167$:
                           1725 ;	genCmpEq
                           1726 ;	gencjneshort
   18EB BD 58 03           1727 	cjne	r5,#0x58,00168$
   18EE 02 18 FF           1728 	ljmp	00107$
   18F1                    1729 00168$:
                           1730 ;	genCmpEq
                           1731 ;	gencjneshort
   18F1 BD 62 03           1732 	cjne	r5,#0x62,00169$
   18F4 02 19 5B           1733 	ljmp	00109$
   18F7                    1734 00169$:
                           1735 ;	genCmpEq
                           1736 ;	gencjneshort
   18F7 BD 78 02           1737 	cjne	r5,#0x78,00170$
   18FA 80 03              1738 	sjmp	00171$
   18FC                    1739 00170$:
   18FC 02 19 B7           1740 	ljmp	00110$
   18FF                    1741 00171$:
                    067B   1742 	C$misc.c$138$3$4 ==.
                           1743 ;	../misc.c:138: case 'X':
   18FF                    1744 00107$:
                    067B   1745 	C$misc.c$140$1$1 ==.
                           1746 ;	../misc.c:140: r = 16; c = *(++(*str));
                           1747 ;	genIpush
   18FF C0 02              1748 	push	ar2
   1901 C0 03              1749 	push	ar3
   1903 C0 04              1750 	push	ar4
                           1751 ;	genAssign
   1905 90 05 7B           1752 	mov	dptr,#_xatoi_r_1_1
   1908 74 10              1753 	mov	a,#0x10
   190A F0                 1754 	movx	@dptr,a
                           1755 ;	genAssign
   190B 90 05 73           1756 	mov	dptr,#_xatoi_str_1_1
   190E E0                 1757 	movx	a,@dptr
   190F FE                 1758 	mov	r6,a
   1910 A3                 1759 	inc	dptr
   1911 E0                 1760 	movx	a,@dptr
   1912 FF                 1761 	mov	r7,a
   1913 A3                 1762 	inc	dptr
   1914 E0                 1763 	movx	a,@dptr
   1915 F8                 1764 	mov	r0,a
                           1765 ;	genPointerGet
                           1766 ;	genGenPointerGet
   1916 8E 82              1767 	mov	dpl,r6
   1918 8F 83              1768 	mov	dph,r7
   191A 88 F0              1769 	mov	b,r0
   191C 12 71 F6           1770 	lcall	__gptrget
   191F F9                 1771 	mov	r1,a
   1920 A3                 1772 	inc	dptr
   1921 12 71 F6           1773 	lcall	__gptrget
   1924 FA                 1774 	mov	r2,a
   1925 A3                 1775 	inc	dptr
   1926 12 71 F6           1776 	lcall	__gptrget
   1929 FB                 1777 	mov	r3,a
                           1778 ;	genPlus
                           1779 ;	genPlusIncr
   192A 09                 1780 	inc	r1
   192B B9 00 01           1781 	cjne	r1,#0x00,00172$
   192E 0A                 1782 	inc	r2
   192F                    1783 00172$:
                           1784 ;	genPointerSet
                           1785 ;	genGenPointerSet
   192F 8E 82              1786 	mov	dpl,r6
   1931 8F 83              1787 	mov	dph,r7
   1933 88 F0              1788 	mov	b,r0
   1935 E9                 1789 	mov	a,r1
   1936 12 70 A4           1790 	lcall	__gptrput
   1939 A3                 1791 	inc	dptr
   193A EA                 1792 	mov	a,r2
   193B 12 70 A4           1793 	lcall	__gptrput
   193E A3                 1794 	inc	dptr
   193F EB                 1795 	mov	a,r3
   1940 12 70 A4           1796 	lcall	__gptrput
                           1797 ;	genPointerGet
                           1798 ;	genGenPointerGet
   1943 89 82              1799 	mov	dpl,r1
   1945 8A 83              1800 	mov	dph,r2
   1947 8B F0              1801 	mov	b,r3
   1949 12 71 F6           1802 	lcall	__gptrget
   194C F9                 1803 	mov	r1,a
                           1804 ;	genAssign
   194D 90 05 7A           1805 	mov	dptr,#_xatoi_c_1_1
   1950 E9                 1806 	mov	a,r1
   1951 F0                 1807 	movx	@dptr,a
                    06CE   1808 	C$misc.c$141$1$1 ==.
                           1809 ;	../misc.c:141: break;
                           1810 ;	genIpop
   1952 D0 04              1811 	pop	ar4
   1954 D0 03              1812 	pop	ar3
   1956 D0 02              1813 	pop	ar2
   1958 02 1A 0C           1814 	ljmp	00122$
                    06D7   1815 	C$misc.c$143$3$4 ==.
                           1816 ;	../misc.c:143: case 'B':
   195B                    1817 00109$:
                    06D7   1818 	C$misc.c$145$1$1 ==.
                           1819 ;	../misc.c:145: r = 2; c = *(++(*str));
                           1820 ;	genIpush
   195B C0 02              1821 	push	ar2
   195D C0 03              1822 	push	ar3
   195F C0 04              1823 	push	ar4
                           1824 ;	genAssign
   1961 90 05 7B           1825 	mov	dptr,#_xatoi_r_1_1
   1964 74 02              1826 	mov	a,#0x02
   1966 F0                 1827 	movx	@dptr,a
                           1828 ;	genAssign
   1967 90 05 73           1829 	mov	dptr,#_xatoi_str_1_1
   196A E0                 1830 	movx	a,@dptr
   196B FE                 1831 	mov	r6,a
   196C A3                 1832 	inc	dptr
   196D E0                 1833 	movx	a,@dptr
   196E FF                 1834 	mov	r7,a
   196F A3                 1835 	inc	dptr
   1970 E0                 1836 	movx	a,@dptr
   1971 F8                 1837 	mov	r0,a
                           1838 ;	genPointerGet
                           1839 ;	genGenPointerGet
   1972 8E 82              1840 	mov	dpl,r6
   1974 8F 83              1841 	mov	dph,r7
   1976 88 F0              1842 	mov	b,r0
   1978 12 71 F6           1843 	lcall	__gptrget
   197B F9                 1844 	mov	r1,a
   197C A3                 1845 	inc	dptr
   197D 12 71 F6           1846 	lcall	__gptrget
   1980 FA                 1847 	mov	r2,a
   1981 A3                 1848 	inc	dptr
   1982 12 71 F6           1849 	lcall	__gptrget
   1985 FB                 1850 	mov	r3,a
                           1851 ;	genPlus
                           1852 ;	genPlusIncr
   1986 09                 1853 	inc	r1
   1987 B9 00 01           1854 	cjne	r1,#0x00,00173$
   198A 0A                 1855 	inc	r2
   198B                    1856 00173$:
                           1857 ;	genPointerSet
                           1858 ;	genGenPointerSet
   198B 8E 82              1859 	mov	dpl,r6
   198D 8F 83              1860 	mov	dph,r7
   198F 88 F0              1861 	mov	b,r0
   1991 E9                 1862 	mov	a,r1
   1992 12 70 A4           1863 	lcall	__gptrput
   1995 A3                 1864 	inc	dptr
   1996 EA                 1865 	mov	a,r2
   1997 12 70 A4           1866 	lcall	__gptrput
   199A A3                 1867 	inc	dptr
   199B EB                 1868 	mov	a,r3
   199C 12 70 A4           1869 	lcall	__gptrput
                           1870 ;	genPointerGet
                           1871 ;	genGenPointerGet
   199F 89 82              1872 	mov	dpl,r1
   19A1 8A 83              1873 	mov	dph,r2
   19A3 8B F0              1874 	mov	b,r3
   19A5 12 71 F6           1875 	lcall	__gptrget
   19A8 F9                 1876 	mov	r1,a
                           1877 ;	genAssign
   19A9 90 05 7A           1878 	mov	dptr,#_xatoi_c_1_1
   19AC E9                 1879 	mov	a,r1
   19AD F0                 1880 	movx	@dptr,a
                    072A   1881 	C$misc.c$146$1$1 ==.
                           1882 ;	../misc.c:146: break;
                           1883 ;	genIpop
   19AE D0 04              1884 	pop	ar4
   19B0 D0 03              1885 	pop	ar3
   19B2 D0 02              1886 	pop	ar2
   19B4 02 1A 0C           1887 	ljmp	00122$
                    0733   1888 	C$misc.c$147$3$4 ==.
                           1889 ;	../misc.c:147: default:
   19B7                    1890 00110$:
                    0733   1891 	C$misc.c$148$3$4 ==.
                           1892 ;	../misc.c:148: if (c <= ' ') return 1;          /* single zero */
                           1893 ;	genCmpGt
                           1894 ;	genCmp
   19B7 C3                 1895 	clr	c
   19B8 74 20              1896 	mov	a,#0x20
   19BA 9D                 1897 	subb	a,r5
                           1898 ;	genIfxJump
   19BB 50 03              1899 	jnc	00174$
   19BD 02 19 C9           1900 	ljmp	00112$
   19C0                    1901 00174$:
                           1902 ;	genRet
   19C0 75 82 01           1903 	mov	dpl,#0x01
   19C3 75 83 00           1904 	mov	dph,#0x00
   19C6 02 1B 7F           1905 	ljmp	00136$
   19C9                    1906 00112$:
                    0745   1907 	C$misc.c$149$3$4 ==.
                           1908 ;	../misc.c:149: if (c < '0' || c > '9') return 0;          /* invalid char */
                           1909 ;	genCmpLt
                           1910 ;	genCmp
   19C9 BD 30 00           1911 	cjne	r5,#0x30,00175$
   19CC                    1912 00175$:
                           1913 ;	genIfxJump
   19CC 50 03              1914 	jnc	00176$
   19CE 02 19 DA           1915 	ljmp	00113$
   19D1                    1916 00176$:
                           1917 ;	genCmpGt
                           1918 ;	genCmp
   19D1 C3                 1919 	clr	c
   19D2 74 39              1920 	mov	a,#0x39
   19D4 9D                 1921 	subb	a,r5
                           1922 ;	genIfxJump
   19D5 40 03              1923 	jc	00177$
   19D7 02 19 E3           1924 	ljmp	00114$
   19DA                    1925 00177$:
   19DA                    1926 00113$:
                           1927 ;	genRet
   19DA 75 82 00           1928 	mov	dpl,#0x00
   19DD 75 83 00           1929 	mov	dph,#0x00
   19E0 02 1B 7F           1930 	ljmp	00136$
   19E3                    1931 00114$:
                    075F   1932 	C$misc.c$150$3$4 ==.
                           1933 ;	../misc.c:150: r = 8;                      /* octal */
                           1934 ;	genAssign
   19E3 90 05 7B           1935 	mov	dptr,#_xatoi_r_1_1
   19E6 74 08              1936 	mov	a,#0x08
   19E8 F0                 1937 	movx	@dptr,a
                    0765   1938 	C$misc.c$151$1$1 ==.
                           1939 ;	../misc.c:151: }
   19E9 02 1A 0C           1940 	ljmp	00122$
   19EC                    1941 00121$:
                    0768   1942 	C$misc.c$153$2$5 ==.
                           1943 ;	../misc.c:153: if (c < '0' || c > '9') return 0;          /* EOL or invalid char */
                           1944 ;	genCmpLt
                           1945 ;	genCmp
   19EC BD 30 00           1946 	cjne	r5,#0x30,00178$
   19EF                    1947 00178$:
                           1948 ;	genIfxJump
   19EF 50 03              1949 	jnc	00179$
   19F1 02 19 FD           1950 	ljmp	00117$
   19F4                    1951 00179$:
                           1952 ;	genCmpGt
                           1953 ;	genCmp
   19F4 C3                 1954 	clr	c
   19F5 74 39              1955 	mov	a,#0x39
   19F7 9D                 1956 	subb	a,r5
                           1957 ;	genIfxJump
   19F8 40 03              1958 	jc	00180$
   19FA 02 1A 06           1959 	ljmp	00118$
   19FD                    1960 00180$:
   19FD                    1961 00117$:
                           1962 ;	genRet
   19FD 75 82 00           1963 	mov	dpl,#0x00
   1A00 75 83 00           1964 	mov	dph,#0x00
   1A03 02 1B 7F           1965 	ljmp	00136$
   1A06                    1966 00118$:
                    0782   1967 	C$misc.c$154$2$5 ==.
                           1968 ;	../misc.c:154: r = 10;                                    /* decimal */
                           1969 ;	genAssign
   1A06 90 05 7B           1970 	mov	dptr,#_xatoi_r_1_1
   1A09 74 0A              1971 	mov	a,#0x0A
   1A0B F0                 1972 	movx	@dptr,a
   1A0C                    1973 00122$:
                    0788   1974 	C$misc.c$157$1$1 ==.
                           1975 ;	../misc.c:157: val = 0;
                           1976 ;	genAssign
   1A0C 90 05 76           1977 	mov	dptr,#_xatoi_val_1_1
   1A0F E4                 1978 	clr	a
   1A10 F0                 1979 	movx	@dptr,a
   1A11 A3                 1980 	inc	dptr
   1A12 F0                 1981 	movx	@dptr,a
   1A13 A3                 1982 	inc	dptr
   1A14 F0                 1983 	movx	@dptr,a
   1A15 A3                 1984 	inc	dptr
   1A16 F0                 1985 	movx	@dptr,a
                    0793   1986 	C$misc.c$158$1$1 ==.
                           1987 ;	../misc.c:158: while (c > ' ') {
   1A17                    1988 00131$:
                           1989 ;	genAssign
   1A17 90 05 7A           1990 	mov	dptr,#_xatoi_c_1_1
   1A1A E0                 1991 	movx	a,@dptr
   1A1B FD                 1992 	mov	r5,a
                           1993 ;	genCmpGt
                           1994 ;	genCmp
   1A1C C3                 1995 	clr	c
   1A1D 74 20              1996 	mov	a,#0x20
   1A1F 9D                 1997 	subb	a,r5
                           1998 ;	genIfxJump
   1A20 40 03              1999 	jc	00181$
   1A22 02 1B 30           2000 	ljmp	00133$
   1A25                    2001 00181$:
                    07A1   2002 	C$misc.c$159$2$6 ==.
                           2003 ;	../misc.c:159: if (c >= 'a') c -= 0x20;
                           2004 ;	genCmpLt
                           2005 ;	genCmp
   1A25 BD 61 00           2006 	cjne	r5,#0x61,00182$
   1A28                    2007 00182$:
                           2008 ;	genIfxJump
   1A28 50 03              2009 	jnc	00183$
   1A2A 02 1A 34           2010 	ljmp	00124$
   1A2D                    2011 00183$:
                           2012 ;	genMinus
   1A2D ED                 2013 	mov	a,r5
   1A2E 24 E0              2014 	add	a,#0xe0
                           2015 ;	genAssign
   1A30 90 05 7A           2016 	mov	dptr,#_xatoi_c_1_1
   1A33 F0                 2017 	movx	@dptr,a
   1A34                    2018 00124$:
                    07B0   2019 	C$misc.c$160$2$6 ==.
                           2020 ;	../misc.c:160: c -= '0';
                           2021 ;	genAssign
   1A34 90 05 7A           2022 	mov	dptr,#_xatoi_c_1_1
   1A37 E0                 2023 	movx	a,@dptr
   1A38 FD                 2024 	mov	r5,a
                           2025 ;	genMinus
   1A39 ED                 2026 	mov	a,r5
   1A3A 24 D0              2027 	add	a,#0xd0
                           2028 ;	genAssign
   1A3C 90 05 7A           2029 	mov	dptr,#_xatoi_c_1_1
   1A3F F0                 2030 	movx	@dptr,a
                    07BC   2031 	C$misc.c$161$2$6 ==.
                           2032 ;	../misc.c:161: if (c >= 17) {
                           2033 ;	genAssign
   1A40 90 05 7A           2034 	mov	dptr,#_xatoi_c_1_1
   1A43 E0                 2035 	movx	a,@dptr
   1A44 FD                 2036 	mov	r5,a
                           2037 ;	genCmpLt
                           2038 ;	genCmp
   1A45 BD 11 00           2039 	cjne	r5,#0x11,00184$
   1A48                    2040 00184$:
                           2041 ;	genIfxJump
   1A48 50 03              2042 	jnc	00185$
   1A4A 02 1A 6B           2043 	ljmp	00128$
   1A4D                    2044 00185$:
                    07C9   2045 	C$misc.c$162$3$7 ==.
                           2046 ;	../misc.c:162: c -= 7;
                           2047 ;	genMinus
   1A4D ED                 2048 	mov	a,r5
   1A4E 24 F9              2049 	add	a,#0xf9
                           2050 ;	genAssign
   1A50 90 05 7A           2051 	mov	dptr,#_xatoi_c_1_1
   1A53 F0                 2052 	movx	@dptr,a
                    07D0   2053 	C$misc.c$163$3$7 ==.
                           2054 ;	../misc.c:163: if (c <= 9) return 0;           /* invalid char */
                           2055 ;	genAssign
   1A54 90 05 7A           2056 	mov	dptr,#_xatoi_c_1_1
   1A57 E0                 2057 	movx	a,@dptr
   1A58 FD                 2058 	mov	r5,a
                           2059 ;	genCmpGt
                           2060 ;	genCmp
   1A59 C3                 2061 	clr	c
   1A5A 74 09              2062 	mov	a,#0x09
   1A5C 9D                 2063 	subb	a,r5
                           2064 ;	genIfxJump
   1A5D 50 03              2065 	jnc	00186$
   1A5F 02 1A 6B           2066 	ljmp	00128$
   1A62                    2067 00186$:
                           2068 ;	genRet
   1A62 75 82 00           2069 	mov	dpl,#0x00
   1A65 75 83 00           2070 	mov	dph,#0x00
   1A68 02 1B 7F           2071 	ljmp	00136$
   1A6B                    2072 00128$:
                    07E7   2073 	C$misc.c$165$2$6 ==.
                           2074 ;	../misc.c:165: if (c >= r) return 0;                           /* invalid char for current radix */
                           2075 ;	genAssign
   1A6B 90 05 7A           2076 	mov	dptr,#_xatoi_c_1_1
   1A6E E0                 2077 	movx	a,@dptr
   1A6F FD                 2078 	mov	r5,a
                           2079 ;	genAssign
   1A70 90 05 7B           2080 	mov	dptr,#_xatoi_r_1_1
   1A73 E0                 2081 	movx	a,@dptr
   1A74 FE                 2082 	mov	r6,a
                           2083 ;	genCmpLt
                           2084 ;	genCmp
   1A75 C3                 2085 	clr	c
   1A76 ED                 2086 	mov	a,r5
   1A77 9E                 2087 	subb	a,r6
                           2088 ;	genIfxJump
   1A78 50 03              2089 	jnc	00187$
   1A7A 02 1A 86           2090 	ljmp	00130$
   1A7D                    2091 00187$:
                           2092 ;	genRet
   1A7D 75 82 00           2093 	mov	dpl,#0x00
   1A80 75 83 00           2094 	mov	dph,#0x00
   1A83 02 1B 7F           2095 	ljmp	00136$
   1A86                    2096 00130$:
                    0802   2097 	C$misc.c$166$1$1 ==.
                           2098 ;	../misc.c:166: val = val * r + c;
                           2099 ;	genIpush
   1A86 C0 02              2100 	push	ar2
   1A88 C0 03              2101 	push	ar3
   1A8A C0 04              2102 	push	ar4
                           2103 ;	genAssign
   1A8C 90 05 76           2104 	mov	dptr,#_xatoi_val_1_1
   1A8F E0                 2105 	movx	a,@dptr
   1A90 FF                 2106 	mov	r7,a
   1A91 A3                 2107 	inc	dptr
   1A92 E0                 2108 	movx	a,@dptr
   1A93 F8                 2109 	mov	r0,a
   1A94 A3                 2110 	inc	dptr
   1A95 E0                 2111 	movx	a,@dptr
   1A96 F9                 2112 	mov	r1,a
   1A97 A3                 2113 	inc	dptr
   1A98 E0                 2114 	movx	a,@dptr
   1A99 FA                 2115 	mov	r2,a
                           2116 ;	genCast
   1A9A 90 0D 98           2117 	mov	dptr,#__mullong_PARM_2
   1A9D EE                 2118 	mov	a,r6
   1A9E F0                 2119 	movx	@dptr,a
   1A9F A3                 2120 	inc	dptr
   1AA0 74 00              2121 	mov	a,#0x00
   1AA2 F0                 2122 	movx	@dptr,a
   1AA3 A3                 2123 	inc	dptr
   1AA4 74 00              2124 	mov	a,#0x00
   1AA6 F0                 2125 	movx	@dptr,a
   1AA7 A3                 2126 	inc	dptr
   1AA8 74 00              2127 	mov	a,#0x00
   1AAA F0                 2128 	movx	@dptr,a
                           2129 ;	genCall
   1AAB 8F 82              2130 	mov	dpl,r7
   1AAD 88 83              2131 	mov	dph,r0
   1AAF 89 F0              2132 	mov	b,r1
   1AB1 EA                 2133 	mov	a,r2
   1AB2 C0 05              2134 	push	ar5
   1AB4 12 70 DD           2135 	lcall	__mullong
   1AB7 AA 82              2136 	mov	r2,dpl
   1AB9 AB 83              2137 	mov	r3,dph
   1ABB AC F0              2138 	mov	r4,b
   1ABD FE                 2139 	mov	r6,a
   1ABE D0 05              2140 	pop	ar5
                           2141 ;	genCast
   1AC0 7F 00              2142 	mov	r7,#0x00
   1AC2 78 00              2143 	mov	r0,#0x00
   1AC4 79 00              2144 	mov	r1,#0x00
                           2145 ;	genPlus
   1AC6 90 05 76           2146 	mov	dptr,#_xatoi_val_1_1
   1AC9 E5 05              2147 	mov	a,ar5
   1ACB 25 02              2148 	add	a,ar2
   1ACD F0                 2149 	movx	@dptr,a
   1ACE E5 07              2150 	mov	a,ar7
   1AD0 35 03              2151 	addc	a,ar3
   1AD2 A3                 2152 	inc	dptr
   1AD3 F0                 2153 	movx	@dptr,a
   1AD4 E5 00              2154 	mov	a,ar0
   1AD6 35 04              2155 	addc	a,ar4
   1AD8 A3                 2156 	inc	dptr
   1AD9 F0                 2157 	movx	@dptr,a
   1ADA E5 01              2158 	mov	a,ar1
   1ADC 35 06              2159 	addc	a,ar6
   1ADE A3                 2160 	inc	dptr
   1ADF F0                 2161 	movx	@dptr,a
                    085C   2162 	C$misc.c$167$2$6 ==.
                           2163 ;	../misc.c:167: c = *(++(*str));
                           2164 ;	genAssign
   1AE0 90 05 73           2165 	mov	dptr,#_xatoi_str_1_1
   1AE3 E0                 2166 	movx	a,@dptr
   1AE4 FA                 2167 	mov	r2,a
   1AE5 A3                 2168 	inc	dptr
   1AE6 E0                 2169 	movx	a,@dptr
   1AE7 FB                 2170 	mov	r3,a
   1AE8 A3                 2171 	inc	dptr
   1AE9 E0                 2172 	movx	a,@dptr
   1AEA FC                 2173 	mov	r4,a
                           2174 ;	genPointerGet
                           2175 ;	genGenPointerGet
   1AEB 8A 82              2176 	mov	dpl,r2
   1AED 8B 83              2177 	mov	dph,r3
   1AEF 8C F0              2178 	mov	b,r4
   1AF1 12 71 F6           2179 	lcall	__gptrget
   1AF4 FD                 2180 	mov	r5,a
   1AF5 A3                 2181 	inc	dptr
   1AF6 12 71 F6           2182 	lcall	__gptrget
   1AF9 FE                 2183 	mov	r6,a
   1AFA A3                 2184 	inc	dptr
   1AFB 12 71 F6           2185 	lcall	__gptrget
   1AFE FF                 2186 	mov	r7,a
                           2187 ;	genPlus
                           2188 ;	genPlusIncr
   1AFF 0D                 2189 	inc	r5
   1B00 BD 00 01           2190 	cjne	r5,#0x00,00188$
   1B03 0E                 2191 	inc	r6
   1B04                    2192 00188$:
                           2193 ;	genPointerSet
                           2194 ;	genGenPointerSet
   1B04 8A 82              2195 	mov	dpl,r2
   1B06 8B 83              2196 	mov	dph,r3
   1B08 8C F0              2197 	mov	b,r4
   1B0A ED                 2198 	mov	a,r5
   1B0B 12 70 A4           2199 	lcall	__gptrput
   1B0E A3                 2200 	inc	dptr
   1B0F EE                 2201 	mov	a,r6
   1B10 12 70 A4           2202 	lcall	__gptrput
   1B13 A3                 2203 	inc	dptr
   1B14 EF                 2204 	mov	a,r7
   1B15 12 70 A4           2205 	lcall	__gptrput
                           2206 ;	genPointerGet
                           2207 ;	genGenPointerGet
   1B18 8D 82              2208 	mov	dpl,r5
   1B1A 8E 83              2209 	mov	dph,r6
   1B1C 8F F0              2210 	mov	b,r7
   1B1E 12 71 F6           2211 	lcall	__gptrget
   1B21 FD                 2212 	mov	r5,a
                           2213 ;	genAssign
   1B22 90 05 7A           2214 	mov	dptr,#_xatoi_c_1_1
   1B25 ED                 2215 	mov	a,r5
   1B26 F0                 2216 	movx	@dptr,a
                           2217 ;	genIpop
   1B27 D0 04              2218 	pop	ar4
   1B29 D0 03              2219 	pop	ar3
   1B2B D0 02              2220 	pop	ar2
   1B2D 02 1A 17           2221 	ljmp	00131$
   1B30                    2222 00133$:
                    08AC   2223 	C$misc.c$169$1$1 ==.
                           2224 ;	../misc.c:169: if (s) val = 0 - val;                                               /* apply sign if needed */
                           2225 ;	genAssign
   1B30 90 05 7C           2226 	mov	dptr,#_xatoi_s_1_1
   1B33 E0                 2227 	movx	a,@dptr
   1B34 FD                 2228 	mov	r5,a
                           2229 ;	genIfx
   1B35 ED                 2230 	mov	a,r5
                           2231 ;	genIfxJump
   1B36 70 03              2232 	jnz	00189$
   1B38 02 1B 5C           2233 	ljmp	00135$
   1B3B                    2234 00189$:
                           2235 ;	genAssign
   1B3B 90 05 76           2236 	mov	dptr,#_xatoi_val_1_1
   1B3E E0                 2237 	movx	a,@dptr
   1B3F FD                 2238 	mov	r5,a
   1B40 A3                 2239 	inc	dptr
   1B41 E0                 2240 	movx	a,@dptr
   1B42 FE                 2241 	mov	r6,a
   1B43 A3                 2242 	inc	dptr
   1B44 E0                 2243 	movx	a,@dptr
   1B45 FF                 2244 	mov	r7,a
   1B46 A3                 2245 	inc	dptr
   1B47 E0                 2246 	movx	a,@dptr
   1B48 F8                 2247 	mov	r0,a
                           2248 ;	genUminus
   1B49 90 05 76           2249 	mov	dptr,#_xatoi_val_1_1
   1B4C C3                 2250 	clr	c
   1B4D E4                 2251 	clr	a
   1B4E 9D                 2252 	subb	a,r5
   1B4F F0                 2253 	movx	@dptr,a
   1B50 E4                 2254 	clr	a
   1B51 9E                 2255 	subb	a,r6
   1B52 A3                 2256 	inc	dptr
   1B53 F0                 2257 	movx	@dptr,a
   1B54 E4                 2258 	clr	a
   1B55 9F                 2259 	subb	a,r7
   1B56 A3                 2260 	inc	dptr
   1B57 F0                 2261 	movx	@dptr,a
   1B58 E4                 2262 	clr	a
   1B59 98                 2263 	subb	a,r0
   1B5A A3                 2264 	inc	dptr
   1B5B F0                 2265 	movx	@dptr,a
   1B5C                    2266 00135$:
                    08D8   2267 	C$misc.c$171$1$1 ==.
                           2268 ;	../misc.c:171: *res = val;
                           2269 ;	genAssign
   1B5C 90 05 76           2270 	mov	dptr,#_xatoi_val_1_1
   1B5F E0                 2271 	movx	a,@dptr
   1B60 FD                 2272 	mov	r5,a
   1B61 A3                 2273 	inc	dptr
   1B62 E0                 2274 	movx	a,@dptr
   1B63 FE                 2275 	mov	r6,a
   1B64 A3                 2276 	inc	dptr
   1B65 E0                 2277 	movx	a,@dptr
   1B66 FF                 2278 	mov	r7,a
   1B67 A3                 2279 	inc	dptr
   1B68 E0                 2280 	movx	a,@dptr
   1B69 F8                 2281 	mov	r0,a
                           2282 ;	genCast
                           2283 ;	genPointerSet
                           2284 ;	genGenPointerSet
   1B6A 8A 82              2285 	mov	dpl,r2
   1B6C 8B 83              2286 	mov	dph,r3
   1B6E 8C F0              2287 	mov	b,r4
   1B70 ED                 2288 	mov	a,r5
   1B71 12 70 A4           2289 	lcall	__gptrput
   1B74 A3                 2290 	inc	dptr
   1B75 EE                 2291 	mov	a,r6
   1B76 12 70 A4           2292 	lcall	__gptrput
                    08F5   2293 	C$misc.c$172$1$1 ==.
                           2294 ;	../misc.c:172: return 1;
                           2295 ;	genRet
   1B79 75 82 01           2296 	mov	dpl,#0x01
   1B7C 75 83 00           2297 	mov	dph,#0x00
   1B7F                    2298 00136$:
                    08FB   2299 	C$misc.c$173$1$1 ==.
                    08FB   2300 	XG$xatoi$0$0 ==.
   1B7F 22                 2301 	ret
                           2302 ;------------------------------------------------------------
                           2303 ;Allocation info for local variables in function 'getParity'
                           2304 ;------------------------------------------------------------
                           2305 ;n                         Allocated with name '_getParity_n_1_1'
                           2306 ;parity                    Allocated with name '_getParity_parity_1_1'
                           2307 ;------------------------------------------------------------
                    08FC   2308 	G$getParity$0$0 ==.
                    08FC   2309 	C$misc.c$176$1$1 ==.
                           2310 ;	../misc.c:176: uint8_t  getParity(unsigned int n)
                           2311 ;	-----------------------------------------
                           2312 ;	 function getParity
                           2313 ;	-----------------------------------------
   1B80                    2314 _getParity:
                           2315 ;	genReceive
   1B80 AA 83              2316 	mov	r2,dph
   1B82 E5 82              2317 	mov	a,dpl
   1B84 90 05 7D           2318 	mov	dptr,#_getParity_n_1_1
   1B87 F0                 2319 	movx	@dptr,a
   1B88 A3                 2320 	inc	dptr
   1B89 EA                 2321 	mov	a,r2
   1B8A F0                 2322 	movx	@dptr,a
                    0907   2323 	C$misc.c$178$1$1 ==.
                           2324 ;	../misc.c:178: uint8_t parity = 0;
                           2325 ;	genAssign
   1B8B 90 05 7F           2326 	mov	dptr,#_getParity_parity_1_1
   1B8E 74 00              2327 	mov	a,#0x00
   1B90 F0                 2328 	movx	@dptr,a
                    090D   2329 	C$misc.c$179$1$1 ==.
                           2330 ;	../misc.c:179: while (n)
   1B91                    2331 00101$:
                           2332 ;	genAssign
   1B91 90 05 7D           2333 	mov	dptr,#_getParity_n_1_1
   1B94 E0                 2334 	movx	a,@dptr
   1B95 FA                 2335 	mov	r2,a
   1B96 A3                 2336 	inc	dptr
   1B97 E0                 2337 	movx	a,@dptr
   1B98 FB                 2338 	mov	r3,a
                           2339 ;	genIfx
   1B99 EA                 2340 	mov	a,r2
   1B9A 4B                 2341 	orl	a,r3
                           2342 ;	genIfxJump
   1B9B 70 03              2343 	jnz	00108$
   1B9D 02 1B C4           2344 	ljmp	00103$
   1BA0                    2345 00108$:
                    091C   2346 	C$misc.c$181$2$2 ==.
                           2347 ;	../misc.c:181: parity = !parity;
                           2348 ;	genAssign
   1BA0 90 05 7F           2349 	mov	dptr,#_getParity_parity_1_1
   1BA3 E0                 2350 	movx	a,@dptr
   1BA4 FC                 2351 	mov	r4,a
                           2352 ;	genNot
   1BA5 90 05 7F           2353 	mov	dptr,#_getParity_parity_1_1
   1BA8 EC                 2354 	mov	a,r4
   1BA9 B4 01 00           2355 	cjne	a,#0x01,00109$
   1BAC                    2356 00109$:
   1BAC E4                 2357 	clr	a
   1BAD 33                 2358 	rlc	a
   1BAE F0                 2359 	movx	@dptr,a
                    092B   2360 	C$misc.c$182$2$2 ==.
                           2361 ;	../misc.c:182: n      = n & (n - 1);
                           2362 ;	genMinus
                           2363 ;	genMinusDec
   1BAF EA                 2364 	mov	a,r2
   1BB0 24 FF              2365 	add	a,#0xff
   1BB2 FC                 2366 	mov	r4,a
   1BB3 EB                 2367 	mov	a,r3
   1BB4 34 FF              2368 	addc	a,#0xff
   1BB6 FD                 2369 	mov	r5,a
                           2370 ;	genAnd
   1BB7 90 05 7D           2371 	mov	dptr,#_getParity_n_1_1
   1BBA EC                 2372 	mov	a,r4
   1BBB 5A                 2373 	anl	a,r2
   1BBC F0                 2374 	movx	@dptr,a
   1BBD ED                 2375 	mov	a,r5
   1BBE 5B                 2376 	anl	a,r3
   1BBF A3                 2377 	inc	dptr
   1BC0 F0                 2378 	movx	@dptr,a
   1BC1 02 1B 91           2379 	ljmp	00101$
   1BC4                    2380 00103$:
                    0940   2381 	C$misc.c$184$1$1 ==.
                           2382 ;	../misc.c:184: return parity;
                           2383 ;	genAssign
   1BC4 90 05 7F           2384 	mov	dptr,#_getParity_parity_1_1
   1BC7 E0                 2385 	movx	a,@dptr
   1BC8 FA                 2386 	mov	r2,a
                           2387 ;	genRet
   1BC9 8A 82              2388 	mov	dpl,r2
   1BCB                    2389 00104$:
                    0947   2390 	C$misc.c$185$1$1 ==.
                    0947   2391 	XG$getParity$0$0 ==.
   1BCB 22                 2392 	ret
                           2393 	.area CSEG    (CODE)
                           2394 	.area CONST   (CODE)
                    0000   2395 F___misc$_str_0$0$0 == .
   733C                    2396 __str_0:
   733C 20                 2397 	.ascii " "
   733D 00                 2398 	.db 0x00
                           2399 	.area XINIT   (CODE)
                           2400 	.area CABS    (ABS,CODE)
