                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.3 #4543 (Dec 31 2006)
                              4 ; This file generated Wed May 04 10:48:17 2016
                              5 ;--------------------------------------------------------
                              6 	.module ___main
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _g_wd
                             14 	.globl _g_gpio
                             15 	.globl _rx_char_ptr
                             16 	.globl _rx_char
                             17 	.globl _key
                             18 	.globl _wait
                             19 ;--------------------------------------------------------
                             20 ; special function registers
                             21 ;--------------------------------------------------------
                             22 	.area RSEG    (DATA)
                             23 ;--------------------------------------------------------
                             24 ; special function bits
                             25 ;--------------------------------------------------------
                             26 	.area RSEG    (DATA)
                             27 ;--------------------------------------------------------
                             28 ; overlayable register banks
                             29 ;--------------------------------------------------------
                             30 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                      31 	.ds 8
                             32 ;--------------------------------------------------------
                             33 ; internal ram data
                             34 ;--------------------------------------------------------
                             35 	.area DSEG    (DATA)
                             36 ;--------------------------------------------------------
                             37 ; overlayable items in internal ram 
                             38 ;--------------------------------------------------------
                             39 	.area OSEG    (OVR,DATA)
                             40 ;--------------------------------------------------------
                             41 ; Stack segment in internal ram 
                             42 ;--------------------------------------------------------
                             43 	.area	SSEG	(DATA)
   006E                      44 __start__stack:
   006E                      45 	.ds	1
                             46 
                             47 ;--------------------------------------------------------
                             48 ; indirectly addressable internal ram data
                             49 ;--------------------------------------------------------
                             50 	.area ISEG    (DATA)
                             51 ;--------------------------------------------------------
                             52 ; absolute internal ram data
                             53 ;--------------------------------------------------------
                             54 	.area IABS    (ABS,DATA)
                             55 	.area IABS    (ABS,DATA)
                             56 ;--------------------------------------------------------
                             57 ; bit data
                             58 ;--------------------------------------------------------
                             59 	.area BSEG    (BIT)
                             60 ;--------------------------------------------------------
                             61 ; paged external ram data
                             62 ;--------------------------------------------------------
                             63 	.area PSEG    (PAG,XDATA)
                             64 ;--------------------------------------------------------
                             65 ; external ram data
                             66 ;--------------------------------------------------------
                             67 	.area XSEG    (XDATA)
                    0000     68 G$key$0$0==.
   03F2                      69 _key::
   03F2                      70 	.ds 1
                    0001     71 G$rx_char$0$0==.
   03F3                      72 _rx_char::
   03F3                      73 	.ds 10
                    000B     74 G$rx_char_ptr$0$0==.
   03FD                      75 _rx_char_ptr::
   03FD                      76 	.ds 3
                    000E     77 G$g_gpio$0$0==.
   0400                      78 _g_gpio::
   0400                      79 	.ds 3
                    0011     80 G$g_wd$0$0==.
   0403                      81 _g_wd::
   0403                      82 	.ds 2
                    0013     83 Lmain$uart_msg$1$1==.
   0405                      84 _main_uart_msg_1_1:
   0405                      85 	.ds 31
                    0032     86 Lmain$linefeed$1$1==.
   0424                      87 _main_linefeed_1_1:
   0424                      88 	.ds 3
                    0035     89 Lmain$sram_addr$1$1==.
   0427                      90 _main_sram_addr_1_1:
   0427                      91 	.ds 2
                    0037     92 Lmain$rx_data$2$4==.
   0429                      93 _main_rx_data_2_4:
   0429                      94 	.ds 2
                    0039     95 Lwait$time_in_ms$1$1==.
   042B                      96 _wait_time_in_ms_1_1:
   042B                      97 	.ds 2
                    003B     98 Lwait$i$1$1==.
   042D                      99 _wait_i_1_1:
   042D                     100 	.ds 2
                            101 ;--------------------------------------------------------
                            102 ; external initialized ram data
                            103 ;--------------------------------------------------------
                            104 	.area XISEG   (XDATA)
                            105 	.area HOME    (CODE)
                            106 	.area GSINIT0 (CODE)
                            107 	.area GSINIT1 (CODE)
                            108 	.area GSINIT2 (CODE)
                            109 	.area GSINIT3 (CODE)
                            110 	.area GSINIT4 (CODE)
                            111 	.area GSINIT5 (CODE)
                            112 	.area GSINIT  (CODE)
                            113 	.area GSFINAL (CODE)
                            114 	.area CSEG    (CODE)
                            115 ;--------------------------------------------------------
                            116 ; interrupt vector 
                            117 ;--------------------------------------------------------
                            118 	.area HOME    (CODE)
   0000                     119 __interrupt_vect:
   0000 02 00 08            120 	ljmp	__sdcc_gsinit_startup
                            121 ;--------------------------------------------------------
                            122 ; global & static initialisations
                            123 ;--------------------------------------------------------
                            124 	.area HOME    (CODE)
                            125 	.area GSINIT  (CODE)
                            126 	.area GSFINAL (CODE)
                            127 	.area GSINIT  (CODE)
                            128 	.globl __sdcc_gsinit_startup
                            129 	.globl __sdcc_program_startup
                            130 	.globl __start__stack
                            131 	.globl __mcs51_genXINIT
                            132 	.globl __mcs51_genXRAMCLEAR
                            133 	.globl __mcs51_genRAMCLEAR
                            134 	.area GSFINAL (CODE)
   005F 02 00 03            135 	ljmp	__sdcc_program_startup
                            136 ;--------------------------------------------------------
                            137 ; Home
                            138 ;--------------------------------------------------------
                            139 	.area HOME    (CODE)
                            140 	.area HOME    (CODE)
   0003                     141 __sdcc_program_startup:
   0003 12 0F CD            142 	lcall	_main
                            143 ;	return from main will lock up
   0006 80 FE               144 	sjmp .
                            145 ;--------------------------------------------------------
                            146 ; code
                            147 ;--------------------------------------------------------
                            148 	.area CSEG    (CODE)
                            149 ;------------------------------------------------------------
                            150 ;Allocation info for local variables in function 'main'
                            151 ;------------------------------------------------------------
                            152 ;uart_msg                  Allocated with name '_main_uart_msg_1_1'
                            153 ;linefeed                  Allocated with name '_main_linefeed_1_1'
                            154 ;value                     Allocated with name '_main_value_1_1'
                            155 ;testvar                   Allocated with name '_main_testvar_1_1'
                            156 ;sram_addr                 Allocated with name '_main_sram_addr_1_1'
                            157 ;rx_data                   Allocated with name '_main_rx_data_2_4'
                            158 ;rx_size                   Allocated with name '_main_rx_size_2_4'
                            159 ;------------------------------------------------------------
                    0000    160 	G$main$0$0 ==.
                    0000    161 	C$main.c$55$0$0 ==.
                            162 ;	../main.c:55: int main( void )
                            163 ;	-----------------------------------------
                            164 ;	 function main
                            165 ;	-----------------------------------------
   0FCD                     166 _main:
                    0002    167 	ar2 = 0x02
                    0003    168 	ar3 = 0x03
                    0004    169 	ar4 = 0x04
                    0005    170 	ar5 = 0x05
                    0006    171 	ar6 = 0x06
                    0007    172 	ar7 = 0x07
                    0000    173 	ar0 = 0x00
                    0001    174 	ar1 = 0x01
                    0000    175 	C$main.c$57$1$0 ==.
                            176 ;	../main.c:57: const uint8_t uart_msg[] = "\n\r** Simple LED Sequence  **\n\r";
                            177 ;	genPointerSet
                            178 ;     genFarPointerSet
   0FCD 90 04 05            179 	mov	dptr,#_main_uart_msg_1_1
   0FD0 74 0A               180 	mov	a,#0x0A
   0FD2 F0                  181 	movx	@dptr,a
                            182 ;	genPointerSet
                            183 ;     genFarPointerSet
   0FD3 90 04 06            184 	mov	dptr,#(_main_uart_msg_1_1 + 0x0001)
   0FD6 74 0D               185 	mov	a,#0x0D
   0FD8 F0                  186 	movx	@dptr,a
                            187 ;	genPointerSet
                            188 ;     genFarPointerSet
   0FD9 90 04 07            189 	mov	dptr,#(_main_uart_msg_1_1 + 0x0002)
   0FDC 74 2A               190 	mov	a,#0x2A
   0FDE F0                  191 	movx	@dptr,a
                            192 ;	genPointerSet
                            193 ;     genFarPointerSet
   0FDF 90 04 08            194 	mov	dptr,#(_main_uart_msg_1_1 + 0x0003)
   0FE2 74 2A               195 	mov	a,#0x2A
   0FE4 F0                  196 	movx	@dptr,a
                            197 ;	genPointerSet
                            198 ;     genFarPointerSet
   0FE5 90 04 09            199 	mov	dptr,#(_main_uart_msg_1_1 + 0x0004)
   0FE8 74 20               200 	mov	a,#0x20
   0FEA F0                  201 	movx	@dptr,a
                            202 ;	genPointerSet
                            203 ;     genFarPointerSet
   0FEB 90 04 0A            204 	mov	dptr,#(_main_uart_msg_1_1 + 0x0005)
   0FEE 74 53               205 	mov	a,#0x53
   0FF0 F0                  206 	movx	@dptr,a
                            207 ;	genPointerSet
                            208 ;     genFarPointerSet
   0FF1 90 04 0B            209 	mov	dptr,#(_main_uart_msg_1_1 + 0x0006)
   0FF4 74 69               210 	mov	a,#0x69
   0FF6 F0                  211 	movx	@dptr,a
                            212 ;	genPointerSet
                            213 ;     genFarPointerSet
   0FF7 90 04 0C            214 	mov	dptr,#(_main_uart_msg_1_1 + 0x0007)
   0FFA 74 6D               215 	mov	a,#0x6D
   0FFC F0                  216 	movx	@dptr,a
                            217 ;	genPointerSet
                            218 ;     genFarPointerSet
   0FFD 90 04 0D            219 	mov	dptr,#(_main_uart_msg_1_1 + 0x0008)
   1000 74 70               220 	mov	a,#0x70
   1002 F0                  221 	movx	@dptr,a
                            222 ;	genPointerSet
                            223 ;     genFarPointerSet
   1003 90 04 0E            224 	mov	dptr,#(_main_uart_msg_1_1 + 0x0009)
   1006 74 6C               225 	mov	a,#0x6C
   1008 F0                  226 	movx	@dptr,a
                            227 ;	genPointerSet
                            228 ;     genFarPointerSet
   1009 90 04 0F            229 	mov	dptr,#(_main_uart_msg_1_1 + 0x000a)
   100C 74 65               230 	mov	a,#0x65
   100E F0                  231 	movx	@dptr,a
                            232 ;	genPointerSet
                            233 ;     genFarPointerSet
   100F 90 04 10            234 	mov	dptr,#(_main_uart_msg_1_1 + 0x000b)
   1012 74 20               235 	mov	a,#0x20
   1014 F0                  236 	movx	@dptr,a
                            237 ;	genPointerSet
                            238 ;     genFarPointerSet
   1015 90 04 11            239 	mov	dptr,#(_main_uart_msg_1_1 + 0x000c)
   1018 74 4C               240 	mov	a,#0x4C
   101A F0                  241 	movx	@dptr,a
                            242 ;	genPointerSet
                            243 ;     genFarPointerSet
   101B 90 04 12            244 	mov	dptr,#(_main_uart_msg_1_1 + 0x000d)
   101E 74 45               245 	mov	a,#0x45
   1020 F0                  246 	movx	@dptr,a
                            247 ;	genPointerSet
                            248 ;     genFarPointerSet
   1021 90 04 13            249 	mov	dptr,#(_main_uart_msg_1_1 + 0x000e)
   1024 74 44               250 	mov	a,#0x44
   1026 F0                  251 	movx	@dptr,a
                            252 ;	genPointerSet
                            253 ;     genFarPointerSet
   1027 90 04 14            254 	mov	dptr,#(_main_uart_msg_1_1 + 0x000f)
   102A 74 20               255 	mov	a,#0x20
   102C F0                  256 	movx	@dptr,a
                            257 ;	genPointerSet
                            258 ;     genFarPointerSet
   102D 90 04 15            259 	mov	dptr,#(_main_uart_msg_1_1 + 0x0010)
   1030 74 53               260 	mov	a,#0x53
   1032 F0                  261 	movx	@dptr,a
                            262 ;	genPointerSet
                            263 ;     genFarPointerSet
   1033 90 04 16            264 	mov	dptr,#(_main_uart_msg_1_1 + 0x0011)
   1036 74 65               265 	mov	a,#0x65
   1038 F0                  266 	movx	@dptr,a
                            267 ;	genPointerSet
                            268 ;     genFarPointerSet
   1039 90 04 17            269 	mov	dptr,#(_main_uart_msg_1_1 + 0x0012)
   103C 74 71               270 	mov	a,#0x71
   103E F0                  271 	movx	@dptr,a
                            272 ;	genPointerSet
                            273 ;     genFarPointerSet
   103F 90 04 18            274 	mov	dptr,#(_main_uart_msg_1_1 + 0x0013)
   1042 74 75               275 	mov	a,#0x75
   1044 F0                  276 	movx	@dptr,a
                            277 ;	genPointerSet
                            278 ;     genFarPointerSet
   1045 90 04 19            279 	mov	dptr,#(_main_uart_msg_1_1 + 0x0014)
   1048 74 65               280 	mov	a,#0x65
   104A F0                  281 	movx	@dptr,a
                            282 ;	genPointerSet
                            283 ;     genFarPointerSet
   104B 90 04 1A            284 	mov	dptr,#(_main_uart_msg_1_1 + 0x0015)
   104E 74 6E               285 	mov	a,#0x6E
   1050 F0                  286 	movx	@dptr,a
                            287 ;	genPointerSet
                            288 ;     genFarPointerSet
   1051 90 04 1B            289 	mov	dptr,#(_main_uart_msg_1_1 + 0x0016)
   1054 74 63               290 	mov	a,#0x63
   1056 F0                  291 	movx	@dptr,a
                            292 ;	genPointerSet
                            293 ;     genFarPointerSet
   1057 90 04 1C            294 	mov	dptr,#(_main_uart_msg_1_1 + 0x0017)
   105A 74 65               295 	mov	a,#0x65
   105C F0                  296 	movx	@dptr,a
                            297 ;	genPointerSet
                            298 ;     genFarPointerSet
   105D 90 04 1D            299 	mov	dptr,#(_main_uart_msg_1_1 + 0x0018)
   1060 74 20               300 	mov	a,#0x20
   1062 F0                  301 	movx	@dptr,a
                            302 ;	genPointerSet
                            303 ;     genFarPointerSet
   1063 90 04 1E            304 	mov	dptr,#(_main_uart_msg_1_1 + 0x0019)
   1066 74 20               305 	mov	a,#0x20
   1068 F0                  306 	movx	@dptr,a
                            307 ;	genPointerSet
                            308 ;     genFarPointerSet
   1069 90 04 1F            309 	mov	dptr,#(_main_uart_msg_1_1 + 0x001a)
   106C 74 2A               310 	mov	a,#0x2A
   106E F0                  311 	movx	@dptr,a
                            312 ;	genPointerSet
                            313 ;     genFarPointerSet
   106F 90 04 20            314 	mov	dptr,#(_main_uart_msg_1_1 + 0x001b)
   1072 74 2A               315 	mov	a,#0x2A
   1074 F0                  316 	movx	@dptr,a
                            317 ;	genPointerSet
                            318 ;     genFarPointerSet
   1075 90 04 21            319 	mov	dptr,#(_main_uart_msg_1_1 + 0x001c)
   1078 74 0A               320 	mov	a,#0x0A
   107A F0                  321 	movx	@dptr,a
                            322 ;	genPointerSet
                            323 ;     genFarPointerSet
   107B 90 04 22            324 	mov	dptr,#(_main_uart_msg_1_1 + 0x001d)
   107E 74 0D               325 	mov	a,#0x0D
   1080 F0                  326 	movx	@dptr,a
                            327 ;	genPointerSet
                            328 ;     genFarPointerSet
   1081 90 04 23            329 	mov	dptr,#(_main_uart_msg_1_1 + 0x001e)
   1084 74 00               330 	mov	a,#0x00
   1086 F0                  331 	movx	@dptr,a
                    00BA    332 	C$main.c$58$1$0 ==.
                            333 ;	../main.c:58: const uint8_t linefeed[] = "\n\r";
                            334 ;	genPointerSet
                            335 ;     genFarPointerSet
   1087 90 04 24            336 	mov	dptr,#_main_linefeed_1_1
   108A 74 0A               337 	mov	a,#0x0A
   108C F0                  338 	movx	@dptr,a
                            339 ;	genPointerSet
                            340 ;     genFarPointerSet
   108D 90 04 25            341 	mov	dptr,#(_main_linefeed_1_1 + 0x0001)
   1090 74 0D               342 	mov	a,#0x0D
   1092 F0                  343 	movx	@dptr,a
                            344 ;	genPointerSet
                            345 ;     genFarPointerSet
   1093 90 04 26            346 	mov	dptr,#(_main_linefeed_1_1 + 0x0002)
   1096 74 00               347 	mov	a,#0x00
   1098 F0                  348 	movx	@dptr,a
                    00CC    349 	C$main.c$65$1$1 ==.
                            350 ;	../main.c:65: UART_init( &g_stdio_uart, APB3_BASE_ADDRESS + COREUARTAPB_0, UART_9600_BAUD, DATA_8_BITS | NO_PARITY );
                            351 ;	genAssign
   1099 90 06 E3            352 	mov	dptr,#_UART_init_PARM_2
   109C 74 00               353 	mov	a,#0x00
   109E F0                  354 	movx	@dptr,a
   109F A3                  355 	inc	dptr
   10A0 74 F0               356 	mov	a,#0xF0
   10A2 F0                  357 	movx	@dptr,a
                            358 ;	genAssign
   10A3 90 06 E5            359 	mov	dptr,#_UART_init_PARM_3
   10A6 74 26               360 	mov	a,#0x26
   10A8 F0                  361 	movx	@dptr,a
   10A9 E4                  362 	clr	a
   10AA A3                  363 	inc	dptr
   10AB F0                  364 	movx	@dptr,a
                            365 ;	genAssign
   10AC 90 06 E7            366 	mov	dptr,#_UART_init_PARM_4
   10AF 74 01               367 	mov	a,#0x01
   10B1 F0                  368 	movx	@dptr,a
                            369 ;	genCall
   10B2 75 82 2F            370 	mov	dpl,#_g_stdio_uart
   10B5 75 83 04            371 	mov	dph,#(_g_stdio_uart >> 8)
   10B8 75 F0 00            372 	mov	b,#0x00
   10BB 12 28 D2            373 	lcall	_UART_init
                    00F1    374 	C$main.c$67$1$1 ==.
                            375 ;	../main.c:67: WD_init( &g_wd, APB3_BASE_ADDRESS + COREWATCHDOG_0, WatchDog_COUNT, WD_PRESCALER_DIV_16 );
                            376 ;	genAssign
   10BE 90 05 DA            377 	mov	dptr,#_WD_init_PARM_2
   10C1 74 00               378 	mov	a,#0x00
   10C3 F0                  379 	movx	@dptr,a
   10C4 A3                  380 	inc	dptr
   10C5 74 F3               381 	mov	a,#0xF3
   10C7 F0                  382 	movx	@dptr,a
                            383 ;	genAssign
   10C8 90 05 DC            384 	mov	dptr,#_WD_init_PARM_3
   10CB 74 E8               385 	mov	a,#0xE8
   10CD F0                  386 	movx	@dptr,a
   10CE A3                  387 	inc	dptr
   10CF 74 03               388 	mov	a,#0x03
   10D1 F0                  389 	movx	@dptr,a
   10D2 A3                  390 	inc	dptr
   10D3 74 00               391 	mov	a,#0x00
   10D5 F0                  392 	movx	@dptr,a
   10D6 A3                  393 	inc	dptr
   10D7 74 00               394 	mov	a,#0x00
   10D9 F0                  395 	movx	@dptr,a
                            396 ;	genAssign
   10DA 90 05 E0            397 	mov	dptr,#_WD_init_PARM_4
   10DD 74 03               398 	mov	a,#0x03
   10DF F0                  399 	movx	@dptr,a
   10E0 E4                  400 	clr	a
   10E1 A3                  401 	inc	dptr
   10E2 F0                  402 	movx	@dptr,a
   10E3 A3                  403 	inc	dptr
   10E4 F0                  404 	movx	@dptr,a
   10E5 A3                  405 	inc	dptr
   10E6 F0                  406 	movx	@dptr,a
                            407 ;	genCall
   10E7 75 82 03            408 	mov	dpl,#_g_wd
   10EA 75 83 04            409 	mov	dph,#(_g_wd >> 8)
   10ED 75 F0 00            410 	mov	b,#0x00
   10F0 12 1F 77            411 	lcall	_WD_init
                    0126    412 	C$main.c$68$1$1 ==.
                            413 ;	../main.c:68: WD_disable( &g_wd );
                            414 ;	genCall
   10F3 75 82 03            415 	mov	dpl,#_g_wd
   10F6 75 83 04            416 	mov	dph,#(_g_wd >> 8)
   10F9 75 F0 00            417 	mov	b,#0x00
   10FC 12 24 55            418 	lcall	_WD_disable
                    0132    419 	C$main.c$70$1$1 ==.
                            420 ;	../main.c:70: GPIO_init( &g_gpio,	APB3_BASE_ADDRESS + COREGPIO_0, GPIO_APB_32_BITS_BUS );
                            421 ;	genAssign
   10FF 90 0B 2C            422 	mov	dptr,#_GPIO_init_PARM_2
   1102 74 00               423 	mov	a,#0x00
   1104 F0                  424 	movx	@dptr,a
   1105 A3                  425 	inc	dptr
   1106 74 F1               426 	mov	a,#0xF1
   1108 F0                  427 	movx	@dptr,a
                            428 ;	genAssign
   1109 90 0B 2E            429 	mov	dptr,#_GPIO_init_PARM_3
   110C 74 02               430 	mov	a,#0x02
   110E F0                  431 	movx	@dptr,a
                            432 ;	genCall
   110F 75 82 00            433 	mov	dpl,#_g_gpio
   1112 75 83 04            434 	mov	dph,#(_g_gpio >> 8)
   1115 75 F0 00            435 	mov	b,#0x00
   1118 12 51 BC            436 	lcall	_GPIO_init
                    014E    437 	C$main.c$74$1$1 ==.
                            438 ;	../main.c:74: GPIO_config( &g_gpio, LED_D0, GPIO_OUTPUT_MODE );
                            439 ;	genAssign
   111B 90 0B 55            440 	mov	dptr,#_GPIO_config_PARM_2
   111E 74 00               441 	mov	a,#0x00
   1120 F0                  442 	movx	@dptr,a
                            443 ;	genAssign
   1121 90 0B 56            444 	mov	dptr,#_GPIO_config_PARM_3
   1124 74 05               445 	mov	a,#0x05
   1126 F0                  446 	movx	@dptr,a
   1127 E4                  447 	clr	a
   1128 A3                  448 	inc	dptr
   1129 F0                  449 	movx	@dptr,a
   112A A3                  450 	inc	dptr
   112B F0                  451 	movx	@dptr,a
   112C A3                  452 	inc	dptr
   112D F0                  453 	movx	@dptr,a
                            454 ;	genCall
   112E 75 82 00            455 	mov	dpl,#_g_gpio
   1131 75 83 04            456 	mov	dph,#(_g_gpio >> 8)
   1134 75 F0 00            457 	mov	b,#0x00
   1137 12 54 C0            458 	lcall	_GPIO_config
                    016D    459 	C$main.c$76$1$1 ==.
                            460 ;	../main.c:76: GPIO_config( &g_gpio, LED_D1, GPIO_OUTPUT_MODE );
                            461 ;	genAssign
   113A 90 0B 55            462 	mov	dptr,#_GPIO_config_PARM_2
   113D 74 01               463 	mov	a,#0x01
   113F F0                  464 	movx	@dptr,a
                            465 ;	genAssign
   1140 90 0B 56            466 	mov	dptr,#_GPIO_config_PARM_3
   1143 74 05               467 	mov	a,#0x05
   1145 F0                  468 	movx	@dptr,a
   1146 E4                  469 	clr	a
   1147 A3                  470 	inc	dptr
   1148 F0                  471 	movx	@dptr,a
   1149 A3                  472 	inc	dptr
   114A F0                  473 	movx	@dptr,a
   114B A3                  474 	inc	dptr
   114C F0                  475 	movx	@dptr,a
                            476 ;	genCall
   114D 75 82 00            477 	mov	dpl,#_g_gpio
   1150 75 83 04            478 	mov	dph,#(_g_gpio >> 8)
   1153 75 F0 00            479 	mov	b,#0x00
   1156 12 54 C0            480 	lcall	_GPIO_config
                    018C    481 	C$main.c$79$1$1 ==.
                            482 ;	../main.c:79: display_help();
                            483 ;	genCall
   1159 12 00 62            484 	lcall	_display_help
                    018F    485 	C$main.c$80$1$1 ==.
                            486 ;	../main.c:80: display_prompt();
                            487 ;	genCall
   115C 12 06 BD            488 	lcall	_display_prompt
                    0192    489 	C$main.c$87$1$1 ==.
                            490 ;	../main.c:87: for ( sram_addr =0 ; sram_addr < 256 ; sram_addr++) {
                            491 ;	genAssign
   115F 90 04 27            492 	mov	dptr,#_main_sram_addr_1_1
   1162 E4                  493 	clr	a
   1163 F0                  494 	movx	@dptr,a
   1164 A3                  495 	inc	dptr
   1165 F0                  496 	movx	@dptr,a
   1166                     497 00106$:
                            498 ;	genAssign
   1166 90 04 27            499 	mov	dptr,#_main_sram_addr_1_1
   1169 E0                  500 	movx	a,@dptr
   116A FA                  501 	mov	r2,a
   116B A3                  502 	inc	dptr
   116C E0                  503 	movx	a,@dptr
   116D FB                  504 	mov	r3,a
                            505 ;	genCmpLt
                            506 ;	genCmp
   116E C3                  507 	clr	c
   116F EB                  508 	mov	a,r3
   1170 94 01               509 	subb	a,#0x01
                            510 ;	genIfxJump
   1172 40 03               511 	jc	00122$
   1174 02 11 A8            512 	ljmp	00109$
   1177                     513 00122$:
                    01AA    514 	C$main.c$89$2$2 ==.
                            515 ;	../main.c:89: HW_set_16bit_reg((APB3_BASE_ADDRESS + COREAPBSRAM_0)+ sram_addr, value );
                            516 ;	genPlus
                            517 ;	genPlusIncr
                            518 ;     genPlus shortcut
   1177 8A 04               519 	mov	ar4,r2
   1179 74 F5               520 	mov	a,#0xF5
   117B 25 03               521 	add	a,ar3
   117D FD                  522 	mov	r5,a
                            523 ;	genAssign
   117E 90 05 9B            524 	mov	dptr,#_HW_set_16bit_reg_PARM_2
   1181 74 34               525 	mov	a,#0x34
   1183 F0                  526 	movx	@dptr,a
   1184 A3                  527 	inc	dptr
   1185 74 12               528 	mov	a,#0x12
   1187 F0                  529 	movx	@dptr,a
                            530 ;	genCall
   1188 8C 82               531 	mov	dpl,r4
   118A 8D 83               532 	mov	dph,r5
   118C C0 02               533 	push	ar2
   118E C0 03               534 	push	ar3
   1190 12 1C 54            535 	lcall	_HW_set_16bit_reg
   1193 D0 03               536 	pop	ar3
   1195 D0 02               537 	pop	ar2
                    01CA    538 	C$main.c$87$1$1 ==.
                            539 ;	../main.c:87: for ( sram_addr =0 ; sram_addr < 256 ; sram_addr++) {
                            540 ;	genPlus
   1197 90 04 27            541 	mov	dptr,#_main_sram_addr_1_1
                            542 ;	genPlusIncr
   119A 74 01               543 	mov	a,#0x01
   119C 25 02               544 	add	a,ar2
   119E F0                  545 	movx	@dptr,a
   119F 74 00               546 	mov	a,#0x00
   11A1 35 03               547 	addc	a,ar3
   11A3 A3                  548 	inc	dptr
   11A4 F0                  549 	movx	@dptr,a
   11A5 02 11 66            550 	ljmp	00106$
   11A8                     551 00109$:
                    01DB    552 	C$main.c$92$1$1 ==.
                            553 ;	../main.c:92: for ( sram_addr =0 ; sram_addr < 256 ; sram_addr++) {
                            554 ;	genAssign
   11A8 90 04 27            555 	mov	dptr,#_main_sram_addr_1_1
   11AB E4                  556 	clr	a
   11AC F0                  557 	movx	@dptr,a
   11AD A3                  558 	inc	dptr
   11AE F0                  559 	movx	@dptr,a
   11AF                     560 00110$:
                            561 ;	genAssign
   11AF 90 04 27            562 	mov	dptr,#_main_sram_addr_1_1
   11B2 E0                  563 	movx	a,@dptr
   11B3 FA                  564 	mov	r2,a
   11B4 A3                  565 	inc	dptr
   11B5 E0                  566 	movx	a,@dptr
   11B6 FB                  567 	mov	r3,a
                            568 ;	genCmpLt
                            569 ;	genCmp
   11B7 C3                  570 	clr	c
   11B8 EB                  571 	mov	a,r3
   11B9 94 01               572 	subb	a,#0x01
                            573 ;	genIfxJump
   11BB 40 03               574 	jc	00123$
   11BD 02 11 E7            575 	ljmp	00104$
   11C0                     576 00123$:
                    01F3    577 	C$main.c$94$2$3 ==.
                            578 ;	../main.c:94: testvar = HW_get_16bit_reg((APB3_BASE_ADDRESS + COREAPBSRAM_0)+ sram_addr);
                            579 ;	genPlus
                            580 ;	genPlusIncr
                            581 ;     genPlus shortcut
   11C0 8A 04               582 	mov	ar4,r2
   11C2 74 F5               583 	mov	a,#0xF5
   11C4 25 03               584 	add	a,ar3
   11C6 FD                  585 	mov	r5,a
                            586 ;	genCall
   11C7 8C 82               587 	mov	dpl,r4
   11C9 8D 83               588 	mov	dph,r5
   11CB C0 02               589 	push	ar2
   11CD C0 03               590 	push	ar3
   11CF 12 1C 68            591 	lcall	_HW_get_16bit_reg
   11D2 D0 03               592 	pop	ar3
   11D4 D0 02               593 	pop	ar2
                    0209    594 	C$main.c$92$1$1 ==.
                            595 ;	../main.c:92: for ( sram_addr =0 ; sram_addr < 256 ; sram_addr++) {
                            596 ;	genPlus
   11D6 90 04 27            597 	mov	dptr,#_main_sram_addr_1_1
                            598 ;	genPlusIncr
   11D9 74 01               599 	mov	a,#0x01
   11DB 25 02               600 	add	a,ar2
   11DD F0                  601 	movx	@dptr,a
   11DE 74 00               602 	mov	a,#0x00
   11E0 35 03               603 	addc	a,ar3
   11E2 A3                  604 	inc	dptr
   11E3 F0                  605 	movx	@dptr,a
   11E4 02 11 AF            606 	ljmp	00110$
                    021A    607 	C$main.c$100$1$1 ==.
                            608 ;	../main.c:100: while( 1 )
   11E7                     609 00104$:
                    021A    610 	C$main.c$109$2$4 ==.
                            611 ;	../main.c:109: rx_size = UART_get_rx(&g_stdio_uart, &rx_data[1],1);
                            612 ;	genCast
   11E7 90 08 AE            613 	mov	dptr,#_UART_get_rx_PARM_2
   11EA 74 2A               614 	mov	a,#(_main_rx_data_2_4 + 0x0001)
   11EC F0                  615 	movx	@dptr,a
   11ED A3                  616 	inc	dptr
   11EE 74 04               617 	mov	a,#((_main_rx_data_2_4 + 0x0001) >> 8)
   11F0 F0                  618 	movx	@dptr,a
   11F1 A3                  619 	inc	dptr
   11F2 74 00               620 	mov	a,#0x0
   11F4 F0                  621 	movx	@dptr,a
                            622 ;	genAssign
   11F5 90 08 B1            623 	mov	dptr,#_UART_get_rx_PARM_3
   11F8 74 01               624 	mov	a,#0x01
   11FA F0                  625 	movx	@dptr,a
   11FB E4                  626 	clr	a
   11FC A3                  627 	inc	dptr
   11FD F0                  628 	movx	@dptr,a
                            629 ;	genCall
   11FE 75 82 2F            630 	mov	dpl,#_g_stdio_uart
   1201 75 83 04            631 	mov	dph,#(_g_stdio_uart >> 8)
   1204 75 F0 00            632 	mov	b,#0x00
   1207 12 39 84            633 	lcall	_UART_get_rx
   120A AA 82               634 	mov	r2,dpl
   120C AB 83               635 	mov	r3,dph
                            636 ;	genCast
                    0241    637 	C$main.c$111$2$4 ==.
                            638 ;	../main.c:111: if ( rx_size == 1){
                            639 ;	genCmpEq
                            640 ;	gencjneshort
   120E BA 01 02            641 	cjne	r2,#0x01,00124$
   1211 80 03               642 	sjmp	00125$
   1213                     643 00124$:
   1213 02 11 E7            644 	ljmp	00104$
   1216                     645 00125$:
                    0249    646 	C$main.c$113$3$5 ==.
                            647 ;	../main.c:113: key = rx_data[1];
                            648 ;	genPointerGet
                            649 ;	genFarPointerGet
   1216 90 04 2A            650 	mov	dptr,#(_main_rx_data_2_4 + 0x0001)
   1219 E0                  651 	movx	a,@dptr
   121A FA                  652 	mov	r2,a
                            653 ;	genAssign
   121B 90 03 F2            654 	mov	dptr,#_key
   121E EA                  655 	mov	a,r2
   121F F0                  656 	movx	@dptr,a
                    0253    657 	C$main.c$114$3$5 ==.
                            658 ;	../main.c:114: process_uart_data(key);
                            659 ;	genCall
   1220 8A 82               660 	mov	dpl,r2
   1222 12 0C 92            661 	lcall	_process_uart_data
   1225 02 11 E7            662 	ljmp	00104$
   1228                     663 00114$:
                    025B    664 	C$main.c$122$1$1 ==.
                    025B    665 	XG$main$0$0 ==.
   1228 22                  666 	ret
                            667 ;------------------------------------------------------------
                            668 ;Allocation info for local variables in function 'wait'
                            669 ;------------------------------------------------------------
                            670 ;time_in_ms                Allocated with name '_wait_time_in_ms_1_1'
                            671 ;i                         Allocated with name '_wait_i_1_1'
                            672 ;------------------------------------------------------------
                    025C    673 	G$wait$0$0 ==.
                    025C    674 	C$main.c$126$1$1 ==.
                            675 ;	../main.c:126: void wait(int time_in_ms)
                            676 ;	-----------------------------------------
                            677 ;	 function wait
                            678 ;	-----------------------------------------
   1229                     679 _wait:
                            680 ;	genReceive
   1229 AA 83               681 	mov	r2,dph
   122B E5 82               682 	mov	a,dpl
   122D 90 04 2B            683 	mov	dptr,#_wait_time_in_ms_1_1
   1230 F0                  684 	movx	@dptr,a
   1231 A3                  685 	inc	dptr
   1232 EA                  686 	mov	a,r2
   1233 F0                  687 	movx	@dptr,a
                    0267    688 	C$main.c$131$1$1 ==.
                            689 ;	../main.c:131: for (i=0; i < time_in_ms*10000; i++)
                            690 ;	genAssign
   1234 90 04 2D            691 	mov	dptr,#_wait_i_1_1
   1237 E4                  692 	clr	a
   1238 F0                  693 	movx	@dptr,a
   1239 A3                  694 	inc	dptr
   123A F0                  695 	movx	@dptr,a
                            696 ;	genAssign
   123B 90 04 2B            697 	mov	dptr,#_wait_time_in_ms_1_1
   123E E0                  698 	movx	a,@dptr
   123F FA                  699 	mov	r2,a
   1240 A3                  700 	inc	dptr
   1241 E0                  701 	movx	a,@dptr
   1242 FB                  702 	mov	r3,a
                            703 ;	genAssign
   1243 90 0D 96            704 	mov	dptr,#__mulint_PARM_2
   1246 EA                  705 	mov	a,r2
   1247 F0                  706 	movx	@dptr,a
   1248 A3                  707 	inc	dptr
   1249 EB                  708 	mov	a,r3
   124A F0                  709 	movx	@dptr,a
                            710 ;	genCall
   124B 75 82 10            711 	mov	dpl,#0x10
   124E 75 83 27            712 	mov	dph,#0x27
   1251 12 70 BD            713 	lcall	__mulint
   1254 AA 82               714 	mov	r2,dpl
   1256 AB 83               715 	mov	r3,dph
   1258                     716 00101$:
                            717 ;	genAssign
   1258 90 04 2D            718 	mov	dptr,#_wait_i_1_1
   125B E0                  719 	movx	a,@dptr
   125C FC                  720 	mov	r4,a
   125D A3                  721 	inc	dptr
   125E E0                  722 	movx	a,@dptr
   125F FD                  723 	mov	r5,a
                            724 ;	genCmpLt
                            725 ;	genCmp
   1260 C3                  726 	clr	c
   1261 EC                  727 	mov	a,r4
   1262 9A                  728 	subb	a,r2
   1263 ED                  729 	mov	a,r5
   1264 64 80               730 	xrl	a,#0x80
   1266 8B F0               731 	mov	b,r3
   1268 63 F0 80            732 	xrl	b,#0x80
   126B 95 F0               733 	subb	a,b
                            734 ;	genIfxJump
   126D 40 03               735 	jc	00109$
   126F 02 12 83            736 	ljmp	00105$
   1272                     737 00109$:
                            738 ;	genPlus
   1272 90 04 2D            739 	mov	dptr,#_wait_i_1_1
                            740 ;	genPlusIncr
   1275 74 01               741 	mov	a,#0x01
   1277 25 04               742 	add	a,ar4
   1279 F0                  743 	movx	@dptr,a
   127A 74 00               744 	mov	a,#0x00
   127C 35 05               745 	addc	a,ar5
   127E A3                  746 	inc	dptr
   127F F0                  747 	movx	@dptr,a
   1280 02 12 58            748 	ljmp	00101$
   1283                     749 00105$:
                    02B6    750 	C$main.c$136$1$1 ==.
                    02B6    751 	XG$wait$0$0 ==.
   1283 22                  752 	ret
                            753 	.area CSEG    (CODE)
                            754 	.area CONST   (CODE)
                            755 	.area XINIT   (CODE)
                            756 	.area CABS    (ABS,CODE)
