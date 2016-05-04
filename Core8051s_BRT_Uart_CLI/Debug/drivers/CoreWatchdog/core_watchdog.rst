                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.3 #4543 (Dec 31 2006)
                              4 ; This file generated Wed May 04 10:48:18 2016
                              5 ;--------------------------------------------------------
                              6 	.module ___drivers_CoreWatchdog_core_watchdog
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _WD_init_PARM_4
                             13 	.globl _WD_init_PARM_3
                             14 	.globl _WD_init_PARM_2
                             15 	.globl _WD_init
                             16 	.globl _WD_enable
                             17 	.globl _WD_disable
                             18 	.globl _WD_reload
                             19 	.globl _WD_current_value
                             20 ;--------------------------------------------------------
                             21 ; special function registers
                             22 ;--------------------------------------------------------
                             23 	.area RSEG    (DATA)
                             24 ;--------------------------------------------------------
                             25 ; special function bits
                             26 ;--------------------------------------------------------
                             27 	.area RSEG    (DATA)
                             28 ;--------------------------------------------------------
                             29 ; overlayable register banks
                             30 ;--------------------------------------------------------
                             31 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                      32 	.ds 8
                             33 ;--------------------------------------------------------
                             34 ; internal ram data
                             35 ;--------------------------------------------------------
                             36 	.area DSEG    (DATA)
                    0000     37 LWD_init$sloc0$1$0==.
   0019                      38 _WD_init_sloc0_1_0:
   0019                      39 	.ds 4
                             40 ;--------------------------------------------------------
                             41 ; overlayable items in internal ram 
                             42 ;--------------------------------------------------------
                             43 	.area OSEG    (OVR,DATA)
                             44 ;--------------------------------------------------------
                             45 ; indirectly addressable internal ram data
                             46 ;--------------------------------------------------------
                             47 	.area ISEG    (DATA)
                             48 ;--------------------------------------------------------
                             49 ; absolute internal ram data
                             50 ;--------------------------------------------------------
                             51 	.area IABS    (ABS,DATA)
                             52 	.area IABS    (ABS,DATA)
                             53 ;--------------------------------------------------------
                             54 ; bit data
                             55 ;--------------------------------------------------------
                             56 	.area BSEG    (BIT)
                             57 ;--------------------------------------------------------
                             58 ; paged external ram data
                             59 ;--------------------------------------------------------
                             60 	.area PSEG    (PAG,XDATA)
                             61 ;--------------------------------------------------------
                             62 ; external ram data
                             63 ;--------------------------------------------------------
                             64 	.area XSEG    (XDATA)
                    0000     65 F___drivers_CoreWatchdog_core_watchdog$NULL_instance$0$0==.
   05D7                      66 _NULL_instance:
   05D7                      67 	.ds 3
                    0003     68 LWD_init$base$1$1==.
   05DA                      69 _WD_init_PARM_2:
   05DA                      70 	.ds 2
                    0005     71 LWD_init$value$1$1==.
   05DC                      72 _WD_init_PARM_3:
   05DC                      73 	.ds 4
                    0009     74 LWD_init$scale$1$1==.
   05E0                      75 _WD_init_PARM_4:
   05E0                      76 	.ds 4
                    000D     77 LWD_init$instance$1$1==.
   05E4                      78 _WD_init_instance_1_1:
   05E4                      79 	.ds 3
                    0010     80 LWD_init$file_name$3$3==.
   05E7                      81 _WD_init_file_name_3_3:
   05E7                      82 	.ds 40
                    0038     83 LWD_init$file_name$3$5==.
   060F                      84 _WD_init_file_name_3_5:
   060F                      85 	.ds 40
                    0060     86 LWD_enable$instance$1$1==.
   0637                      87 _WD_enable_instance_1_1:
   0637                      88 	.ds 3
                    0063     89 LWD_enable$file_name$3$3==.
   063A                      90 _WD_enable_file_name_3_3:
   063A                      91 	.ds 40
                    008B     92 LWD_disable$instance$1$1==.
   0662                      93 _WD_disable_instance_1_1:
   0662                      94 	.ds 3
                    008E     95 LWD_disable$file_name$3$3==.
   0665                      96 _WD_disable_file_name_3_3:
   0665                      97 	.ds 40
                    00B6     98 LWD_reload$instance$1$1==.
   068D                      99 _WD_reload_instance_1_1:
   068D                     100 	.ds 3
                    00B9    101 LWD_reload$file_name$3$3==.
   0690                     102 _WD_reload_file_name_3_3:
   0690                     103 	.ds 40
                    00E1    104 LWD_current_value$instance$1$1==.
   06B8                     105 _WD_current_value_instance_1_1:
   06B8                     106 	.ds 3
                    00E4    107 LWD_current_value$file_name$3$3==.
   06BB                     108 _WD_current_value_file_name_3_3:
   06BB                     109 	.ds 40
                            110 ;--------------------------------------------------------
                            111 ; external initialized ram data
                            112 ;--------------------------------------------------------
                            113 	.area XISEG   (XDATA)
                            114 	.area HOME    (CODE)
                            115 	.area GSINIT0 (CODE)
                            116 	.area GSINIT1 (CODE)
                            117 	.area GSINIT2 (CODE)
                            118 	.area GSINIT3 (CODE)
                            119 	.area GSINIT4 (CODE)
                            120 	.area GSINIT5 (CODE)
                            121 	.area GSINIT  (CODE)
                            122 	.area GSFINAL (CODE)
                            123 	.area CSEG    (CODE)
                            124 ;--------------------------------------------------------
                            125 ; global & static initialisations
                            126 ;--------------------------------------------------------
                            127 	.area HOME    (CODE)
                            128 	.area GSINIT  (CODE)
                            129 	.area GSFINAL (CODE)
                            130 	.area GSINIT  (CODE)
                            131 ;--------------------------------------------------------
                            132 ; Home
                            133 ;--------------------------------------------------------
                            134 	.area HOME    (CODE)
                            135 	.area HOME    (CODE)
                            136 ;--------------------------------------------------------
                            137 ; code
                            138 ;--------------------------------------------------------
                            139 	.area CSEG    (CODE)
                            140 ;------------------------------------------------------------
                            141 ;Allocation info for local variables in function 'WD_init'
                            142 ;------------------------------------------------------------
                            143 ;sloc0                     Allocated with name '_WD_init_sloc0_1_0'
                            144 ;base                      Allocated with name '_WD_init_PARM_2'
                            145 ;value                     Allocated with name '_WD_init_PARM_3'
                            146 ;scale                     Allocated with name '_WD_init_PARM_4'
                            147 ;instance                  Allocated with name '_WD_init_instance_1_1'
                            148 ;file_name                 Allocated with name '_WD_init_file_name_3_3'
                            149 ;file_name                 Allocated with name '_WD_init_file_name_3_5'
                            150 ;------------------------------------------------------------
                    0000    151 	G$WD_init$0$0 ==.
                    0000    152 	C$core_watchdog.c$26$0$0 ==.
                            153 ;	../drivers/CoreWatchdog/core_watchdog.c:26: WD_init
                            154 ;	-----------------------------------------
                            155 ;	 function WD_init
                            156 ;	-----------------------------------------
   1F77                     157 _WD_init:
                    0002    158 	ar2 = 0x02
                    0003    159 	ar3 = 0x03
                    0004    160 	ar4 = 0x04
                    0005    161 	ar5 = 0x05
                    0006    162 	ar6 = 0x06
                    0007    163 	ar7 = 0x07
                    0000    164 	ar0 = 0x00
                    0001    165 	ar1 = 0x01
                            166 ;	genReceive
   1F77 AA F0               167 	mov	r2,b
   1F79 AB 83               168 	mov	r3,dph
   1F7B E5 82               169 	mov	a,dpl
   1F7D 90 05 E4            170 	mov	dptr,#_WD_init_instance_1_1
   1F80 F0                  171 	movx	@dptr,a
   1F81 A3                  172 	inc	dptr
   1F82 EB                  173 	mov	a,r3
   1F83 F0                  174 	movx	@dptr,a
   1F84 A3                  175 	inc	dptr
   1F85 EA                  176 	mov	a,r2
   1F86 F0                  177 	movx	@dptr,a
                    0010    178 	C$core_watchdog.c$34$2$2 ==.
                            179 ;	../drivers/CoreWatchdog/core_watchdog.c:34: HAL_ASSERT( instance != NULL_instance )
                            180 ;	genAssign
   1F87 90 05 E4            181 	mov	dptr,#_WD_init_instance_1_1
   1F8A E0                  182 	movx	a,@dptr
   1F8B FA                  183 	mov	r2,a
   1F8C A3                  184 	inc	dptr
   1F8D E0                  185 	movx	a,@dptr
   1F8E FB                  186 	mov	r3,a
   1F8F A3                  187 	inc	dptr
   1F90 E0                  188 	movx	a,@dptr
   1F91 FC                  189 	mov	r4,a
                            190 ;	genAssign
   1F92 90 05 D7            191 	mov	dptr,#_NULL_instance
   1F95 E0                  192 	movx	a,@dptr
   1F96 FD                  193 	mov	r5,a
   1F97 A3                  194 	inc	dptr
   1F98 E0                  195 	movx	a,@dptr
   1F99 FE                  196 	mov	r6,a
   1F9A A3                  197 	inc	dptr
   1F9B E0                  198 	movx	a,@dptr
   1F9C FF                  199 	mov	r7,a
                            200 ;	genCmpEq
                            201 ;	gencjneshort
   1F9D EA                  202 	mov	a,r2
   1F9E B5 05 0A            203 	cjne	a,ar5,00115$
   1FA1 EB                  204 	mov	a,r3
   1FA2 B5 06 06            205 	cjne	a,ar6,00115$
   1FA5 EC                  206 	mov	a,r4
   1FA6 B5 07 02            207 	cjne	a,ar7,00115$
   1FA9 80 03               208 	sjmp	00116$
   1FAB                     209 00115$:
   1FAB 02 20 B7            210 	ljmp	00104$
   1FAE                     211 00116$:
                            212 ;	genPointerSet
                            213 ;     genFarPointerSet
   1FAE 90 05 E7            214 	mov	dptr,#_WD_init_file_name_3_3
   1FB1 74 2E               215 	mov	a,#0x2E
   1FB3 F0                  216 	movx	@dptr,a
                            217 ;	genPointerSet
                            218 ;     genFarPointerSet
   1FB4 90 05 E8            219 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0001)
   1FB7 74 2E               220 	mov	a,#0x2E
   1FB9 F0                  221 	movx	@dptr,a
                            222 ;	genPointerSet
                            223 ;     genFarPointerSet
   1FBA 90 05 E9            224 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0002)
   1FBD 74 2F               225 	mov	a,#0x2F
   1FBF F0                  226 	movx	@dptr,a
                            227 ;	genPointerSet
                            228 ;     genFarPointerSet
   1FC0 90 05 EA            229 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0003)
   1FC3 74 64               230 	mov	a,#0x64
   1FC5 F0                  231 	movx	@dptr,a
                            232 ;	genPointerSet
                            233 ;     genFarPointerSet
   1FC6 90 05 EB            234 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0004)
   1FC9 74 72               235 	mov	a,#0x72
   1FCB F0                  236 	movx	@dptr,a
                            237 ;	genPointerSet
                            238 ;     genFarPointerSet
   1FCC 90 05 EC            239 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0005)
   1FCF 74 69               240 	mov	a,#0x69
   1FD1 F0                  241 	movx	@dptr,a
                            242 ;	genPointerSet
                            243 ;     genFarPointerSet
   1FD2 90 05 ED            244 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0006)
   1FD5 74 76               245 	mov	a,#0x76
   1FD7 F0                  246 	movx	@dptr,a
                            247 ;	genPointerSet
                            248 ;     genFarPointerSet
   1FD8 90 05 EE            249 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0007)
   1FDB 74 65               250 	mov	a,#0x65
   1FDD F0                  251 	movx	@dptr,a
                            252 ;	genPointerSet
                            253 ;     genFarPointerSet
   1FDE 90 05 EF            254 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0008)
   1FE1 74 72               255 	mov	a,#0x72
   1FE3 F0                  256 	movx	@dptr,a
                            257 ;	genPointerSet
                            258 ;     genFarPointerSet
   1FE4 90 05 F0            259 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0009)
   1FE7 74 73               260 	mov	a,#0x73
   1FE9 F0                  261 	movx	@dptr,a
                            262 ;	genPointerSet
                            263 ;     genFarPointerSet
   1FEA 90 05 F1            264 	mov	dptr,#(_WD_init_file_name_3_3 + 0x000a)
   1FED 74 2F               265 	mov	a,#0x2F
   1FEF F0                  266 	movx	@dptr,a
                            267 ;	genPointerSet
                            268 ;     genFarPointerSet
   1FF0 90 05 F2            269 	mov	dptr,#(_WD_init_file_name_3_3 + 0x000b)
   1FF3 74 43               270 	mov	a,#0x43
   1FF5 F0                  271 	movx	@dptr,a
                            272 ;	genPointerSet
                            273 ;     genFarPointerSet
   1FF6 90 05 F3            274 	mov	dptr,#(_WD_init_file_name_3_3 + 0x000c)
   1FF9 74 6F               275 	mov	a,#0x6F
   1FFB F0                  276 	movx	@dptr,a
                            277 ;	genPointerSet
                            278 ;     genFarPointerSet
   1FFC 90 05 F4            279 	mov	dptr,#(_WD_init_file_name_3_3 + 0x000d)
   1FFF 74 72               280 	mov	a,#0x72
   2001 F0                  281 	movx	@dptr,a
                            282 ;	genPointerSet
                            283 ;     genFarPointerSet
   2002 90 05 F5            284 	mov	dptr,#(_WD_init_file_name_3_3 + 0x000e)
   2005 74 65               285 	mov	a,#0x65
   2007 F0                  286 	movx	@dptr,a
                            287 ;	genPointerSet
                            288 ;     genFarPointerSet
   2008 90 05 F6            289 	mov	dptr,#(_WD_init_file_name_3_3 + 0x000f)
   200B 74 57               290 	mov	a,#0x57
   200D F0                  291 	movx	@dptr,a
                            292 ;	genPointerSet
                            293 ;     genFarPointerSet
   200E 90 05 F7            294 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0010)
   2011 74 61               295 	mov	a,#0x61
   2013 F0                  296 	movx	@dptr,a
                            297 ;	genPointerSet
                            298 ;     genFarPointerSet
   2014 90 05 F8            299 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0011)
   2017 74 74               300 	mov	a,#0x74
   2019 F0                  301 	movx	@dptr,a
                            302 ;	genPointerSet
                            303 ;     genFarPointerSet
   201A 90 05 F9            304 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0012)
   201D 74 63               305 	mov	a,#0x63
   201F F0                  306 	movx	@dptr,a
                            307 ;	genPointerSet
                            308 ;     genFarPointerSet
   2020 90 05 FA            309 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0013)
   2023 74 68               310 	mov	a,#0x68
   2025 F0                  311 	movx	@dptr,a
                            312 ;	genPointerSet
                            313 ;     genFarPointerSet
   2026 90 05 FB            314 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0014)
   2029 74 64               315 	mov	a,#0x64
   202B F0                  316 	movx	@dptr,a
                            317 ;	genPointerSet
                            318 ;     genFarPointerSet
   202C 90 05 FC            319 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0015)
   202F 74 6F               320 	mov	a,#0x6F
   2031 F0                  321 	movx	@dptr,a
                            322 ;	genPointerSet
                            323 ;     genFarPointerSet
   2032 90 05 FD            324 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0016)
   2035 74 67               325 	mov	a,#0x67
   2037 F0                  326 	movx	@dptr,a
                            327 ;	genPointerSet
                            328 ;     genFarPointerSet
   2038 90 05 FE            329 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0017)
   203B 74 2F               330 	mov	a,#0x2F
   203D F0                  331 	movx	@dptr,a
                            332 ;	genPointerSet
                            333 ;     genFarPointerSet
   203E 90 05 FF            334 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0018)
   2041 74 63               335 	mov	a,#0x63
   2043 F0                  336 	movx	@dptr,a
                            337 ;	genPointerSet
                            338 ;     genFarPointerSet
   2044 90 06 00            339 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0019)
   2047 74 6F               340 	mov	a,#0x6F
   2049 F0                  341 	movx	@dptr,a
                            342 ;	genPointerSet
                            343 ;     genFarPointerSet
   204A 90 06 01            344 	mov	dptr,#(_WD_init_file_name_3_3 + 0x001a)
   204D 74 72               345 	mov	a,#0x72
   204F F0                  346 	movx	@dptr,a
                            347 ;	genPointerSet
                            348 ;     genFarPointerSet
   2050 90 06 02            349 	mov	dptr,#(_WD_init_file_name_3_3 + 0x001b)
   2053 74 65               350 	mov	a,#0x65
   2055 F0                  351 	movx	@dptr,a
                            352 ;	genPointerSet
                            353 ;     genFarPointerSet
   2056 90 06 03            354 	mov	dptr,#(_WD_init_file_name_3_3 + 0x001c)
   2059 74 5F               355 	mov	a,#0x5F
   205B F0                  356 	movx	@dptr,a
                            357 ;	genPointerSet
                            358 ;     genFarPointerSet
   205C 90 06 04            359 	mov	dptr,#(_WD_init_file_name_3_3 + 0x001d)
   205F 74 77               360 	mov	a,#0x77
   2061 F0                  361 	movx	@dptr,a
                            362 ;	genPointerSet
                            363 ;     genFarPointerSet
   2062 90 06 05            364 	mov	dptr,#(_WD_init_file_name_3_3 + 0x001e)
   2065 74 61               365 	mov	a,#0x61
   2067 F0                  366 	movx	@dptr,a
                            367 ;	genPointerSet
                            368 ;     genFarPointerSet
   2068 90 06 06            369 	mov	dptr,#(_WD_init_file_name_3_3 + 0x001f)
   206B 74 74               370 	mov	a,#0x74
   206D F0                  371 	movx	@dptr,a
                            372 ;	genPointerSet
                            373 ;     genFarPointerSet
   206E 90 06 07            374 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0020)
   2071 74 63               375 	mov	a,#0x63
   2073 F0                  376 	movx	@dptr,a
                            377 ;	genPointerSet
                            378 ;     genFarPointerSet
   2074 90 06 08            379 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0021)
   2077 74 68               380 	mov	a,#0x68
   2079 F0                  381 	movx	@dptr,a
                            382 ;	genPointerSet
                            383 ;     genFarPointerSet
   207A 90 06 09            384 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0022)
   207D 74 64               385 	mov	a,#0x64
   207F F0                  386 	movx	@dptr,a
                            387 ;	genPointerSet
                            388 ;     genFarPointerSet
   2080 90 06 0A            389 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0023)
   2083 74 6F               390 	mov	a,#0x6F
   2085 F0                  391 	movx	@dptr,a
                            392 ;	genPointerSet
                            393 ;     genFarPointerSet
   2086 90 06 0B            394 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0024)
   2089 74 67               395 	mov	a,#0x67
   208B F0                  396 	movx	@dptr,a
                            397 ;	genPointerSet
                            398 ;     genFarPointerSet
   208C 90 06 0C            399 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0025)
   208F 74 2E               400 	mov	a,#0x2E
   2091 F0                  401 	movx	@dptr,a
                            402 ;	genPointerSet
                            403 ;     genFarPointerSet
   2092 90 06 0D            404 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0026)
   2095 74 63               405 	mov	a,#0x63
   2097 F0                  406 	movx	@dptr,a
                            407 ;	genPointerSet
                            408 ;     genFarPointerSet
   2098 90 06 0E            409 	mov	dptr,#(_WD_init_file_name_3_3 + 0x0027)
   209B 74 00               410 	mov	a,#0x00
   209D F0                  411 	movx	@dptr,a
                            412 ;	genAssign
   209E 90 05 80            413 	mov	dptr,#_HAL_assert_fail_PARM_2
   20A1 74 22               414 	mov	a,#0x22
   20A3 F0                  415 	movx	@dptr,a
   20A4 E4                  416 	clr	a
   20A5 A3                  417 	inc	dptr
   20A6 F0                  418 	movx	@dptr,a
   20A7 A3                  419 	inc	dptr
   20A8 F0                  420 	movx	@dptr,a
   20A9 A3                  421 	inc	dptr
   20AA F0                  422 	movx	@dptr,a
                            423 ;	genCall
   20AB 75 82 E7            424 	mov	dpl,#_WD_init_file_name_3_3
   20AE 75 83 05            425 	mov	dph,#(_WD_init_file_name_3_3 >> 8)
   20B1 75 F0 00            426 	mov	b,#0x00
   20B4 12 1B CC            427 	lcall	_HAL_assert_fail
   20B7                     428 00104$:
                    0140    429 	C$core_watchdog.c$35$2$4 ==.
                            430 ;	../drivers/CoreWatchdog/core_watchdog.c:35: HAL_ASSERT( scale <= WD_PRESCALER_DIV_1024 )
                            431 ;	genAssign
   20B7 90 05 E0            432 	mov	dptr,#_WD_init_PARM_4
   20BA E0                  433 	movx	a,@dptr
   20BB F5 19               434 	mov	_WD_init_sloc0_1_0,a
   20BD A3                  435 	inc	dptr
   20BE E0                  436 	movx	a,@dptr
   20BF F5 1A               437 	mov	(_WD_init_sloc0_1_0 + 1),a
   20C1 A3                  438 	inc	dptr
   20C2 E0                  439 	movx	a,@dptr
   20C3 F5 1B               440 	mov	(_WD_init_sloc0_1_0 + 2),a
   20C5 A3                  441 	inc	dptr
   20C6 E0                  442 	movx	a,@dptr
   20C7 F5 1C               443 	mov	(_WD_init_sloc0_1_0 + 3),a
                            444 ;	genCmpGt
                            445 ;	genCmp
   20C9 C3                  446 	clr	c
   20CA 74 09               447 	mov	a,#0x09
   20CC 95 19               448 	subb	a,_WD_init_sloc0_1_0
   20CE 74 00               449 	mov	a,#0x00
   20D0 95 1A               450 	subb	a,(_WD_init_sloc0_1_0 + 1)
   20D2 74 00               451 	mov	a,#0x00
   20D4 95 1B               452 	subb	a,(_WD_init_sloc0_1_0 + 2)
   20D6 74 00               453 	mov	a,#0x00
   20D8 95 1C               454 	subb	a,(_WD_init_sloc0_1_0 + 3)
                            455 ;	genIfxJump
   20DA 40 03               456 	jc	00117$
   20DC 02 21 E8            457 	ljmp	00109$
   20DF                     458 00117$:
                            459 ;	genPointerSet
                            460 ;     genFarPointerSet
   20DF 90 06 0F            461 	mov	dptr,#_WD_init_file_name_3_5
   20E2 74 2E               462 	mov	a,#0x2E
   20E4 F0                  463 	movx	@dptr,a
                            464 ;	genPointerSet
                            465 ;     genFarPointerSet
   20E5 90 06 10            466 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0001)
   20E8 74 2E               467 	mov	a,#0x2E
   20EA F0                  468 	movx	@dptr,a
                            469 ;	genPointerSet
                            470 ;     genFarPointerSet
   20EB 90 06 11            471 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0002)
   20EE 74 2F               472 	mov	a,#0x2F
   20F0 F0                  473 	movx	@dptr,a
                            474 ;	genPointerSet
                            475 ;     genFarPointerSet
   20F1 90 06 12            476 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0003)
   20F4 74 64               477 	mov	a,#0x64
   20F6 F0                  478 	movx	@dptr,a
                            479 ;	genPointerSet
                            480 ;     genFarPointerSet
   20F7 90 06 13            481 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0004)
   20FA 74 72               482 	mov	a,#0x72
   20FC F0                  483 	movx	@dptr,a
                            484 ;	genPointerSet
                            485 ;     genFarPointerSet
   20FD 90 06 14            486 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0005)
   2100 74 69               487 	mov	a,#0x69
   2102 F0                  488 	movx	@dptr,a
                            489 ;	genPointerSet
                            490 ;     genFarPointerSet
   2103 90 06 15            491 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0006)
   2106 74 76               492 	mov	a,#0x76
   2108 F0                  493 	movx	@dptr,a
                            494 ;	genPointerSet
                            495 ;     genFarPointerSet
   2109 90 06 16            496 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0007)
   210C 74 65               497 	mov	a,#0x65
   210E F0                  498 	movx	@dptr,a
                            499 ;	genPointerSet
                            500 ;     genFarPointerSet
   210F 90 06 17            501 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0008)
   2112 74 72               502 	mov	a,#0x72
   2114 F0                  503 	movx	@dptr,a
                            504 ;	genPointerSet
                            505 ;     genFarPointerSet
   2115 90 06 18            506 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0009)
   2118 74 73               507 	mov	a,#0x73
   211A F0                  508 	movx	@dptr,a
                            509 ;	genPointerSet
                            510 ;     genFarPointerSet
   211B 90 06 19            511 	mov	dptr,#(_WD_init_file_name_3_5 + 0x000a)
   211E 74 2F               512 	mov	a,#0x2F
   2120 F0                  513 	movx	@dptr,a
                            514 ;	genPointerSet
                            515 ;     genFarPointerSet
   2121 90 06 1A            516 	mov	dptr,#(_WD_init_file_name_3_5 + 0x000b)
   2124 74 43               517 	mov	a,#0x43
   2126 F0                  518 	movx	@dptr,a
                            519 ;	genPointerSet
                            520 ;     genFarPointerSet
   2127 90 06 1B            521 	mov	dptr,#(_WD_init_file_name_3_5 + 0x000c)
   212A 74 6F               522 	mov	a,#0x6F
   212C F0                  523 	movx	@dptr,a
                            524 ;	genPointerSet
                            525 ;     genFarPointerSet
   212D 90 06 1C            526 	mov	dptr,#(_WD_init_file_name_3_5 + 0x000d)
   2130 74 72               527 	mov	a,#0x72
   2132 F0                  528 	movx	@dptr,a
                            529 ;	genPointerSet
                            530 ;     genFarPointerSet
   2133 90 06 1D            531 	mov	dptr,#(_WD_init_file_name_3_5 + 0x000e)
   2136 74 65               532 	mov	a,#0x65
   2138 F0                  533 	movx	@dptr,a
                            534 ;	genPointerSet
                            535 ;     genFarPointerSet
   2139 90 06 1E            536 	mov	dptr,#(_WD_init_file_name_3_5 + 0x000f)
   213C 74 57               537 	mov	a,#0x57
   213E F0                  538 	movx	@dptr,a
                            539 ;	genPointerSet
                            540 ;     genFarPointerSet
   213F 90 06 1F            541 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0010)
   2142 74 61               542 	mov	a,#0x61
   2144 F0                  543 	movx	@dptr,a
                            544 ;	genPointerSet
                            545 ;     genFarPointerSet
   2145 90 06 20            546 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0011)
   2148 74 74               547 	mov	a,#0x74
   214A F0                  548 	movx	@dptr,a
                            549 ;	genPointerSet
                            550 ;     genFarPointerSet
   214B 90 06 21            551 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0012)
   214E 74 63               552 	mov	a,#0x63
   2150 F0                  553 	movx	@dptr,a
                            554 ;	genPointerSet
                            555 ;     genFarPointerSet
   2151 90 06 22            556 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0013)
   2154 74 68               557 	mov	a,#0x68
   2156 F0                  558 	movx	@dptr,a
                            559 ;	genPointerSet
                            560 ;     genFarPointerSet
   2157 90 06 23            561 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0014)
   215A 74 64               562 	mov	a,#0x64
   215C F0                  563 	movx	@dptr,a
                            564 ;	genPointerSet
                            565 ;     genFarPointerSet
   215D 90 06 24            566 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0015)
   2160 74 6F               567 	mov	a,#0x6F
   2162 F0                  568 	movx	@dptr,a
                            569 ;	genPointerSet
                            570 ;     genFarPointerSet
   2163 90 06 25            571 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0016)
   2166 74 67               572 	mov	a,#0x67
   2168 F0                  573 	movx	@dptr,a
                            574 ;	genPointerSet
                            575 ;     genFarPointerSet
   2169 90 06 26            576 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0017)
   216C 74 2F               577 	mov	a,#0x2F
   216E F0                  578 	movx	@dptr,a
                            579 ;	genPointerSet
                            580 ;     genFarPointerSet
   216F 90 06 27            581 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0018)
   2172 74 63               582 	mov	a,#0x63
   2174 F0                  583 	movx	@dptr,a
                            584 ;	genPointerSet
                            585 ;     genFarPointerSet
   2175 90 06 28            586 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0019)
   2178 74 6F               587 	mov	a,#0x6F
   217A F0                  588 	movx	@dptr,a
                            589 ;	genPointerSet
                            590 ;     genFarPointerSet
   217B 90 06 29            591 	mov	dptr,#(_WD_init_file_name_3_5 + 0x001a)
   217E 74 72               592 	mov	a,#0x72
   2180 F0                  593 	movx	@dptr,a
                            594 ;	genPointerSet
                            595 ;     genFarPointerSet
   2181 90 06 2A            596 	mov	dptr,#(_WD_init_file_name_3_5 + 0x001b)
   2184 74 65               597 	mov	a,#0x65
   2186 F0                  598 	movx	@dptr,a
                            599 ;	genPointerSet
                            600 ;     genFarPointerSet
   2187 90 06 2B            601 	mov	dptr,#(_WD_init_file_name_3_5 + 0x001c)
   218A 74 5F               602 	mov	a,#0x5F
   218C F0                  603 	movx	@dptr,a
                            604 ;	genPointerSet
                            605 ;     genFarPointerSet
   218D 90 06 2C            606 	mov	dptr,#(_WD_init_file_name_3_5 + 0x001d)
   2190 74 77               607 	mov	a,#0x77
   2192 F0                  608 	movx	@dptr,a
                            609 ;	genPointerSet
                            610 ;     genFarPointerSet
   2193 90 06 2D            611 	mov	dptr,#(_WD_init_file_name_3_5 + 0x001e)
   2196 74 61               612 	mov	a,#0x61
   2198 F0                  613 	movx	@dptr,a
                            614 ;	genPointerSet
                            615 ;     genFarPointerSet
   2199 90 06 2E            616 	mov	dptr,#(_WD_init_file_name_3_5 + 0x001f)
   219C 74 74               617 	mov	a,#0x74
   219E F0                  618 	movx	@dptr,a
                            619 ;	genPointerSet
                            620 ;     genFarPointerSet
   219F 90 06 2F            621 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0020)
   21A2 74 63               622 	mov	a,#0x63
   21A4 F0                  623 	movx	@dptr,a
                            624 ;	genPointerSet
                            625 ;     genFarPointerSet
   21A5 90 06 30            626 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0021)
   21A8 74 68               627 	mov	a,#0x68
   21AA F0                  628 	movx	@dptr,a
                            629 ;	genPointerSet
                            630 ;     genFarPointerSet
   21AB 90 06 31            631 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0022)
   21AE 74 64               632 	mov	a,#0x64
   21B0 F0                  633 	movx	@dptr,a
                            634 ;	genPointerSet
                            635 ;     genFarPointerSet
   21B1 90 06 32            636 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0023)
   21B4 74 6F               637 	mov	a,#0x6F
   21B6 F0                  638 	movx	@dptr,a
                            639 ;	genPointerSet
                            640 ;     genFarPointerSet
   21B7 90 06 33            641 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0024)
   21BA 74 67               642 	mov	a,#0x67
   21BC F0                  643 	movx	@dptr,a
                            644 ;	genPointerSet
                            645 ;     genFarPointerSet
   21BD 90 06 34            646 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0025)
   21C0 74 2E               647 	mov	a,#0x2E
   21C2 F0                  648 	movx	@dptr,a
                            649 ;	genPointerSet
                            650 ;     genFarPointerSet
   21C3 90 06 35            651 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0026)
   21C6 74 63               652 	mov	a,#0x63
   21C8 F0                  653 	movx	@dptr,a
                            654 ;	genPointerSet
                            655 ;     genFarPointerSet
   21C9 90 06 36            656 	mov	dptr,#(_WD_init_file_name_3_5 + 0x0027)
   21CC 74 00               657 	mov	a,#0x00
   21CE F0                  658 	movx	@dptr,a
                            659 ;	genAssign
   21CF 90 05 80            660 	mov	dptr,#_HAL_assert_fail_PARM_2
   21D2 74 23               661 	mov	a,#0x23
   21D4 F0                  662 	movx	@dptr,a
   21D5 E4                  663 	clr	a
   21D6 A3                  664 	inc	dptr
   21D7 F0                  665 	movx	@dptr,a
   21D8 A3                  666 	inc	dptr
   21D9 F0                  667 	movx	@dptr,a
   21DA A3                  668 	inc	dptr
   21DB F0                  669 	movx	@dptr,a
                            670 ;	genCall
   21DC 75 82 0F            671 	mov	dpl,#_WD_init_file_name_3_5
   21DF 75 83 06            672 	mov	dph,#(_WD_init_file_name_3_5 >> 8)
   21E2 75 F0 00            673 	mov	b,#0x00
   21E5 12 1B CC            674 	lcall	_HAL_assert_fail
   21E8                     675 00109$:
                    0271    676 	C$core_watchdog.c$37$1$1 ==.
                            677 ;	../drivers/CoreWatchdog/core_watchdog.c:37: instance->base_address = base;
                            678 ;	genAssign
   21E8 90 05 E4            679 	mov	dptr,#_WD_init_instance_1_1
   21EB E0                  680 	movx	a,@dptr
   21EC FE                  681 	mov	r6,a
   21ED A3                  682 	inc	dptr
   21EE E0                  683 	movx	a,@dptr
   21EF FF                  684 	mov	r7,a
   21F0 A3                  685 	inc	dptr
   21F1 E0                  686 	movx	a,@dptr
   21F2 F8                  687 	mov	r0,a
                            688 ;	genAssign
   21F3 90 05 DA            689 	mov	dptr,#_WD_init_PARM_2
   21F6 E0                  690 	movx	a,@dptr
   21F7 F9                  691 	mov	r1,a
   21F8 A3                  692 	inc	dptr
   21F9 E0                  693 	movx	a,@dptr
   21FA FA                  694 	mov	r2,a
                            695 ;	genPointerSet
                            696 ;	genGenPointerSet
   21FB 8E 82               697 	mov	dpl,r6
   21FD 8F 83               698 	mov	dph,r7
   21FF 88 F0               699 	mov	b,r0
   2201 E9                  700 	mov	a,r1
   2202 12 70 A4            701 	lcall	__gptrput
   2205 A3                  702 	inc	dptr
   2206 EA                  703 	mov	a,r2
   2207 12 70 A4            704 	lcall	__gptrput
                    0293    705 	C$core_watchdog.c$40$1$1 ==.
                            706 ;	../drivers/CoreWatchdog/core_watchdog.c:40: HAL_set_32bit_reg_field( instance->base_address, WDOGCONTROL_WATCHDOG_ENABLE, 0 );
                            707 ;	genPlus
                            708 ;	genPlusIncr
   220A 74 08               709 	mov	a,#0x08
   220C 25 01               710 	add	a,ar1
   220E F9                  711 	mov	r1,a
   220F 74 00               712 	mov	a,#0x00
   2211 35 02               713 	addc	a,ar2
   2213 FA                  714 	mov	r2,a
                            715 ;	genAssign
   2214 90 05 A2            716 	mov	dptr,#_HW_set_32bit_reg_field_PARM_2
   2217 74 04               717 	mov	a,#0x04
   2219 F0                  718 	movx	@dptr,a
                            719 ;	genAssign
   221A 90 05 A3            720 	mov	dptr,#_HW_set_32bit_reg_field_PARM_3
   221D 74 10               721 	mov	a,#0x10
   221F F0                  722 	movx	@dptr,a
   2220 E4                  723 	clr	a
   2221 A3                  724 	inc	dptr
   2222 F0                  725 	movx	@dptr,a
   2223 A3                  726 	inc	dptr
   2224 F0                  727 	movx	@dptr,a
   2225 A3                  728 	inc	dptr
   2226 F0                  729 	movx	@dptr,a
                            730 ;	genAssign
   2227 90 05 A7            731 	mov	dptr,#_HW_set_32bit_reg_field_PARM_4
   222A E4                  732 	clr	a
   222B F0                  733 	movx	@dptr,a
   222C A3                  734 	inc	dptr
   222D F0                  735 	movx	@dptr,a
   222E A3                  736 	inc	dptr
   222F F0                  737 	movx	@dptr,a
   2230 A3                  738 	inc	dptr
   2231 F0                  739 	movx	@dptr,a
                            740 ;	genCall
   2232 89 82               741 	mov	dpl,r1
   2234 8A 83               742 	mov	dph,r2
   2236 C0 06               743 	push	ar6
   2238 C0 07               744 	push	ar7
   223A C0 00               745 	push	ar0
   223C 12 1C 90            746 	lcall	_HW_set_32bit_reg_field
   223F D0 00               747 	pop	ar0
   2241 D0 07               748 	pop	ar7
   2243 D0 06               749 	pop	ar6
                    02CE    750 	C$core_watchdog.c$43$1$1 ==.
                            751 ;	../drivers/CoreWatchdog/core_watchdog.c:43: HAL_set_32bit_reg_field( instance->base_address, WDOGCONTROL_PRESCALE, scale );
                            752 ;	genPointerGet
                            753 ;	genGenPointerGet
   2245 8E 82               754 	mov	dpl,r6
   2247 8F 83               755 	mov	dph,r7
   2249 88 F0               756 	mov	b,r0
   224B 12 71 F6            757 	lcall	__gptrget
   224E FA                  758 	mov	r2,a
   224F A3                  759 	inc	dptr
   2250 12 71 F6            760 	lcall	__gptrget
   2253 FB                  761 	mov	r3,a
                            762 ;	genPlus
                            763 ;	genPlusIncr
   2254 74 08               764 	mov	a,#0x08
   2256 25 02               765 	add	a,ar2
   2258 FA                  766 	mov	r2,a
   2259 74 00               767 	mov	a,#0x00
   225B 35 03               768 	addc	a,ar3
   225D FB                  769 	mov	r3,a
                            770 ;	genAssign
   225E 90 05 A2            771 	mov	dptr,#_HW_set_32bit_reg_field_PARM_2
   2261 74 00               772 	mov	a,#0x00
   2263 F0                  773 	movx	@dptr,a
                            774 ;	genAssign
   2264 90 05 A3            775 	mov	dptr,#_HW_set_32bit_reg_field_PARM_3
   2267 74 0F               776 	mov	a,#0x0F
   2269 F0                  777 	movx	@dptr,a
   226A E4                  778 	clr	a
   226B A3                  779 	inc	dptr
   226C F0                  780 	movx	@dptr,a
   226D A3                  781 	inc	dptr
   226E F0                  782 	movx	@dptr,a
   226F A3                  783 	inc	dptr
   2270 F0                  784 	movx	@dptr,a
                            785 ;	genAssign
   2271 90 05 A7            786 	mov	dptr,#_HW_set_32bit_reg_field_PARM_4
   2274 E5 19               787 	mov	a,_WD_init_sloc0_1_0
   2276 F0                  788 	movx	@dptr,a
   2277 A3                  789 	inc	dptr
   2278 E5 1A               790 	mov	a,(_WD_init_sloc0_1_0 + 1)
   227A F0                  791 	movx	@dptr,a
   227B A3                  792 	inc	dptr
   227C E5 1B               793 	mov	a,(_WD_init_sloc0_1_0 + 2)
   227E F0                  794 	movx	@dptr,a
   227F A3                  795 	inc	dptr
   2280 E5 1C               796 	mov	a,(_WD_init_sloc0_1_0 + 3)
   2282 F0                  797 	movx	@dptr,a
                            798 ;	genCall
   2283 8A 82               799 	mov	dpl,r2
   2285 8B 83               800 	mov	dph,r3
   2287 C0 06               801 	push	ar6
   2289 C0 07               802 	push	ar7
   228B C0 00               803 	push	ar0
   228D 12 1C 90            804 	lcall	_HW_set_32bit_reg_field
   2290 D0 00               805 	pop	ar0
   2292 D0 07               806 	pop	ar7
   2294 D0 06               807 	pop	ar6
                    031F    808 	C$core_watchdog.c$44$1$1 ==.
                            809 ;	../drivers/CoreWatchdog/core_watchdog.c:44: HAL_set_32bit_reg( instance->base_address, WDOGLOAD, value );
                            810 ;	genPointerGet
                            811 ;	genGenPointerGet
   2296 8E 82               812 	mov	dpl,r6
   2298 8F 83               813 	mov	dph,r7
   229A 88 F0               814 	mov	b,r0
   229C 12 71 F6            815 	lcall	__gptrget
   229F FE                  816 	mov	r6,a
   22A0 A3                  817 	inc	dptr
   22A1 12 71 F6            818 	lcall	__gptrget
   22A4 FF                  819 	mov	r7,a
                            820 ;	genAssign
   22A5 90 05 DC            821 	mov	dptr,#_WD_init_PARM_3
   22A8 E0                  822 	movx	a,@dptr
   22A9 FA                  823 	mov	r2,a
   22AA A3                  824 	inc	dptr
   22AB E0                  825 	movx	a,@dptr
   22AC FB                  826 	mov	r3,a
   22AD A3                  827 	inc	dptr
   22AE E0                  828 	movx	a,@dptr
   22AF FC                  829 	mov	r4,a
   22B0 A3                  830 	inc	dptr
   22B1 E0                  831 	movx	a,@dptr
   22B2 FD                  832 	mov	r5,a
                            833 ;	genAssign
   22B3 90 05 9E            834 	mov	dptr,#_HW_set_32bit_reg_PARM_2
   22B6 EA                  835 	mov	a,r2
   22B7 F0                  836 	movx	@dptr,a
   22B8 A3                  837 	inc	dptr
   22B9 EB                  838 	mov	a,r3
   22BA F0                  839 	movx	@dptr,a
   22BB A3                  840 	inc	dptr
   22BC EC                  841 	mov	a,r4
   22BD F0                  842 	movx	@dptr,a
   22BE A3                  843 	inc	dptr
   22BF ED                  844 	mov	a,r5
   22C0 F0                  845 	movx	@dptr,a
                            846 ;	genCall
   22C1 8E 82               847 	mov	dpl,r6
   22C3 8F 83               848 	mov	dph,r7
   22C5 12 1C 38            849 	lcall	_HW_set_32bit_reg
   22C8                     850 00111$:
                    0351    851 	C$core_watchdog.c$45$1$1 ==.
                    0351    852 	XG$WD_init$0$0 ==.
   22C8 22                  853 	ret
                            854 ;------------------------------------------------------------
                            855 ;Allocation info for local variables in function 'WD_enable'
                            856 ;------------------------------------------------------------
                            857 ;instance                  Allocated with name '_WD_enable_instance_1_1'
                            858 ;file_name                 Allocated with name '_WD_enable_file_name_3_3'
                            859 ;------------------------------------------------------------
                    0352    860 	G$WD_enable$0$0 ==.
                    0352    861 	C$core_watchdog.c$52$1$1 ==.
                            862 ;	../drivers/CoreWatchdog/core_watchdog.c:52: WD_enable
                            863 ;	-----------------------------------------
                            864 ;	 function WD_enable
                            865 ;	-----------------------------------------
   22C9                     866 _WD_enable:
                            867 ;	genReceive
   22C9 AA F0               868 	mov	r2,b
   22CB AB 83               869 	mov	r3,dph
   22CD E5 82               870 	mov	a,dpl
   22CF 90 06 37            871 	mov	dptr,#_WD_enable_instance_1_1
   22D2 F0                  872 	movx	@dptr,a
   22D3 A3                  873 	inc	dptr
   22D4 EB                  874 	mov	a,r3
   22D5 F0                  875 	movx	@dptr,a
   22D6 A3                  876 	inc	dptr
   22D7 EA                  877 	mov	a,r2
   22D8 F0                  878 	movx	@dptr,a
                    0362    879 	C$core_watchdog.c$57$2$2 ==.
                            880 ;	../drivers/CoreWatchdog/core_watchdog.c:57: HAL_ASSERT( instance != NULL_instance )
                            881 ;	genAssign
   22D9 90 06 37            882 	mov	dptr,#_WD_enable_instance_1_1
   22DC E0                  883 	movx	a,@dptr
   22DD FA                  884 	mov	r2,a
   22DE A3                  885 	inc	dptr
   22DF E0                  886 	movx	a,@dptr
   22E0 FB                  887 	mov	r3,a
   22E1 A3                  888 	inc	dptr
   22E2 E0                  889 	movx	a,@dptr
   22E3 FC                  890 	mov	r4,a
                            891 ;	genAssign
   22E4 90 05 D7            892 	mov	dptr,#_NULL_instance
   22E7 E0                  893 	movx	a,@dptr
   22E8 FD                  894 	mov	r5,a
   22E9 A3                  895 	inc	dptr
   22EA E0                  896 	movx	a,@dptr
   22EB FE                  897 	mov	r6,a
   22EC A3                  898 	inc	dptr
   22ED E0                  899 	movx	a,@dptr
   22EE FF                  900 	mov	r7,a
                            901 ;	genCmpEq
                            902 ;	gencjneshort
   22EF EA                  903 	mov	a,r2
   22F0 B5 05 0A            904 	cjne	a,ar5,00109$
   22F3 EB                  905 	mov	a,r3
   22F4 B5 06 06            906 	cjne	a,ar6,00109$
   22F7 EC                  907 	mov	a,r4
   22F8 B5 07 02            908 	cjne	a,ar7,00109$
   22FB 80 03               909 	sjmp	00110$
   22FD                     910 00109$:
   22FD 02 24 09            911 	ljmp	00104$
   2300                     912 00110$:
                            913 ;	genPointerSet
                            914 ;     genFarPointerSet
   2300 90 06 3A            915 	mov	dptr,#_WD_enable_file_name_3_3
   2303 74 2E               916 	mov	a,#0x2E
   2305 F0                  917 	movx	@dptr,a
                            918 ;	genPointerSet
                            919 ;     genFarPointerSet
   2306 90 06 3B            920 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0001)
   2309 74 2E               921 	mov	a,#0x2E
   230B F0                  922 	movx	@dptr,a
                            923 ;	genPointerSet
                            924 ;     genFarPointerSet
   230C 90 06 3C            925 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0002)
   230F 74 2F               926 	mov	a,#0x2F
   2311 F0                  927 	movx	@dptr,a
                            928 ;	genPointerSet
                            929 ;     genFarPointerSet
   2312 90 06 3D            930 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0003)
   2315 74 64               931 	mov	a,#0x64
   2317 F0                  932 	movx	@dptr,a
                            933 ;	genPointerSet
                            934 ;     genFarPointerSet
   2318 90 06 3E            935 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0004)
   231B 74 72               936 	mov	a,#0x72
   231D F0                  937 	movx	@dptr,a
                            938 ;	genPointerSet
                            939 ;     genFarPointerSet
   231E 90 06 3F            940 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0005)
   2321 74 69               941 	mov	a,#0x69
   2323 F0                  942 	movx	@dptr,a
                            943 ;	genPointerSet
                            944 ;     genFarPointerSet
   2324 90 06 40            945 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0006)
   2327 74 76               946 	mov	a,#0x76
   2329 F0                  947 	movx	@dptr,a
                            948 ;	genPointerSet
                            949 ;     genFarPointerSet
   232A 90 06 41            950 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0007)
   232D 74 65               951 	mov	a,#0x65
   232F F0                  952 	movx	@dptr,a
                            953 ;	genPointerSet
                            954 ;     genFarPointerSet
   2330 90 06 42            955 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0008)
   2333 74 72               956 	mov	a,#0x72
   2335 F0                  957 	movx	@dptr,a
                            958 ;	genPointerSet
                            959 ;     genFarPointerSet
   2336 90 06 43            960 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0009)
   2339 74 73               961 	mov	a,#0x73
   233B F0                  962 	movx	@dptr,a
                            963 ;	genPointerSet
                            964 ;     genFarPointerSet
   233C 90 06 44            965 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x000a)
   233F 74 2F               966 	mov	a,#0x2F
   2341 F0                  967 	movx	@dptr,a
                            968 ;	genPointerSet
                            969 ;     genFarPointerSet
   2342 90 06 45            970 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x000b)
   2345 74 43               971 	mov	a,#0x43
   2347 F0                  972 	movx	@dptr,a
                            973 ;	genPointerSet
                            974 ;     genFarPointerSet
   2348 90 06 46            975 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x000c)
   234B 74 6F               976 	mov	a,#0x6F
   234D F0                  977 	movx	@dptr,a
                            978 ;	genPointerSet
                            979 ;     genFarPointerSet
   234E 90 06 47            980 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x000d)
   2351 74 72               981 	mov	a,#0x72
   2353 F0                  982 	movx	@dptr,a
                            983 ;	genPointerSet
                            984 ;     genFarPointerSet
   2354 90 06 48            985 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x000e)
   2357 74 65               986 	mov	a,#0x65
   2359 F0                  987 	movx	@dptr,a
                            988 ;	genPointerSet
                            989 ;     genFarPointerSet
   235A 90 06 49            990 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x000f)
   235D 74 57               991 	mov	a,#0x57
   235F F0                  992 	movx	@dptr,a
                            993 ;	genPointerSet
                            994 ;     genFarPointerSet
   2360 90 06 4A            995 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0010)
   2363 74 61               996 	mov	a,#0x61
   2365 F0                  997 	movx	@dptr,a
                            998 ;	genPointerSet
                            999 ;     genFarPointerSet
   2366 90 06 4B           1000 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0011)
   2369 74 74              1001 	mov	a,#0x74
   236B F0                 1002 	movx	@dptr,a
                           1003 ;	genPointerSet
                           1004 ;     genFarPointerSet
   236C 90 06 4C           1005 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0012)
   236F 74 63              1006 	mov	a,#0x63
   2371 F0                 1007 	movx	@dptr,a
                           1008 ;	genPointerSet
                           1009 ;     genFarPointerSet
   2372 90 06 4D           1010 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0013)
   2375 74 68              1011 	mov	a,#0x68
   2377 F0                 1012 	movx	@dptr,a
                           1013 ;	genPointerSet
                           1014 ;     genFarPointerSet
   2378 90 06 4E           1015 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0014)
   237B 74 64              1016 	mov	a,#0x64
   237D F0                 1017 	movx	@dptr,a
                           1018 ;	genPointerSet
                           1019 ;     genFarPointerSet
   237E 90 06 4F           1020 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0015)
   2381 74 6F              1021 	mov	a,#0x6F
   2383 F0                 1022 	movx	@dptr,a
                           1023 ;	genPointerSet
                           1024 ;     genFarPointerSet
   2384 90 06 50           1025 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0016)
   2387 74 67              1026 	mov	a,#0x67
   2389 F0                 1027 	movx	@dptr,a
                           1028 ;	genPointerSet
                           1029 ;     genFarPointerSet
   238A 90 06 51           1030 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0017)
   238D 74 2F              1031 	mov	a,#0x2F
   238F F0                 1032 	movx	@dptr,a
                           1033 ;	genPointerSet
                           1034 ;     genFarPointerSet
   2390 90 06 52           1035 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0018)
   2393 74 63              1036 	mov	a,#0x63
   2395 F0                 1037 	movx	@dptr,a
                           1038 ;	genPointerSet
                           1039 ;     genFarPointerSet
   2396 90 06 53           1040 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0019)
   2399 74 6F              1041 	mov	a,#0x6F
   239B F0                 1042 	movx	@dptr,a
                           1043 ;	genPointerSet
                           1044 ;     genFarPointerSet
   239C 90 06 54           1045 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x001a)
   239F 74 72              1046 	mov	a,#0x72
   23A1 F0                 1047 	movx	@dptr,a
                           1048 ;	genPointerSet
                           1049 ;     genFarPointerSet
   23A2 90 06 55           1050 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x001b)
   23A5 74 65              1051 	mov	a,#0x65
   23A7 F0                 1052 	movx	@dptr,a
                           1053 ;	genPointerSet
                           1054 ;     genFarPointerSet
   23A8 90 06 56           1055 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x001c)
   23AB 74 5F              1056 	mov	a,#0x5F
   23AD F0                 1057 	movx	@dptr,a
                           1058 ;	genPointerSet
                           1059 ;     genFarPointerSet
   23AE 90 06 57           1060 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x001d)
   23B1 74 77              1061 	mov	a,#0x77
   23B3 F0                 1062 	movx	@dptr,a
                           1063 ;	genPointerSet
                           1064 ;     genFarPointerSet
   23B4 90 06 58           1065 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x001e)
   23B7 74 61              1066 	mov	a,#0x61
   23B9 F0                 1067 	movx	@dptr,a
                           1068 ;	genPointerSet
                           1069 ;     genFarPointerSet
   23BA 90 06 59           1070 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x001f)
   23BD 74 74              1071 	mov	a,#0x74
   23BF F0                 1072 	movx	@dptr,a
                           1073 ;	genPointerSet
                           1074 ;     genFarPointerSet
   23C0 90 06 5A           1075 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0020)
   23C3 74 63              1076 	mov	a,#0x63
   23C5 F0                 1077 	movx	@dptr,a
                           1078 ;	genPointerSet
                           1079 ;     genFarPointerSet
   23C6 90 06 5B           1080 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0021)
   23C9 74 68              1081 	mov	a,#0x68
   23CB F0                 1082 	movx	@dptr,a
                           1083 ;	genPointerSet
                           1084 ;     genFarPointerSet
   23CC 90 06 5C           1085 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0022)
   23CF 74 64              1086 	mov	a,#0x64
   23D1 F0                 1087 	movx	@dptr,a
                           1088 ;	genPointerSet
                           1089 ;     genFarPointerSet
   23D2 90 06 5D           1090 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0023)
   23D5 74 6F              1091 	mov	a,#0x6F
   23D7 F0                 1092 	movx	@dptr,a
                           1093 ;	genPointerSet
                           1094 ;     genFarPointerSet
   23D8 90 06 5E           1095 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0024)
   23DB 74 67              1096 	mov	a,#0x67
   23DD F0                 1097 	movx	@dptr,a
                           1098 ;	genPointerSet
                           1099 ;     genFarPointerSet
   23DE 90 06 5F           1100 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0025)
   23E1 74 2E              1101 	mov	a,#0x2E
   23E3 F0                 1102 	movx	@dptr,a
                           1103 ;	genPointerSet
                           1104 ;     genFarPointerSet
   23E4 90 06 60           1105 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0026)
   23E7 74 63              1106 	mov	a,#0x63
   23E9 F0                 1107 	movx	@dptr,a
                           1108 ;	genPointerSet
                           1109 ;     genFarPointerSet
   23EA 90 06 61           1110 	mov	dptr,#(_WD_enable_file_name_3_3 + 0x0027)
   23ED 74 00              1111 	mov	a,#0x00
   23EF F0                 1112 	movx	@dptr,a
                           1113 ;	genAssign
   23F0 90 05 80           1114 	mov	dptr,#_HAL_assert_fail_PARM_2
   23F3 74 39              1115 	mov	a,#0x39
   23F5 F0                 1116 	movx	@dptr,a
   23F6 E4                 1117 	clr	a
   23F7 A3                 1118 	inc	dptr
   23F8 F0                 1119 	movx	@dptr,a
   23F9 A3                 1120 	inc	dptr
   23FA F0                 1121 	movx	@dptr,a
   23FB A3                 1122 	inc	dptr
   23FC F0                 1123 	movx	@dptr,a
                           1124 ;	genCall
   23FD 75 82 3A           1125 	mov	dpl,#_WD_enable_file_name_3_3
   2400 75 83 06           1126 	mov	dph,#(_WD_enable_file_name_3_3 >> 8)
   2403 75 F0 00           1127 	mov	b,#0x00
   2406 12 1B CC           1128 	lcall	_HAL_assert_fail
   2409                    1129 00104$:
                    0492   1130 	C$core_watchdog.c$59$1$1 ==.
                           1131 ;	../drivers/CoreWatchdog/core_watchdog.c:59: HAL_set_32bit_reg_field( instance->base_address, WDOGCONTROL_WATCHDOG_ENABLE, 1 );
                           1132 ;	genAssign
   2409 90 06 37           1133 	mov	dptr,#_WD_enable_instance_1_1
   240C E0                 1134 	movx	a,@dptr
   240D FA                 1135 	mov	r2,a
   240E A3                 1136 	inc	dptr
   240F E0                 1137 	movx	a,@dptr
   2410 FB                 1138 	mov	r3,a
   2411 A3                 1139 	inc	dptr
   2412 E0                 1140 	movx	a,@dptr
   2413 FC                 1141 	mov	r4,a
                           1142 ;	genPointerGet
                           1143 ;	genGenPointerGet
   2414 8A 82              1144 	mov	dpl,r2
   2416 8B 83              1145 	mov	dph,r3
   2418 8C F0              1146 	mov	b,r4
   241A 12 71 F6           1147 	lcall	__gptrget
   241D FA                 1148 	mov	r2,a
   241E A3                 1149 	inc	dptr
   241F 12 71 F6           1150 	lcall	__gptrget
   2422 FB                 1151 	mov	r3,a
                           1152 ;	genPlus
                           1153 ;	genPlusIncr
   2423 74 08              1154 	mov	a,#0x08
   2425 25 02              1155 	add	a,ar2
   2427 FA                 1156 	mov	r2,a
   2428 74 00              1157 	mov	a,#0x00
   242A 35 03              1158 	addc	a,ar3
   242C FB                 1159 	mov	r3,a
                           1160 ;	genAssign
   242D 90 05 A2           1161 	mov	dptr,#_HW_set_32bit_reg_field_PARM_2
   2430 74 04              1162 	mov	a,#0x04
   2432 F0                 1163 	movx	@dptr,a
                           1164 ;	genAssign
   2433 90 05 A3           1165 	mov	dptr,#_HW_set_32bit_reg_field_PARM_3
   2436 74 10              1166 	mov	a,#0x10
   2438 F0                 1167 	movx	@dptr,a
   2439 E4                 1168 	clr	a
   243A A3                 1169 	inc	dptr
   243B F0                 1170 	movx	@dptr,a
   243C A3                 1171 	inc	dptr
   243D F0                 1172 	movx	@dptr,a
   243E A3                 1173 	inc	dptr
   243F F0                 1174 	movx	@dptr,a
                           1175 ;	genAssign
   2440 90 05 A7           1176 	mov	dptr,#_HW_set_32bit_reg_field_PARM_4
   2443 74 01              1177 	mov	a,#0x01
   2445 F0                 1178 	movx	@dptr,a
   2446 E4                 1179 	clr	a
   2447 A3                 1180 	inc	dptr
   2448 F0                 1181 	movx	@dptr,a
   2449 A3                 1182 	inc	dptr
   244A F0                 1183 	movx	@dptr,a
   244B A3                 1184 	inc	dptr
   244C F0                 1185 	movx	@dptr,a
                           1186 ;	genCall
   244D 8A 82              1187 	mov	dpl,r2
   244F 8B 83              1188 	mov	dph,r3
   2451 12 1C 90           1189 	lcall	_HW_set_32bit_reg_field
   2454                    1190 00106$:
                    04DD   1191 	C$core_watchdog.c$60$1$1 ==.
                    04DD   1192 	XG$WD_enable$0$0 ==.
   2454 22                 1193 	ret
                           1194 ;------------------------------------------------------------
                           1195 ;Allocation info for local variables in function 'WD_disable'
                           1196 ;------------------------------------------------------------
                           1197 ;instance                  Allocated with name '_WD_disable_instance_1_1'
                           1198 ;file_name                 Allocated with name '_WD_disable_file_name_3_3'
                           1199 ;------------------------------------------------------------
                    04DE   1200 	G$WD_disable$0$0 ==.
                    04DE   1201 	C$core_watchdog.c$68$1$1 ==.
                           1202 ;	../drivers/CoreWatchdog/core_watchdog.c:68: WD_disable
                           1203 ;	-----------------------------------------
                           1204 ;	 function WD_disable
                           1205 ;	-----------------------------------------
   2455                    1206 _WD_disable:
                           1207 ;	genReceive
   2455 AA F0              1208 	mov	r2,b
   2457 AB 83              1209 	mov	r3,dph
   2459 E5 82              1210 	mov	a,dpl
   245B 90 06 62           1211 	mov	dptr,#_WD_disable_instance_1_1
   245E F0                 1212 	movx	@dptr,a
   245F A3                 1213 	inc	dptr
   2460 EB                 1214 	mov	a,r3
   2461 F0                 1215 	movx	@dptr,a
   2462 A3                 1216 	inc	dptr
   2463 EA                 1217 	mov	a,r2
   2464 F0                 1218 	movx	@dptr,a
                    04EE   1219 	C$core_watchdog.c$73$2$2 ==.
                           1220 ;	../drivers/CoreWatchdog/core_watchdog.c:73: HAL_ASSERT( instance != NULL_instance )
                           1221 ;	genAssign
   2465 90 06 62           1222 	mov	dptr,#_WD_disable_instance_1_1
   2468 E0                 1223 	movx	a,@dptr
   2469 FA                 1224 	mov	r2,a
   246A A3                 1225 	inc	dptr
   246B E0                 1226 	movx	a,@dptr
   246C FB                 1227 	mov	r3,a
   246D A3                 1228 	inc	dptr
   246E E0                 1229 	movx	a,@dptr
   246F FC                 1230 	mov	r4,a
                           1231 ;	genAssign
   2470 90 05 D7           1232 	mov	dptr,#_NULL_instance
   2473 E0                 1233 	movx	a,@dptr
   2474 FD                 1234 	mov	r5,a
   2475 A3                 1235 	inc	dptr
   2476 E0                 1236 	movx	a,@dptr
   2477 FE                 1237 	mov	r6,a
   2478 A3                 1238 	inc	dptr
   2479 E0                 1239 	movx	a,@dptr
   247A FF                 1240 	mov	r7,a
                           1241 ;	genCmpEq
                           1242 ;	gencjneshort
   247B EA                 1243 	mov	a,r2
   247C B5 05 0A           1244 	cjne	a,ar5,00109$
   247F EB                 1245 	mov	a,r3
   2480 B5 06 06           1246 	cjne	a,ar6,00109$
   2483 EC                 1247 	mov	a,r4
   2484 B5 07 02           1248 	cjne	a,ar7,00109$
   2487 80 03              1249 	sjmp	00110$
   2489                    1250 00109$:
   2489 02 25 95           1251 	ljmp	00104$
   248C                    1252 00110$:
                           1253 ;	genPointerSet
                           1254 ;     genFarPointerSet
   248C 90 06 65           1255 	mov	dptr,#_WD_disable_file_name_3_3
   248F 74 2E              1256 	mov	a,#0x2E
   2491 F0                 1257 	movx	@dptr,a
                           1258 ;	genPointerSet
                           1259 ;     genFarPointerSet
   2492 90 06 66           1260 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0001)
   2495 74 2E              1261 	mov	a,#0x2E
   2497 F0                 1262 	movx	@dptr,a
                           1263 ;	genPointerSet
                           1264 ;     genFarPointerSet
   2498 90 06 67           1265 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0002)
   249B 74 2F              1266 	mov	a,#0x2F
   249D F0                 1267 	movx	@dptr,a
                           1268 ;	genPointerSet
                           1269 ;     genFarPointerSet
   249E 90 06 68           1270 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0003)
   24A1 74 64              1271 	mov	a,#0x64
   24A3 F0                 1272 	movx	@dptr,a
                           1273 ;	genPointerSet
                           1274 ;     genFarPointerSet
   24A4 90 06 69           1275 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0004)
   24A7 74 72              1276 	mov	a,#0x72
   24A9 F0                 1277 	movx	@dptr,a
                           1278 ;	genPointerSet
                           1279 ;     genFarPointerSet
   24AA 90 06 6A           1280 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0005)
   24AD 74 69              1281 	mov	a,#0x69
   24AF F0                 1282 	movx	@dptr,a
                           1283 ;	genPointerSet
                           1284 ;     genFarPointerSet
   24B0 90 06 6B           1285 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0006)
   24B3 74 76              1286 	mov	a,#0x76
   24B5 F0                 1287 	movx	@dptr,a
                           1288 ;	genPointerSet
                           1289 ;     genFarPointerSet
   24B6 90 06 6C           1290 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0007)
   24B9 74 65              1291 	mov	a,#0x65
   24BB F0                 1292 	movx	@dptr,a
                           1293 ;	genPointerSet
                           1294 ;     genFarPointerSet
   24BC 90 06 6D           1295 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0008)
   24BF 74 72              1296 	mov	a,#0x72
   24C1 F0                 1297 	movx	@dptr,a
                           1298 ;	genPointerSet
                           1299 ;     genFarPointerSet
   24C2 90 06 6E           1300 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0009)
   24C5 74 73              1301 	mov	a,#0x73
   24C7 F0                 1302 	movx	@dptr,a
                           1303 ;	genPointerSet
                           1304 ;     genFarPointerSet
   24C8 90 06 6F           1305 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x000a)
   24CB 74 2F              1306 	mov	a,#0x2F
   24CD F0                 1307 	movx	@dptr,a
                           1308 ;	genPointerSet
                           1309 ;     genFarPointerSet
   24CE 90 06 70           1310 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x000b)
   24D1 74 43              1311 	mov	a,#0x43
   24D3 F0                 1312 	movx	@dptr,a
                           1313 ;	genPointerSet
                           1314 ;     genFarPointerSet
   24D4 90 06 71           1315 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x000c)
   24D7 74 6F              1316 	mov	a,#0x6F
   24D9 F0                 1317 	movx	@dptr,a
                           1318 ;	genPointerSet
                           1319 ;     genFarPointerSet
   24DA 90 06 72           1320 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x000d)
   24DD 74 72              1321 	mov	a,#0x72
   24DF F0                 1322 	movx	@dptr,a
                           1323 ;	genPointerSet
                           1324 ;     genFarPointerSet
   24E0 90 06 73           1325 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x000e)
   24E3 74 65              1326 	mov	a,#0x65
   24E5 F0                 1327 	movx	@dptr,a
                           1328 ;	genPointerSet
                           1329 ;     genFarPointerSet
   24E6 90 06 74           1330 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x000f)
   24E9 74 57              1331 	mov	a,#0x57
   24EB F0                 1332 	movx	@dptr,a
                           1333 ;	genPointerSet
                           1334 ;     genFarPointerSet
   24EC 90 06 75           1335 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0010)
   24EF 74 61              1336 	mov	a,#0x61
   24F1 F0                 1337 	movx	@dptr,a
                           1338 ;	genPointerSet
                           1339 ;     genFarPointerSet
   24F2 90 06 76           1340 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0011)
   24F5 74 74              1341 	mov	a,#0x74
   24F7 F0                 1342 	movx	@dptr,a
                           1343 ;	genPointerSet
                           1344 ;     genFarPointerSet
   24F8 90 06 77           1345 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0012)
   24FB 74 63              1346 	mov	a,#0x63
   24FD F0                 1347 	movx	@dptr,a
                           1348 ;	genPointerSet
                           1349 ;     genFarPointerSet
   24FE 90 06 78           1350 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0013)
   2501 74 68              1351 	mov	a,#0x68
   2503 F0                 1352 	movx	@dptr,a
                           1353 ;	genPointerSet
                           1354 ;     genFarPointerSet
   2504 90 06 79           1355 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0014)
   2507 74 64              1356 	mov	a,#0x64
   2509 F0                 1357 	movx	@dptr,a
                           1358 ;	genPointerSet
                           1359 ;     genFarPointerSet
   250A 90 06 7A           1360 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0015)
   250D 74 6F              1361 	mov	a,#0x6F
   250F F0                 1362 	movx	@dptr,a
                           1363 ;	genPointerSet
                           1364 ;     genFarPointerSet
   2510 90 06 7B           1365 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0016)
   2513 74 67              1366 	mov	a,#0x67
   2515 F0                 1367 	movx	@dptr,a
                           1368 ;	genPointerSet
                           1369 ;     genFarPointerSet
   2516 90 06 7C           1370 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0017)
   2519 74 2F              1371 	mov	a,#0x2F
   251B F0                 1372 	movx	@dptr,a
                           1373 ;	genPointerSet
                           1374 ;     genFarPointerSet
   251C 90 06 7D           1375 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0018)
   251F 74 63              1376 	mov	a,#0x63
   2521 F0                 1377 	movx	@dptr,a
                           1378 ;	genPointerSet
                           1379 ;     genFarPointerSet
   2522 90 06 7E           1380 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0019)
   2525 74 6F              1381 	mov	a,#0x6F
   2527 F0                 1382 	movx	@dptr,a
                           1383 ;	genPointerSet
                           1384 ;     genFarPointerSet
   2528 90 06 7F           1385 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x001a)
   252B 74 72              1386 	mov	a,#0x72
   252D F0                 1387 	movx	@dptr,a
                           1388 ;	genPointerSet
                           1389 ;     genFarPointerSet
   252E 90 06 80           1390 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x001b)
   2531 74 65              1391 	mov	a,#0x65
   2533 F0                 1392 	movx	@dptr,a
                           1393 ;	genPointerSet
                           1394 ;     genFarPointerSet
   2534 90 06 81           1395 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x001c)
   2537 74 5F              1396 	mov	a,#0x5F
   2539 F0                 1397 	movx	@dptr,a
                           1398 ;	genPointerSet
                           1399 ;     genFarPointerSet
   253A 90 06 82           1400 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x001d)
   253D 74 77              1401 	mov	a,#0x77
   253F F0                 1402 	movx	@dptr,a
                           1403 ;	genPointerSet
                           1404 ;     genFarPointerSet
   2540 90 06 83           1405 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x001e)
   2543 74 61              1406 	mov	a,#0x61
   2545 F0                 1407 	movx	@dptr,a
                           1408 ;	genPointerSet
                           1409 ;     genFarPointerSet
   2546 90 06 84           1410 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x001f)
   2549 74 74              1411 	mov	a,#0x74
   254B F0                 1412 	movx	@dptr,a
                           1413 ;	genPointerSet
                           1414 ;     genFarPointerSet
   254C 90 06 85           1415 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0020)
   254F 74 63              1416 	mov	a,#0x63
   2551 F0                 1417 	movx	@dptr,a
                           1418 ;	genPointerSet
                           1419 ;     genFarPointerSet
   2552 90 06 86           1420 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0021)
   2555 74 68              1421 	mov	a,#0x68
   2557 F0                 1422 	movx	@dptr,a
                           1423 ;	genPointerSet
                           1424 ;     genFarPointerSet
   2558 90 06 87           1425 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0022)
   255B 74 64              1426 	mov	a,#0x64
   255D F0                 1427 	movx	@dptr,a
                           1428 ;	genPointerSet
                           1429 ;     genFarPointerSet
   255E 90 06 88           1430 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0023)
   2561 74 6F              1431 	mov	a,#0x6F
   2563 F0                 1432 	movx	@dptr,a
                           1433 ;	genPointerSet
                           1434 ;     genFarPointerSet
   2564 90 06 89           1435 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0024)
   2567 74 67              1436 	mov	a,#0x67
   2569 F0                 1437 	movx	@dptr,a
                           1438 ;	genPointerSet
                           1439 ;     genFarPointerSet
   256A 90 06 8A           1440 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0025)
   256D 74 2E              1441 	mov	a,#0x2E
   256F F0                 1442 	movx	@dptr,a
                           1443 ;	genPointerSet
                           1444 ;     genFarPointerSet
   2570 90 06 8B           1445 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0026)
   2573 74 63              1446 	mov	a,#0x63
   2575 F0                 1447 	movx	@dptr,a
                           1448 ;	genPointerSet
                           1449 ;     genFarPointerSet
   2576 90 06 8C           1450 	mov	dptr,#(_WD_disable_file_name_3_3 + 0x0027)
   2579 74 00              1451 	mov	a,#0x00
   257B F0                 1452 	movx	@dptr,a
                           1453 ;	genAssign
   257C 90 05 80           1454 	mov	dptr,#_HAL_assert_fail_PARM_2
   257F 74 49              1455 	mov	a,#0x49
   2581 F0                 1456 	movx	@dptr,a
   2582 E4                 1457 	clr	a
   2583 A3                 1458 	inc	dptr
   2584 F0                 1459 	movx	@dptr,a
   2585 A3                 1460 	inc	dptr
   2586 F0                 1461 	movx	@dptr,a
   2587 A3                 1462 	inc	dptr
   2588 F0                 1463 	movx	@dptr,a
                           1464 ;	genCall
   2589 75 82 65           1465 	mov	dpl,#_WD_disable_file_name_3_3
   258C 75 83 06           1466 	mov	dph,#(_WD_disable_file_name_3_3 >> 8)
   258F 75 F0 00           1467 	mov	b,#0x00
   2592 12 1B CC           1468 	lcall	_HAL_assert_fail
   2595                    1469 00104$:
                    061E   1470 	C$core_watchdog.c$75$1$1 ==.
                           1471 ;	../drivers/CoreWatchdog/core_watchdog.c:75: HAL_set_32bit_reg_field( instance->base_address, WDOGCONTROL_WATCHDOG_ENABLE, 0 );
                           1472 ;	genAssign
   2595 90 06 62           1473 	mov	dptr,#_WD_disable_instance_1_1
   2598 E0                 1474 	movx	a,@dptr
   2599 FA                 1475 	mov	r2,a
   259A A3                 1476 	inc	dptr
   259B E0                 1477 	movx	a,@dptr
   259C FB                 1478 	mov	r3,a
   259D A3                 1479 	inc	dptr
   259E E0                 1480 	movx	a,@dptr
   259F FC                 1481 	mov	r4,a
                           1482 ;	genPointerGet
                           1483 ;	genGenPointerGet
   25A0 8A 82              1484 	mov	dpl,r2
   25A2 8B 83              1485 	mov	dph,r3
   25A4 8C F0              1486 	mov	b,r4
   25A6 12 71 F6           1487 	lcall	__gptrget
   25A9 FA                 1488 	mov	r2,a
   25AA A3                 1489 	inc	dptr
   25AB 12 71 F6           1490 	lcall	__gptrget
   25AE FB                 1491 	mov	r3,a
                           1492 ;	genPlus
                           1493 ;	genPlusIncr
   25AF 74 08              1494 	mov	a,#0x08
   25B1 25 02              1495 	add	a,ar2
   25B3 FA                 1496 	mov	r2,a
   25B4 74 00              1497 	mov	a,#0x00
   25B6 35 03              1498 	addc	a,ar3
   25B8 FB                 1499 	mov	r3,a
                           1500 ;	genAssign
   25B9 90 05 A2           1501 	mov	dptr,#_HW_set_32bit_reg_field_PARM_2
   25BC 74 04              1502 	mov	a,#0x04
   25BE F0                 1503 	movx	@dptr,a
                           1504 ;	genAssign
   25BF 90 05 A3           1505 	mov	dptr,#_HW_set_32bit_reg_field_PARM_3
   25C2 74 10              1506 	mov	a,#0x10
   25C4 F0                 1507 	movx	@dptr,a
   25C5 E4                 1508 	clr	a
   25C6 A3                 1509 	inc	dptr
   25C7 F0                 1510 	movx	@dptr,a
   25C8 A3                 1511 	inc	dptr
   25C9 F0                 1512 	movx	@dptr,a
   25CA A3                 1513 	inc	dptr
   25CB F0                 1514 	movx	@dptr,a
                           1515 ;	genAssign
   25CC 90 05 A7           1516 	mov	dptr,#_HW_set_32bit_reg_field_PARM_4
   25CF E4                 1517 	clr	a
   25D0 F0                 1518 	movx	@dptr,a
   25D1 A3                 1519 	inc	dptr
   25D2 F0                 1520 	movx	@dptr,a
   25D3 A3                 1521 	inc	dptr
   25D4 F0                 1522 	movx	@dptr,a
   25D5 A3                 1523 	inc	dptr
   25D6 F0                 1524 	movx	@dptr,a
                           1525 ;	genCall
   25D7 8A 82              1526 	mov	dpl,r2
   25D9 8B 83              1527 	mov	dph,r3
   25DB 12 1C 90           1528 	lcall	_HW_set_32bit_reg_field
   25DE                    1529 00106$:
                    0667   1530 	C$core_watchdog.c$76$1$1 ==.
                    0667   1531 	XG$WD_disable$0$0 ==.
   25DE 22                 1532 	ret
                           1533 ;------------------------------------------------------------
                           1534 ;Allocation info for local variables in function 'WD_reload'
                           1535 ;------------------------------------------------------------
                           1536 ;instance                  Allocated with name '_WD_reload_instance_1_1'
                           1537 ;file_name                 Allocated with name '_WD_reload_file_name_3_3'
                           1538 ;------------------------------------------------------------
                    0668   1539 	G$WD_reload$0$0 ==.
                    0668   1540 	C$core_watchdog.c$84$1$1 ==.
                           1541 ;	../drivers/CoreWatchdog/core_watchdog.c:84: WD_reload
                           1542 ;	-----------------------------------------
                           1543 ;	 function WD_reload
                           1544 ;	-----------------------------------------
   25DF                    1545 _WD_reload:
                           1546 ;	genReceive
   25DF AA F0              1547 	mov	r2,b
   25E1 AB 83              1548 	mov	r3,dph
   25E3 E5 82              1549 	mov	a,dpl
   25E5 90 06 8D           1550 	mov	dptr,#_WD_reload_instance_1_1
   25E8 F0                 1551 	movx	@dptr,a
   25E9 A3                 1552 	inc	dptr
   25EA EB                 1553 	mov	a,r3
   25EB F0                 1554 	movx	@dptr,a
   25EC A3                 1555 	inc	dptr
   25ED EA                 1556 	mov	a,r2
   25EE F0                 1557 	movx	@dptr,a
                    0678   1558 	C$core_watchdog.c$89$2$2 ==.
                           1559 ;	../drivers/CoreWatchdog/core_watchdog.c:89: HAL_ASSERT( instance != NULL_instance )
                           1560 ;	genAssign
   25EF 90 06 8D           1561 	mov	dptr,#_WD_reload_instance_1_1
   25F2 E0                 1562 	movx	a,@dptr
   25F3 FA                 1563 	mov	r2,a
   25F4 A3                 1564 	inc	dptr
   25F5 E0                 1565 	movx	a,@dptr
   25F6 FB                 1566 	mov	r3,a
   25F7 A3                 1567 	inc	dptr
   25F8 E0                 1568 	movx	a,@dptr
   25F9 FC                 1569 	mov	r4,a
                           1570 ;	genAssign
   25FA 90 05 D7           1571 	mov	dptr,#_NULL_instance
   25FD E0                 1572 	movx	a,@dptr
   25FE FD                 1573 	mov	r5,a
   25FF A3                 1574 	inc	dptr
   2600 E0                 1575 	movx	a,@dptr
   2601 FE                 1576 	mov	r6,a
   2602 A3                 1577 	inc	dptr
   2603 E0                 1578 	movx	a,@dptr
   2604 FF                 1579 	mov	r7,a
                           1580 ;	genCmpEq
                           1581 ;	gencjneshort
   2605 EA                 1582 	mov	a,r2
   2606 B5 05 0A           1583 	cjne	a,ar5,00109$
   2609 EB                 1584 	mov	a,r3
   260A B5 06 06           1585 	cjne	a,ar6,00109$
   260D EC                 1586 	mov	a,r4
   260E B5 07 02           1587 	cjne	a,ar7,00109$
   2611 80 03              1588 	sjmp	00110$
   2613                    1589 00109$:
   2613 02 27 1F           1590 	ljmp	00104$
   2616                    1591 00110$:
                           1592 ;	genPointerSet
                           1593 ;     genFarPointerSet
   2616 90 06 90           1594 	mov	dptr,#_WD_reload_file_name_3_3
   2619 74 2E              1595 	mov	a,#0x2E
   261B F0                 1596 	movx	@dptr,a
                           1597 ;	genPointerSet
                           1598 ;     genFarPointerSet
   261C 90 06 91           1599 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0001)
   261F 74 2E              1600 	mov	a,#0x2E
   2621 F0                 1601 	movx	@dptr,a
                           1602 ;	genPointerSet
                           1603 ;     genFarPointerSet
   2622 90 06 92           1604 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0002)
   2625 74 2F              1605 	mov	a,#0x2F
   2627 F0                 1606 	movx	@dptr,a
                           1607 ;	genPointerSet
                           1608 ;     genFarPointerSet
   2628 90 06 93           1609 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0003)
   262B 74 64              1610 	mov	a,#0x64
   262D F0                 1611 	movx	@dptr,a
                           1612 ;	genPointerSet
                           1613 ;     genFarPointerSet
   262E 90 06 94           1614 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0004)
   2631 74 72              1615 	mov	a,#0x72
   2633 F0                 1616 	movx	@dptr,a
                           1617 ;	genPointerSet
                           1618 ;     genFarPointerSet
   2634 90 06 95           1619 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0005)
   2637 74 69              1620 	mov	a,#0x69
   2639 F0                 1621 	movx	@dptr,a
                           1622 ;	genPointerSet
                           1623 ;     genFarPointerSet
   263A 90 06 96           1624 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0006)
   263D 74 76              1625 	mov	a,#0x76
   263F F0                 1626 	movx	@dptr,a
                           1627 ;	genPointerSet
                           1628 ;     genFarPointerSet
   2640 90 06 97           1629 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0007)
   2643 74 65              1630 	mov	a,#0x65
   2645 F0                 1631 	movx	@dptr,a
                           1632 ;	genPointerSet
                           1633 ;     genFarPointerSet
   2646 90 06 98           1634 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0008)
   2649 74 72              1635 	mov	a,#0x72
   264B F0                 1636 	movx	@dptr,a
                           1637 ;	genPointerSet
                           1638 ;     genFarPointerSet
   264C 90 06 99           1639 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0009)
   264F 74 73              1640 	mov	a,#0x73
   2651 F0                 1641 	movx	@dptr,a
                           1642 ;	genPointerSet
                           1643 ;     genFarPointerSet
   2652 90 06 9A           1644 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x000a)
   2655 74 2F              1645 	mov	a,#0x2F
   2657 F0                 1646 	movx	@dptr,a
                           1647 ;	genPointerSet
                           1648 ;     genFarPointerSet
   2658 90 06 9B           1649 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x000b)
   265B 74 43              1650 	mov	a,#0x43
   265D F0                 1651 	movx	@dptr,a
                           1652 ;	genPointerSet
                           1653 ;     genFarPointerSet
   265E 90 06 9C           1654 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x000c)
   2661 74 6F              1655 	mov	a,#0x6F
   2663 F0                 1656 	movx	@dptr,a
                           1657 ;	genPointerSet
                           1658 ;     genFarPointerSet
   2664 90 06 9D           1659 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x000d)
   2667 74 72              1660 	mov	a,#0x72
   2669 F0                 1661 	movx	@dptr,a
                           1662 ;	genPointerSet
                           1663 ;     genFarPointerSet
   266A 90 06 9E           1664 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x000e)
   266D 74 65              1665 	mov	a,#0x65
   266F F0                 1666 	movx	@dptr,a
                           1667 ;	genPointerSet
                           1668 ;     genFarPointerSet
   2670 90 06 9F           1669 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x000f)
   2673 74 57              1670 	mov	a,#0x57
   2675 F0                 1671 	movx	@dptr,a
                           1672 ;	genPointerSet
                           1673 ;     genFarPointerSet
   2676 90 06 A0           1674 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0010)
   2679 74 61              1675 	mov	a,#0x61
   267B F0                 1676 	movx	@dptr,a
                           1677 ;	genPointerSet
                           1678 ;     genFarPointerSet
   267C 90 06 A1           1679 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0011)
   267F 74 74              1680 	mov	a,#0x74
   2681 F0                 1681 	movx	@dptr,a
                           1682 ;	genPointerSet
                           1683 ;     genFarPointerSet
   2682 90 06 A2           1684 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0012)
   2685 74 63              1685 	mov	a,#0x63
   2687 F0                 1686 	movx	@dptr,a
                           1687 ;	genPointerSet
                           1688 ;     genFarPointerSet
   2688 90 06 A3           1689 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0013)
   268B 74 68              1690 	mov	a,#0x68
   268D F0                 1691 	movx	@dptr,a
                           1692 ;	genPointerSet
                           1693 ;     genFarPointerSet
   268E 90 06 A4           1694 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0014)
   2691 74 64              1695 	mov	a,#0x64
   2693 F0                 1696 	movx	@dptr,a
                           1697 ;	genPointerSet
                           1698 ;     genFarPointerSet
   2694 90 06 A5           1699 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0015)
   2697 74 6F              1700 	mov	a,#0x6F
   2699 F0                 1701 	movx	@dptr,a
                           1702 ;	genPointerSet
                           1703 ;     genFarPointerSet
   269A 90 06 A6           1704 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0016)
   269D 74 67              1705 	mov	a,#0x67
   269F F0                 1706 	movx	@dptr,a
                           1707 ;	genPointerSet
                           1708 ;     genFarPointerSet
   26A0 90 06 A7           1709 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0017)
   26A3 74 2F              1710 	mov	a,#0x2F
   26A5 F0                 1711 	movx	@dptr,a
                           1712 ;	genPointerSet
                           1713 ;     genFarPointerSet
   26A6 90 06 A8           1714 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0018)
   26A9 74 63              1715 	mov	a,#0x63
   26AB F0                 1716 	movx	@dptr,a
                           1717 ;	genPointerSet
                           1718 ;     genFarPointerSet
   26AC 90 06 A9           1719 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0019)
   26AF 74 6F              1720 	mov	a,#0x6F
   26B1 F0                 1721 	movx	@dptr,a
                           1722 ;	genPointerSet
                           1723 ;     genFarPointerSet
   26B2 90 06 AA           1724 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x001a)
   26B5 74 72              1725 	mov	a,#0x72
   26B7 F0                 1726 	movx	@dptr,a
                           1727 ;	genPointerSet
                           1728 ;     genFarPointerSet
   26B8 90 06 AB           1729 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x001b)
   26BB 74 65              1730 	mov	a,#0x65
   26BD F0                 1731 	movx	@dptr,a
                           1732 ;	genPointerSet
                           1733 ;     genFarPointerSet
   26BE 90 06 AC           1734 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x001c)
   26C1 74 5F              1735 	mov	a,#0x5F
   26C3 F0                 1736 	movx	@dptr,a
                           1737 ;	genPointerSet
                           1738 ;     genFarPointerSet
   26C4 90 06 AD           1739 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x001d)
   26C7 74 77              1740 	mov	a,#0x77
   26C9 F0                 1741 	movx	@dptr,a
                           1742 ;	genPointerSet
                           1743 ;     genFarPointerSet
   26CA 90 06 AE           1744 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x001e)
   26CD 74 61              1745 	mov	a,#0x61
   26CF F0                 1746 	movx	@dptr,a
                           1747 ;	genPointerSet
                           1748 ;     genFarPointerSet
   26D0 90 06 AF           1749 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x001f)
   26D3 74 74              1750 	mov	a,#0x74
   26D5 F0                 1751 	movx	@dptr,a
                           1752 ;	genPointerSet
                           1753 ;     genFarPointerSet
   26D6 90 06 B0           1754 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0020)
   26D9 74 63              1755 	mov	a,#0x63
   26DB F0                 1756 	movx	@dptr,a
                           1757 ;	genPointerSet
                           1758 ;     genFarPointerSet
   26DC 90 06 B1           1759 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0021)
   26DF 74 68              1760 	mov	a,#0x68
   26E1 F0                 1761 	movx	@dptr,a
                           1762 ;	genPointerSet
                           1763 ;     genFarPointerSet
   26E2 90 06 B2           1764 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0022)
   26E5 74 64              1765 	mov	a,#0x64
   26E7 F0                 1766 	movx	@dptr,a
                           1767 ;	genPointerSet
                           1768 ;     genFarPointerSet
   26E8 90 06 B3           1769 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0023)
   26EB 74 6F              1770 	mov	a,#0x6F
   26ED F0                 1771 	movx	@dptr,a
                           1772 ;	genPointerSet
                           1773 ;     genFarPointerSet
   26EE 90 06 B4           1774 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0024)
   26F1 74 67              1775 	mov	a,#0x67
   26F3 F0                 1776 	movx	@dptr,a
                           1777 ;	genPointerSet
                           1778 ;     genFarPointerSet
   26F4 90 06 B5           1779 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0025)
   26F7 74 2E              1780 	mov	a,#0x2E
   26F9 F0                 1781 	movx	@dptr,a
                           1782 ;	genPointerSet
                           1783 ;     genFarPointerSet
   26FA 90 06 B6           1784 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0026)
   26FD 74 63              1785 	mov	a,#0x63
   26FF F0                 1786 	movx	@dptr,a
                           1787 ;	genPointerSet
                           1788 ;     genFarPointerSet
   2700 90 06 B7           1789 	mov	dptr,#(_WD_reload_file_name_3_3 + 0x0027)
   2703 74 00              1790 	mov	a,#0x00
   2705 F0                 1791 	movx	@dptr,a
                           1792 ;	genAssign
   2706 90 05 80           1793 	mov	dptr,#_HAL_assert_fail_PARM_2
   2709 74 59              1794 	mov	a,#0x59
   270B F0                 1795 	movx	@dptr,a
   270C E4                 1796 	clr	a
   270D A3                 1797 	inc	dptr
   270E F0                 1798 	movx	@dptr,a
   270F A3                 1799 	inc	dptr
   2710 F0                 1800 	movx	@dptr,a
   2711 A3                 1801 	inc	dptr
   2712 F0                 1802 	movx	@dptr,a
                           1803 ;	genCall
   2713 75 82 90           1804 	mov	dpl,#_WD_reload_file_name_3_3
   2716 75 83 06           1805 	mov	dph,#(_WD_reload_file_name_3_3 >> 8)
   2719 75 F0 00           1806 	mov	b,#0x00
   271C 12 1B CC           1807 	lcall	_HAL_assert_fail
   271F                    1808 00104$:
                    07A8   1809 	C$core_watchdog.c$91$1$1 ==.
                           1810 ;	../drivers/CoreWatchdog/core_watchdog.c:91: HAL_set_32bit_reg( instance->base_address, WDOGREFRESH, 1 );
                           1811 ;	genAssign
   271F 90 06 8D           1812 	mov	dptr,#_WD_reload_instance_1_1
   2722 E0                 1813 	movx	a,@dptr
   2723 FA                 1814 	mov	r2,a
   2724 A3                 1815 	inc	dptr
   2725 E0                 1816 	movx	a,@dptr
   2726 FB                 1817 	mov	r3,a
   2727 A3                 1818 	inc	dptr
   2728 E0                 1819 	movx	a,@dptr
   2729 FC                 1820 	mov	r4,a
                           1821 ;	genPointerGet
                           1822 ;	genGenPointerGet
   272A 8A 82              1823 	mov	dpl,r2
   272C 8B 83              1824 	mov	dph,r3
   272E 8C F0              1825 	mov	b,r4
   2730 12 71 F6           1826 	lcall	__gptrget
   2733 FA                 1827 	mov	r2,a
   2734 A3                 1828 	inc	dptr
   2735 12 71 F6           1829 	lcall	__gptrget
   2738 FB                 1830 	mov	r3,a
                           1831 ;	genPlus
                           1832 ;	genPlusIncr
   2739 74 0C              1833 	mov	a,#0x0C
   273B 25 02              1834 	add	a,ar2
   273D FA                 1835 	mov	r2,a
   273E 74 00              1836 	mov	a,#0x00
   2740 35 03              1837 	addc	a,ar3
   2742 FB                 1838 	mov	r3,a
                           1839 ;	genAssign
   2743 90 05 9E           1840 	mov	dptr,#_HW_set_32bit_reg_PARM_2
   2746 74 01              1841 	mov	a,#0x01
   2748 F0                 1842 	movx	@dptr,a
   2749 E4                 1843 	clr	a
   274A A3                 1844 	inc	dptr
   274B F0                 1845 	movx	@dptr,a
   274C A3                 1846 	inc	dptr
   274D F0                 1847 	movx	@dptr,a
   274E A3                 1848 	inc	dptr
   274F F0                 1849 	movx	@dptr,a
                           1850 ;	genCall
   2750 8A 82              1851 	mov	dpl,r2
   2752 8B 83              1852 	mov	dph,r3
   2754 12 1C 38           1853 	lcall	_HW_set_32bit_reg
   2757                    1854 00106$:
                    07E0   1855 	C$core_watchdog.c$92$1$1 ==.
                    07E0   1856 	XG$WD_reload$0$0 ==.
   2757 22                 1857 	ret
                           1858 ;------------------------------------------------------------
                           1859 ;Allocation info for local variables in function 'WD_current_value'
                           1860 ;------------------------------------------------------------
                           1861 ;instance                  Allocated with name '_WD_current_value_instance_1_1'
                           1862 ;file_name                 Allocated with name '_WD_current_value_file_name_3_3'
                           1863 ;------------------------------------------------------------
                    07E1   1864 	G$WD_current_value$0$0 ==.
                    07E1   1865 	C$core_watchdog.c$100$1$1 ==.
                           1866 ;	../drivers/CoreWatchdog/core_watchdog.c:100: WD_current_value
                           1867 ;	-----------------------------------------
                           1868 ;	 function WD_current_value
                           1869 ;	-----------------------------------------
   2758                    1870 _WD_current_value:
                           1871 ;	genReceive
   2758 AA F0              1872 	mov	r2,b
   275A AB 83              1873 	mov	r3,dph
   275C E5 82              1874 	mov	a,dpl
   275E 90 06 B8           1875 	mov	dptr,#_WD_current_value_instance_1_1
   2761 F0                 1876 	movx	@dptr,a
   2762 A3                 1877 	inc	dptr
   2763 EB                 1878 	mov	a,r3
   2764 F0                 1879 	movx	@dptr,a
   2765 A3                 1880 	inc	dptr
   2766 EA                 1881 	mov	a,r2
   2767 F0                 1882 	movx	@dptr,a
                    07F1   1883 	C$core_watchdog.c$105$2$2 ==.
                           1884 ;	../drivers/CoreWatchdog/core_watchdog.c:105: HAL_ASSERT( instance != NULL_instance )
                           1885 ;	genAssign
   2768 90 06 B8           1886 	mov	dptr,#_WD_current_value_instance_1_1
   276B E0                 1887 	movx	a,@dptr
   276C FA                 1888 	mov	r2,a
   276D A3                 1889 	inc	dptr
   276E E0                 1890 	movx	a,@dptr
   276F FB                 1891 	mov	r3,a
   2770 A3                 1892 	inc	dptr
   2771 E0                 1893 	movx	a,@dptr
   2772 FC                 1894 	mov	r4,a
                           1895 ;	genAssign
   2773 90 05 D7           1896 	mov	dptr,#_NULL_instance
   2776 E0                 1897 	movx	a,@dptr
   2777 FD                 1898 	mov	r5,a
   2778 A3                 1899 	inc	dptr
   2779 E0                 1900 	movx	a,@dptr
   277A FE                 1901 	mov	r6,a
   277B A3                 1902 	inc	dptr
   277C E0                 1903 	movx	a,@dptr
   277D FF                 1904 	mov	r7,a
                           1905 ;	genCmpEq
                           1906 ;	gencjneshort
   277E EA                 1907 	mov	a,r2
   277F B5 05 0A           1908 	cjne	a,ar5,00109$
   2782 EB                 1909 	mov	a,r3
   2783 B5 06 06           1910 	cjne	a,ar6,00109$
   2786 EC                 1911 	mov	a,r4
   2787 B5 07 02           1912 	cjne	a,ar7,00109$
   278A 80 03              1913 	sjmp	00110$
   278C                    1914 00109$:
   278C 02 28 98           1915 	ljmp	00104$
   278F                    1916 00110$:
                           1917 ;	genPointerSet
                           1918 ;     genFarPointerSet
   278F 90 06 BB           1919 	mov	dptr,#_WD_current_value_file_name_3_3
   2792 74 2E              1920 	mov	a,#0x2E
   2794 F0                 1921 	movx	@dptr,a
                           1922 ;	genPointerSet
                           1923 ;     genFarPointerSet
   2795 90 06 BC           1924 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0001)
   2798 74 2E              1925 	mov	a,#0x2E
   279A F0                 1926 	movx	@dptr,a
                           1927 ;	genPointerSet
                           1928 ;     genFarPointerSet
   279B 90 06 BD           1929 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0002)
   279E 74 2F              1930 	mov	a,#0x2F
   27A0 F0                 1931 	movx	@dptr,a
                           1932 ;	genPointerSet
                           1933 ;     genFarPointerSet
   27A1 90 06 BE           1934 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0003)
   27A4 74 64              1935 	mov	a,#0x64
   27A6 F0                 1936 	movx	@dptr,a
                           1937 ;	genPointerSet
                           1938 ;     genFarPointerSet
   27A7 90 06 BF           1939 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0004)
   27AA 74 72              1940 	mov	a,#0x72
   27AC F0                 1941 	movx	@dptr,a
                           1942 ;	genPointerSet
                           1943 ;     genFarPointerSet
   27AD 90 06 C0           1944 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0005)
   27B0 74 69              1945 	mov	a,#0x69
   27B2 F0                 1946 	movx	@dptr,a
                           1947 ;	genPointerSet
                           1948 ;     genFarPointerSet
   27B3 90 06 C1           1949 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0006)
   27B6 74 76              1950 	mov	a,#0x76
   27B8 F0                 1951 	movx	@dptr,a
                           1952 ;	genPointerSet
                           1953 ;     genFarPointerSet
   27B9 90 06 C2           1954 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0007)
   27BC 74 65              1955 	mov	a,#0x65
   27BE F0                 1956 	movx	@dptr,a
                           1957 ;	genPointerSet
                           1958 ;     genFarPointerSet
   27BF 90 06 C3           1959 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0008)
   27C2 74 72              1960 	mov	a,#0x72
   27C4 F0                 1961 	movx	@dptr,a
                           1962 ;	genPointerSet
                           1963 ;     genFarPointerSet
   27C5 90 06 C4           1964 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0009)
   27C8 74 73              1965 	mov	a,#0x73
   27CA F0                 1966 	movx	@dptr,a
                           1967 ;	genPointerSet
                           1968 ;     genFarPointerSet
   27CB 90 06 C5           1969 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x000a)
   27CE 74 2F              1970 	mov	a,#0x2F
   27D0 F0                 1971 	movx	@dptr,a
                           1972 ;	genPointerSet
                           1973 ;     genFarPointerSet
   27D1 90 06 C6           1974 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x000b)
   27D4 74 43              1975 	mov	a,#0x43
   27D6 F0                 1976 	movx	@dptr,a
                           1977 ;	genPointerSet
                           1978 ;     genFarPointerSet
   27D7 90 06 C7           1979 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x000c)
   27DA 74 6F              1980 	mov	a,#0x6F
   27DC F0                 1981 	movx	@dptr,a
                           1982 ;	genPointerSet
                           1983 ;     genFarPointerSet
   27DD 90 06 C8           1984 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x000d)
   27E0 74 72              1985 	mov	a,#0x72
   27E2 F0                 1986 	movx	@dptr,a
                           1987 ;	genPointerSet
                           1988 ;     genFarPointerSet
   27E3 90 06 C9           1989 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x000e)
   27E6 74 65              1990 	mov	a,#0x65
   27E8 F0                 1991 	movx	@dptr,a
                           1992 ;	genPointerSet
                           1993 ;     genFarPointerSet
   27E9 90 06 CA           1994 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x000f)
   27EC 74 57              1995 	mov	a,#0x57
   27EE F0                 1996 	movx	@dptr,a
                           1997 ;	genPointerSet
                           1998 ;     genFarPointerSet
   27EF 90 06 CB           1999 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0010)
   27F2 74 61              2000 	mov	a,#0x61
   27F4 F0                 2001 	movx	@dptr,a
                           2002 ;	genPointerSet
                           2003 ;     genFarPointerSet
   27F5 90 06 CC           2004 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0011)
   27F8 74 74              2005 	mov	a,#0x74
   27FA F0                 2006 	movx	@dptr,a
                           2007 ;	genPointerSet
                           2008 ;     genFarPointerSet
   27FB 90 06 CD           2009 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0012)
   27FE 74 63              2010 	mov	a,#0x63
   2800 F0                 2011 	movx	@dptr,a
                           2012 ;	genPointerSet
                           2013 ;     genFarPointerSet
   2801 90 06 CE           2014 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0013)
   2804 74 68              2015 	mov	a,#0x68
   2806 F0                 2016 	movx	@dptr,a
                           2017 ;	genPointerSet
                           2018 ;     genFarPointerSet
   2807 90 06 CF           2019 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0014)
   280A 74 64              2020 	mov	a,#0x64
   280C F0                 2021 	movx	@dptr,a
                           2022 ;	genPointerSet
                           2023 ;     genFarPointerSet
   280D 90 06 D0           2024 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0015)
   2810 74 6F              2025 	mov	a,#0x6F
   2812 F0                 2026 	movx	@dptr,a
                           2027 ;	genPointerSet
                           2028 ;     genFarPointerSet
   2813 90 06 D1           2029 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0016)
   2816 74 67              2030 	mov	a,#0x67
   2818 F0                 2031 	movx	@dptr,a
                           2032 ;	genPointerSet
                           2033 ;     genFarPointerSet
   2819 90 06 D2           2034 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0017)
   281C 74 2F              2035 	mov	a,#0x2F
   281E F0                 2036 	movx	@dptr,a
                           2037 ;	genPointerSet
                           2038 ;     genFarPointerSet
   281F 90 06 D3           2039 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0018)
   2822 74 63              2040 	mov	a,#0x63
   2824 F0                 2041 	movx	@dptr,a
                           2042 ;	genPointerSet
                           2043 ;     genFarPointerSet
   2825 90 06 D4           2044 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0019)
   2828 74 6F              2045 	mov	a,#0x6F
   282A F0                 2046 	movx	@dptr,a
                           2047 ;	genPointerSet
                           2048 ;     genFarPointerSet
   282B 90 06 D5           2049 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x001a)
   282E 74 72              2050 	mov	a,#0x72
   2830 F0                 2051 	movx	@dptr,a
                           2052 ;	genPointerSet
                           2053 ;     genFarPointerSet
   2831 90 06 D6           2054 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x001b)
   2834 74 65              2055 	mov	a,#0x65
   2836 F0                 2056 	movx	@dptr,a
                           2057 ;	genPointerSet
                           2058 ;     genFarPointerSet
   2837 90 06 D7           2059 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x001c)
   283A 74 5F              2060 	mov	a,#0x5F
   283C F0                 2061 	movx	@dptr,a
                           2062 ;	genPointerSet
                           2063 ;     genFarPointerSet
   283D 90 06 D8           2064 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x001d)
   2840 74 77              2065 	mov	a,#0x77
   2842 F0                 2066 	movx	@dptr,a
                           2067 ;	genPointerSet
                           2068 ;     genFarPointerSet
   2843 90 06 D9           2069 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x001e)
   2846 74 61              2070 	mov	a,#0x61
   2848 F0                 2071 	movx	@dptr,a
                           2072 ;	genPointerSet
                           2073 ;     genFarPointerSet
   2849 90 06 DA           2074 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x001f)
   284C 74 74              2075 	mov	a,#0x74
   284E F0                 2076 	movx	@dptr,a
                           2077 ;	genPointerSet
                           2078 ;     genFarPointerSet
   284F 90 06 DB           2079 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0020)
   2852 74 63              2080 	mov	a,#0x63
   2854 F0                 2081 	movx	@dptr,a
                           2082 ;	genPointerSet
                           2083 ;     genFarPointerSet
   2855 90 06 DC           2084 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0021)
   2858 74 68              2085 	mov	a,#0x68
   285A F0                 2086 	movx	@dptr,a
                           2087 ;	genPointerSet
                           2088 ;     genFarPointerSet
   285B 90 06 DD           2089 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0022)
   285E 74 64              2090 	mov	a,#0x64
   2860 F0                 2091 	movx	@dptr,a
                           2092 ;	genPointerSet
                           2093 ;     genFarPointerSet
   2861 90 06 DE           2094 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0023)
   2864 74 6F              2095 	mov	a,#0x6F
   2866 F0                 2096 	movx	@dptr,a
                           2097 ;	genPointerSet
                           2098 ;     genFarPointerSet
   2867 90 06 DF           2099 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0024)
   286A 74 67              2100 	mov	a,#0x67
   286C F0                 2101 	movx	@dptr,a
                           2102 ;	genPointerSet
                           2103 ;     genFarPointerSet
   286D 90 06 E0           2104 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0025)
   2870 74 2E              2105 	mov	a,#0x2E
   2872 F0                 2106 	movx	@dptr,a
                           2107 ;	genPointerSet
                           2108 ;     genFarPointerSet
   2873 90 06 E1           2109 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0026)
   2876 74 63              2110 	mov	a,#0x63
   2878 F0                 2111 	movx	@dptr,a
                           2112 ;	genPointerSet
                           2113 ;     genFarPointerSet
   2879 90 06 E2           2114 	mov	dptr,#(_WD_current_value_file_name_3_3 + 0x0027)
   287C 74 00              2115 	mov	a,#0x00
   287E F0                 2116 	movx	@dptr,a
                           2117 ;	genAssign
   287F 90 05 80           2118 	mov	dptr,#_HAL_assert_fail_PARM_2
   2882 74 69              2119 	mov	a,#0x69
   2884 F0                 2120 	movx	@dptr,a
   2885 E4                 2121 	clr	a
   2886 A3                 2122 	inc	dptr
   2887 F0                 2123 	movx	@dptr,a
   2888 A3                 2124 	inc	dptr
   2889 F0                 2125 	movx	@dptr,a
   288A A3                 2126 	inc	dptr
   288B F0                 2127 	movx	@dptr,a
                           2128 ;	genCall
   288C 75 82 BB           2129 	mov	dpl,#_WD_current_value_file_name_3_3
   288F 75 83 06           2130 	mov	dph,#(_WD_current_value_file_name_3_3 >> 8)
   2892 75 F0 00           2131 	mov	b,#0x00
   2895 12 1B CC           2132 	lcall	_HAL_assert_fail
   2898                    2133 00104$:
                    0921   2134 	C$core_watchdog.c$107$1$1 ==.
                           2135 ;	../drivers/CoreWatchdog/core_watchdog.c:107: return HAL_get_32bit_reg( instance->base_address, WDOGVALUE );
                           2136 ;	genAssign
   2898 90 06 B8           2137 	mov	dptr,#_WD_current_value_instance_1_1
   289B E0                 2138 	movx	a,@dptr
   289C FA                 2139 	mov	r2,a
   289D A3                 2140 	inc	dptr
   289E E0                 2141 	movx	a,@dptr
   289F FB                 2142 	mov	r3,a
   28A0 A3                 2143 	inc	dptr
   28A1 E0                 2144 	movx	a,@dptr
   28A2 FC                 2145 	mov	r4,a
                           2146 ;	genPointerGet
                           2147 ;	genGenPointerGet
   28A3 8A 82              2148 	mov	dpl,r2
   28A5 8B 83              2149 	mov	dph,r3
   28A7 8C F0              2150 	mov	b,r4
   28A9 12 71 F6           2151 	lcall	__gptrget
   28AC FA                 2152 	mov	r2,a
   28AD A3                 2153 	inc	dptr
   28AE 12 71 F6           2154 	lcall	__gptrget
   28B1 FB                 2155 	mov	r3,a
                           2156 ;	genPlus
                           2157 ;	genPlusIncr
   28B2 74 04              2158 	mov	a,#0x04
   28B4 25 02              2159 	add	a,ar2
   28B6 FA                 2160 	mov	r2,a
   28B7 74 00              2161 	mov	a,#0x00
   28B9 35 03              2162 	addc	a,ar3
   28BB FB                 2163 	mov	r3,a
                           2164 ;	genCall
   28BC 8A 82              2165 	mov	dpl,r2
   28BE 8B 83              2166 	mov	dph,r3
   28C0 12 1C 2C           2167 	lcall	_HW_get_32bit_reg
   28C3 AA 82              2168 	mov	r2,dpl
   28C5 AB 83              2169 	mov	r3,dph
   28C7 AC F0              2170 	mov	r4,b
   28C9 FD                 2171 	mov	r5,a
                           2172 ;	genRet
   28CA 8A 82              2173 	mov	dpl,r2
   28CC 8B 83              2174 	mov	dph,r3
   28CE 8C F0              2175 	mov	b,r4
   28D0 ED                 2176 	mov	a,r5
   28D1                    2177 00106$:
                    095A   2178 	C$core_watchdog.c$108$1$1 ==.
                    095A   2179 	XG$WD_current_value$0$0 ==.
   28D1 22                 2180 	ret
                           2181 	.area CSEG    (CODE)
                           2182 	.area CONST   (CODE)
                           2183 	.area XINIT   (CODE)
                           2184 	.area CABS    (ABS,CODE)
