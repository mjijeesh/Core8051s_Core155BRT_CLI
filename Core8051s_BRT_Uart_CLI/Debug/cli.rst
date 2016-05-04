                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.3 #4543 (Dec 31 2006)
                              4 ; This file generated Wed May 04 10:48:17 2016
                              5 ;--------------------------------------------------------
                              6 	.module ___cli
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _last_rt_subaddress
                             13 	.globl _user_input
                             14 	.globl _display_brt_data_PARM_2
                             15 	.globl _temp
                             16 	.globl _last_msg_no
                             17 	.globl _last_sub_address
                             18 	.globl _rx_char_ptr
                             19 	.globl _rx_char
                             20 	.globl _key
                             21 	.globl _display_help
                             22 	.globl _display_prompt
                             23 	.globl _get_key_selection
                             24 	.globl _read_user_input
                             25 	.globl _display_brt_regs
                             26 	.globl _display_brt_data
                             27 	.globl _process_uart_data
                             28 	.globl _display_mem_data
                             29 	.globl _display_brt_sa
                             30 ;--------------------------------------------------------
                             31 ; special function registers
                             32 ;--------------------------------------------------------
                             33 	.area RSEG    (DATA)
                             34 ;--------------------------------------------------------
                             35 ; special function bits
                             36 ;--------------------------------------------------------
                             37 	.area RSEG    (DATA)
                             38 ;--------------------------------------------------------
                             39 ; overlayable register banks
                             40 ;--------------------------------------------------------
                             41 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                      42 	.ds 8
                             43 ;--------------------------------------------------------
                             44 ; internal ram data
                             45 ;--------------------------------------------------------
                             46 	.area DSEG    (DATA)
                    0000     47 Ldisplay_brt_regs$sloc0$1$0==.
   0018                      48 _display_brt_regs_sloc0_1_0:
   0018                      49 	.ds 1
                             50 ;--------------------------------------------------------
                             51 ; overlayable items in internal ram 
                             52 ;--------------------------------------------------------
                             53 	.area OSEG    (OVR,DATA)
                             54 ;--------------------------------------------------------
                             55 ; indirectly addressable internal ram data
                             56 ;--------------------------------------------------------
                             57 	.area ISEG    (DATA)
                             58 ;--------------------------------------------------------
                             59 ; absolute internal ram data
                             60 ;--------------------------------------------------------
                             61 	.area IABS    (ABS,DATA)
                             62 	.area IABS    (ABS,DATA)
                             63 ;--------------------------------------------------------
                             64 ; bit data
                             65 ;--------------------------------------------------------
                             66 	.area BSEG    (BIT)
                             67 ;--------------------------------------------------------
                             68 ; paged external ram data
                             69 ;--------------------------------------------------------
                             70 	.area PSEG    (PAG,XDATA)
                             71 ;--------------------------------------------------------
                             72 ; external ram data
                             73 ;--------------------------------------------------------
                             74 	.area XSEG    (XDATA)
                    0000     75 G$key$0$0==.
   0000                      76 _key::
   0000                      77 	.ds 1
                    0001     78 G$rx_char$0$0==.
   0001                      79 _rx_char::
   0001                      80 	.ds 10
                    000B     81 G$rx_char_ptr$0$0==.
   000B                      82 _rx_char_ptr::
   000B                      83 	.ds 3
                    000E     84 G$last_sub_address$0$0==.
   000E                      85 _last_sub_address::
   000E                      86 	.ds 1
                    000F     87 G$last_msg_no$0$0==.
   000F                      88 _last_msg_no::
   000F                      89 	.ds 1
                    0010     90 G$temp$0$0==.
   0010                      91 _temp::
   0010                      92 	.ds 1
                    0011     93 Ldisplay_help$tx_data$1$1==.
   0011                      94 _display_help_tx_data_1_1:
   0011                      95 	.ds 960
                    03D1     96 Lget_key_selection$rx_data$1$1==.
   03D1                      97 _get_key_selection_rx_data_1_1:
   03D1                      98 	.ds 2
                    03D3     99 Lread_user_input$rx_char_ptr$1$1==.
   03D3                     100 _read_user_input_rx_char_ptr_1_1:
   03D3                     101 	.ds 3
                    03D6    102 Lread_user_input$recv_char$1$1==.
   03D6                     103 _read_user_input_recv_char_1_1:
   03D6                     104 	.ds 1
                    03D7    105 Lread_user_input$index$1$1==.
   03D7                     106 _read_user_input_index_1_1:
   03D7                     107 	.ds 1
                    03D8    108 Ldisplay_brt_regs$mem_addr$1$1==.
   03D8                     109 _display_brt_regs_mem_addr_1_1:
   03D8                     110 	.ds 4
                    03DC    111 Ldisplay_brt_regs$i$1$1==.
   03DC                     112 _display_brt_regs_i_1_1:
   03DC                     113 	.ds 1
                    03DD    114 Ldisplay_brt_data$subaddr$1$1==.
   03DD                     115 _display_brt_data_PARM_2:
   03DD                     116 	.ds 1
                    03DE    117 Ldisplay_brt_data$brt_baseaddr$1$1==.
   03DE                     118 _display_brt_data_brt_baseaddr_1_1:
   03DE                     119 	.ds 4
                    03E2    120 Ldisplay_brt_data$tx_sub_address$1$1==.
   03E2                     121 _display_brt_data_tx_sub_address_1_1:
   03E2                     122 	.ds 2
                    03E4    123 Ldisplay_brt_data$rx_sub_address$1$1==.
   03E4                     124 _display_brt_data_rx_sub_address_1_1:
   03E4                     125 	.ds 2
                    03E6    126 Ldisplay_brt_data$i$1$1==.
   03E6                     127 _display_brt_data_i_1_1:
   03E6                     128 	.ds 1
                    03E7    129 Ldisplay_brt_data$m$1$1==.
   03E7                     130 _display_brt_data_m_1_1:
   03E7                     131 	.ds 1
                    03E8    132 Lprocess_uart_data$key$1$1==.
   03E8                     133 _process_uart_data_key_1_1:
   03E8                     134 	.ds 1
                    03E9    135 Ldisplay_mem_data$mem_data$1$1==.
   03E9                     136 _display_mem_data_mem_data_1_1:
   03E9                     137 	.ds 2
                    03EB    138 Ldisplay_mem_data$tx_sub_address$1$1==.
   03EB                     139 _display_mem_data_tx_sub_address_1_1:
   03EB                     140 	.ds 2
                    03ED    141 Ldisplay_mem_data$rx_sub_address$1$1==.
   03ED                     142 _display_mem_data_rx_sub_address_1_1:
   03ED                     143 	.ds 2
                    03EF    144 Ldisplay_mem_data$i$1$1==.
   03EF                     145 _display_mem_data_i_1_1:
   03EF                     146 	.ds 1
                    03F0    147 Ldisplay_mem_data$m$1$1==.
   03F0                     148 _display_mem_data_m_1_1:
   03F0                     149 	.ds 1
                    03F1    150 Ldisplay_brt_sa$subaddr$1$1==.
   03F1                     151 _display_brt_sa_subaddr_1_1:
   03F1                     152 	.ds 1
                            153 ;--------------------------------------------------------
                            154 ; external initialized ram data
                            155 ;--------------------------------------------------------
                            156 	.area XISEG   (XDATA)
                    0000    157 G$user_input$0$0==.
   0DA1                     158 _user_input::
   0DA1                     159 	.ds 4
                    0004    160 G$last_rt_subaddress$0$0==.
   0DA5                     161 _last_rt_subaddress::
   0DA5                     162 	.ds 1
                            163 	.area HOME    (CODE)
                            164 	.area GSINIT0 (CODE)
                            165 	.area GSINIT1 (CODE)
                            166 	.area GSINIT2 (CODE)
                            167 	.area GSINIT3 (CODE)
                            168 	.area GSINIT4 (CODE)
                            169 	.area GSINIT5 (CODE)
                            170 	.area GSINIT  (CODE)
                            171 	.area GSFINAL (CODE)
                            172 	.area CSEG    (CODE)
                            173 ;--------------------------------------------------------
                            174 ; global & static initialisations
                            175 ;--------------------------------------------------------
                            176 	.area HOME    (CODE)
                            177 	.area GSINIT  (CODE)
                            178 	.area GSFINAL (CODE)
                            179 	.area GSINIT  (CODE)
                            180 ;--------------------------------------------------------
                            181 ; Home
                            182 ;--------------------------------------------------------
                            183 	.area HOME    (CODE)
                            184 	.area HOME    (CODE)
                            185 ;--------------------------------------------------------
                            186 ; code
                            187 ;--------------------------------------------------------
                            188 	.area CSEG    (CODE)
                            189 ;------------------------------------------------------------
                            190 ;Allocation info for local variables in function 'display_help'
                            191 ;------------------------------------------------------------
                            192 ;tx_data                   Allocated with name '_display_help_tx_data_1_1'
                            193 ;------------------------------------------------------------
                    0000    194 	G$display_help$0$0 ==.
                    0000    195 	C$cli.c$20$0$0 ==.
                            196 ;	../cli.c:20: void display_help(void){
                            197 ;	-----------------------------------------
                            198 ;	 function display_help
                            199 ;	-----------------------------------------
   0062                     200 _display_help:
                    0002    201 	ar2 = 0x02
                    0003    202 	ar3 = 0x03
                    0004    203 	ar4 = 0x04
                    0005    204 	ar5 = 0x05
                    0006    205 	ar6 = 0x06
                    0007    206 	ar7 = 0x07
                    0000    207 	ar0 = 0x00
                    0001    208 	ar1 = 0x01
                    0000    209 	C$cli.c$21$1$0 ==.
                            210 ;	../cli.c:21: uint8_t tx_data[24][40] = {
                            211 ;	genPointerSet
                            212 ;     genFarPointerSet
   0062 90 00 11            213 	mov	dptr,#_display_help_tx_data_1_1
   0065 74 0D               214 	mov	a,#0x0D
   0067 F0                  215 	movx	@dptr,a
                            216 ;	genPointerSet
                            217 ;     genFarPointerSet
   0068 90 00 12            218 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0001)
   006B 74 0A               219 	mov	a,#0x0A
   006D F0                  220 	movx	@dptr,a
                            221 ;	genPointerSet
                            222 ;     genFarPointerSet
   006E 90 00 13            223 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0002)
   0071 74 52               224 	mov	a,#0x52
   0073 F0                  225 	movx	@dptr,a
                            226 ;	genPointerSet
                            227 ;     genFarPointerSet
   0074 90 00 14            228 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0003)
   0077 74 20               229 	mov	a,#0x20
   0079 F0                  230 	movx	@dptr,a
                            231 ;	genPointerSet
                            232 ;     genFarPointerSet
   007A 90 00 15            233 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0004)
   007D 74 52               234 	mov	a,#0x52
   007F F0                  235 	movx	@dptr,a
                            236 ;	genPointerSet
                            237 ;     genFarPointerSet
   0080 90 00 16            238 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0005)
   0083 74 65               239 	mov	a,#0x65
   0085 F0                  240 	movx	@dptr,a
                            241 ;	genPointerSet
                            242 ;     genFarPointerSet
   0086 90 00 17            243 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0006)
   0089 74 61               244 	mov	a,#0x61
   008B F0                  245 	movx	@dptr,a
                            246 ;	genPointerSet
                            247 ;     genFarPointerSet
   008C 90 00 18            248 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0007)
   008F 74 64               249 	mov	a,#0x64
   0091 F0                  250 	movx	@dptr,a
                            251 ;	genPointerSet
                            252 ;     genFarPointerSet
   0092 90 00 19            253 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0008)
   0095 74 20               254 	mov	a,#0x20
   0097 F0                  255 	movx	@dptr,a
                            256 ;	genPointerSet
                            257 ;     genFarPointerSet
   0098 90 00 1A            258 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0009)
   009B 74 42               259 	mov	a,#0x42
   009D F0                  260 	movx	@dptr,a
                            261 ;	genPointerSet
                            262 ;     genFarPointerSet
   009E 90 00 1B            263 	mov	dptr,#(_display_help_tx_data_1_1 + 0x000a)
   00A1 74 52               264 	mov	a,#0x52
   00A3 F0                  265 	movx	@dptr,a
                            266 ;	genPointerSet
                            267 ;     genFarPointerSet
   00A4 90 00 1C            268 	mov	dptr,#(_display_help_tx_data_1_1 + 0x000b)
   00A7 74 54               269 	mov	a,#0x54
   00A9 F0                  270 	movx	@dptr,a
                            271 ;	genPointerSet
                            272 ;     genFarPointerSet
   00AA 90 00 1D            273 	mov	dptr,#(_display_help_tx_data_1_1 + 0x000c)
   00AD 74 20               274 	mov	a,#0x20
   00AF F0                  275 	movx	@dptr,a
                            276 ;	genPointerSet
                            277 ;     genFarPointerSet
   00B0 90 00 1E            278 	mov	dptr,#(_display_help_tx_data_1_1 + 0x000d)
   00B3 74 52               279 	mov	a,#0x52
   00B5 F0                  280 	movx	@dptr,a
                            281 ;	genPointerSet
                            282 ;     genFarPointerSet
   00B6 90 00 1F            283 	mov	dptr,#(_display_help_tx_data_1_1 + 0x000e)
   00B9 74 65               284 	mov	a,#0x65
   00BB F0                  285 	movx	@dptr,a
                            286 ;	genPointerSet
                            287 ;     genFarPointerSet
   00BC 90 00 20            288 	mov	dptr,#(_display_help_tx_data_1_1 + 0x000f)
   00BF 74 67               289 	mov	a,#0x67
   00C1 F0                  290 	movx	@dptr,a
                            291 ;	genPointerSet
                            292 ;     genFarPointerSet
   00C2 90 00 21            293 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0010)
   00C5 74 69               294 	mov	a,#0x69
   00C7 F0                  295 	movx	@dptr,a
                            296 ;	genPointerSet
                            297 ;     genFarPointerSet
   00C8 90 00 22            298 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0011)
   00CB 74 73               299 	mov	a,#0x73
   00CD F0                  300 	movx	@dptr,a
                            301 ;	genPointerSet
                            302 ;     genFarPointerSet
   00CE 90 00 23            303 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0012)
   00D1 74 74               304 	mov	a,#0x74
   00D3 F0                  305 	movx	@dptr,a
                            306 ;	genPointerSet
                            307 ;     genFarPointerSet
   00D4 90 00 24            308 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0013)
   00D7 74 65               309 	mov	a,#0x65
   00D9 F0                  310 	movx	@dptr,a
                            311 ;	genPointerSet
                            312 ;     genFarPointerSet
   00DA 90 00 25            313 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0014)
   00DD 74 72               314 	mov	a,#0x72
   00DF F0                  315 	movx	@dptr,a
                            316 ;	genPointerSet
                            317 ;     genFarPointerSet
   00E0 90 00 26            318 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0015)
   00E3 74 20               319 	mov	a,#0x20
   00E5 F0                  320 	movx	@dptr,a
                            321 ;	genPointerSet
                            322 ;     genFarPointerSet
   00E6 90 00 27            323 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0016)
   00E9 74 20               324 	mov	a,#0x20
   00EB F0                  325 	movx	@dptr,a
                            326 ;	genPointerSet
                            327 ;     genFarPointerSet
   00EC 90 00 28            328 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0017)
   00EF 74 09               329 	mov	a,#0x09
   00F1 F0                  330 	movx	@dptr,a
                            331 ;	genPointerSet
                            332 ;     genFarPointerSet
   00F2 90 00 29            333 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0018)
   00F5 74 09               334 	mov	a,#0x09
   00F7 F0                  335 	movx	@dptr,a
                            336 ;	genPointerSet
                            337 ;     genFarPointerSet
   00F8 90 00 2A            338 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0019)
   00FB 74 20               339 	mov	a,#0x20
   00FD F0                  340 	movx	@dptr,a
                            341 ;	genPointerSet
                            342 ;     genFarPointerSet
   00FE 90 00 2B            343 	mov	dptr,#(_display_help_tx_data_1_1 + 0x001a)
   0101 74 20               344 	mov	a,#0x20
   0103 F0                  345 	movx	@dptr,a
                            346 ;	genPointerSet
                            347 ;     genFarPointerSet
   0104 90 00 2C            348 	mov	dptr,#(_display_help_tx_data_1_1 + 0x001b)
   0107 74 20               349 	mov	a,#0x20
   0109 F0                  350 	movx	@dptr,a
                            351 ;	genPointerSet
                            352 ;     genFarPointerSet
   010A 90 00 2D            353 	mov	dptr,#(_display_help_tx_data_1_1 + 0x001c)
   010D 74 00               354 	mov	a,#0x00
   010F F0                  355 	movx	@dptr,a
                            356 ;	genPointerSet
                            357 ;     genFarPointerSet
   0110 90 00 39            358 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0028)
   0113 74 0D               359 	mov	a,#0x0D
   0115 F0                  360 	movx	@dptr,a
                            361 ;	genPointerSet
                            362 ;     genFarPointerSet
   0116 90 00 3A            363 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0029)
   0119 74 0A               364 	mov	a,#0x0A
   011B F0                  365 	movx	@dptr,a
                            366 ;	genPointerSet
                            367 ;     genFarPointerSet
   011C 90 00 3B            368 	mov	dptr,#(_display_help_tx_data_1_1 + 0x002a)
   011F 74 4D               369 	mov	a,#0x4D
   0121 F0                  370 	movx	@dptr,a
                            371 ;	genPointerSet
                            372 ;     genFarPointerSet
   0122 90 00 3C            373 	mov	dptr,#(_display_help_tx_data_1_1 + 0x002b)
   0125 74 20               374 	mov	a,#0x20
   0127 F0                  375 	movx	@dptr,a
                            376 ;	genPointerSet
                            377 ;     genFarPointerSet
   0128 90 00 3D            378 	mov	dptr,#(_display_help_tx_data_1_1 + 0x002c)
   012B 74 4D               379 	mov	a,#0x4D
   012D F0                  380 	movx	@dptr,a
                            381 ;	genPointerSet
                            382 ;     genFarPointerSet
   012E 90 00 3E            383 	mov	dptr,#(_display_help_tx_data_1_1 + 0x002d)
   0131 74 6F               384 	mov	a,#0x6F
   0133 F0                  385 	movx	@dptr,a
                            386 ;	genPointerSet
                            387 ;     genFarPointerSet
   0134 90 00 3F            388 	mov	dptr,#(_display_help_tx_data_1_1 + 0x002e)
   0137 74 64               389 	mov	a,#0x64
   0139 F0                  390 	movx	@dptr,a
                            391 ;	genPointerSet
                            392 ;     genFarPointerSet
   013A 90 00 40            393 	mov	dptr,#(_display_help_tx_data_1_1 + 0x002f)
   013D 74 69               394 	mov	a,#0x69
   013F F0                  395 	movx	@dptr,a
                            396 ;	genPointerSet
                            397 ;     genFarPointerSet
   0140 90 00 41            398 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0030)
   0143 74 66               399 	mov	a,#0x66
   0145 F0                  400 	movx	@dptr,a
                            401 ;	genPointerSet
                            402 ;     genFarPointerSet
   0146 90 00 42            403 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0031)
   0149 74 79               404 	mov	a,#0x79
   014B F0                  405 	movx	@dptr,a
                            406 ;	genPointerSet
                            407 ;     genFarPointerSet
   014C 90 00 43            408 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0032)
   014F 74 20               409 	mov	a,#0x20
   0151 F0                  410 	movx	@dptr,a
                            411 ;	genPointerSet
                            412 ;     genFarPointerSet
   0152 90 00 44            413 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0033)
   0155 74 20               414 	mov	a,#0x20
   0157 F0                  415 	movx	@dptr,a
                            416 ;	genPointerSet
                            417 ;     genFarPointerSet
   0158 90 00 45            418 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0034)
   015B 74 42               419 	mov	a,#0x42
   015D F0                  420 	movx	@dptr,a
                            421 ;	genPointerSet
                            422 ;     genFarPointerSet
   015E 90 00 46            423 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0035)
   0161 74 52               424 	mov	a,#0x52
   0163 F0                  425 	movx	@dptr,a
                            426 ;	genPointerSet
                            427 ;     genFarPointerSet
   0164 90 00 47            428 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0036)
   0167 74 54               429 	mov	a,#0x54
   0169 F0                  430 	movx	@dptr,a
                            431 ;	genPointerSet
                            432 ;     genFarPointerSet
   016A 90 00 48            433 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0037)
   016D 74 20               434 	mov	a,#0x20
   016F F0                  435 	movx	@dptr,a
                            436 ;	genPointerSet
                            437 ;     genFarPointerSet
   0170 90 00 49            438 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0038)
   0173 74 54               439 	mov	a,#0x54
   0175 F0                  440 	movx	@dptr,a
                            441 ;	genPointerSet
                            442 ;     genFarPointerSet
   0176 90 00 4A            443 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0039)
   0179 74 58               444 	mov	a,#0x58
   017B F0                  445 	movx	@dptr,a
                            446 ;	genPointerSet
                            447 ;     genFarPointerSet
   017C 90 00 4B            448 	mov	dptr,#(_display_help_tx_data_1_1 + 0x003a)
   017F 74 20               449 	mov	a,#0x20
   0181 F0                  450 	movx	@dptr,a
                            451 ;	genPointerSet
                            452 ;     genFarPointerSet
   0182 90 00 4C            453 	mov	dptr,#(_display_help_tx_data_1_1 + 0x003b)
   0185 74 42               454 	mov	a,#0x42
   0187 F0                  455 	movx	@dptr,a
                            456 ;	genPointerSet
                            457 ;     genFarPointerSet
   0188 90 00 4D            458 	mov	dptr,#(_display_help_tx_data_1_1 + 0x003c)
   018B 74 75               459 	mov	a,#0x75
   018D F0                  460 	movx	@dptr,a
                            461 ;	genPointerSet
                            462 ;     genFarPointerSet
   018E 90 00 4E            463 	mov	dptr,#(_display_help_tx_data_1_1 + 0x003d)
   0191 74 66               464 	mov	a,#0x66
   0193 F0                  465 	movx	@dptr,a
                            466 ;	genPointerSet
                            467 ;     genFarPointerSet
   0194 90 00 4F            468 	mov	dptr,#(_display_help_tx_data_1_1 + 0x003e)
   0197 74 66               469 	mov	a,#0x66
   0199 F0                  470 	movx	@dptr,a
                            471 ;	genPointerSet
                            472 ;     genFarPointerSet
   019A 90 00 50            473 	mov	dptr,#(_display_help_tx_data_1_1 + 0x003f)
   019D 74 65               474 	mov	a,#0x65
   019F F0                  475 	movx	@dptr,a
                            476 ;	genPointerSet
                            477 ;     genFarPointerSet
   01A0 90 00 51            478 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0040)
   01A3 74 72               479 	mov	a,#0x72
   01A5 F0                  480 	movx	@dptr,a
                            481 ;	genPointerSet
                            482 ;     genFarPointerSet
   01A6 90 00 52            483 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0041)
   01A9 74 20               484 	mov	a,#0x20
   01AB F0                  485 	movx	@dptr,a
                            486 ;	genPointerSet
                            487 ;     genFarPointerSet
   01AC 90 00 53            488 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0042)
   01AF 74 09               489 	mov	a,#0x09
   01B1 F0                  490 	movx	@dptr,a
                            491 ;	genPointerSet
                            492 ;     genFarPointerSet
   01B2 90 00 54            493 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0043)
   01B5 74 09               494 	mov	a,#0x09
   01B7 F0                  495 	movx	@dptr,a
                            496 ;	genPointerSet
                            497 ;     genFarPointerSet
   01B8 90 00 55            498 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0044)
   01BB 74 20               499 	mov	a,#0x20
   01BD F0                  500 	movx	@dptr,a
                            501 ;	genPointerSet
                            502 ;     genFarPointerSet
   01BE 90 00 56            503 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0045)
   01C1 74 20               504 	mov	a,#0x20
   01C3 F0                  505 	movx	@dptr,a
                            506 ;	genPointerSet
                            507 ;     genFarPointerSet
   01C4 90 00 57            508 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0046)
   01C7 74 20               509 	mov	a,#0x20
   01C9 F0                  510 	movx	@dptr,a
                            511 ;	genPointerSet
                            512 ;     genFarPointerSet
   01CA 90 00 58            513 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0047)
   01CD 74 00               514 	mov	a,#0x00
   01CF F0                  515 	movx	@dptr,a
                            516 ;	genPointerSet
                            517 ;     genFarPointerSet
   01D0 90 00 61            518 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0050)
   01D3 74 0D               519 	mov	a,#0x0D
   01D5 F0                  520 	movx	@dptr,a
                            521 ;	genPointerSet
                            522 ;     genFarPointerSet
   01D6 90 00 62            523 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0051)
   01D9 74 0A               524 	mov	a,#0x0A
   01DB F0                  525 	movx	@dptr,a
                            526 ;	genPointerSet
                            527 ;     genFarPointerSet
   01DC 90 00 63            528 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0052)
   01DF 74 44               529 	mov	a,#0x44
   01E1 F0                  530 	movx	@dptr,a
                            531 ;	genPointerSet
                            532 ;     genFarPointerSet
   01E2 90 00 64            533 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0053)
   01E5 74 20               534 	mov	a,#0x20
   01E7 F0                  535 	movx	@dptr,a
                            536 ;	genPointerSet
                            537 ;     genFarPointerSet
   01E8 90 00 65            538 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0054)
   01EB 74 44               539 	mov	a,#0x44
   01ED F0                  540 	movx	@dptr,a
                            541 ;	genPointerSet
                            542 ;     genFarPointerSet
   01EE 90 00 66            543 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0055)
   01F1 74 69               544 	mov	a,#0x69
   01F3 F0                  545 	movx	@dptr,a
                            546 ;	genPointerSet
                            547 ;     genFarPointerSet
   01F4 90 00 67            548 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0056)
   01F7 74 73               549 	mov	a,#0x73
   01F9 F0                  550 	movx	@dptr,a
                            551 ;	genPointerSet
                            552 ;     genFarPointerSet
   01FA 90 00 68            553 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0057)
   01FD 74 70               554 	mov	a,#0x70
   01FF F0                  555 	movx	@dptr,a
                            556 ;	genPointerSet
                            557 ;     genFarPointerSet
   0200 90 00 69            558 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0058)
   0203 74 6C               559 	mov	a,#0x6C
   0205 F0                  560 	movx	@dptr,a
                            561 ;	genPointerSet
                            562 ;     genFarPointerSet
   0206 90 00 6A            563 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0059)
   0209 74 61               564 	mov	a,#0x61
   020B F0                  565 	movx	@dptr,a
                            566 ;	genPointerSet
                            567 ;     genFarPointerSet
   020C 90 00 6B            568 	mov	dptr,#(_display_help_tx_data_1_1 + 0x005a)
   020F 74 79               569 	mov	a,#0x79
   0211 F0                  570 	movx	@dptr,a
                            571 ;	genPointerSet
                            572 ;     genFarPointerSet
   0212 90 00 6C            573 	mov	dptr,#(_display_help_tx_data_1_1 + 0x005b)
   0215 74 20               574 	mov	a,#0x20
   0217 F0                  575 	movx	@dptr,a
                            576 ;	genPointerSet
                            577 ;     genFarPointerSet
   0218 90 00 6D            578 	mov	dptr,#(_display_help_tx_data_1_1 + 0x005c)
   021B 74 42               579 	mov	a,#0x42
   021D F0                  580 	movx	@dptr,a
                            581 ;	genPointerSet
                            582 ;     genFarPointerSet
   021E 90 00 6E            583 	mov	dptr,#(_display_help_tx_data_1_1 + 0x005d)
   0221 74 52               584 	mov	a,#0x52
   0223 F0                  585 	movx	@dptr,a
                            586 ;	genPointerSet
                            587 ;     genFarPointerSet
   0224 90 00 6F            588 	mov	dptr,#(_display_help_tx_data_1_1 + 0x005e)
   0227 74 54               589 	mov	a,#0x54
   0229 F0                  590 	movx	@dptr,a
                            591 ;	genPointerSet
                            592 ;     genFarPointerSet
   022A 90 00 70            593 	mov	dptr,#(_display_help_tx_data_1_1 + 0x005f)
   022D 74 20               594 	mov	a,#0x20
   022F F0                  595 	movx	@dptr,a
                            596 ;	genPointerSet
                            597 ;     genFarPointerSet
   0230 90 00 71            598 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0060)
   0233 74 20               599 	mov	a,#0x20
   0235 F0                  600 	movx	@dptr,a
                            601 ;	genPointerSet
                            602 ;     genFarPointerSet
   0236 90 00 72            603 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0061)
   0239 74 54               604 	mov	a,#0x54
   023B F0                  605 	movx	@dptr,a
                            606 ;	genPointerSet
                            607 ;     genFarPointerSet
   023C 90 00 73            608 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0062)
   023F 74 58               609 	mov	a,#0x58
   0241 F0                  610 	movx	@dptr,a
                            611 ;	genPointerSet
                            612 ;     genFarPointerSet
   0242 90 00 74            613 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0063)
   0245 74 2F               614 	mov	a,#0x2F
   0247 F0                  615 	movx	@dptr,a
                            616 ;	genPointerSet
                            617 ;     genFarPointerSet
   0248 90 00 75            618 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0064)
   024B 74 52               619 	mov	a,#0x52
   024D F0                  620 	movx	@dptr,a
                            621 ;	genPointerSet
                            622 ;     genFarPointerSet
   024E 90 00 76            623 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0065)
   0251 74 58               624 	mov	a,#0x58
   0253 F0                  625 	movx	@dptr,a
                            626 ;	genPointerSet
                            627 ;     genFarPointerSet
   0254 90 00 77            628 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0066)
   0257 74 20               629 	mov	a,#0x20
   0259 F0                  630 	movx	@dptr,a
                            631 ;	genPointerSet
                            632 ;     genFarPointerSet
   025A 90 00 78            633 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0067)
   025D 74 42               634 	mov	a,#0x42
   025F F0                  635 	movx	@dptr,a
                            636 ;	genPointerSet
                            637 ;     genFarPointerSet
   0260 90 00 79            638 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0068)
   0263 74 75               639 	mov	a,#0x75
   0265 F0                  640 	movx	@dptr,a
                            641 ;	genPointerSet
                            642 ;     genFarPointerSet
   0266 90 00 7A            643 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0069)
   0269 74 66               644 	mov	a,#0x66
   026B F0                  645 	movx	@dptr,a
                            646 ;	genPointerSet
                            647 ;     genFarPointerSet
   026C 90 00 7B            648 	mov	dptr,#(_display_help_tx_data_1_1 + 0x006a)
   026F 74 66               649 	mov	a,#0x66
   0271 F0                  650 	movx	@dptr,a
                            651 ;	genPointerSet
                            652 ;     genFarPointerSet
   0272 90 00 7C            653 	mov	dptr,#(_display_help_tx_data_1_1 + 0x006b)
   0275 74 65               654 	mov	a,#0x65
   0277 F0                  655 	movx	@dptr,a
                            656 ;	genPointerSet
                            657 ;     genFarPointerSet
   0278 90 00 7D            658 	mov	dptr,#(_display_help_tx_data_1_1 + 0x006c)
   027B 74 72               659 	mov	a,#0x72
   027D F0                  660 	movx	@dptr,a
                            661 ;	genPointerSet
                            662 ;     genFarPointerSet
   027E 90 00 7E            663 	mov	dptr,#(_display_help_tx_data_1_1 + 0x006d)
   0281 74 20               664 	mov	a,#0x20
   0283 F0                  665 	movx	@dptr,a
                            666 ;	genPointerSet
                            667 ;     genFarPointerSet
   0284 90 00 7F            668 	mov	dptr,#(_display_help_tx_data_1_1 + 0x006e)
   0287 74 44               669 	mov	a,#0x44
   0289 F0                  670 	movx	@dptr,a
                            671 ;	genPointerSet
                            672 ;     genFarPointerSet
   028A 90 00 80            673 	mov	dptr,#(_display_help_tx_data_1_1 + 0x006f)
   028D 74 61               674 	mov	a,#0x61
   028F F0                  675 	movx	@dptr,a
                            676 ;	genPointerSet
                            677 ;     genFarPointerSet
   0290 90 00 81            678 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0070)
   0293 74 74               679 	mov	a,#0x74
   0295 F0                  680 	movx	@dptr,a
                            681 ;	genPointerSet
                            682 ;     genFarPointerSet
   0296 90 00 82            683 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0071)
   0299 74 61               684 	mov	a,#0x61
   029B F0                  685 	movx	@dptr,a
                            686 ;	genPointerSet
                            687 ;     genFarPointerSet
   029C 90 00 83            688 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0072)
   029F 74 00               689 	mov	a,#0x00
   02A1 F0                  690 	movx	@dptr,a
                            691 ;	genPointerSet
                            692 ;     genFarPointerSet
   02A2 90 00 89            693 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0078)
   02A5 74 0D               694 	mov	a,#0x0D
   02A7 F0                  695 	movx	@dptr,a
                            696 ;	genPointerSet
                            697 ;     genFarPointerSet
   02A8 90 00 8A            698 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0079)
   02AB 74 0A               699 	mov	a,#0x0A
   02AD F0                  700 	movx	@dptr,a
                            701 ;	genPointerSet
                            702 ;     genFarPointerSet
   02AE 90 00 8B            703 	mov	dptr,#(_display_help_tx_data_1_1 + 0x007a)
   02B1 74 42               704 	mov	a,#0x42
   02B3 F0                  705 	movx	@dptr,a
                            706 ;	genPointerSet
                            707 ;     genFarPointerSet
   02B4 90 00 8C            708 	mov	dptr,#(_display_help_tx_data_1_1 + 0x007b)
   02B7 74 20               709 	mov	a,#0x20
   02B9 F0                  710 	movx	@dptr,a
                            711 ;	genPointerSet
                            712 ;     genFarPointerSet
   02BA 90 00 8D            713 	mov	dptr,#(_display_help_tx_data_1_1 + 0x007c)
   02BD 74 44               714 	mov	a,#0x44
   02BF F0                  715 	movx	@dptr,a
                            716 ;	genPointerSet
                            717 ;     genFarPointerSet
   02C0 90 00 8E            718 	mov	dptr,#(_display_help_tx_data_1_1 + 0x007d)
   02C3 74 69               719 	mov	a,#0x69
   02C5 F0                  720 	movx	@dptr,a
                            721 ;	genPointerSet
                            722 ;     genFarPointerSet
   02C6 90 00 8F            723 	mov	dptr,#(_display_help_tx_data_1_1 + 0x007e)
   02C9 74 73               724 	mov	a,#0x73
   02CB F0                  725 	movx	@dptr,a
                            726 ;	genPointerSet
                            727 ;     genFarPointerSet
   02CC 90 00 90            728 	mov	dptr,#(_display_help_tx_data_1_1 + 0x007f)
   02CF 74 70               729 	mov	a,#0x70
   02D1 F0                  730 	movx	@dptr,a
                            731 ;	genPointerSet
                            732 ;     genFarPointerSet
   02D2 90 00 91            733 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0080)
   02D5 74 6C               734 	mov	a,#0x6C
   02D7 F0                  735 	movx	@dptr,a
                            736 ;	genPointerSet
                            737 ;     genFarPointerSet
   02D8 90 00 92            738 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0081)
   02DB 74 61               739 	mov	a,#0x61
   02DD F0                  740 	movx	@dptr,a
                            741 ;	genPointerSet
                            742 ;     genFarPointerSet
   02DE 90 00 93            743 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0082)
   02E1 74 79               744 	mov	a,#0x79
   02E3 F0                  745 	movx	@dptr,a
                            746 ;	genPointerSet
                            747 ;     genFarPointerSet
   02E4 90 00 94            748 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0083)
   02E7 74 20               749 	mov	a,#0x20
   02E9 F0                  750 	movx	@dptr,a
                            751 ;	genPointerSet
                            752 ;     genFarPointerSet
   02EA 90 00 95            753 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0084)
   02ED 74 42               754 	mov	a,#0x42
   02EF F0                  755 	movx	@dptr,a
                            756 ;	genPointerSet
                            757 ;     genFarPointerSet
   02F0 90 00 96            758 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0085)
   02F3 74 43               759 	mov	a,#0x43
   02F5 F0                  760 	movx	@dptr,a
                            761 ;	genPointerSet
                            762 ;     genFarPointerSet
   02F6 90 00 97            763 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0086)
   02F9 74 20               764 	mov	a,#0x20
   02FB F0                  765 	movx	@dptr,a
                            766 ;	genPointerSet
                            767 ;     genFarPointerSet
   02FC 90 00 98            768 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0087)
   02FF 74 6D               769 	mov	a,#0x6D
   0301 F0                  770 	movx	@dptr,a
                            771 ;	genPointerSet
                            772 ;     genFarPointerSet
   0302 90 00 99            773 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0088)
   0305 74 65               774 	mov	a,#0x65
   0307 F0                  775 	movx	@dptr,a
                            776 ;	genPointerSet
                            777 ;     genFarPointerSet
   0308 90 00 9A            778 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0089)
   030B 74 73               779 	mov	a,#0x73
   030D F0                  780 	movx	@dptr,a
                            781 ;	genPointerSet
                            782 ;     genFarPointerSet
   030E 90 00 9B            783 	mov	dptr,#(_display_help_tx_data_1_1 + 0x008a)
   0311 74 73               784 	mov	a,#0x73
   0313 F0                  785 	movx	@dptr,a
                            786 ;	genPointerSet
                            787 ;     genFarPointerSet
   0314 90 00 9C            788 	mov	dptr,#(_display_help_tx_data_1_1 + 0x008b)
   0317 74 61               789 	mov	a,#0x61
   0319 F0                  790 	movx	@dptr,a
                            791 ;	genPointerSet
                            792 ;     genFarPointerSet
   031A 90 00 9D            793 	mov	dptr,#(_display_help_tx_data_1_1 + 0x008c)
   031D 74 67               794 	mov	a,#0x67
   031F F0                  795 	movx	@dptr,a
                            796 ;	genPointerSet
                            797 ;     genFarPointerSet
   0320 90 00 9E            798 	mov	dptr,#(_display_help_tx_data_1_1 + 0x008d)
   0323 74 65               799 	mov	a,#0x65
   0325 F0                  800 	movx	@dptr,a
                            801 ;	genPointerSet
                            802 ;     genFarPointerSet
   0326 90 00 9F            803 	mov	dptr,#(_display_help_tx_data_1_1 + 0x008e)
   0329 74 73               804 	mov	a,#0x73
   032B F0                  805 	movx	@dptr,a
                            806 ;	genPointerSet
                            807 ;     genFarPointerSet
   032C 90 00 A0            808 	mov	dptr,#(_display_help_tx_data_1_1 + 0x008f)
   032F 74 20               809 	mov	a,#0x20
   0331 F0                  810 	movx	@dptr,a
                            811 ;	genPointerSet
                            812 ;     genFarPointerSet
   0332 90 00 A1            813 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0090)
   0335 74 20               814 	mov	a,#0x20
   0337 F0                  815 	movx	@dptr,a
                            816 ;	genPointerSet
                            817 ;     genFarPointerSet
   0338 90 00 A2            818 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0091)
   033B 74 20               819 	mov	a,#0x20
   033D F0                  820 	movx	@dptr,a
                            821 ;	genPointerSet
                            822 ;     genFarPointerSet
   033E 90 00 A3            823 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0092)
   0341 74 20               824 	mov	a,#0x20
   0343 F0                  825 	movx	@dptr,a
                            826 ;	genPointerSet
                            827 ;     genFarPointerSet
   0344 90 00 A4            828 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0093)
   0347 74 20               829 	mov	a,#0x20
   0349 F0                  830 	movx	@dptr,a
                            831 ;	genPointerSet
                            832 ;     genFarPointerSet
   034A 90 00 A5            833 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0094)
   034D 74 20               834 	mov	a,#0x20
   034F F0                  835 	movx	@dptr,a
                            836 ;	genPointerSet
                            837 ;     genFarPointerSet
   0350 90 00 A6            838 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0095)
   0353 74 20               839 	mov	a,#0x20
   0355 F0                  840 	movx	@dptr,a
                            841 ;	genPointerSet
                            842 ;     genFarPointerSet
   0356 90 00 A7            843 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0096)
   0359 74 20               844 	mov	a,#0x20
   035B F0                  845 	movx	@dptr,a
                            846 ;	genPointerSet
                            847 ;     genFarPointerSet
   035C 90 00 A8            848 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0097)
   035F 74 00               849 	mov	a,#0x00
   0361 F0                  850 	movx	@dptr,a
                            851 ;	genPointerSet
                            852 ;     genFarPointerSet
   0362 90 00 B1            853 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00a0)
   0365 74 0D               854 	mov	a,#0x0D
   0367 F0                  855 	movx	@dptr,a
                            856 ;	genPointerSet
                            857 ;     genFarPointerSet
   0368 90 00 B2            858 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00a1)
   036B 74 0A               859 	mov	a,#0x0A
   036D F0                  860 	movx	@dptr,a
                            861 ;	genPointerSet
                            862 ;     genFarPointerSet
   036E 90 00 B3            863 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00a2)
   0371 74 58               864 	mov	a,#0x58
   0373 F0                  865 	movx	@dptr,a
                            866 ;	genPointerSet
                            867 ;     genFarPointerSet
   0374 90 00 B4            868 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00a3)
   0377 74 20               869 	mov	a,#0x20
   0379 F0                  870 	movx	@dptr,a
                            871 ;	genPointerSet
                            872 ;     genFarPointerSet
   037A 90 00 B5            873 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00a4)
   037D 74 53               874 	mov	a,#0x53
   037F F0                  875 	movx	@dptr,a
                            876 ;	genPointerSet
                            877 ;     genFarPointerSet
   0380 90 00 B6            878 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00a5)
   0383 74 74               879 	mov	a,#0x74
   0385 F0                  880 	movx	@dptr,a
                            881 ;	genPointerSet
                            882 ;     genFarPointerSet
   0386 90 00 B7            883 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00a6)
   0389 74 61               884 	mov	a,#0x61
   038B F0                  885 	movx	@dptr,a
                            886 ;	genPointerSet
                            887 ;     genFarPointerSet
   038C 90 00 B8            888 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00a7)
   038F 74 72               889 	mov	a,#0x72
   0391 F0                  890 	movx	@dptr,a
                            891 ;	genPointerSet
                            892 ;     genFarPointerSet
   0392 90 00 B9            893 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00a8)
   0395 74 74               894 	mov	a,#0x74
   0397 F0                  895 	movx	@dptr,a
                            896 ;	genPointerSet
                            897 ;     genFarPointerSet
   0398 90 00 BA            898 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00a9)
   039B 74 20               899 	mov	a,#0x20
   039D F0                  900 	movx	@dptr,a
                            901 ;	genPointerSet
                            902 ;     genFarPointerSet
   039E 90 00 BB            903 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00aa)
   03A1 74 42               904 	mov	a,#0x42
   03A3 F0                  905 	movx	@dptr,a
                            906 ;	genPointerSet
                            907 ;     genFarPointerSet
   03A4 90 00 BC            908 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ab)
   03A7 74 52               909 	mov	a,#0x52
   03A9 F0                  910 	movx	@dptr,a
                            911 ;	genPointerSet
                            912 ;     genFarPointerSet
   03AA 90 00 BD            913 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ac)
   03AD 74 4D               914 	mov	a,#0x4D
   03AF F0                  915 	movx	@dptr,a
                            916 ;	genPointerSet
                            917 ;     genFarPointerSet
   03B0 90 00 BE            918 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ad)
   03B3 74 20               919 	mov	a,#0x20
   03B5 F0                  920 	movx	@dptr,a
                            921 ;	genPointerSet
                            922 ;     genFarPointerSet
   03B6 90 00 BF            923 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ae)
   03B9 74 42               924 	mov	a,#0x42
   03BB F0                  925 	movx	@dptr,a
                            926 ;	genPointerSet
                            927 ;     genFarPointerSet
   03BC 90 00 C0            928 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00af)
   03BF 74 43               929 	mov	a,#0x43
   03C1 F0                  930 	movx	@dptr,a
                            931 ;	genPointerSet
                            932 ;     genFarPointerSet
   03C2 90 00 C1            933 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00b0)
   03C5 74 20               934 	mov	a,#0x20
   03C7 F0                  935 	movx	@dptr,a
                            936 ;	genPointerSet
                            937 ;     genFarPointerSet
   03C8 90 00 C2            938 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00b1)
   03CB 74 20               939 	mov	a,#0x20
   03CD F0                  940 	movx	@dptr,a
                            941 ;	genPointerSet
                            942 ;     genFarPointerSet
   03CE 90 00 C3            943 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00b2)
   03D1 74 20               944 	mov	a,#0x20
   03D3 F0                  945 	movx	@dptr,a
                            946 ;	genPointerSet
                            947 ;     genFarPointerSet
   03D4 90 00 C4            948 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00b3)
   03D7 74 20               949 	mov	a,#0x20
   03D9 F0                  950 	movx	@dptr,a
                            951 ;	genPointerSet
                            952 ;     genFarPointerSet
   03DA 90 00 C5            953 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00b4)
   03DD 74 20               954 	mov	a,#0x20
   03DF F0                  955 	movx	@dptr,a
                            956 ;	genPointerSet
                            957 ;     genFarPointerSet
   03E0 90 00 C6            958 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00b5)
   03E3 74 20               959 	mov	a,#0x20
   03E5 F0                  960 	movx	@dptr,a
                            961 ;	genPointerSet
                            962 ;     genFarPointerSet
   03E6 90 00 C7            963 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00b6)
   03E9 74 20               964 	mov	a,#0x20
   03EB F0                  965 	movx	@dptr,a
                            966 ;	genPointerSet
                            967 ;     genFarPointerSet
   03EC 90 00 C8            968 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00b7)
   03EF 74 20               969 	mov	a,#0x20
   03F1 F0                  970 	movx	@dptr,a
                            971 ;	genPointerSet
                            972 ;     genFarPointerSet
   03F2 90 00 C9            973 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00b8)
   03F5 74 20               974 	mov	a,#0x20
   03F7 F0                  975 	movx	@dptr,a
                            976 ;	genPointerSet
                            977 ;     genFarPointerSet
   03F8 90 00 CA            978 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00b9)
   03FB 74 20               979 	mov	a,#0x20
   03FD F0                  980 	movx	@dptr,a
                            981 ;	genPointerSet
                            982 ;     genFarPointerSet
   03FE 90 00 CB            983 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ba)
   0401 74 20               984 	mov	a,#0x20
   0403 F0                  985 	movx	@dptr,a
                            986 ;	genPointerSet
                            987 ;     genFarPointerSet
   0404 90 00 CC            988 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00bb)
   0407 74 20               989 	mov	a,#0x20
   0409 F0                  990 	movx	@dptr,a
                            991 ;	genPointerSet
                            992 ;     genFarPointerSet
   040A 90 00 CD            993 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00bc)
   040D 74 20               994 	mov	a,#0x20
   040F F0                  995 	movx	@dptr,a
                            996 ;	genPointerSet
                            997 ;     genFarPointerSet
   0410 90 00 CE            998 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00bd)
   0413 74 20               999 	mov	a,#0x20
   0415 F0                 1000 	movx	@dptr,a
                           1001 ;	genPointerSet
                           1002 ;     genFarPointerSet
   0416 90 00 CF           1003 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00be)
   0419 74 20              1004 	mov	a,#0x20
   041B F0                 1005 	movx	@dptr,a
                           1006 ;	genPointerSet
                           1007 ;     genFarPointerSet
   041C 90 00 D0           1008 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00bf)
   041F 74 00              1009 	mov	a,#0x00
   0421 F0                 1010 	movx	@dptr,a
                           1011 ;	genPointerSet
                           1012 ;     genFarPointerSet
   0422 90 00 D9           1013 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00c8)
   0425 74 0D              1014 	mov	a,#0x0D
   0427 F0                 1015 	movx	@dptr,a
                           1016 ;	genPointerSet
                           1017 ;     genFarPointerSet
   0428 90 00 DA           1018 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00c9)
   042B 74 0A              1019 	mov	a,#0x0A
   042D F0                 1020 	movx	@dptr,a
                           1021 ;	genPointerSet
                           1022 ;     genFarPointerSet
   042E 90 00 DB           1023 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ca)
   0431 74 43              1024 	mov	a,#0x43
   0433 F0                 1025 	movx	@dptr,a
                           1026 ;	genPointerSet
                           1027 ;     genFarPointerSet
   0434 90 00 DC           1028 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00cb)
   0437 74 20              1029 	mov	a,#0x20
   0439 F0                 1030 	movx	@dptr,a
                           1031 ;	genPointerSet
                           1032 ;     genFarPointerSet
   043A 90 00 DD           1033 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00cc)
   043D 74 43              1034 	mov	a,#0x43
   043F F0                 1035 	movx	@dptr,a
                           1036 ;	genPointerSet
                           1037 ;     genFarPointerSet
   0440 90 00 DE           1038 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00cd)
   0443 74 68              1039 	mov	a,#0x68
   0445 F0                 1040 	movx	@dptr,a
                           1041 ;	genPointerSet
                           1042 ;     genFarPointerSet
   0446 90 00 DF           1043 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ce)
   0449 74 61              1044 	mov	a,#0x61
   044B F0                 1045 	movx	@dptr,a
                           1046 ;	genPointerSet
                           1047 ;     genFarPointerSet
   044C 90 00 E0           1048 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00cf)
   044F 74 6E              1049 	mov	a,#0x6E
   0451 F0                 1050 	movx	@dptr,a
                           1051 ;	genPointerSet
                           1052 ;     genFarPointerSet
   0452 90 00 E1           1053 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00d0)
   0455 74 67              1054 	mov	a,#0x67
   0457 F0                 1055 	movx	@dptr,a
                           1056 ;	genPointerSet
                           1057 ;     genFarPointerSet
   0458 90 00 E2           1058 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00d1)
   045B 74 65              1059 	mov	a,#0x65
   045D F0                 1060 	movx	@dptr,a
                           1061 ;	genPointerSet
                           1062 ;     genFarPointerSet
   045E 90 00 E3           1063 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00d2)
   0461 74 20              1064 	mov	a,#0x20
   0463 F0                 1065 	movx	@dptr,a
                           1066 ;	genPointerSet
                           1067 ;     genFarPointerSet
   0464 90 00 E4           1068 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00d3)
   0467 74 74              1069 	mov	a,#0x74
   0469 F0                 1070 	movx	@dptr,a
                           1071 ;	genPointerSet
                           1072 ;     genFarPointerSet
   046A 90 00 E5           1073 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00d4)
   046D 74 68              1074 	mov	a,#0x68
   046F F0                 1075 	movx	@dptr,a
                           1076 ;	genPointerSet
                           1077 ;     genFarPointerSet
   0470 90 00 E6           1078 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00d5)
   0473 74 65              1079 	mov	a,#0x65
   0475 F0                 1080 	movx	@dptr,a
                           1081 ;	genPointerSet
                           1082 ;     genFarPointerSet
   0476 90 00 E7           1083 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00d6)
   0479 74 20              1084 	mov	a,#0x20
   047B F0                 1085 	movx	@dptr,a
                           1086 ;	genPointerSet
                           1087 ;     genFarPointerSet
   047C 90 00 E8           1088 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00d7)
   047F 74 42              1089 	mov	a,#0x42
   0481 F0                 1090 	movx	@dptr,a
                           1091 ;	genPointerSet
                           1092 ;     genFarPointerSet
   0482 90 00 E9           1093 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00d8)
   0485 74 52              1094 	mov	a,#0x52
   0487 F0                 1095 	movx	@dptr,a
                           1096 ;	genPointerSet
                           1097 ;     genFarPointerSet
   0488 90 00 EA           1098 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00d9)
   048B 74 54              1099 	mov	a,#0x54
   048D F0                 1100 	movx	@dptr,a
                           1101 ;	genPointerSet
                           1102 ;     genFarPointerSet
   048E 90 00 EB           1103 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00da)
   0491 74 20              1104 	mov	a,#0x20
   0493 F0                 1105 	movx	@dptr,a
                           1106 ;	genPointerSet
                           1107 ;     genFarPointerSet
   0494 90 00 EC           1108 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00db)
   0497 74 41              1109 	mov	a,#0x41
   0499 F0                 1110 	movx	@dptr,a
                           1111 ;	genPointerSet
                           1112 ;     genFarPointerSet
   049A 90 00 ED           1113 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00dc)
   049D 74 64              1114 	mov	a,#0x64
   049F F0                 1115 	movx	@dptr,a
                           1116 ;	genPointerSet
                           1117 ;     genFarPointerSet
   04A0 90 00 EE           1118 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00dd)
   04A3 74 64              1119 	mov	a,#0x64
   04A5 F0                 1120 	movx	@dptr,a
                           1121 ;	genPointerSet
                           1122 ;     genFarPointerSet
   04A6 90 00 EF           1123 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00de)
   04A9 74 72              1124 	mov	a,#0x72
   04AB F0                 1125 	movx	@dptr,a
                           1126 ;	genPointerSet
                           1127 ;     genFarPointerSet
   04AC 90 00 F0           1128 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00df)
   04AF 74 65              1129 	mov	a,#0x65
   04B1 F0                 1130 	movx	@dptr,a
                           1131 ;	genPointerSet
                           1132 ;     genFarPointerSet
   04B2 90 00 F1           1133 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00e0)
   04B5 74 73              1134 	mov	a,#0x73
   04B7 F0                 1135 	movx	@dptr,a
                           1136 ;	genPointerSet
                           1137 ;     genFarPointerSet
   04B8 90 00 F2           1138 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00e1)
   04BB 74 73              1139 	mov	a,#0x73
   04BD F0                 1140 	movx	@dptr,a
                           1141 ;	genPointerSet
                           1142 ;     genFarPointerSet
   04BE 90 00 F3           1143 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00e2)
   04C1 74 28              1144 	mov	a,#0x28
   04C3 F0                 1145 	movx	@dptr,a
                           1146 ;	genPointerSet
                           1147 ;     genFarPointerSet
   04C4 90 00 F4           1148 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00e3)
   04C7 74 44              1149 	mov	a,#0x44
   04C9 F0                 1150 	movx	@dptr,a
                           1151 ;	genPointerSet
                           1152 ;     genFarPointerSet
   04CA 90 00 F5           1153 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00e4)
   04CD 74 65              1154 	mov	a,#0x65
   04CF F0                 1155 	movx	@dptr,a
                           1156 ;	genPointerSet
                           1157 ;     genFarPointerSet
   04D0 90 00 F6           1158 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00e5)
   04D3 74 66              1159 	mov	a,#0x66
   04D5 F0                 1160 	movx	@dptr,a
                           1161 ;	genPointerSet
                           1162 ;     genFarPointerSet
   04D6 90 00 F7           1163 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00e6)
   04D9 74 61              1164 	mov	a,#0x61
   04DB F0                 1165 	movx	@dptr,a
                           1166 ;	genPointerSet
                           1167 ;     genFarPointerSet
   04DC 90 00 F8           1168 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00e7)
   04DF 74 75              1169 	mov	a,#0x75
   04E1 F0                 1170 	movx	@dptr,a
                           1171 ;	genPointerSet
                           1172 ;     genFarPointerSet
   04E2 90 00 F9           1173 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00e8)
   04E5 74 6C              1174 	mov	a,#0x6C
   04E7 F0                 1175 	movx	@dptr,a
                           1176 ;	genPointerSet
                           1177 ;     genFarPointerSet
   04E8 90 00 FA           1178 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00e9)
   04EB 74 74              1179 	mov	a,#0x74
   04ED F0                 1180 	movx	@dptr,a
                           1181 ;	genPointerSet
                           1182 ;     genFarPointerSet
   04EE 90 00 FB           1183 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ea)
   04F1 74 3A              1184 	mov	a,#0x3A
   04F3 F0                 1185 	movx	@dptr,a
                           1186 ;	genPointerSet
                           1187 ;     genFarPointerSet
   04F4 90 00 FC           1188 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00eb)
   04F7 74 30              1189 	mov	a,#0x30
   04F9 F0                 1190 	movx	@dptr,a
                           1191 ;	genPointerSet
                           1192 ;     genFarPointerSet
   04FA 90 00 FD           1193 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ec)
   04FD 74 78              1194 	mov	a,#0x78
   04FF F0                 1195 	movx	@dptr,a
                           1196 ;	genPointerSet
                           1197 ;     genFarPointerSet
   0500 90 00 FE           1198 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ed)
   0503 74 34              1199 	mov	a,#0x34
   0505 F0                 1200 	movx	@dptr,a
                           1201 ;	genPointerSet
                           1202 ;     genFarPointerSet
   0506 90 00 FF           1203 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ee)
   0509 74 20              1204 	mov	a,#0x20
   050B F0                 1205 	movx	@dptr,a
                           1206 ;	genPointerSet
                           1207 ;     genFarPointerSet
   050C 90 01 00           1208 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ef)
   050F 74 00              1209 	mov	a,#0x00
   0511 F0                 1210 	movx	@dptr,a
                           1211 ;	genPointerSet
                           1212 ;     genFarPointerSet
   0512 90 01 01           1213 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00f0)
   0515 74 0D              1214 	mov	a,#0x0D
   0517 F0                 1215 	movx	@dptr,a
                           1216 ;	genPointerSet
                           1217 ;     genFarPointerSet
   0518 90 01 02           1218 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00f1)
   051B 74 0A              1219 	mov	a,#0x0A
   051D F0                 1220 	movx	@dptr,a
                           1221 ;	genPointerSet
                           1222 ;     genFarPointerSet
   051E 90 01 03           1223 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00f2)
   0521 74 4E              1224 	mov	a,#0x4E
   0523 F0                 1225 	movx	@dptr,a
                           1226 ;	genPointerSet
                           1227 ;     genFarPointerSet
   0524 90 01 04           1228 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00f3)
   0527 74 20              1229 	mov	a,#0x20
   0529 F0                 1230 	movx	@dptr,a
                           1231 ;	genPointerSet
                           1232 ;     genFarPointerSet
   052A 90 01 05           1233 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00f4)
   052D 74 63              1234 	mov	a,#0x63
   052F F0                 1235 	movx	@dptr,a
                           1236 ;	genPointerSet
                           1237 ;     genFarPointerSet
   0530 90 01 06           1238 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00f5)
   0533 74 68              1239 	mov	a,#0x68
   0535 F0                 1240 	movx	@dptr,a
                           1241 ;	genPointerSet
                           1242 ;     genFarPointerSet
   0536 90 01 07           1243 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00f6)
   0539 74 61              1244 	mov	a,#0x61
   053B F0                 1245 	movx	@dptr,a
                           1246 ;	genPointerSet
                           1247 ;     genFarPointerSet
   053C 90 01 08           1248 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00f7)
   053F 74 6E              1249 	mov	a,#0x6E
   0541 F0                 1250 	movx	@dptr,a
                           1251 ;	genPointerSet
                           1252 ;     genFarPointerSet
   0542 90 01 09           1253 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00f8)
   0545 74 67              1254 	mov	a,#0x67
   0547 F0                 1255 	movx	@dptr,a
                           1256 ;	genPointerSet
                           1257 ;     genFarPointerSet
   0548 90 01 0A           1258 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00f9)
   054B 74 65              1259 	mov	a,#0x65
   054D F0                 1260 	movx	@dptr,a
                           1261 ;	genPointerSet
                           1262 ;     genFarPointerSet
   054E 90 01 0B           1263 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00fa)
   0551 74 20              1264 	mov	a,#0x20
   0553 F0                 1265 	movx	@dptr,a
                           1266 ;	genPointerSet
                           1267 ;     genFarPointerSet
   0554 90 01 0C           1268 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00fb)
   0557 74 74              1269 	mov	a,#0x74
   0559 F0                 1270 	movx	@dptr,a
                           1271 ;	genPointerSet
                           1272 ;     genFarPointerSet
   055A 90 01 0D           1273 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00fc)
   055D 74 68              1274 	mov	a,#0x68
   055F F0                 1275 	movx	@dptr,a
                           1276 ;	genPointerSet
                           1277 ;     genFarPointerSet
   0560 90 01 0E           1278 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00fd)
   0563 74 65              1279 	mov	a,#0x65
   0565 F0                 1280 	movx	@dptr,a
                           1281 ;	genPointerSet
                           1282 ;     genFarPointerSet
   0566 90 01 0F           1283 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00fe)
   0569 74 20              1284 	mov	a,#0x20
   056B F0                 1285 	movx	@dptr,a
                           1286 ;	genPointerSet
                           1287 ;     genFarPointerSet
   056C 90 01 10           1288 	mov	dptr,#(_display_help_tx_data_1_1 + 0x00ff)
   056F 74 42              1289 	mov	a,#0x42
   0571 F0                 1290 	movx	@dptr,a
                           1291 ;	genPointerSet
                           1292 ;     genFarPointerSet
   0572 90 01 11           1293 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0100)
   0575 74 43              1294 	mov	a,#0x43
   0577 F0                 1295 	movx	@dptr,a
                           1296 ;	genPointerSet
                           1297 ;     genFarPointerSet
   0578 90 01 12           1298 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0101)
   057B 74 20              1299 	mov	a,#0x20
   057D F0                 1300 	movx	@dptr,a
                           1301 ;	genPointerSet
                           1302 ;     genFarPointerSet
   057E 90 01 13           1303 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0102)
   0581 74 44              1304 	mov	a,#0x44
   0583 F0                 1305 	movx	@dptr,a
                           1306 ;	genPointerSet
                           1307 ;     genFarPointerSet
   0584 90 01 14           1308 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0103)
   0587 74 61              1309 	mov	a,#0x61
   0589 F0                 1310 	movx	@dptr,a
                           1311 ;	genPointerSet
                           1312 ;     genFarPointerSet
   058A 90 01 15           1313 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0104)
   058D 74 74              1314 	mov	a,#0x74
   058F F0                 1315 	movx	@dptr,a
                           1316 ;	genPointerSet
                           1317 ;     genFarPointerSet
   0590 90 01 16           1318 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0105)
   0593 74 61              1319 	mov	a,#0x61
   0595 F0                 1320 	movx	@dptr,a
                           1321 ;	genPointerSet
                           1322 ;     genFarPointerSet
   0596 90 01 17           1323 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0106)
   0599 74 20              1324 	mov	a,#0x20
   059B F0                 1325 	movx	@dptr,a
                           1326 ;	genPointerSet
                           1327 ;     genFarPointerSet
   059C 90 01 18           1328 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0107)
   059F 74 76              1329 	mov	a,#0x76
   05A1 F0                 1330 	movx	@dptr,a
                           1331 ;	genPointerSet
                           1332 ;     genFarPointerSet
   05A2 90 01 19           1333 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0108)
   05A5 74 61              1334 	mov	a,#0x61
   05A7 F0                 1335 	movx	@dptr,a
                           1336 ;	genPointerSet
                           1337 ;     genFarPointerSet
   05A8 90 01 1A           1338 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0109)
   05AB 74 6C              1339 	mov	a,#0x6C
   05AD F0                 1340 	movx	@dptr,a
                           1341 ;	genPointerSet
                           1342 ;     genFarPointerSet
   05AE 90 01 1B           1343 	mov	dptr,#(_display_help_tx_data_1_1 + 0x010a)
   05B1 74 75              1344 	mov	a,#0x75
   05B3 F0                 1345 	movx	@dptr,a
                           1346 ;	genPointerSet
                           1347 ;     genFarPointerSet
   05B4 90 01 1C           1348 	mov	dptr,#(_display_help_tx_data_1_1 + 0x010b)
   05B7 74 65              1349 	mov	a,#0x65
   05B9 F0                 1350 	movx	@dptr,a
                           1351 ;	genPointerSet
                           1352 ;     genFarPointerSet
   05BA 90 01 1D           1353 	mov	dptr,#(_display_help_tx_data_1_1 + 0x010c)
   05BD 74 73              1354 	mov	a,#0x73
   05BF F0                 1355 	movx	@dptr,a
                           1356 ;	genPointerSet
                           1357 ;     genFarPointerSet
   05C0 90 01 1E           1358 	mov	dptr,#(_display_help_tx_data_1_1 + 0x010d)
   05C3 74 20              1359 	mov	a,#0x20
   05C5 F0                 1360 	movx	@dptr,a
                           1361 ;	genPointerSet
                           1362 ;     genFarPointerSet
   05C6 90 01 1F           1363 	mov	dptr,#(_display_help_tx_data_1_1 + 0x010e)
   05C9 74 20              1364 	mov	a,#0x20
   05CB F0                 1365 	movx	@dptr,a
                           1366 ;	genPointerSet
                           1367 ;     genFarPointerSet
   05CC 90 01 20           1368 	mov	dptr,#(_display_help_tx_data_1_1 + 0x010f)
   05CF 74 20              1369 	mov	a,#0x20
   05D1 F0                 1370 	movx	@dptr,a
                           1371 ;	genPointerSet
                           1372 ;     genFarPointerSet
   05D2 90 01 21           1373 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0110)
   05D5 74 00              1374 	mov	a,#0x00
   05D7 F0                 1375 	movx	@dptr,a
                           1376 ;	genPointerSet
                           1377 ;     genFarPointerSet
   05D8 90 01 29           1378 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0118)
   05DB 74 0D              1379 	mov	a,#0x0D
   05DD F0                 1380 	movx	@dptr,a
                           1381 ;	genPointerSet
                           1382 ;     genFarPointerSet
   05DE 90 01 2A           1383 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0119)
   05E1 74 0A              1384 	mov	a,#0x0A
   05E3 F0                 1385 	movx	@dptr,a
                           1386 ;	genPointerSet
                           1387 ;     genFarPointerSet
   05E4 90 01 2B           1388 	mov	dptr,#(_display_help_tx_data_1_1 + 0x011a)
   05E7 74 48              1389 	mov	a,#0x48
   05E9 F0                 1390 	movx	@dptr,a
                           1391 ;	genPointerSet
                           1392 ;     genFarPointerSet
   05EA 90 01 2C           1393 	mov	dptr,#(_display_help_tx_data_1_1 + 0x011b)
   05ED 74 20              1394 	mov	a,#0x20
   05EF F0                 1395 	movx	@dptr,a
                           1396 ;	genPointerSet
                           1397 ;     genFarPointerSet
   05F0 90 01 2D           1398 	mov	dptr,#(_display_help_tx_data_1_1 + 0x011c)
   05F3 74 44              1399 	mov	a,#0x44
   05F5 F0                 1400 	movx	@dptr,a
                           1401 ;	genPointerSet
                           1402 ;     genFarPointerSet
   05F6 90 01 2E           1403 	mov	dptr,#(_display_help_tx_data_1_1 + 0x011d)
   05F9 74 69              1404 	mov	a,#0x69
   05FB F0                 1405 	movx	@dptr,a
                           1406 ;	genPointerSet
                           1407 ;     genFarPointerSet
   05FC 90 01 2F           1408 	mov	dptr,#(_display_help_tx_data_1_1 + 0x011e)
   05FF 74 73              1409 	mov	a,#0x73
   0601 F0                 1410 	movx	@dptr,a
                           1411 ;	genPointerSet
                           1412 ;     genFarPointerSet
   0602 90 01 30           1413 	mov	dptr,#(_display_help_tx_data_1_1 + 0x011f)
   0605 74 70              1414 	mov	a,#0x70
   0607 F0                 1415 	movx	@dptr,a
                           1416 ;	genPointerSet
                           1417 ;     genFarPointerSet
   0608 90 01 31           1418 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0120)
   060B 74 6C              1419 	mov	a,#0x6C
   060D F0                 1420 	movx	@dptr,a
                           1421 ;	genPointerSet
                           1422 ;     genFarPointerSet
   060E 90 01 32           1423 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0121)
   0611 74 61              1424 	mov	a,#0x61
   0613 F0                 1425 	movx	@dptr,a
                           1426 ;	genPointerSet
                           1427 ;     genFarPointerSet
   0614 90 01 33           1428 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0122)
   0617 74 79              1429 	mov	a,#0x79
   0619 F0                 1430 	movx	@dptr,a
                           1431 ;	genPointerSet
                           1432 ;     genFarPointerSet
   061A 90 01 34           1433 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0123)
   061D 74 20              1434 	mov	a,#0x20
   061F F0                 1435 	movx	@dptr,a
                           1436 ;	genPointerSet
                           1437 ;     genFarPointerSet
   0620 90 01 35           1438 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0124)
   0623 74 54              1439 	mov	a,#0x54
   0625 F0                 1440 	movx	@dptr,a
                           1441 ;	genPointerSet
                           1442 ;     genFarPointerSet
   0626 90 01 36           1443 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0125)
   0629 74 68              1444 	mov	a,#0x68
   062B F0                 1445 	movx	@dptr,a
                           1446 ;	genPointerSet
                           1447 ;     genFarPointerSet
   062C 90 01 37           1448 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0126)
   062F 74 69              1449 	mov	a,#0x69
   0631 F0                 1450 	movx	@dptr,a
                           1451 ;	genPointerSet
                           1452 ;     genFarPointerSet
   0632 90 01 38           1453 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0127)
   0635 74 73              1454 	mov	a,#0x73
   0637 F0                 1455 	movx	@dptr,a
                           1456 ;	genPointerSet
                           1457 ;     genFarPointerSet
   0638 90 01 39           1458 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0128)
   063B 74 20              1459 	mov	a,#0x20
   063D F0                 1460 	movx	@dptr,a
                           1461 ;	genPointerSet
                           1462 ;     genFarPointerSet
   063E 90 01 3A           1463 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0129)
   0641 74 4D              1464 	mov	a,#0x4D
   0643 F0                 1465 	movx	@dptr,a
                           1466 ;	genPointerSet
                           1467 ;     genFarPointerSet
   0644 90 01 3B           1468 	mov	dptr,#(_display_help_tx_data_1_1 + 0x012a)
   0647 74 65              1469 	mov	a,#0x65
   0649 F0                 1470 	movx	@dptr,a
                           1471 ;	genPointerSet
                           1472 ;     genFarPointerSet
   064A 90 01 3C           1473 	mov	dptr,#(_display_help_tx_data_1_1 + 0x012b)
   064D 74 6E              1474 	mov	a,#0x6E
   064F F0                 1475 	movx	@dptr,a
                           1476 ;	genPointerSet
                           1477 ;     genFarPointerSet
   0650 90 01 3D           1478 	mov	dptr,#(_display_help_tx_data_1_1 + 0x012c)
   0653 74 75              1479 	mov	a,#0x75
   0655 F0                 1480 	movx	@dptr,a
                           1481 ;	genPointerSet
                           1482 ;     genFarPointerSet
   0656 90 01 3E           1483 	mov	dptr,#(_display_help_tx_data_1_1 + 0x012d)
   0659 74 20              1484 	mov	a,#0x20
   065B F0                 1485 	movx	@dptr,a
                           1486 ;	genPointerSet
                           1487 ;     genFarPointerSet
   065C 90 01 3F           1488 	mov	dptr,#(_display_help_tx_data_1_1 + 0x012e)
   065F 74 20              1489 	mov	a,#0x20
   0661 F0                 1490 	movx	@dptr,a
                           1491 ;	genPointerSet
                           1492 ;     genFarPointerSet
   0662 90 01 40           1493 	mov	dptr,#(_display_help_tx_data_1_1 + 0x012f)
   0665 74 20              1494 	mov	a,#0x20
   0667 F0                 1495 	movx	@dptr,a
                           1496 ;	genPointerSet
                           1497 ;     genFarPointerSet
   0668 90 01 41           1498 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0130)
   066B 74 20              1499 	mov	a,#0x20
   066D F0                 1500 	movx	@dptr,a
                           1501 ;	genPointerSet
                           1502 ;     genFarPointerSet
   066E 90 01 42           1503 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0131)
   0671 74 20              1504 	mov	a,#0x20
   0673 F0                 1505 	movx	@dptr,a
                           1506 ;	genPointerSet
                           1507 ;     genFarPointerSet
   0674 90 01 43           1508 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0132)
   0677 74 20              1509 	mov	a,#0x20
   0679 F0                 1510 	movx	@dptr,a
                           1511 ;	genPointerSet
                           1512 ;     genFarPointerSet
   067A 90 01 44           1513 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0133)
   067D 74 20              1514 	mov	a,#0x20
   067F F0                 1515 	movx	@dptr,a
                           1516 ;	genPointerSet
                           1517 ;     genFarPointerSet
   0680 90 01 45           1518 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0134)
   0683 74 20              1519 	mov	a,#0x20
   0685 F0                 1520 	movx	@dptr,a
                           1521 ;	genPointerSet
                           1522 ;     genFarPointerSet
   0686 90 01 46           1523 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0135)
   0689 74 0D              1524 	mov	a,#0x0D
   068B F0                 1525 	movx	@dptr,a
                           1526 ;	genPointerSet
                           1527 ;     genFarPointerSet
   068C 90 01 47           1528 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0136)
   068F 74 0A              1529 	mov	a,#0x0A
   0691 F0                 1530 	movx	@dptr,a
                           1531 ;	genPointerSet
                           1532 ;     genFarPointerSet
   0692 90 01 48           1533 	mov	dptr,#(_display_help_tx_data_1_1 + 0x0137)
   0695 74 00              1534 	mov	a,#0x00
   0697 F0                 1535 	movx	@dptr,a
                    0636   1536 	C$cli.c$33$1$1 ==.
                           1537 ;	../cli.c:33: UART_send(&g_stdio_uart, tx_data[0],sizeof(tx_data));
                           1538 ;	genCast
   0698 90 07 B0           1539 	mov	dptr,#_UART_send_PARM_2
   069B 74 11              1540 	mov	a,#_display_help_tx_data_1_1
   069D F0                 1541 	movx	@dptr,a
   069E A3                 1542 	inc	dptr
   069F 74 00              1543 	mov	a,#(_display_help_tx_data_1_1 >> 8)
   06A1 F0                 1544 	movx	@dptr,a
   06A2 A3                 1545 	inc	dptr
   06A3 74 00              1546 	mov	a,#0x0
   06A5 F0                 1547 	movx	@dptr,a
                           1548 ;	genAssign
   06A6 90 07 B3           1549 	mov	dptr,#_UART_send_PARM_3
   06A9 74 C0              1550 	mov	a,#0xC0
   06AB F0                 1551 	movx	@dptr,a
   06AC A3                 1552 	inc	dptr
   06AD 74 03              1553 	mov	a,#0x03
   06AF F0                 1554 	movx	@dptr,a
                           1555 ;	genCall
   06B0 75 82 2F           1556 	mov	dpl,#_g_stdio_uart
   06B3 75 83 04           1557 	mov	dph,#(_g_stdio_uart >> 8)
   06B6 75 F0 00           1558 	mov	b,#0x00
   06B9 12 30 66           1559 	lcall	_UART_send
   06BC                    1560 00101$:
                    065A   1561 	C$cli.c$36$1$1 ==.
                    065A   1562 	XG$display_help$0$0 ==.
   06BC 22                 1563 	ret
                           1564 ;------------------------------------------------------------
                           1565 ;Allocation info for local variables in function 'display_prompt'
                           1566 ;------------------------------------------------------------
                           1567 ;------------------------------------------------------------
                    065B   1568 	G$display_prompt$0$0 ==.
                    065B   1569 	C$cli.c$40$1$1 ==.
                           1570 ;	../cli.c:40: void display_prompt(void) {
                           1571 ;	-----------------------------------------
                           1572 ;	 function display_prompt
                           1573 ;	-----------------------------------------
   06BD                    1574 _display_prompt:
                    065B   1575 	C$cli.c$42$1$1 ==.
                           1576 ;	../cli.c:42: dp_display_text("\r\nCore1553BRT>");
                           1577 ;	genCall
   06BD 75 82 16           1578 	mov	dpl,#__str_8
   06C0 75 83 72           1579 	mov	dph,#(__str_8 >> 8)
   06C3 75 F0 80           1580 	mov	b,#0x80
   06C6 12 12 84           1581 	lcall	_dp_display_text
   06C9                    1582 00101$:
                    0667   1583 	C$cli.c$45$1$1 ==.
                    0667   1584 	XG$display_prompt$0$0 ==.
   06C9 22                 1585 	ret
                           1586 ;------------------------------------------------------------
                           1587 ;Allocation info for local variables in function 'get_key_selection'
                           1588 ;------------------------------------------------------------
                           1589 ;rx_data                   Allocated with name '_get_key_selection_rx_data_1_1'
                           1590 ;rx_size                   Allocated with name '_get_key_selection_rx_size_1_1'
                           1591 ;------------------------------------------------------------
                    0668   1592 	G$get_key_selection$0$0 ==.
                    0668   1593 	C$cli.c$49$1$1 ==.
                           1594 ;	../cli.c:49: uint8_t get_key_selection(void)
                           1595 ;	-----------------------------------------
                           1596 ;	 function get_key_selection
                           1597 ;	-----------------------------------------
   06CA                    1598 _get_key_selection:
                    0668   1599 	C$cli.c$56$2$2 ==.
                           1600 ;	../cli.c:56: do {
   06CA                    1601 00101$:
                    0668   1602 	C$cli.c$57$2$2 ==.
                           1603 ;	../cli.c:57: rx_size = UART_get_rx(&g_stdio_uart, &rx_data[1],1);
                           1604 ;	genCast
   06CA 90 08 AE           1605 	mov	dptr,#_UART_get_rx_PARM_2
   06CD 74 D2              1606 	mov	a,#(_get_key_selection_rx_data_1_1 + 0x0001)
   06CF F0                 1607 	movx	@dptr,a
   06D0 A3                 1608 	inc	dptr
   06D1 74 03              1609 	mov	a,#((_get_key_selection_rx_data_1_1 + 0x0001) >> 8)
   06D3 F0                 1610 	movx	@dptr,a
   06D4 A3                 1611 	inc	dptr
   06D5 74 00              1612 	mov	a,#0x0
   06D7 F0                 1613 	movx	@dptr,a
                           1614 ;	genAssign
   06D8 90 08 B1           1615 	mov	dptr,#_UART_get_rx_PARM_3
   06DB 74 01              1616 	mov	a,#0x01
   06DD F0                 1617 	movx	@dptr,a
   06DE E4                 1618 	clr	a
   06DF A3                 1619 	inc	dptr
   06E0 F0                 1620 	movx	@dptr,a
                           1621 ;	genCall
   06E1 75 82 2F           1622 	mov	dpl,#_g_stdio_uart
   06E4 75 83 04           1623 	mov	dph,#(_g_stdio_uart >> 8)
   06E7 75 F0 00           1624 	mov	b,#0x00
   06EA 12 39 84           1625 	lcall	_UART_get_rx
   06ED AA 82              1626 	mov	r2,dpl
   06EF AB 83              1627 	mov	r3,dph
                           1628 ;	genCast
                    068F   1629 	C$cli.c$58$1$1 ==.
                           1630 ;	../cli.c:58: }while(rx_size == 0);
                           1631 ;	genIfx
   06F1 EA                 1632 	mov	a,r2
                           1633 ;	genIfxJump
   06F2 70 03              1634 	jnz	00108$
   06F4 02 06 CA           1635 	ljmp	00101$
   06F7                    1636 00108$:
                    0695   1637 	C$cli.c$60$1$1 ==.
                           1638 ;	../cli.c:60: key = rx_data[1];
                           1639 ;	genPointerGet
                           1640 ;	genFarPointerGet
   06F7 90 03 D2           1641 	mov	dptr,#(_get_key_selection_rx_data_1_1 + 0x0001)
   06FA E0                 1642 	movx	a,@dptr
   06FB FA                 1643 	mov	r2,a
                           1644 ;	genAssign
   06FC 90 00 00           1645 	mov	dptr,#_key
   06FF EA                 1646 	mov	a,r2
   0700 F0                 1647 	movx	@dptr,a
                    069F   1648 	C$cli.c$62$1$1 ==.
                           1649 ;	../cli.c:62: UART_send (&g_stdio_uart, &key,sizeof (key));
                           1650 ;	genCast
   0701 90 07 B0           1651 	mov	dptr,#_UART_send_PARM_2
   0704 74 00              1652 	mov	a,#_key
   0706 F0                 1653 	movx	@dptr,a
   0707 A3                 1654 	inc	dptr
   0708 74 00              1655 	mov	a,#(_key >> 8)
   070A F0                 1656 	movx	@dptr,a
   070B A3                 1657 	inc	dptr
   070C 74 00              1658 	mov	a,#0x0
   070E F0                 1659 	movx	@dptr,a
                           1660 ;	genAssign
   070F 90 07 B3           1661 	mov	dptr,#_UART_send_PARM_3
   0712 74 01              1662 	mov	a,#0x01
   0714 F0                 1663 	movx	@dptr,a
   0715 E4                 1664 	clr	a
   0716 A3                 1665 	inc	dptr
   0717 F0                 1666 	movx	@dptr,a
                           1667 ;	genCall
   0718 75 82 2F           1668 	mov	dpl,#_g_stdio_uart
   071B 75 83 04           1669 	mov	dph,#(_g_stdio_uart >> 8)
   071E 75 F0 00           1670 	mov	b,#0x00
   0721 12 30 66           1671 	lcall	_UART_send
                    06C2   1672 	C$cli.c$63$1$1 ==.
                           1673 ;	../cli.c:63: return rx_data[1];
                           1674 ;	genPointerGet
                           1675 ;	genFarPointerGet
   0724 90 03 D2           1676 	mov	dptr,#(_get_key_selection_rx_data_1_1 + 0x0001)
   0727 E0                 1677 	movx	a,@dptr
   0728 FA                 1678 	mov	r2,a
                           1679 ;	genRet
   0729 8A 82              1680 	mov	dpl,r2
   072B                    1681 00104$:
                    06C9   1682 	C$cli.c$65$1$1 ==.
                    06C9   1683 	XG$get_key_selection$0$0 ==.
   072B 22                 1684 	ret
                           1685 ;------------------------------------------------------------
                           1686 ;Allocation info for local variables in function 'read_user_input'
                           1687 ;------------------------------------------------------------
                           1688 ;rx_char_ptr               Allocated with name '_read_user_input_rx_char_ptr_1_1'
                           1689 ;recv_char                 Allocated with name '_read_user_input_recv_char_1_1'
                           1690 ;size                      Allocated with name '_read_user_input_size_1_1'
                           1691 ;index                     Allocated with name '_read_user_input_index_1_1'
                           1692 ;------------------------------------------------------------
                    06CA   1693 	G$read_user_input$0$0 ==.
                    06CA   1694 	C$cli.c$72$1$1 ==.
                           1695 ;	../cli.c:72: void read_user_input (uint8_t *rx_char_ptr)
                           1696 ;	-----------------------------------------
                           1697 ;	 function read_user_input
                           1698 ;	-----------------------------------------
   072C                    1699 _read_user_input:
                           1700 ;	genReceive
   072C AA F0              1701 	mov	r2,b
   072E AB 83              1702 	mov	r3,dph
   0730 E5 82              1703 	mov	a,dpl
   0732 90 03 D3           1704 	mov	dptr,#_read_user_input_rx_char_ptr_1_1
   0735 F0                 1705 	movx	@dptr,a
   0736 A3                 1706 	inc	dptr
   0737 EB                 1707 	mov	a,r3
   0738 F0                 1708 	movx	@dptr,a
   0739 A3                 1709 	inc	dptr
   073A EA                 1710 	mov	a,r2
   073B F0                 1711 	movx	@dptr,a
                    06DA   1712 	C$cli.c$74$1$1 ==.
                           1713 ;	../cli.c:74: uint8_t recv_char=0;
                           1714 ;	genAssign
   073C 90 03 D6           1715 	mov	dptr,#_read_user_input_recv_char_1_1
   073F 74 00              1716 	mov	a,#0x00
   0741 F0                 1717 	movx	@dptr,a
                    06E0   1718 	C$cli.c$77$1$1 ==.
                           1719 ;	../cli.c:77: for(index = 0; index < 10; index++)
                           1720 ;	genAssign
   0742 90 03 D7           1721 	mov	dptr,#_read_user_input_index_1_1
   0745 74 00              1722 	mov	a,#0x00
   0747 F0                 1723 	movx	@dptr,a
   0748                    1724 00106$:
                           1725 ;	genAssign
   0748 90 03 D7           1726 	mov	dptr,#_read_user_input_index_1_1
   074B E0                 1727 	movx	a,@dptr
   074C FA                 1728 	mov	r2,a
                           1729 ;	genCmpLt
                           1730 ;	genCmp
   074D BA 0A 00           1731 	cjne	r2,#0x0A,00117$
   0750                    1732 00117$:
                           1733 ;	genIfxJump
   0750 40 03              1734 	jc	00118$
   0752 02 07 6D           1735 	ljmp	00109$
   0755                    1736 00118$:
                    06F3   1737 	C$cli.c$79$2$2 ==.
                           1738 ;	../cli.c:79: rx_char[index] = '0';
                           1739 ;	genPlus
   0755 E5 02              1740 	mov	a,ar2
   0757 24 01              1741 	add	a,#_rx_char
   0759 F5 82              1742 	mov	dpl,a
   075B 74 00              1743 	mov	a,#0x00
   075D 34 00              1744 	addc	a,#(_rx_char >> 8)
   075F F5 83              1745 	mov	dph,a
                           1746 ;	genPointerSet
                           1747 ;     genFarPointerSet
   0761 74 30              1748 	mov	a,#0x30
   0763 F0                 1749 	movx	@dptr,a
                    0702   1750 	C$cli.c$77$1$1 ==.
                           1751 ;	../cli.c:77: for(index = 0; index < 10; index++)
                           1752 ;	genPlus
   0764 90 03 D7           1753 	mov	dptr,#_read_user_input_index_1_1
                           1754 ;	genPlusIncr
   0767 EA                 1755 	mov	a,r2
   0768 04                 1756 	inc	a
   0769 F0                 1757 	movx	@dptr,a
   076A 02 07 48           1758 	ljmp	00106$
   076D                    1759 00109$:
                    070B   1760 	C$cli.c$81$1$1 ==.
                           1761 ;	../cli.c:81: index = 0;
                           1762 ;	genAssign
   076D 90 03 D7           1763 	mov	dptr,#_read_user_input_index_1_1
   0770 74 00              1764 	mov	a,#0x00
   0772 F0                 1765 	movx	@dptr,a
                    0711   1766 	C$cli.c$82$3$4 ==.
                           1767 ;	../cli.c:82: while(recv_char != 13)  //'\n'
                           1768 ;	genAssign
   0773 90 03 D3           1769 	mov	dptr,#_read_user_input_rx_char_ptr_1_1
   0776 E0                 1770 	movx	a,@dptr
   0777 FA                 1771 	mov	r2,a
   0778 A3                 1772 	inc	dptr
   0779 E0                 1773 	movx	a,@dptr
   077A FB                 1774 	mov	r3,a
   077B A3                 1775 	inc	dptr
   077C E0                 1776 	movx	a,@dptr
   077D FC                 1777 	mov	r4,a
   077E                    1778 00103$:
                           1779 ;	genAssign
   077E 90 03 D6           1780 	mov	dptr,#_read_user_input_recv_char_1_1
   0781 E0                 1781 	movx	a,@dptr
   0782 FD                 1782 	mov	r5,a
                           1783 ;	genCmpEq
                           1784 ;	gencjneshort
   0783 BD 0D 03           1785 	cjne	r5,#0x0D,00119$
   0786 02 08 1E           1786 	ljmp	00110$
   0789                    1787 00119$:
                    0727   1788 	C$cli.c$84$2$3 ==.
                           1789 ;	../cli.c:84: size = UART_get_rx(&g_stdio_uart, &recv_char,1);
                           1790 ;	genCast
   0789 90 08 AE           1791 	mov	dptr,#_UART_get_rx_PARM_2
   078C 74 D6              1792 	mov	a,#_read_user_input_recv_char_1_1
   078E F0                 1793 	movx	@dptr,a
   078F A3                 1794 	inc	dptr
   0790 74 03              1795 	mov	a,#(_read_user_input_recv_char_1_1 >> 8)
   0792 F0                 1796 	movx	@dptr,a
   0793 A3                 1797 	inc	dptr
   0794 74 00              1798 	mov	a,#0x0
   0796 F0                 1799 	movx	@dptr,a
                           1800 ;	genAssign
   0797 90 08 B1           1801 	mov	dptr,#_UART_get_rx_PARM_3
   079A 74 01              1802 	mov	a,#0x01
   079C F0                 1803 	movx	@dptr,a
   079D E4                 1804 	clr	a
   079E A3                 1805 	inc	dptr
   079F F0                 1806 	movx	@dptr,a
                           1807 ;	genCall
   07A0 75 82 2F           1808 	mov	dpl,#_g_stdio_uart
   07A3 75 83 04           1809 	mov	dph,#(_g_stdio_uart >> 8)
   07A6 75 F0 00           1810 	mov	b,#0x00
   07A9 C0 02              1811 	push	ar2
   07AB C0 03              1812 	push	ar3
   07AD C0 04              1813 	push	ar4
   07AF 12 39 84           1814 	lcall	_UART_get_rx
   07B2 AD 82              1815 	mov	r5,dpl
   07B4 AE 83              1816 	mov	r6,dph
   07B6 D0 04              1817 	pop	ar4
   07B8 D0 03              1818 	pop	ar3
   07BA D0 02              1819 	pop	ar2
                           1820 ;	genCast
                    075A   1821 	C$cli.c$85$2$3 ==.
                           1822 ;	../cli.c:85: if(size > 0)
                           1823 ;	genIfx
   07BC ED                 1824 	mov	a,r5
                           1825 ;	genIfxJump
   07BD 70 03              1826 	jnz	00120$
   07BF 02 07 7E           1827 	ljmp	00103$
   07C2                    1828 00120$:
                    0760   1829 	C$cli.c$88$3$4 ==.
                           1830 ;	../cli.c:88: rx_char_ptr[index] = recv_char;
                           1831 ;	genAssign
   07C2 90 03 D7           1832 	mov	dptr,#_read_user_input_index_1_1
   07C5 E0                 1833 	movx	a,@dptr
   07C6 FD                 1834 	mov	r5,a
                           1835 ;	genPlus
   07C7 E5 05              1836 	mov	a,ar5
   07C9 25 02              1837 	add	a,ar2
   07CB FE                 1838 	mov	r6,a
   07CC 74 00              1839 	mov	a,#0x00
   07CE 35 03              1840 	addc	a,ar3
   07D0 FF                 1841 	mov	r7,a
   07D1 8C 00              1842 	mov	ar0,r4
                           1843 ;	genAssign
   07D3 90 03 D6           1844 	mov	dptr,#_read_user_input_recv_char_1_1
   07D6 E0                 1845 	movx	a,@dptr
   07D7 F9                 1846 	mov	r1,a
                           1847 ;	genPointerSet
                           1848 ;	genGenPointerSet
   07D8 8E 82              1849 	mov	dpl,r6
   07DA 8F 83              1850 	mov	dph,r7
   07DC 88 F0              1851 	mov	b,r0
   07DE E9                 1852 	mov	a,r1
   07DF 12 70 A4           1853 	lcall	__gptrput
                    0780   1854 	C$cli.c$89$3$4 ==.
                           1855 ;	../cli.c:89: UART_send (&g_stdio_uart, (uint8_t *)&recv_char,sizeof(recv_char));
                           1856 ;	genCast
   07E2 90 07 B0           1857 	mov	dptr,#_UART_send_PARM_2
   07E5 74 D6              1858 	mov	a,#_read_user_input_recv_char_1_1
   07E7 F0                 1859 	movx	@dptr,a
   07E8 A3                 1860 	inc	dptr
   07E9 74 03              1861 	mov	a,#(_read_user_input_recv_char_1_1 >> 8)
   07EB F0                 1862 	movx	@dptr,a
   07EC A3                 1863 	inc	dptr
   07ED 74 00              1864 	mov	a,#0x0
   07EF F0                 1865 	movx	@dptr,a
                           1866 ;	genAssign
   07F0 90 07 B3           1867 	mov	dptr,#_UART_send_PARM_3
   07F3 74 01              1868 	mov	a,#0x01
   07F5 F0                 1869 	movx	@dptr,a
   07F6 E4                 1870 	clr	a
   07F7 A3                 1871 	inc	dptr
   07F8 F0                 1872 	movx	@dptr,a
                           1873 ;	genCall
   07F9 75 82 2F           1874 	mov	dpl,#_g_stdio_uart
   07FC 75 83 04           1875 	mov	dph,#(_g_stdio_uart >> 8)
   07FF 75 F0 00           1876 	mov	b,#0x00
   0802 C0 02              1877 	push	ar2
   0804 C0 03              1878 	push	ar3
   0806 C0 04              1879 	push	ar4
   0808 C0 05              1880 	push	ar5
   080A 12 30 66           1881 	lcall	_UART_send
   080D D0 05              1882 	pop	ar5
   080F D0 04              1883 	pop	ar4
   0811 D0 03              1884 	pop	ar3
   0813 D0 02              1885 	pop	ar2
                    07B3   1886 	C$cli.c$90$3$4 ==.
                           1887 ;	../cli.c:90: index++;
                           1888 ;	genPlus
   0815 90 03 D7           1889 	mov	dptr,#_read_user_input_index_1_1
                           1890 ;	genPlusIncr
   0818 ED                 1891 	mov	a,r5
   0819 04                 1892 	inc	a
   081A F0                 1893 	movx	@dptr,a
                    07B9   1894 	C$cli.c$91$1$1 ==.
                           1895 ;	../cli.c:91: size = 0; // clear the rcvd flag
   081B 02 07 7E           1896 	ljmp	00103$
   081E                    1897 00110$:
                    07BC   1898 	C$cli.c$95$1$1 ==.
                    07BC   1899 	XG$read_user_input$0$0 ==.
   081E 22                 1900 	ret
                           1901 ;------------------------------------------------------------
                           1902 ;Allocation info for local variables in function 'display_brt_regs'
                           1903 ;------------------------------------------------------------
                           1904 ;sloc0                     Allocated with name '_display_brt_regs_sloc0_1_0'
                           1905 ;mem_addr                  Allocated with name '_display_brt_regs_mem_addr_1_1'
                           1906 ;mem_data                  Allocated with name '_display_brt_regs_mem_data_1_1'
                           1907 ;i                         Allocated with name '_display_brt_regs_i_1_1'
                           1908 ;------------------------------------------------------------
                    07BD   1909 	G$display_brt_regs$0$0 ==.
                    07BD   1910 	C$cli.c$102$1$1 ==.
                           1911 ;	../cli.c:102: void display_brt_regs(void){
                           1912 ;	-----------------------------------------
                           1913 ;	 function display_brt_regs
                           1914 ;	-----------------------------------------
   081F                    1915 _display_brt_regs:
                    07BD   1916 	C$cli.c$107$1$1 ==.
                           1917 ;	../cli.c:107: mem_addr  = ( APB3_BASE_ADDRESS + CORE1553BRT_0) + BRT_REG_OFFSET ;  // base address of BRT instance, 32location from here onwards
                           1918 ;	genAssign
   081F 90 03 D8           1919 	mov	dptr,#_display_brt_regs_mem_addr_1_1
   0822 74 E0              1920 	mov	a,#0xE0
   0824 F0                 1921 	movx	@dptr,a
   0825 A3                 1922 	inc	dptr
   0826 74 FF              1923 	mov	a,#0xFF
   0828 F0                 1924 	movx	@dptr,a
   0829 A3                 1925 	inc	dptr
   082A 74 00              1926 	mov	a,#0x00
   082C F0                 1927 	movx	@dptr,a
   082D A3                 1928 	inc	dptr
   082E 74 00              1929 	mov	a,#0x00
   0830 F0                 1930 	movx	@dptr,a
                    07CF   1931 	C$cli.c$109$1$1 ==.
                           1932 ;	../cli.c:109: dp_display_text("\n\r BRT Register Contents\r\n ");
                           1933 ;	genCall
   0831 75 82 25           1934 	mov	dpl,#__str_9
   0834 75 83 72           1935 	mov	dph,#(__str_9 >> 8)
   0837 75 F0 80           1936 	mov	b,#0x80
   083A 12 12 84           1937 	lcall	_dp_display_text
                    07DB   1938 	C$cli.c$110$1$1 ==.
                           1939 ;	../cli.c:110: for ( i=0; i<= 32 ;i++) {
                           1940 ;	genAssign
   083D 90 03 DC           1941 	mov	dptr,#_display_brt_regs_i_1_1
   0840 74 00              1942 	mov	a,#0x00
   0842 F0                 1943 	movx	@dptr,a
   0843                    1944 00101$:
                           1945 ;	genAssign
   0843 90 03 DC           1946 	mov	dptr,#_display_brt_regs_i_1_1
   0846 E0                 1947 	movx	a,@dptr
   0847 F5 18              1948 	mov	_display_brt_regs_sloc0_1_0,a
                           1949 ;	genCmpGt
                           1950 ;	genCmp
   0849 C3                 1951 	clr	c
   084A 74 20              1952 	mov	a,#0x20
   084C 95 18              1953 	subb	a,_display_brt_regs_sloc0_1_0
                           1954 ;	genIfxJump
   084E 50 03              1955 	jnc	00109$
   0850 02 09 2D           1956 	ljmp	00105$
   0853                    1957 00109$:
                    07F1   1958 	C$cli.c$111$2$2 ==.
                           1959 ;	../cli.c:111: dp_display_text("\r\n");
                           1960 ;	genCall
   0853 75 82 41           1961 	mov	dpl,#__str_10
   0856 75 83 72           1962 	mov	dph,#(__str_10 >> 8)
   0859 75 F0 80           1963 	mov	b,#0x80
   085C 12 12 84           1964 	lcall	_dp_display_text
                    07FD   1965 	C$cli.c$112$2$2 ==.
                           1966 ;	../cli.c:112: dp_display_value(i,DEC);
                           1967 ;	genCast
   085F AB 18              1968 	mov	r3,_display_brt_regs_sloc0_1_0
   0861 7C 00              1969 	mov	r4,#0x00
   0863 7D 00              1970 	mov	r5,#0x00
   0865 7E 00              1971 	mov	r6,#0x00
                           1972 ;	genAssign
   0867 90 04 37           1973 	mov	dptr,#_dp_display_value_PARM_2
   086A 74 01              1974 	mov	a,#0x01
   086C F0                 1975 	movx	@dptr,a
   086D E4                 1976 	clr	a
   086E A3                 1977 	inc	dptr
   086F F0                 1978 	movx	@dptr,a
                           1979 ;	genCall
   0870 8B 82              1980 	mov	dpl,r3
   0872 8C 83              1981 	mov	dph,r4
   0874 8D F0              1982 	mov	b,r5
   0876 EE                 1983 	mov	a,r6
   0877 12 13 02           1984 	lcall	_dp_display_value
                    0818   1985 	C$cli.c$113$2$2 ==.
                           1986 ;	../cli.c:113: dp_display_text("\t");
                           1987 ;	genCall
   087A 75 82 44           1988 	mov	dpl,#__str_11
   087D 75 83 72           1989 	mov	dph,#(__str_11 >> 8)
   0880 75 F0 80           1990 	mov	b,#0x80
   0883 12 12 84           1991 	lcall	_dp_display_text
                    0824   1992 	C$cli.c$114$2$2 ==.
                           1993 ;	../cli.c:114: dp_display_value(mem_addr,HEX);
                           1994 ;	genAssign
   0886 90 03 D8           1995 	mov	dptr,#_display_brt_regs_mem_addr_1_1
   0889 E0                 1996 	movx	a,@dptr
   088A FB                 1997 	mov	r3,a
   088B A3                 1998 	inc	dptr
   088C E0                 1999 	movx	a,@dptr
   088D FC                 2000 	mov	r4,a
   088E A3                 2001 	inc	dptr
   088F E0                 2002 	movx	a,@dptr
   0890 FD                 2003 	mov	r5,a
   0891 A3                 2004 	inc	dptr
   0892 E0                 2005 	movx	a,@dptr
   0893 FE                 2006 	mov	r6,a
                           2007 ;	genAssign
   0894 90 04 37           2008 	mov	dptr,#_dp_display_value_PARM_2
   0897 E4                 2009 	clr	a
   0898 F0                 2010 	movx	@dptr,a
   0899 A3                 2011 	inc	dptr
   089A F0                 2012 	movx	@dptr,a
                           2013 ;	genCall
   089B 8B 82              2014 	mov	dpl,r3
   089D 8C 83              2015 	mov	dph,r4
   089F 8D F0              2016 	mov	b,r5
   08A1 EE                 2017 	mov	a,r6
   08A2 C0 03              2018 	push	ar3
   08A4 C0 04              2019 	push	ar4
   08A6 C0 05              2020 	push	ar5
   08A8 C0 06              2021 	push	ar6
   08AA 12 13 02           2022 	lcall	_dp_display_value
   08AD D0 06              2023 	pop	ar6
   08AF D0 05              2024 	pop	ar5
   08B1 D0 04              2025 	pop	ar4
   08B3 D0 03              2026 	pop	ar3
                    0853   2027 	C$cli.c$115$2$2 ==.
                           2028 ;	../cli.c:115: dp_display_text("\t");
                           2029 ;	genCall
   08B5 75 82 44           2030 	mov	dpl,#__str_11
   08B8 75 83 72           2031 	mov	dph,#(__str_11 >> 8)
   08BB 75 F0 80           2032 	mov	b,#0x80
   08BE C0 03              2033 	push	ar3
   08C0 C0 04              2034 	push	ar4
   08C2 C0 05              2035 	push	ar5
   08C4 C0 06              2036 	push	ar6
   08C6 12 12 84           2037 	lcall	_dp_display_text
   08C9 D0 06              2038 	pop	ar6
   08CB D0 05              2039 	pop	ar5
   08CD D0 04              2040 	pop	ar4
   08CF D0 03              2041 	pop	ar3
                    086F   2042 	C$cli.c$116$2$2 ==.
                           2043 ;	../cli.c:116: mem_data = HW_get_16bit_reg(mem_addr);
                           2044 ;	genCast
   08D1 8B 07              2045 	mov	ar7,r3
   08D3 8C 00              2046 	mov	ar0,r4
                           2047 ;	genCall
   08D5 8F 82              2048 	mov	dpl,r7
   08D7 88 83              2049 	mov	dph,r0
   08D9 C0 03              2050 	push	ar3
   08DB C0 04              2051 	push	ar4
   08DD C0 05              2052 	push	ar5
   08DF C0 06              2053 	push	ar6
   08E1 12 1C 68           2054 	lcall	_HW_get_16bit_reg
   08E4 AF 82              2055 	mov	r7,dpl
   08E6 A8 83              2056 	mov	r0,dph
   08E8 D0 06              2057 	pop	ar6
   08EA D0 05              2058 	pop	ar5
   08EC D0 04              2059 	pop	ar4
   08EE D0 03              2060 	pop	ar3
                           2061 ;	genCast
   08F0 79 00              2062 	mov	r1,#0x00
   08F2 7A 00              2063 	mov	r2,#0x00
                    0892   2064 	C$cli.c$117$2$2 ==.
                           2065 ;	../cli.c:117: dp_display_value(mem_data,HEX);
                           2066 ;	genAssign
   08F4 90 04 37           2067 	mov	dptr,#_dp_display_value_PARM_2
   08F7 E4                 2068 	clr	a
   08F8 F0                 2069 	movx	@dptr,a
   08F9 A3                 2070 	inc	dptr
   08FA F0                 2071 	movx	@dptr,a
                           2072 ;	genCall
   08FB 8F 82              2073 	mov	dpl,r7
   08FD 88 83              2074 	mov	dph,r0
   08FF 89 F0              2075 	mov	b,r1
   0901 EA                 2076 	mov	a,r2
   0902 C0 03              2077 	push	ar3
   0904 C0 04              2078 	push	ar4
   0906 C0 05              2079 	push	ar5
   0908 C0 06              2080 	push	ar6
   090A 12 13 02           2081 	lcall	_dp_display_value
   090D D0 06              2082 	pop	ar6
   090F D0 05              2083 	pop	ar5
   0911 D0 04              2084 	pop	ar4
   0913 D0 03              2085 	pop	ar3
                    08B3   2086 	C$cli.c$118$2$2 ==.
                           2087 ;	../cli.c:118: mem_addr = mem_addr++;
                           2088 ;	genAssign
   0915 90 03 D8           2089 	mov	dptr,#_display_brt_regs_mem_addr_1_1
   0918 EB                 2090 	mov	a,r3
   0919 F0                 2091 	movx	@dptr,a
   091A A3                 2092 	inc	dptr
   091B EC                 2093 	mov	a,r4
   091C F0                 2094 	movx	@dptr,a
   091D A3                 2095 	inc	dptr
   091E ED                 2096 	mov	a,r5
   091F F0                 2097 	movx	@dptr,a
   0920 A3                 2098 	inc	dptr
   0921 EE                 2099 	mov	a,r6
   0922 F0                 2100 	movx	@dptr,a
                    08C1   2101 	C$cli.c$110$1$1 ==.
                           2102 ;	../cli.c:110: for ( i=0; i<= 32 ;i++) {
                           2103 ;	genPlus
   0923 90 03 DC           2104 	mov	dptr,#_display_brt_regs_i_1_1
                           2105 ;	genPlusIncr
   0926 E5 18              2106 	mov	a,_display_brt_regs_sloc0_1_0
   0928 04                 2107 	inc	a
   0929 F0                 2108 	movx	@dptr,a
   092A 02 08 43           2109 	ljmp	00101$
   092D                    2110 00105$:
                    08CB   2111 	C$cli.c$120$1$1 ==.
                    08CB   2112 	XG$display_brt_regs$0$0 ==.
   092D 22                 2113 	ret
                           2114 ;------------------------------------------------------------
                           2115 ;Allocation info for local variables in function 'display_brt_data'
                           2116 ;------------------------------------------------------------
                           2117 ;subaddr                   Allocated with name '_display_brt_data_PARM_2'
                           2118 ;brt_baseaddr              Allocated with name '_display_brt_data_brt_baseaddr_1_1'
                           2119 ;mem_addr                  Allocated with name '_display_brt_data_mem_addr_1_1'
                           2120 ;mem_data                  Allocated with name '_display_brt_data_mem_data_1_1'
                           2121 ;tx_sub_address            Allocated with name '_display_brt_data_tx_sub_address_1_1'
                           2122 ;rx_sub_address            Allocated with name '_display_brt_data_rx_sub_address_1_1'
                           2123 ;i                         Allocated with name '_display_brt_data_i_1_1'
                           2124 ;m                         Allocated with name '_display_brt_data_m_1_1'
                           2125 ;------------------------------------------------------------
                    08CC   2126 	G$display_brt_data$0$0 ==.
                    08CC   2127 	C$cli.c$129$1$1 ==.
                           2128 ;	../cli.c:129: void display_brt_data(uint32_t brt_baseaddr,uint8_t subaddr){
                           2129 ;	-----------------------------------------
                           2130 ;	 function display_brt_data
                           2131 ;	-----------------------------------------
   092E                    2132 _display_brt_data:
                           2133 ;	genReceive
   092E AA 82              2134 	mov	r2,dpl
   0930 AB 83              2135 	mov	r3,dph
   0932 AC F0              2136 	mov	r4,b
   0934 FD                 2137 	mov	r5,a
   0935 90 03 DE           2138 	mov	dptr,#_display_brt_data_brt_baseaddr_1_1
   0938 EA                 2139 	mov	a,r2
   0939 F0                 2140 	movx	@dptr,a
   093A A3                 2141 	inc	dptr
   093B EB                 2142 	mov	a,r3
   093C F0                 2143 	movx	@dptr,a
   093D A3                 2144 	inc	dptr
   093E EC                 2145 	mov	a,r4
   093F F0                 2146 	movx	@dptr,a
   0940 A3                 2147 	inc	dptr
   0941 ED                 2148 	mov	a,r5
   0942 F0                 2149 	movx	@dptr,a
                    08E1   2150 	C$cli.c$136$1$1 ==.
                           2151 ;	../cli.c:136: mem_addr  = (APB3_BASE_ADDRESS +  brt_baseaddr);  // 16 location from here onwards
                           2152 ;	genAssign
   0943 90 03 DE           2153 	mov	dptr,#_display_brt_data_brt_baseaddr_1_1
   0946 E0                 2154 	movx	a,@dptr
   0947 FA                 2155 	mov	r2,a
   0948 A3                 2156 	inc	dptr
   0949 E0                 2157 	movx	a,@dptr
   094A FB                 2158 	mov	r3,a
   094B A3                 2159 	inc	dptr
   094C E0                 2160 	movx	a,@dptr
   094D FC                 2161 	mov	r4,a
   094E A3                 2162 	inc	dptr
   094F E0                 2163 	movx	a,@dptr
   0950 FD                 2164 	mov	r5,a
                           2165 ;	genPlus
                           2166 ;	genPlusIncr
                           2167 ;     genPlus shortcut
   0951 74 F0              2168 	mov	a,#0xF0
   0953 25 03              2169 	add	a,ar3
   0955 FB                 2170 	mov	r3,a
   0956 74 00              2171 	mov	a,#0x00
   0958 35 04              2172 	addc	a,ar4
   095A FC                 2173 	mov	r4,a
   095B 74 00              2174 	mov	a,#0x00
   095D 35 05              2175 	addc	a,ar5
   095F FD                 2176 	mov	r5,a
                           2177 ;	genCast
                    08FE   2178 	C$cli.c$138$1$1 ==.
                           2179 ;	../cli.c:138: rx_sub_address = mem_addr + (BRT_RX_SA1 * subaddr);   //0x1080
                           2180 ;	genAssign
   0960 90 03 DD           2181 	mov	dptr,#_display_brt_data_PARM_2
   0963 E0                 2182 	movx	a,@dptr
   0964 FC                 2183 	mov	r4,a
                           2184 ;	genMult
                           2185 ;	genMultOneByte
   0965 EC                 2186 	mov	a,r4
   0966 75 F0 20           2187 	mov	b,#0x20
   0969 A4                 2188 	mul	ab
                           2189 ;	genPlus
   096A 25 02              2190 	add	a,ar2
   096C FA                 2191 	mov	r2,a
   096D E5 03              2192 	mov	a,ar3
   096F 35 F0              2193 	addc	a,b
   0971 FB                 2194 	mov	r3,a
                           2195 ;	genAssign
   0972 90 03 E4           2196 	mov	dptr,#_display_brt_data_rx_sub_address_1_1
   0975 EA                 2197 	mov	a,r2
   0976 F0                 2198 	movx	@dptr,a
   0977 A3                 2199 	inc	dptr
   0978 EB                 2200 	mov	a,r3
   0979 F0                 2201 	movx	@dptr,a
                    0918   2202 	C$cli.c$139$1$1 ==.
                           2203 ;	../cli.c:139: tx_sub_address = rx_sub_address + BRT_RX_TX_ADDR_OFSET;
                           2204 ;	genPlus
   097A 90 03 E2           2205 	mov	dptr,#_display_brt_data_tx_sub_address_1_1
                           2206 ;	genPlusIncr
                           2207 ;     genPlus shortcut
   097D EA                 2208 	mov	a,r2
   097E F0                 2209 	movx	@dptr,a
   097F 74 04              2210 	mov	a,#0x04
   0981 25 03              2211 	add	a,ar3
   0983 A3                 2212 	inc	dptr
   0984 F0                 2213 	movx	@dptr,a
                    0923   2214 	C$cli.c$141$1$1 ==.
                           2215 ;	../cli.c:141: dp_display_text("\n\r BRT SA");
                           2216 ;	genCall
   0985 75 82 46           2217 	mov	dpl,#__str_12
   0988 75 83 72           2218 	mov	dph,#(__str_12 >> 8)
   098B 75 F0 80           2219 	mov	b,#0x80
   098E C0 04              2220 	push	ar4
   0990 12 12 84           2221 	lcall	_dp_display_text
   0993 D0 04              2222 	pop	ar4
                    0933   2223 	C$cli.c$142$1$1 ==.
                           2224 ;	../cli.c:142: dp_display_value(subaddr,DEC);
                           2225 ;	genCast
   0995 7A 00              2226 	mov	r2,#0x00
   0997 7B 00              2227 	mov	r3,#0x00
   0999 7D 00              2228 	mov	r5,#0x00
                           2229 ;	genAssign
   099B 90 04 37           2230 	mov	dptr,#_dp_display_value_PARM_2
   099E 74 01              2231 	mov	a,#0x01
   09A0 F0                 2232 	movx	@dptr,a
   09A1 E4                 2233 	clr	a
   09A2 A3                 2234 	inc	dptr
   09A3 F0                 2235 	movx	@dptr,a
                           2236 ;	genCall
   09A4 8C 82              2237 	mov	dpl,r4
   09A6 8A 83              2238 	mov	dph,r2
   09A8 8B F0              2239 	mov	b,r3
   09AA ED                 2240 	mov	a,r5
   09AB C0 02              2241 	push	ar2
   09AD C0 03              2242 	push	ar3
   09AF C0 04              2243 	push	ar4
   09B1 C0 05              2244 	push	ar5
   09B3 12 13 02           2245 	lcall	_dp_display_value
   09B6 D0 05              2246 	pop	ar5
   09B8 D0 04              2247 	pop	ar4
   09BA D0 03              2248 	pop	ar3
   09BC D0 02              2249 	pop	ar2
                    095C   2250 	C$cli.c$143$1$1 ==.
                           2251 ;	../cli.c:143: dp_display_text("   RX Buffer\r\n");
                           2252 ;	genCall
   09BE 75 82 50           2253 	mov	dpl,#__str_13
   09C1 75 83 72           2254 	mov	dph,#(__str_13 >> 8)
   09C4 75 F0 80           2255 	mov	b,#0x80
   09C7 C0 02              2256 	push	ar2
   09C9 C0 03              2257 	push	ar3
   09CB C0 04              2258 	push	ar4
   09CD C0 05              2259 	push	ar5
   09CF 12 12 84           2260 	lcall	_dp_display_text
   09D2 D0 05              2261 	pop	ar5
   09D4 D0 04              2262 	pop	ar4
   09D6 D0 03              2263 	pop	ar3
   09D8 D0 02              2264 	pop	ar2
                    0978   2265 	C$cli.c$145$1$1 ==.
                           2266 ;	../cli.c:145: for ( i=1; i <= 4 ;i++) {
                           2267 ;	genAssign
   09DA 90 03 E6           2268 	mov	dptr,#_display_brt_data_i_1_1
   09DD 74 01              2269 	mov	a,#0x01
   09DF F0                 2270 	movx	@dptr,a
   09E0                    2271 00104$:
                           2272 ;	genAssign
   09E0 90 03 E6           2273 	mov	dptr,#_display_brt_data_i_1_1
   09E3 E0                 2274 	movx	a,@dptr
   09E4 FE                 2275 	mov	r6,a
                           2276 ;	genCmpGt
                           2277 ;	genCmp
   09E5 C3                 2278 	clr	c
   09E6 74 04              2279 	mov	a,#0x04
   09E8 9E                 2280 	subb	a,r6
                           2281 ;	genIfxJump
   09E9 50 03              2282 	jnc	00125$
   09EB 02 0B 60           2283 	ljmp	00107$
   09EE                    2284 00125$:
                    098C   2285 	C$cli.c$146$2$2 ==.
                           2286 ;	../cli.c:146: dp_display_text("\r\n");
                           2287 ;	genCall
   09EE 75 82 41           2288 	mov	dpl,#__str_10
   09F1 75 83 72           2289 	mov	dph,#(__str_10 >> 8)
   09F4 75 F0 80           2290 	mov	b,#0x80
   09F7 C0 02              2291 	push	ar2
   09F9 C0 03              2292 	push	ar3
   09FB C0 04              2293 	push	ar4
   09FD C0 05              2294 	push	ar5
   09FF C0 06              2295 	push	ar6
   0A01 12 12 84           2296 	lcall	_dp_display_text
   0A04 D0 06              2297 	pop	ar6
   0A06 D0 05              2298 	pop	ar5
   0A08 D0 04              2299 	pop	ar4
   0A0A D0 03              2300 	pop	ar3
   0A0C D0 02              2301 	pop	ar2
                    09AC   2302 	C$cli.c$147$2$2 ==.
                           2303 ;	../cli.c:147: dp_display_value(i,DEC);
                           2304 ;	genCast
   0A0E 7F 00              2305 	mov	r7,#0x00
   0A10 78 00              2306 	mov	r0,#0x00
   0A12 79 00              2307 	mov	r1,#0x00
                           2308 ;	genAssign
   0A14 90 04 37           2309 	mov	dptr,#_dp_display_value_PARM_2
   0A17 74 01              2310 	mov	a,#0x01
   0A19 F0                 2311 	movx	@dptr,a
   0A1A E4                 2312 	clr	a
   0A1B A3                 2313 	inc	dptr
   0A1C F0                 2314 	movx	@dptr,a
                           2315 ;	genCall
   0A1D 8E 82              2316 	mov	dpl,r6
   0A1F 8F 83              2317 	mov	dph,r7
   0A21 88 F0              2318 	mov	b,r0
   0A23 E9                 2319 	mov	a,r1
   0A24 C0 02              2320 	push	ar2
   0A26 C0 03              2321 	push	ar3
   0A28 C0 04              2322 	push	ar4
   0A2A C0 05              2323 	push	ar5
   0A2C 12 13 02           2324 	lcall	_dp_display_value
   0A2F D0 05              2325 	pop	ar5
   0A31 D0 04              2326 	pop	ar4
   0A33 D0 03              2327 	pop	ar3
   0A35 D0 02              2328 	pop	ar2
                    09D5   2329 	C$cli.c$148$2$2 ==.
                           2330 ;	../cli.c:148: dp_display_text("\t");
                           2331 ;	genCall
   0A37 75 82 44           2332 	mov	dpl,#__str_11
   0A3A 75 83 72           2333 	mov	dph,#(__str_11 >> 8)
   0A3D 75 F0 80           2334 	mov	b,#0x80
   0A40 C0 02              2335 	push	ar2
   0A42 C0 03              2336 	push	ar3
   0A44 C0 04              2337 	push	ar4
   0A46 C0 05              2338 	push	ar5
   0A48 12 12 84           2339 	lcall	_dp_display_text
   0A4B D0 05              2340 	pop	ar5
   0A4D D0 04              2341 	pop	ar4
   0A4F D0 03              2342 	pop	ar3
   0A51 D0 02              2343 	pop	ar2
                    09F1   2344 	C$cli.c$149$2$2 ==.
                           2345 ;	../cli.c:149: dp_display_value(rx_sub_address ,HEX);// ( 8* i) for calculating current address of the total 32 location
                           2346 ;	genAssign
   0A53 90 03 E4           2347 	mov	dptr,#_display_brt_data_rx_sub_address_1_1
   0A56 E0                 2348 	movx	a,@dptr
   0A57 FE                 2349 	mov	r6,a
   0A58 A3                 2350 	inc	dptr
   0A59 E0                 2351 	movx	a,@dptr
   0A5A FF                 2352 	mov	r7,a
                           2353 ;	genCast
   0A5B 78 00              2354 	mov	r0,#0x00
   0A5D 79 00              2355 	mov	r1,#0x00
                           2356 ;	genAssign
   0A5F 90 04 37           2357 	mov	dptr,#_dp_display_value_PARM_2
   0A62 E4                 2358 	clr	a
   0A63 F0                 2359 	movx	@dptr,a
   0A64 A3                 2360 	inc	dptr
   0A65 F0                 2361 	movx	@dptr,a
                           2362 ;	genCall
   0A66 8E 82              2363 	mov	dpl,r6
   0A68 8F 83              2364 	mov	dph,r7
   0A6A 88 F0              2365 	mov	b,r0
   0A6C E9                 2366 	mov	a,r1
   0A6D C0 02              2367 	push	ar2
   0A6F C0 03              2368 	push	ar3
   0A71 C0 04              2369 	push	ar4
   0A73 C0 05              2370 	push	ar5
   0A75 12 13 02           2371 	lcall	_dp_display_value
   0A78 D0 05              2372 	pop	ar5
   0A7A D0 04              2373 	pop	ar4
   0A7C D0 03              2374 	pop	ar3
   0A7E D0 02              2375 	pop	ar2
                    0A1E   2376 	C$cli.c$150$2$2 ==.
                           2377 ;	../cli.c:150: dp_display_text("\t");
                           2378 ;	genCall
   0A80 75 82 44           2379 	mov	dpl,#__str_11
   0A83 75 83 72           2380 	mov	dph,#(__str_11 >> 8)
   0A86 75 F0 80           2381 	mov	b,#0x80
   0A89 C0 02              2382 	push	ar2
   0A8B C0 03              2383 	push	ar3
   0A8D C0 04              2384 	push	ar4
   0A8F C0 05              2385 	push	ar5
   0A91 12 12 84           2386 	lcall	_dp_display_text
   0A94 D0 05              2387 	pop	ar5
   0A96 D0 04              2388 	pop	ar4
   0A98 D0 03              2389 	pop	ar3
   0A9A D0 02              2390 	pop	ar2
                    0A3A   2391 	C$cli.c$152$2$2 ==.
                           2392 ;	../cli.c:152: for (m=1; m <=8 ;m++){
                           2393 ;	genAssign
   0A9C 90 03 E7           2394 	mov	dptr,#_display_brt_data_m_1_1
   0A9F 74 08              2395 	mov	a,#0x08
   0AA1 F0                 2396 	movx	@dptr,a
   0AA2                    2397 00103$:
                    0A40   2398 	C$cli.c$154$1$1 ==.
                           2399 ;	../cli.c:154: mem_data= HW_get_16bit_reg(rx_sub_address);
                           2400 ;	genIpush
   0AA2 C0 04              2401 	push	ar4
   0AA4 C0 02              2402 	push	ar2
   0AA6 C0 03              2403 	push	ar3
   0AA8 C0 05              2404 	push	ar5
                           2405 ;	genAssign
   0AAA 90 03 E4           2406 	mov	dptr,#_display_brt_data_rx_sub_address_1_1
   0AAD E0                 2407 	movx	a,@dptr
   0AAE FE                 2408 	mov	r6,a
   0AAF A3                 2409 	inc	dptr
   0AB0 E0                 2410 	movx	a,@dptr
   0AB1 FF                 2411 	mov	r7,a
                           2412 ;	genCall
   0AB2 8E 82              2413 	mov	dpl,r6
   0AB4 8F 83              2414 	mov	dph,r7
   0AB6 C0 02              2415 	push	ar2
   0AB8 C0 03              2416 	push	ar3
   0ABA C0 04              2417 	push	ar4
   0ABC C0 05              2418 	push	ar5
   0ABE C0 06              2419 	push	ar6
   0AC0 C0 07              2420 	push	ar7
   0AC2 12 1C 68           2421 	lcall	_HW_get_16bit_reg
   0AC5 A8 82              2422 	mov	r0,dpl
   0AC7 A9 83              2423 	mov	r1,dph
   0AC9 D0 07              2424 	pop	ar7
   0ACB D0 06              2425 	pop	ar6
   0ACD D0 05              2426 	pop	ar5
   0ACF D0 04              2427 	pop	ar4
   0AD1 D0 03              2428 	pop	ar3
   0AD3 D0 02              2429 	pop	ar2
                    0A73   2430 	C$cli.c$155$3$3 ==.
                           2431 ;	../cli.c:155: dp_display_value(mem_data,HEX);
                           2432 ;	genCast
   0AD5 7A 00              2433 	mov	r2,#0x00
   0AD7 7B 00              2434 	mov	r3,#0x00
                           2435 ;	genAssign
   0AD9 90 04 37           2436 	mov	dptr,#_dp_display_value_PARM_2
   0ADC E4                 2437 	clr	a
   0ADD F0                 2438 	movx	@dptr,a
   0ADE A3                 2439 	inc	dptr
   0ADF F0                 2440 	movx	@dptr,a
                           2441 ;	genCall
   0AE0 88 82              2442 	mov	dpl,r0
   0AE2 89 83              2443 	mov	dph,r1
   0AE4 8A F0              2444 	mov	b,r2
   0AE6 EB                 2445 	mov	a,r3
   0AE7 C0 02              2446 	push	ar2
   0AE9 C0 03              2447 	push	ar3
   0AEB C0 04              2448 	push	ar4
   0AED C0 05              2449 	push	ar5
   0AEF C0 06              2450 	push	ar6
   0AF1 C0 07              2451 	push	ar7
   0AF3 12 13 02           2452 	lcall	_dp_display_value
   0AF6 D0 07              2453 	pop	ar7
   0AF8 D0 06              2454 	pop	ar6
   0AFA D0 05              2455 	pop	ar5
   0AFC D0 04              2456 	pop	ar4
   0AFE D0 03              2457 	pop	ar3
   0B00 D0 02              2458 	pop	ar2
                    0AA0   2459 	C$cli.c$156$3$3 ==.
                           2460 ;	../cli.c:156: dp_display_text("\t");
                           2461 ;	genCall
   0B02 75 82 44           2462 	mov	dpl,#__str_11
   0B05 75 83 72           2463 	mov	dph,#(__str_11 >> 8)
   0B08 75 F0 80           2464 	mov	b,#0x80
   0B0B C0 02              2465 	push	ar2
   0B0D C0 03              2466 	push	ar3
   0B0F C0 04              2467 	push	ar4
   0B11 C0 05              2468 	push	ar5
   0B13 C0 06              2469 	push	ar6
   0B15 C0 07              2470 	push	ar7
   0B17 12 12 84           2471 	lcall	_dp_display_text
   0B1A D0 07              2472 	pop	ar7
   0B1C D0 06              2473 	pop	ar6
   0B1E D0 05              2474 	pop	ar5
   0B20 D0 04              2475 	pop	ar4
   0B22 D0 03              2476 	pop	ar3
   0B24 D0 02              2477 	pop	ar2
                    0AC4   2478 	C$cli.c$157$3$3 ==.
                           2479 ;	../cli.c:157: rx_sub_address = rx_sub_address + 1;
                           2480 ;	genPlus
   0B26 90 03 E4           2481 	mov	dptr,#_display_brt_data_rx_sub_address_1_1
                           2482 ;	genPlusIncr
   0B29 74 01              2483 	mov	a,#0x01
   0B2B 25 06              2484 	add	a,ar6
   0B2D F0                 2485 	movx	@dptr,a
   0B2E 74 00              2486 	mov	a,#0x00
   0B30 35 07              2487 	addc	a,ar7
   0B32 A3                 2488 	inc	dptr
   0B33 F0                 2489 	movx	@dptr,a
                           2490 ;	genAssign
   0B34 90 03 E7           2491 	mov	dptr,#_display_brt_data_m_1_1
   0B37 E0                 2492 	movx	a,@dptr
   0B38 FA                 2493 	mov	r2,a
                           2494 ;	genMinus
                           2495 ;	genMinusDec
   0B39 EA                 2496 	mov	a,r2
   0B3A 14                 2497 	dec	a
                           2498 ;	genAssign
   0B3B 90 03 E7           2499 	mov	dptr,#_display_brt_data_m_1_1
   0B3E F0                 2500 	movx	@dptr,a
                    0ADD   2501 	C$cli.c$152$3$3 ==.
                           2502 ;	../cli.c:152: for (m=1; m <=8 ;m++){
                           2503 ;	genAssign
   0B3F 90 03 E7           2504 	mov	dptr,#_display_brt_data_m_1_1
   0B42 E0                 2505 	movx	a,@dptr
   0B43 FA                 2506 	mov	r2,a
                           2507 ;	genIfx
   0B44 EA                 2508 	mov	a,r2
                           2509 ;	genIpop
   0B45 D0 05              2510 	pop	ar5
   0B47 D0 03              2511 	pop	ar3
   0B49 D0 02              2512 	pop	ar2
   0B4B D0 04              2513 	pop	ar4
                           2514 ;	genIfxJump
   0B4D 60 03              2515 	jz	00126$
   0B4F 02 0A A2           2516 	ljmp	00103$
   0B52                    2517 00126$:
                    0AF0   2518 	C$cli.c$145$1$1 ==.
                           2519 ;	../cli.c:145: for ( i=1; i <= 4 ;i++) {
                           2520 ;	genAssign
   0B52 90 03 E6           2521 	mov	dptr,#_display_brt_data_i_1_1
   0B55 E0                 2522 	movx	a,@dptr
   0B56 FE                 2523 	mov	r6,a
                           2524 ;	genPlus
   0B57 90 03 E6           2525 	mov	dptr,#_display_brt_data_i_1_1
                           2526 ;	genPlusIncr
   0B5A EE                 2527 	mov	a,r6
   0B5B 04                 2528 	inc	a
   0B5C F0                 2529 	movx	@dptr,a
   0B5D 02 09 E0           2530 	ljmp	00104$
   0B60                    2531 00107$:
                    0AFE   2532 	C$cli.c$163$1$1 ==.
                           2533 ;	../cli.c:163: dp_display_text("\n\r BRT SA");
                           2534 ;	genCall
   0B60 75 82 46           2535 	mov	dpl,#__str_12
   0B63 75 83 72           2536 	mov	dph,#(__str_12 >> 8)
   0B66 75 F0 80           2537 	mov	b,#0x80
   0B69 C0 02              2538 	push	ar2
   0B6B C0 03              2539 	push	ar3
   0B6D C0 04              2540 	push	ar4
   0B6F C0 05              2541 	push	ar5
   0B71 12 12 84           2542 	lcall	_dp_display_text
   0B74 D0 05              2543 	pop	ar5
   0B76 D0 04              2544 	pop	ar4
   0B78 D0 03              2545 	pop	ar3
   0B7A D0 02              2546 	pop	ar2
                    0B1A   2547 	C$cli.c$164$1$1 ==.
                           2548 ;	../cli.c:164: dp_display_value(subaddr,DEC);
                           2549 ;	genAssign
   0B7C 90 04 37           2550 	mov	dptr,#_dp_display_value_PARM_2
   0B7F 74 01              2551 	mov	a,#0x01
   0B81 F0                 2552 	movx	@dptr,a
   0B82 E4                 2553 	clr	a
   0B83 A3                 2554 	inc	dptr
   0B84 F0                 2555 	movx	@dptr,a
                           2556 ;	genCall
   0B85 8C 82              2557 	mov	dpl,r4
   0B87 8A 83              2558 	mov	dph,r2
   0B89 8B F0              2559 	mov	b,r3
   0B8B ED                 2560 	mov	a,r5
   0B8C 12 13 02           2561 	lcall	_dp_display_value
                    0B2D   2562 	C$cli.c$165$1$1 ==.
                           2563 ;	../cli.c:165: dp_display_text("  TX Buffer\r\n");
                           2564 ;	genCall
   0B8F 75 82 5F           2565 	mov	dpl,#__str_14
   0B92 75 83 72           2566 	mov	dph,#(__str_14 >> 8)
   0B95 75 F0 80           2567 	mov	b,#0x80
   0B98 12 12 84           2568 	lcall	_dp_display_text
                    0B39   2569 	C$cli.c$167$1$1 ==.
                           2570 ;	../cli.c:167: for ( i=1; i <= 4 ;i++) {
                           2571 ;	genAssign
   0B9B 90 03 E6           2572 	mov	dptr,#_display_brt_data_i_1_1
   0B9E 74 01              2573 	mov	a,#0x01
   0BA0 F0                 2574 	movx	@dptr,a
   0BA1                    2575 00111$:
                           2576 ;	genAssign
   0BA1 90 03 E6           2577 	mov	dptr,#_display_brt_data_i_1_1
   0BA4 E0                 2578 	movx	a,@dptr
   0BA5 FA                 2579 	mov	r2,a
                           2580 ;	genCmpGt
                           2581 ;	genCmp
   0BA6 C3                 2582 	clr	c
   0BA7 74 04              2583 	mov	a,#0x04
   0BA9 9A                 2584 	subb	a,r2
                           2585 ;	genIfxJump
   0BAA 50 03              2586 	jnc	00127$
   0BAC 02 0C 91           2587 	ljmp	00115$
   0BAF                    2588 00127$:
                    0B4D   2589 	C$cli.c$168$2$4 ==.
                           2590 ;	../cli.c:168: dp_display_text("\r\n");
                           2591 ;	genCall
   0BAF 75 82 41           2592 	mov	dpl,#__str_10
   0BB2 75 83 72           2593 	mov	dph,#(__str_10 >> 8)
   0BB5 75 F0 80           2594 	mov	b,#0x80
   0BB8 C0 02              2595 	push	ar2
   0BBA 12 12 84           2596 	lcall	_dp_display_text
   0BBD D0 02              2597 	pop	ar2
                    0B5D   2598 	C$cli.c$169$2$4 ==.
                           2599 ;	../cli.c:169: dp_display_value(i,DEC);
                           2600 ;	genCast
   0BBF 7B 00              2601 	mov	r3,#0x00
   0BC1 7C 00              2602 	mov	r4,#0x00
   0BC3 7D 00              2603 	mov	r5,#0x00
                           2604 ;	genAssign
   0BC5 90 04 37           2605 	mov	dptr,#_dp_display_value_PARM_2
   0BC8 74 01              2606 	mov	a,#0x01
   0BCA F0                 2607 	movx	@dptr,a
   0BCB E4                 2608 	clr	a
   0BCC A3                 2609 	inc	dptr
   0BCD F0                 2610 	movx	@dptr,a
                           2611 ;	genCall
   0BCE 8A 82              2612 	mov	dpl,r2
   0BD0 8B 83              2613 	mov	dph,r3
   0BD2 8C F0              2614 	mov	b,r4
   0BD4 ED                 2615 	mov	a,r5
   0BD5 12 13 02           2616 	lcall	_dp_display_value
                    0B76   2617 	C$cli.c$170$2$4 ==.
                           2618 ;	../cli.c:170: dp_display_text("\t");
                           2619 ;	genCall
   0BD8 75 82 44           2620 	mov	dpl,#__str_11
   0BDB 75 83 72           2621 	mov	dph,#(__str_11 >> 8)
   0BDE 75 F0 80           2622 	mov	b,#0x80
   0BE1 12 12 84           2623 	lcall	_dp_display_text
                    0B82   2624 	C$cli.c$171$2$4 ==.
                           2625 ;	../cli.c:171: dp_display_value(tx_sub_address,HEX);
                           2626 ;	genAssign
   0BE4 90 03 E2           2627 	mov	dptr,#_display_brt_data_tx_sub_address_1_1
   0BE7 E0                 2628 	movx	a,@dptr
   0BE8 FA                 2629 	mov	r2,a
   0BE9 A3                 2630 	inc	dptr
   0BEA E0                 2631 	movx	a,@dptr
   0BEB FB                 2632 	mov	r3,a
                           2633 ;	genCast
   0BEC 7C 00              2634 	mov	r4,#0x00
   0BEE 7D 00              2635 	mov	r5,#0x00
                           2636 ;	genAssign
   0BF0 90 04 37           2637 	mov	dptr,#_dp_display_value_PARM_2
   0BF3 E4                 2638 	clr	a
   0BF4 F0                 2639 	movx	@dptr,a
   0BF5 A3                 2640 	inc	dptr
   0BF6 F0                 2641 	movx	@dptr,a
                           2642 ;	genCall
   0BF7 8A 82              2643 	mov	dpl,r2
   0BF9 8B 83              2644 	mov	dph,r3
   0BFB 8C F0              2645 	mov	b,r4
   0BFD ED                 2646 	mov	a,r5
   0BFE 12 13 02           2647 	lcall	_dp_display_value
                    0B9F   2648 	C$cli.c$172$2$4 ==.
                           2649 ;	../cli.c:172: dp_display_text("\t");
                           2650 ;	genCall
   0C01 75 82 44           2651 	mov	dpl,#__str_11
   0C04 75 83 72           2652 	mov	dph,#(__str_11 >> 8)
   0C07 75 F0 80           2653 	mov	b,#0x80
   0C0A 12 12 84           2654 	lcall	_dp_display_text
                    0BAB   2655 	C$cli.c$174$2$4 ==.
                           2656 ;	../cli.c:174: for (m=1; m <=8 ;m++){
                           2657 ;	genAssign
   0C0D 90 03 E7           2658 	mov	dptr,#_display_brt_data_m_1_1
   0C10 74 08              2659 	mov	a,#0x08
   0C12 F0                 2660 	movx	@dptr,a
   0C13                    2661 00110$:
                    0BB1   2662 	C$cli.c$176$3$5 ==.
                           2663 ;	../cli.c:176: mem_data= HW_get_16bit_reg(tx_sub_address);
                           2664 ;	genAssign
   0C13 90 03 E2           2665 	mov	dptr,#_display_brt_data_tx_sub_address_1_1
   0C16 E0                 2666 	movx	a,@dptr
   0C17 FA                 2667 	mov	r2,a
   0C18 A3                 2668 	inc	dptr
   0C19 E0                 2669 	movx	a,@dptr
   0C1A FB                 2670 	mov	r3,a
                           2671 ;	genCall
   0C1B 8A 82              2672 	mov	dpl,r2
   0C1D 8B 83              2673 	mov	dph,r3
   0C1F C0 02              2674 	push	ar2
   0C21 C0 03              2675 	push	ar3
   0C23 12 1C 68           2676 	lcall	_HW_get_16bit_reg
   0C26 AC 82              2677 	mov	r4,dpl
   0C28 AD 83              2678 	mov	r5,dph
   0C2A D0 03              2679 	pop	ar3
   0C2C D0 02              2680 	pop	ar2
                    0BCC   2681 	C$cli.c$177$3$5 ==.
                           2682 ;	../cli.c:177: dp_display_value(mem_data,HEX);
                           2683 ;	genCast
   0C2E 7E 00              2684 	mov	r6,#0x00
   0C30 7F 00              2685 	mov	r7,#0x00
                           2686 ;	genAssign
   0C32 90 04 37           2687 	mov	dptr,#_dp_display_value_PARM_2
   0C35 E4                 2688 	clr	a
   0C36 F0                 2689 	movx	@dptr,a
   0C37 A3                 2690 	inc	dptr
   0C38 F0                 2691 	movx	@dptr,a
                           2692 ;	genCall
   0C39 8C 82              2693 	mov	dpl,r4
   0C3B 8D 83              2694 	mov	dph,r5
   0C3D 8E F0              2695 	mov	b,r6
   0C3F EF                 2696 	mov	a,r7
   0C40 C0 02              2697 	push	ar2
   0C42 C0 03              2698 	push	ar3
   0C44 12 13 02           2699 	lcall	_dp_display_value
   0C47 D0 03              2700 	pop	ar3
   0C49 D0 02              2701 	pop	ar2
                    0BE9   2702 	C$cli.c$178$3$5 ==.
                           2703 ;	../cli.c:178: dp_display_text("\t");
                           2704 ;	genCall
   0C4B 75 82 44           2705 	mov	dpl,#__str_11
   0C4E 75 83 72           2706 	mov	dph,#(__str_11 >> 8)
   0C51 75 F0 80           2707 	mov	b,#0x80
   0C54 C0 02              2708 	push	ar2
   0C56 C0 03              2709 	push	ar3
   0C58 12 12 84           2710 	lcall	_dp_display_text
   0C5B D0 03              2711 	pop	ar3
   0C5D D0 02              2712 	pop	ar2
                    0BFD   2713 	C$cli.c$179$3$5 ==.
                           2714 ;	../cli.c:179: tx_sub_address = tx_sub_address + 1;
                           2715 ;	genPlus
   0C5F 90 03 E2           2716 	mov	dptr,#_display_brt_data_tx_sub_address_1_1
                           2717 ;	genPlusIncr
   0C62 74 01              2718 	mov	a,#0x01
   0C64 25 02              2719 	add	a,ar2
   0C66 F0                 2720 	movx	@dptr,a
   0C67 74 00              2721 	mov	a,#0x00
   0C69 35 03              2722 	addc	a,ar3
   0C6B A3                 2723 	inc	dptr
   0C6C F0                 2724 	movx	@dptr,a
                           2725 ;	genAssign
   0C6D 90 03 E7           2726 	mov	dptr,#_display_brt_data_m_1_1
   0C70 E0                 2727 	movx	a,@dptr
   0C71 FA                 2728 	mov	r2,a
                           2729 ;	genMinus
                           2730 ;	genMinusDec
   0C72 EA                 2731 	mov	a,r2
   0C73 14                 2732 	dec	a
                           2733 ;	genAssign
   0C74 90 03 E7           2734 	mov	dptr,#_display_brt_data_m_1_1
   0C77 F0                 2735 	movx	@dptr,a
                    0C16   2736 	C$cli.c$174$3$5 ==.
                           2737 ;	../cli.c:174: for (m=1; m <=8 ;m++){
                           2738 ;	genAssign
   0C78 90 03 E7           2739 	mov	dptr,#_display_brt_data_m_1_1
   0C7B E0                 2740 	movx	a,@dptr
   0C7C FA                 2741 	mov	r2,a
                           2742 ;	genIfx
   0C7D EA                 2743 	mov	a,r2
                           2744 ;	genIfxJump
   0C7E 60 03              2745 	jz	00128$
   0C80 02 0C 13           2746 	ljmp	00110$
   0C83                    2747 00128$:
                    0C21   2748 	C$cli.c$167$1$1 ==.
                           2749 ;	../cli.c:167: for ( i=1; i <= 4 ;i++) {
                           2750 ;	genAssign
   0C83 90 03 E6           2751 	mov	dptr,#_display_brt_data_i_1_1
   0C86 E0                 2752 	movx	a,@dptr
   0C87 FA                 2753 	mov	r2,a
                           2754 ;	genPlus
   0C88 90 03 E6           2755 	mov	dptr,#_display_brt_data_i_1_1
                           2756 ;	genPlusIncr
   0C8B EA                 2757 	mov	a,r2
   0C8C 04                 2758 	inc	a
   0C8D F0                 2759 	movx	@dptr,a
   0C8E 02 0B A1           2760 	ljmp	00111$
   0C91                    2761 00115$:
                    0C2F   2762 	C$cli.c$184$1$1 ==.
                    0C2F   2763 	XG$display_brt_data$0$0 ==.
   0C91 22                 2764 	ret
                           2765 ;------------------------------------------------------------
                           2766 ;Allocation info for local variables in function 'process_uart_data'
                           2767 ;------------------------------------------------------------
                           2768 ;key                       Allocated with name '_process_uart_data_key_1_1'
                           2769 ;------------------------------------------------------------
                    0C30   2770 	G$process_uart_data$0$0 ==.
                    0C30   2771 	C$cli.c$192$1$1 ==.
                           2772 ;	../cli.c:192: void process_uart_data(uint8_t key)
                           2773 ;	-----------------------------------------
                           2774 ;	 function process_uart_data
                           2775 ;	-----------------------------------------
   0C92                    2776 _process_uart_data:
                           2777 ;	genReceive
   0C92 E5 82              2778 	mov	a,dpl
   0C94 90 03 E8           2779 	mov	dptr,#_process_uart_data_key_1_1
   0C97 F0                 2780 	movx	@dptr,a
                    0C36   2781 	C$cli.c$194$1$1 ==.
                           2782 ;	../cli.c:194: switch(key)
                           2783 ;	genAssign
   0C98 90 03 E8           2784 	mov	dptr,#_process_uart_data_key_1_1
   0C9B E0                 2785 	movx	a,@dptr
   0C9C FA                 2786 	mov	r2,a
                           2787 ;	genCmpEq
                           2788 ;	gencjneshort
   0C9D BA 44 03           2789 	cjne	r2,#0x44,00116$
   0CA0 02 0C CF           2790 	ljmp	00106$
   0CA3                    2791 00116$:
                           2792 ;	genCmpEq
                           2793 ;	gencjneshort
   0CA3 BA 48 03           2794 	cjne	r2,#0x48,00117$
   0CA6 02 0C C9           2795 	ljmp	00104$
   0CA9                    2796 00117$:
                           2797 ;	genCmpEq
                           2798 ;	gencjneshort
   0CA9 BA 52 03           2799 	cjne	r2,#0x52,00118$
   0CAC 02 0C C3           2800 	ljmp	00102$
   0CAF                    2801 00118$:
                           2802 ;	genCmpEq
                           2803 ;	gencjneshort
   0CAF BA 64 03           2804 	cjne	r2,#0x64,00119$
   0CB2 02 0C CF           2805 	ljmp	00106$
   0CB5                    2806 00119$:
                           2807 ;	genCmpEq
                           2808 ;	gencjneshort
   0CB5 BA 68 03           2809 	cjne	r2,#0x68,00120$
   0CB8 02 0C C9           2810 	ljmp	00104$
   0CBB                    2811 00120$:
                           2812 ;	genCmpEq
                           2813 ;	gencjneshort
   0CBB BA 72 02           2814 	cjne	r2,#0x72,00121$
   0CBE 80 03              2815 	sjmp	00122$
   0CC0                    2816 00121$:
   0CC0 02 0C D2           2817 	ljmp	00108$
   0CC3                    2818 00122$:
                    0C61   2819 	C$cli.c$197$2$2 ==.
                           2820 ;	../cli.c:197: case 'R' : case 'r':
   0CC3                    2821 00102$:
                    0C61   2822 	C$cli.c$200$3$3 ==.
                           2823 ;	../cli.c:200: display_brt_regs();
                           2824 ;	genCall
   0CC3 12 08 1F           2825 	lcall	_display_brt_regs
                    0C64   2826 	C$cli.c$204$3$3 ==.
                           2827 ;	../cli.c:204: break;
   0CC6 02 0C D2           2828 	ljmp	00108$
                    0C67   2829 	C$cli.c$209$2$2 ==.
                           2830 ;	../cli.c:209: case 'H': case 'h':
   0CC9                    2831 00104$:
                    0C67   2832 	C$cli.c$212$3$4 ==.
                           2833 ;	../cli.c:212: display_help();
                           2834 ;	genCall
   0CC9 12 00 62           2835 	lcall	_display_help
                    0C6A   2836 	C$cli.c$213$3$4 ==.
                           2837 ;	../cli.c:213: break;
   0CCC 02 0C D2           2838 	ljmp	00108$
                    0C6D   2839 	C$cli.c$216$2$2 ==.
                           2840 ;	../cli.c:216: case 'D': case 'd':
   0CCF                    2841 00106$:
                    0C6D   2842 	C$cli.c$220$3$5 ==.
                           2843 ;	../cli.c:220: display_brt_sa (); //get user input and display SA data
                           2844 ;	genCall
   0CCF 12 0F 2C           2845 	lcall	_display_brt_sa
                    0C70   2846 	C$cli.c$232$1$1 ==.
                           2847 ;	../cli.c:232: }
   0CD2                    2848 00108$:
                    0C70   2849 	C$cli.c$235$1$1 ==.
                           2850 ;	../cli.c:235: display_prompt();
                           2851 ;	genCall
   0CD2 12 06 BD           2852 	lcall	_display_prompt
   0CD5                    2853 00109$:
                    0C73   2854 	C$cli.c$237$1$1 ==.
                    0C73   2855 	XG$process_uart_data$0$0 ==.
   0CD5 22                 2856 	ret
                           2857 ;------------------------------------------------------------
                           2858 ;Allocation info for local variables in function 'display_mem_data'
                           2859 ;------------------------------------------------------------
                           2860 ;mem_addr                  Allocated with name '_display_mem_data_mem_addr_1_1'
                           2861 ;mem_data                  Allocated with name '_display_mem_data_mem_data_1_1'
                           2862 ;tx_sub_address            Allocated with name '_display_mem_data_tx_sub_address_1_1'
                           2863 ;rx_sub_address            Allocated with name '_display_mem_data_rx_sub_address_1_1'
                           2864 ;i                         Allocated with name '_display_mem_data_i_1_1'
                           2865 ;m                         Allocated with name '_display_mem_data_m_1_1'
                           2866 ;------------------------------------------------------------
                    0C74   2867 	G$display_mem_data$0$0 ==.
                    0C74   2868 	C$cli.c$242$1$1 ==.
                           2869 ;	../cli.c:242: void display_mem_data(void){
                           2870 ;	-----------------------------------------
                           2871 ;	 function display_mem_data
                           2872 ;	-----------------------------------------
   0CD6                    2873 _display_mem_data:
                    0C74   2874 	C$cli.c$252$1$1 ==.
                           2875 ;	../cli.c:252: rx_sub_address = mem_addr;   //0x1080
                           2876 ;	genAssign
   0CD6 90 03 ED           2877 	mov	dptr,#_display_mem_data_rx_sub_address_1_1
   0CD9 74 00              2878 	mov	a,#0x00
   0CDB F0                 2879 	movx	@dptr,a
   0CDC A3                 2880 	inc	dptr
   0CDD 74 F5              2881 	mov	a,#0xF5
   0CDF F0                 2882 	movx	@dptr,a
                    0C7E   2883 	C$cli.c$253$1$1 ==.
                           2884 ;	../cli.c:253: tx_sub_address = mem_addr;
                           2885 ;	genAssign
   0CE0 90 03 EB           2886 	mov	dptr,#_display_mem_data_tx_sub_address_1_1
   0CE3 74 00              2887 	mov	a,#0x00
   0CE5 F0                 2888 	movx	@dptr,a
   0CE6 A3                 2889 	inc	dptr
   0CE7 74 F5              2890 	mov	a,#0xF5
   0CE9 F0                 2891 	movx	@dptr,a
                    0C88   2892 	C$cli.c$254$1$1 ==.
                           2893 ;	../cli.c:254: mem_data   = 0x0000;
                           2894 ;	genAssign
   0CEA 90 03 E9           2895 	mov	dptr,#_display_mem_data_mem_data_1_1
   0CED E4                 2896 	clr	a
   0CEE F0                 2897 	movx	@dptr,a
   0CEF A3                 2898 	inc	dptr
   0CF0 F0                 2899 	movx	@dptr,a
                    0C8F   2900 	C$cli.c$256$1$1 ==.
                           2901 ;	../cli.c:256: dp_display_text("\n\r MEMORY FiLLING WIETH FOLLOWING DATA ");
                           2902 ;	genCall
   0CF1 75 82 6D           2903 	mov	dpl,#__str_15
   0CF4 75 83 72           2904 	mov	dph,#(__str_15 >> 8)
   0CF7 75 F0 80           2905 	mov	b,#0x80
   0CFA 12 12 84           2906 	lcall	_dp_display_text
                    0C9B   2907 	C$cli.c$260$1$1 ==.
                           2908 ;	../cli.c:260: for ( i=0; i <= 3 ;i++) {
                           2909 ;	genAssign
   0CFD 90 03 EF           2910 	mov	dptr,#_display_mem_data_i_1_1
   0D00 74 00              2911 	mov	a,#0x00
   0D02 F0                 2912 	movx	@dptr,a
   0D03                    2913 00104$:
                           2914 ;	genAssign
   0D03 90 03 EF           2915 	mov	dptr,#_display_mem_data_i_1_1
   0D06 E0                 2916 	movx	a,@dptr
   0D07 FA                 2917 	mov	r2,a
                           2918 ;	genCmpGt
                           2919 ;	genCmp
   0D08 C3                 2920 	clr	c
   0D09 74 03              2921 	mov	a,#0x03
   0D0B 9A                 2922 	subb	a,r2
                           2923 ;	genIfxJump
   0D0C 50 03              2924 	jnc	00125$
   0D0E 02 0E 29           2925 	ljmp	00107$
   0D11                    2926 00125$:
                    0CAF   2927 	C$cli.c$261$2$2 ==.
                           2928 ;	../cli.c:261: dp_display_text("\r\n");
                           2929 ;	genCall
   0D11 75 82 41           2930 	mov	dpl,#__str_10
   0D14 75 83 72           2931 	mov	dph,#(__str_10 >> 8)
   0D17 75 F0 80           2932 	mov	b,#0x80
   0D1A C0 02              2933 	push	ar2
   0D1C 12 12 84           2934 	lcall	_dp_display_text
   0D1F D0 02              2935 	pop	ar2
                    0CBF   2936 	C$cli.c$262$2$2 ==.
                           2937 ;	../cli.c:262: dp_display_value(i,DEC);
                           2938 ;	genCast
   0D21 7B 00              2939 	mov	r3,#0x00
   0D23 7C 00              2940 	mov	r4,#0x00
   0D25 7D 00              2941 	mov	r5,#0x00
                           2942 ;	genAssign
   0D27 90 04 37           2943 	mov	dptr,#_dp_display_value_PARM_2
   0D2A 74 01              2944 	mov	a,#0x01
   0D2C F0                 2945 	movx	@dptr,a
   0D2D E4                 2946 	clr	a
   0D2E A3                 2947 	inc	dptr
   0D2F F0                 2948 	movx	@dptr,a
                           2949 ;	genCall
   0D30 8A 82              2950 	mov	dpl,r2
   0D32 8B 83              2951 	mov	dph,r3
   0D34 8C F0              2952 	mov	b,r4
   0D36 ED                 2953 	mov	a,r5
   0D37 12 13 02           2954 	lcall	_dp_display_value
                    0CD8   2955 	C$cli.c$263$2$2 ==.
                           2956 ;	../cli.c:263: dp_display_text("\t");
                           2957 ;	genCall
   0D3A 75 82 44           2958 	mov	dpl,#__str_11
   0D3D 75 83 72           2959 	mov	dph,#(__str_11 >> 8)
   0D40 75 F0 80           2960 	mov	b,#0x80
   0D43 12 12 84           2961 	lcall	_dp_display_text
                    0CE4   2962 	C$cli.c$264$2$2 ==.
                           2963 ;	../cli.c:264: dp_display_value(rx_sub_address,HEX);// ( 8* i) for calculating current address of the total 32 location
                           2964 ;	genAssign
   0D46 90 03 ED           2965 	mov	dptr,#_display_mem_data_rx_sub_address_1_1
   0D49 E0                 2966 	movx	a,@dptr
   0D4A FA                 2967 	mov	r2,a
   0D4B A3                 2968 	inc	dptr
   0D4C E0                 2969 	movx	a,@dptr
   0D4D FB                 2970 	mov	r3,a
                           2971 ;	genCast
   0D4E 7C 00              2972 	mov	r4,#0x00
   0D50 7D 00              2973 	mov	r5,#0x00
                           2974 ;	genAssign
   0D52 90 04 37           2975 	mov	dptr,#_dp_display_value_PARM_2
   0D55 E4                 2976 	clr	a
   0D56 F0                 2977 	movx	@dptr,a
   0D57 A3                 2978 	inc	dptr
   0D58 F0                 2979 	movx	@dptr,a
                           2980 ;	genCall
   0D59 8A 82              2981 	mov	dpl,r2
   0D5B 8B 83              2982 	mov	dph,r3
   0D5D 8C F0              2983 	mov	b,r4
   0D5F ED                 2984 	mov	a,r5
   0D60 12 13 02           2985 	lcall	_dp_display_value
                    0D01   2986 	C$cli.c$265$2$2 ==.
                           2987 ;	../cli.c:265: dp_display_text("\t");
                           2988 ;	genCall
   0D63 75 82 44           2989 	mov	dpl,#__str_11
   0D66 75 83 72           2990 	mov	dph,#(__str_11 >> 8)
   0D69 75 F0 80           2991 	mov	b,#0x80
   0D6C 12 12 84           2992 	lcall	_dp_display_text
                    0D0D   2993 	C$cli.c$267$2$2 ==.
                           2994 ;	../cli.c:267: for (m=1; m <=8 ;m++){
                           2995 ;	genAssign
   0D6F 90 03 F0           2996 	mov	dptr,#_display_mem_data_m_1_1
   0D72 74 08              2997 	mov	a,#0x08
   0D74 F0                 2998 	movx	@dptr,a
   0D75                    2999 00103$:
                    0D13   3000 	C$cli.c$269$3$3 ==.
                           3001 ;	../cli.c:269: HW_set_16bit_reg(rx_sub_address,mem_data);
                           3002 ;	genAssign
   0D75 90 03 ED           3003 	mov	dptr,#_display_mem_data_rx_sub_address_1_1
   0D78 E0                 3004 	movx	a,@dptr
   0D79 FA                 3005 	mov	r2,a
   0D7A A3                 3006 	inc	dptr
   0D7B E0                 3007 	movx	a,@dptr
   0D7C FB                 3008 	mov	r3,a
                           3009 ;	genAssign
   0D7D 90 03 E9           3010 	mov	dptr,#_display_mem_data_mem_data_1_1
   0D80 E0                 3011 	movx	a,@dptr
   0D81 FC                 3012 	mov	r4,a
   0D82 A3                 3013 	inc	dptr
   0D83 E0                 3014 	movx	a,@dptr
   0D84 FD                 3015 	mov	r5,a
                           3016 ;	genAssign
   0D85 90 05 9B           3017 	mov	dptr,#_HW_set_16bit_reg_PARM_2
   0D88 EC                 3018 	mov	a,r4
   0D89 F0                 3019 	movx	@dptr,a
   0D8A A3                 3020 	inc	dptr
   0D8B ED                 3021 	mov	a,r5
   0D8C F0                 3022 	movx	@dptr,a
                           3023 ;	genCall
   0D8D 8A 82              3024 	mov	dpl,r2
   0D8F 8B 83              3025 	mov	dph,r3
   0D91 C0 02              3026 	push	ar2
   0D93 C0 03              3027 	push	ar3
   0D95 C0 04              3028 	push	ar4
   0D97 C0 05              3029 	push	ar5
   0D99 12 1C 54           3030 	lcall	_HW_set_16bit_reg
   0D9C D0 05              3031 	pop	ar5
   0D9E D0 04              3032 	pop	ar4
   0DA0 D0 03              3033 	pop	ar3
   0DA2 D0 02              3034 	pop	ar2
                    0D42   3035 	C$cli.c$270$3$3 ==.
                           3036 ;	../cli.c:270: dp_display_value(mem_data,HEX);
                           3037 ;	genCast
   0DA4 8C 06              3038 	mov	ar6,r4
   0DA6 8D 07              3039 	mov	ar7,r5
   0DA8 78 00              3040 	mov	r0,#0x00
   0DAA 79 00              3041 	mov	r1,#0x00
                           3042 ;	genAssign
   0DAC 90 04 37           3043 	mov	dptr,#_dp_display_value_PARM_2
   0DAF E4                 3044 	clr	a
   0DB0 F0                 3045 	movx	@dptr,a
   0DB1 A3                 3046 	inc	dptr
   0DB2 F0                 3047 	movx	@dptr,a
                           3048 ;	genCall
   0DB3 8E 82              3049 	mov	dpl,r6
   0DB5 8F 83              3050 	mov	dph,r7
   0DB7 88 F0              3051 	mov	b,r0
   0DB9 E9                 3052 	mov	a,r1
   0DBA C0 02              3053 	push	ar2
   0DBC C0 03              3054 	push	ar3
   0DBE C0 04              3055 	push	ar4
   0DC0 C0 05              3056 	push	ar5
   0DC2 12 13 02           3057 	lcall	_dp_display_value
   0DC5 D0 05              3058 	pop	ar5
   0DC7 D0 04              3059 	pop	ar4
   0DC9 D0 03              3060 	pop	ar3
   0DCB D0 02              3061 	pop	ar2
                    0D6B   3062 	C$cli.c$271$3$3 ==.
                           3063 ;	../cli.c:271: dp_display_text("\t");
                           3064 ;	genCall
   0DCD 75 82 44           3065 	mov	dpl,#__str_11
   0DD0 75 83 72           3066 	mov	dph,#(__str_11 >> 8)
   0DD3 75 F0 80           3067 	mov	b,#0x80
   0DD6 C0 02              3068 	push	ar2
   0DD8 C0 03              3069 	push	ar3
   0DDA C0 04              3070 	push	ar4
   0DDC C0 05              3071 	push	ar5
   0DDE 12 12 84           3072 	lcall	_dp_display_text
   0DE1 D0 05              3073 	pop	ar5
   0DE3 D0 04              3074 	pop	ar4
   0DE5 D0 03              3075 	pop	ar3
   0DE7 D0 02              3076 	pop	ar2
                    0D87   3077 	C$cli.c$272$3$3 ==.
                           3078 ;	../cli.c:272: rx_sub_address = rx_sub_address + 1;
                           3079 ;	genPlus
   0DE9 90 03 ED           3080 	mov	dptr,#_display_mem_data_rx_sub_address_1_1
                           3081 ;	genPlusIncr
   0DEC 74 01              3082 	mov	a,#0x01
   0DEE 25 02              3083 	add	a,ar2
   0DF0 F0                 3084 	movx	@dptr,a
   0DF1 74 00              3085 	mov	a,#0x00
   0DF3 35 03              3086 	addc	a,ar3
   0DF5 A3                 3087 	inc	dptr
   0DF6 F0                 3088 	movx	@dptr,a
                    0D95   3089 	C$cli.c$273$3$3 ==.
                           3090 ;	../cli.c:273: mem_data = mem_data + 4;
                           3091 ;	genPlus
   0DF7 90 03 E9           3092 	mov	dptr,#_display_mem_data_mem_data_1_1
                           3093 ;	genPlusIncr
   0DFA 74 04              3094 	mov	a,#0x04
   0DFC 25 04              3095 	add	a,ar4
   0DFE F0                 3096 	movx	@dptr,a
   0DFF 74 00              3097 	mov	a,#0x00
   0E01 35 05              3098 	addc	a,ar5
   0E03 A3                 3099 	inc	dptr
   0E04 F0                 3100 	movx	@dptr,a
                           3101 ;	genAssign
   0E05 90 03 F0           3102 	mov	dptr,#_display_mem_data_m_1_1
   0E08 E0                 3103 	movx	a,@dptr
   0E09 FA                 3104 	mov	r2,a
                           3105 ;	genMinus
                           3106 ;	genMinusDec
   0E0A EA                 3107 	mov	a,r2
   0E0B 14                 3108 	dec	a
                           3109 ;	genAssign
   0E0C 90 03 F0           3110 	mov	dptr,#_display_mem_data_m_1_1
   0E0F F0                 3111 	movx	@dptr,a
                    0DAE   3112 	C$cli.c$267$3$3 ==.
                           3113 ;	../cli.c:267: for (m=1; m <=8 ;m++){
                           3114 ;	genAssign
   0E10 90 03 F0           3115 	mov	dptr,#_display_mem_data_m_1_1
   0E13 E0                 3116 	movx	a,@dptr
   0E14 FA                 3117 	mov	r2,a
                           3118 ;	genIfx
   0E15 EA                 3119 	mov	a,r2
                           3120 ;	genIfxJump
   0E16 60 03              3121 	jz	00126$
   0E18 02 0D 75           3122 	ljmp	00103$
   0E1B                    3123 00126$:
                    0DB9   3124 	C$cli.c$260$1$1 ==.
                           3125 ;	../cli.c:260: for ( i=0; i <= 3 ;i++) {
                           3126 ;	genAssign
   0E1B 90 03 EF           3127 	mov	dptr,#_display_mem_data_i_1_1
   0E1E E0                 3128 	movx	a,@dptr
   0E1F FA                 3129 	mov	r2,a
                           3130 ;	genPlus
   0E20 90 03 EF           3131 	mov	dptr,#_display_mem_data_i_1_1
                           3132 ;	genPlusIncr
   0E23 EA                 3133 	mov	a,r2
   0E24 04                 3134 	inc	a
   0E25 F0                 3135 	movx	@dptr,a
   0E26 02 0D 03           3136 	ljmp	00104$
   0E29                    3137 00107$:
                    0DC7   3138 	C$cli.c$279$1$1 ==.
                           3139 ;	../cli.c:279: dp_display_text("\n\r Reading back the data from the same location");
                           3140 ;	genCall
   0E29 75 82 95           3141 	mov	dpl,#__str_16
   0E2C 75 83 72           3142 	mov	dph,#(__str_16 >> 8)
   0E2F 75 F0 80           3143 	mov	b,#0x80
   0E32 12 12 84           3144 	lcall	_dp_display_text
                    0DD3   3145 	C$cli.c$283$1$1 ==.
                           3146 ;	../cli.c:283: for ( i=0; i <= 3 ;i++) {
                           3147 ;	genAssign
   0E35 90 03 EF           3148 	mov	dptr,#_display_mem_data_i_1_1
   0E38 74 00              3149 	mov	a,#0x00
   0E3A F0                 3150 	movx	@dptr,a
   0E3B                    3151 00111$:
                           3152 ;	genAssign
   0E3B 90 03 EF           3153 	mov	dptr,#_display_mem_data_i_1_1
   0E3E E0                 3154 	movx	a,@dptr
   0E3F FA                 3155 	mov	r2,a
                           3156 ;	genCmpGt
                           3157 ;	genCmp
   0E40 C3                 3158 	clr	c
   0E41 74 03              3159 	mov	a,#0x03
   0E43 9A                 3160 	subb	a,r2
                           3161 ;	genIfxJump
   0E44 50 03              3162 	jnc	00127$
   0E46 02 0F 2B           3163 	ljmp	00115$
   0E49                    3164 00127$:
                    0DE7   3165 	C$cli.c$284$2$4 ==.
                           3166 ;	../cli.c:284: dp_display_text("\r\n");
                           3167 ;	genCall
   0E49 75 82 41           3168 	mov	dpl,#__str_10
   0E4C 75 83 72           3169 	mov	dph,#(__str_10 >> 8)
   0E4F 75 F0 80           3170 	mov	b,#0x80
   0E52 C0 02              3171 	push	ar2
   0E54 12 12 84           3172 	lcall	_dp_display_text
   0E57 D0 02              3173 	pop	ar2
                    0DF7   3174 	C$cli.c$285$2$4 ==.
                           3175 ;	../cli.c:285: dp_display_value(i,DEC);
                           3176 ;	genCast
   0E59 7B 00              3177 	mov	r3,#0x00
   0E5B 7C 00              3178 	mov	r4,#0x00
   0E5D 7D 00              3179 	mov	r5,#0x00
                           3180 ;	genAssign
   0E5F 90 04 37           3181 	mov	dptr,#_dp_display_value_PARM_2
   0E62 74 01              3182 	mov	a,#0x01
   0E64 F0                 3183 	movx	@dptr,a
   0E65 E4                 3184 	clr	a
   0E66 A3                 3185 	inc	dptr
   0E67 F0                 3186 	movx	@dptr,a
                           3187 ;	genCall
   0E68 8A 82              3188 	mov	dpl,r2
   0E6A 8B 83              3189 	mov	dph,r3
   0E6C 8C F0              3190 	mov	b,r4
   0E6E ED                 3191 	mov	a,r5
   0E6F 12 13 02           3192 	lcall	_dp_display_value
                    0E10   3193 	C$cli.c$286$2$4 ==.
                           3194 ;	../cli.c:286: dp_display_text("\t");
                           3195 ;	genCall
   0E72 75 82 44           3196 	mov	dpl,#__str_11
   0E75 75 83 72           3197 	mov	dph,#(__str_11 >> 8)
   0E78 75 F0 80           3198 	mov	b,#0x80
   0E7B 12 12 84           3199 	lcall	_dp_display_text
                    0E1C   3200 	C$cli.c$287$2$4 ==.
                           3201 ;	../cli.c:287: dp_display_value(tx_sub_address,HEX);
                           3202 ;	genAssign
   0E7E 90 03 EB           3203 	mov	dptr,#_display_mem_data_tx_sub_address_1_1
   0E81 E0                 3204 	movx	a,@dptr
   0E82 FA                 3205 	mov	r2,a
   0E83 A3                 3206 	inc	dptr
   0E84 E0                 3207 	movx	a,@dptr
   0E85 FB                 3208 	mov	r3,a
                           3209 ;	genCast
   0E86 7C 00              3210 	mov	r4,#0x00
   0E88 7D 00              3211 	mov	r5,#0x00
                           3212 ;	genAssign
   0E8A 90 04 37           3213 	mov	dptr,#_dp_display_value_PARM_2
   0E8D E4                 3214 	clr	a
   0E8E F0                 3215 	movx	@dptr,a
   0E8F A3                 3216 	inc	dptr
   0E90 F0                 3217 	movx	@dptr,a
                           3218 ;	genCall
   0E91 8A 82              3219 	mov	dpl,r2
   0E93 8B 83              3220 	mov	dph,r3
   0E95 8C F0              3221 	mov	b,r4
   0E97 ED                 3222 	mov	a,r5
   0E98 12 13 02           3223 	lcall	_dp_display_value
                    0E39   3224 	C$cli.c$288$2$4 ==.
                           3225 ;	../cli.c:288: dp_display_text("\t");
                           3226 ;	genCall
   0E9B 75 82 44           3227 	mov	dpl,#__str_11
   0E9E 75 83 72           3228 	mov	dph,#(__str_11 >> 8)
   0EA1 75 F0 80           3229 	mov	b,#0x80
   0EA4 12 12 84           3230 	lcall	_dp_display_text
                    0E45   3231 	C$cli.c$290$2$4 ==.
                           3232 ;	../cli.c:290: for (m=1; m <=8 ;m++){
                           3233 ;	genAssign
   0EA7 90 03 F0           3234 	mov	dptr,#_display_mem_data_m_1_1
   0EAA 74 08              3235 	mov	a,#0x08
   0EAC F0                 3236 	movx	@dptr,a
   0EAD                    3237 00110$:
                    0E4B   3238 	C$cli.c$292$3$5 ==.
                           3239 ;	../cli.c:292: mem_data= HW_get_16bit_reg(tx_sub_address);
                           3240 ;	genAssign
   0EAD 90 03 EB           3241 	mov	dptr,#_display_mem_data_tx_sub_address_1_1
   0EB0 E0                 3242 	movx	a,@dptr
   0EB1 FA                 3243 	mov	r2,a
   0EB2 A3                 3244 	inc	dptr
   0EB3 E0                 3245 	movx	a,@dptr
   0EB4 FB                 3246 	mov	r3,a
                           3247 ;	genCall
   0EB5 8A 82              3248 	mov	dpl,r2
   0EB7 8B 83              3249 	mov	dph,r3
   0EB9 C0 02              3250 	push	ar2
   0EBB C0 03              3251 	push	ar3
   0EBD 12 1C 68           3252 	lcall	_HW_get_16bit_reg
   0EC0 AC 82              3253 	mov	r4,dpl
   0EC2 AD 83              3254 	mov	r5,dph
   0EC4 D0 03              3255 	pop	ar3
   0EC6 D0 02              3256 	pop	ar2
                    0E66   3257 	C$cli.c$293$3$5 ==.
                           3258 ;	../cli.c:293: dp_display_value(mem_data,HEX);
                           3259 ;	genCast
   0EC8 7E 00              3260 	mov	r6,#0x00
   0ECA 7F 00              3261 	mov	r7,#0x00
                           3262 ;	genAssign
   0ECC 90 04 37           3263 	mov	dptr,#_dp_display_value_PARM_2
   0ECF E4                 3264 	clr	a
   0ED0 F0                 3265 	movx	@dptr,a
   0ED1 A3                 3266 	inc	dptr
   0ED2 F0                 3267 	movx	@dptr,a
                           3268 ;	genCall
   0ED3 8C 82              3269 	mov	dpl,r4
   0ED5 8D 83              3270 	mov	dph,r5
   0ED7 8E F0              3271 	mov	b,r6
   0ED9 EF                 3272 	mov	a,r7
   0EDA C0 02              3273 	push	ar2
   0EDC C0 03              3274 	push	ar3
   0EDE 12 13 02           3275 	lcall	_dp_display_value
   0EE1 D0 03              3276 	pop	ar3
   0EE3 D0 02              3277 	pop	ar2
                    0E83   3278 	C$cli.c$294$3$5 ==.
                           3279 ;	../cli.c:294: dp_display_text("\t");
                           3280 ;	genCall
   0EE5 75 82 44           3281 	mov	dpl,#__str_11
   0EE8 75 83 72           3282 	mov	dph,#(__str_11 >> 8)
   0EEB 75 F0 80           3283 	mov	b,#0x80
   0EEE C0 02              3284 	push	ar2
   0EF0 C0 03              3285 	push	ar3
   0EF2 12 12 84           3286 	lcall	_dp_display_text
   0EF5 D0 03              3287 	pop	ar3
   0EF7 D0 02              3288 	pop	ar2
                    0E97   3289 	C$cli.c$295$3$5 ==.
                           3290 ;	../cli.c:295: tx_sub_address = tx_sub_address + 1;
                           3291 ;	genPlus
   0EF9 90 03 EB           3292 	mov	dptr,#_display_mem_data_tx_sub_address_1_1
                           3293 ;	genPlusIncr
   0EFC 74 01              3294 	mov	a,#0x01
   0EFE 25 02              3295 	add	a,ar2
   0F00 F0                 3296 	movx	@dptr,a
   0F01 74 00              3297 	mov	a,#0x00
   0F03 35 03              3298 	addc	a,ar3
   0F05 A3                 3299 	inc	dptr
   0F06 F0                 3300 	movx	@dptr,a
                           3301 ;	genAssign
   0F07 90 03 F0           3302 	mov	dptr,#_display_mem_data_m_1_1
   0F0A E0                 3303 	movx	a,@dptr
   0F0B FA                 3304 	mov	r2,a
                           3305 ;	genMinus
                           3306 ;	genMinusDec
   0F0C EA                 3307 	mov	a,r2
   0F0D 14                 3308 	dec	a
                           3309 ;	genAssign
   0F0E 90 03 F0           3310 	mov	dptr,#_display_mem_data_m_1_1
   0F11 F0                 3311 	movx	@dptr,a
                    0EB0   3312 	C$cli.c$290$3$5 ==.
                           3313 ;	../cli.c:290: for (m=1; m <=8 ;m++){
                           3314 ;	genAssign
   0F12 90 03 F0           3315 	mov	dptr,#_display_mem_data_m_1_1
   0F15 E0                 3316 	movx	a,@dptr
   0F16 FA                 3317 	mov	r2,a
                           3318 ;	genIfx
   0F17 EA                 3319 	mov	a,r2
                           3320 ;	genIfxJump
   0F18 60 03              3321 	jz	00128$
   0F1A 02 0E AD           3322 	ljmp	00110$
   0F1D                    3323 00128$:
                    0EBB   3324 	C$cli.c$283$1$1 ==.
                           3325 ;	../cli.c:283: for ( i=0; i <= 3 ;i++) {
                           3326 ;	genAssign
   0F1D 90 03 EF           3327 	mov	dptr,#_display_mem_data_i_1_1
   0F20 E0                 3328 	movx	a,@dptr
   0F21 FA                 3329 	mov	r2,a
                           3330 ;	genPlus
   0F22 90 03 EF           3331 	mov	dptr,#_display_mem_data_i_1_1
                           3332 ;	genPlusIncr
   0F25 EA                 3333 	mov	a,r2
   0F26 04                 3334 	inc	a
   0F27 F0                 3335 	movx	@dptr,a
   0F28 02 0E 3B           3336 	ljmp	00111$
   0F2B                    3337 00115$:
                    0EC9   3338 	C$cli.c$300$1$1 ==.
                    0EC9   3339 	XG$display_mem_data$0$0 ==.
   0F2B 22                 3340 	ret
                           3341 ;------------------------------------------------------------
                           3342 ;Allocation info for local variables in function 'display_brt_sa'
                           3343 ;------------------------------------------------------------
                           3344 ;subaddr                   Allocated with name '_display_brt_sa_subaddr_1_1'
                           3345 ;------------------------------------------------------------
                    0ECA   3346 	G$display_brt_sa$0$0 ==.
                    0ECA   3347 	C$cli.c$304$1$1 ==.
                           3348 ;	../cli.c:304: void  display_brt_sa ( void) {
                           3349 ;	-----------------------------------------
                           3350 ;	 function display_brt_sa
                           3351 ;	-----------------------------------------
   0F2C                    3352 _display_brt_sa:
                    0ECA   3353 	C$cli.c$307$1$1 ==.
                           3354 ;	../cli.c:307: while (1) {
   0F2C                    3355 00106$:
                    0ECA   3356 	C$cli.c$308$2$2 ==.
                           3357 ;	../cli.c:308: dp_display_text("Sub Address #(1 to 31 ): ");
                           3358 ;	genCall
   0F2C 75 82 C5           3359 	mov	dpl,#__str_17
   0F2F 75 83 72           3360 	mov	dph,#(__str_17 >> 8)
   0F32 75 F0 80           3361 	mov	b,#0x80
   0F35 12 12 84           3362 	lcall	_dp_display_text
                    0ED6   3363 	C$cli.c$309$2$2 ==.
                           3364 ;	../cli.c:309: rx_char_ptr = rx_char;
                           3365 ;	genAssign
   0F38 90 00 0B           3366 	mov	dptr,#_rx_char_ptr
   0F3B 74 01              3367 	mov	a,#_rx_char
   0F3D F0                 3368 	movx	@dptr,a
   0F3E A3                 3369 	inc	dptr
   0F3F 74 00              3370 	mov	a,#(_rx_char >> 8)
   0F41 F0                 3371 	movx	@dptr,a
   0F42 A3                 3372 	inc	dptr
   0F43 74 00              3373 	mov	a,#0x00
   0F45 F0                 3374 	movx	@dptr,a
                    0EE4   3375 	C$cli.c$310$2$2 ==.
                           3376 ;	../cli.c:310: read_user_input(rx_char_ptr);
                           3377 ;	genCall
   0F46 75 82 01           3378 	mov	dpl,#_rx_char
   0F49 75 83 00           3379 	mov	dph,#(_rx_char >> 8)
   0F4C 75 F0 00           3380 	mov	b,#0x00
   0F4F 12 07 2C           3381 	lcall	_read_user_input
                    0EF0   3382 	C$cli.c$311$2$2 ==.
                           3383 ;	../cli.c:311: xatoi ( &rx_char_ptr, &subaddr);
                           3384 ;	genCast
   0F52 90 05 70           3385 	mov	dptr,#_xatoi_PARM_2
   0F55 74 F1              3386 	mov	a,#_display_brt_sa_subaddr_1_1
   0F57 F0                 3387 	movx	@dptr,a
   0F58 A3                 3388 	inc	dptr
   0F59 74 03              3389 	mov	a,#(_display_brt_sa_subaddr_1_1 >> 8)
   0F5B F0                 3390 	movx	@dptr,a
   0F5C A3                 3391 	inc	dptr
   0F5D 74 00              3392 	mov	a,#0x0
   0F5F F0                 3393 	movx	@dptr,a
                           3394 ;	genCall
   0F60 75 82 0B           3395 	mov	dpl,#_rx_char_ptr
   0F63 75 83 00           3396 	mov	dph,#(_rx_char_ptr >> 8)
   0F66 75 F0 00           3397 	mov	b,#0x00
   0F69 12 17 73           3398 	lcall	_xatoi
                    0F0A   3399 	C$cli.c$312$2$2 ==.
                           3400 ;	../cli.c:312: dp_display_text("\r\nInput recived :  ");
                           3401 ;	genCall
   0F6C 75 82 DF           3402 	mov	dpl,#__str_18
   0F6F 75 83 72           3403 	mov	dph,#(__str_18 >> 8)
   0F72 75 F0 80           3404 	mov	b,#0x80
   0F75 12 12 84           3405 	lcall	_dp_display_text
                    0F16   3406 	C$cli.c$313$2$2 ==.
                           3407 ;	../cli.c:313: dp_display_value(subaddr,HEX);
                           3408 ;	genAssign
   0F78 90 03 F1           3409 	mov	dptr,#_display_brt_sa_subaddr_1_1
   0F7B E0                 3410 	movx	a,@dptr
   0F7C FA                 3411 	mov	r2,a
                           3412 ;	genCast
   0F7D 7B 00              3413 	mov	r3,#0x00
   0F7F 7C 00              3414 	mov	r4,#0x00
   0F81 7D 00              3415 	mov	r5,#0x00
                           3416 ;	genAssign
   0F83 90 04 37           3417 	mov	dptr,#_dp_display_value_PARM_2
   0F86 E4                 3418 	clr	a
   0F87 F0                 3419 	movx	@dptr,a
   0F88 A3                 3420 	inc	dptr
   0F89 F0                 3421 	movx	@dptr,a
                           3422 ;	genCall
   0F8A 8A 82              3423 	mov	dpl,r2
   0F8C 8B 83              3424 	mov	dph,r3
   0F8E 8C F0              3425 	mov	b,r4
   0F90 ED                 3426 	mov	a,r5
   0F91 12 13 02           3427 	lcall	_dp_display_value
                    0F32   3428 	C$cli.c$315$2$2 ==.
                           3429 ;	../cli.c:315: if ((subaddr > 0 ) && (subaddr < 32))
                           3430 ;	genAssign
   0F94 90 03 F1           3431 	mov	dptr,#_display_brt_sa_subaddr_1_1
   0F97 E0                 3432 	movx	a,@dptr
   0F98 FA                 3433 	mov	r2,a
                           3434 ;	genIfx
   0F99 EA                 3435 	mov	a,r2
                           3436 ;	genIfxJump
   0F9A 70 03              3437 	jnz	00113$
   0F9C 02 0F BD           3438 	ljmp	00102$
   0F9F                    3439 00113$:
                           3440 ;	genCmpLt
                           3441 ;	genCmp
   0F9F BA 20 00           3442 	cjne	r2,#0x20,00114$
   0FA2                    3443 00114$:
                           3444 ;	genIfxJump
   0FA2 40 03              3445 	jc	00115$
   0FA4 02 0F BD           3446 	ljmp	00102$
   0FA7                    3447 00115$:
                    0F45   3448 	C$cli.c$318$3$3 ==.
                           3449 ;	../cli.c:318: display_brt_data(CORE1553BRT_0 ,subaddr);
                           3450 ;	genAssign
   0FA7 90 03 DD           3451 	mov	dptr,#_display_brt_data_PARM_2
   0FAA EA                 3452 	mov	a,r2
   0FAB F0                 3453 	movx	@dptr,a
                           3454 ;	genCall
   0FAC 75 82 00           3455 	mov	dpl,#0x00
   0FAF 75 83 08           3456 	mov	dph,#0x08
   0FB2 75 F0 00           3457 	mov	b,#0x00
   0FB5 74 00              3458 	mov	a,#0x00
   0FB7 12 09 2E           3459 	lcall	_display_brt_data
                    0F58   3460 	C$cli.c$320$3$3 ==.
                           3461 ;	../cli.c:320: break;
   0FBA 02 0F CC           3462 	ljmp	00108$
   0FBD                    3463 00102$:
                    0F5B   3464 	C$cli.c$325$3$4 ==.
                           3465 ;	../cli.c:325: dp_display_text("\r\n\Invaid input !!!!! Enter the Sub Address # ( 1 to 31)to display Data: ");
                           3466 ;	genCall
   0FBD 75 82 F3           3467 	mov	dpl,#__str_19
   0FC0 75 83 72           3468 	mov	dph,#(__str_19 >> 8)
   0FC3 75 F0 80           3469 	mov	b,#0x80
   0FC6 12 12 84           3470 	lcall	_dp_display_text
   0FC9 02 0F 2C           3471 	ljmp	00106$
   0FCC                    3472 00108$:
                    0F6A   3473 	C$cli.c$332$1$1 ==.
                    0F6A   3474 	XG$display_brt_sa$0$0 ==.
   0FCC 22                 3475 	ret
                           3476 	.area CSEG    (CODE)
                           3477 	.area CONST   (CODE)
                    0000   3478 F___cli$_str_8$0$0 == .
   7216                    3479 __str_8:
   7216 0D                 3480 	.db 0x0D
   7217 0A                 3481 	.db 0x0A
   7218 43 6F 72 65 31 35  3482 	.ascii "Core1553BRT>"
        35 33 42 52 54 3E
   7224 00                 3483 	.db 0x00
                    000F   3484 F___cli$_str_9$0$0 == .
   7225                    3485 __str_9:
   7225 0A                 3486 	.db 0x0A
   7226 0D                 3487 	.db 0x0D
   7227 20 42 52 54 20 52  3488 	.ascii " BRT Register Contents"
        65 67 69 73 74 65
        72 20 43 6F 6E 74
        65 6E 74 73
   723D 0D                 3489 	.db 0x0D
   723E 0A                 3490 	.db 0x0A
   723F 20                 3491 	.ascii " "
   7240 00                 3492 	.db 0x00
                    002B   3493 F___cli$_str_10$0$0 == .
   7241                    3494 __str_10:
   7241 0D                 3495 	.db 0x0D
   7242 0A                 3496 	.db 0x0A
   7243 00                 3497 	.db 0x00
                    002E   3498 F___cli$_str_11$0$0 == .
   7244                    3499 __str_11:
   7244 09                 3500 	.db 0x09
   7245 00                 3501 	.db 0x00
                    0030   3502 F___cli$_str_12$0$0 == .
   7246                    3503 __str_12:
   7246 0A                 3504 	.db 0x0A
   7247 0D                 3505 	.db 0x0D
   7248 20 42 52 54 20 53  3506 	.ascii " BRT SA"
        41
   724F 00                 3507 	.db 0x00
                    003A   3508 F___cli$_str_13$0$0 == .
   7250                    3509 __str_13:
   7250 20 20 20 52 58 20  3510 	.ascii "   RX Buffer"
        42 75 66 66 65 72
   725C 0D                 3511 	.db 0x0D
   725D 0A                 3512 	.db 0x0A
   725E 00                 3513 	.db 0x00
                    0049   3514 F___cli$_str_14$0$0 == .
   725F                    3515 __str_14:
   725F 20 20 54 58 20 42  3516 	.ascii "  TX Buffer"
        75 66 66 65 72
   726A 0D                 3517 	.db 0x0D
   726B 0A                 3518 	.db 0x0A
   726C 00                 3519 	.db 0x00
                    0057   3520 F___cli$_str_15$0$0 == .
   726D                    3521 __str_15:
   726D 0A                 3522 	.db 0x0A
   726E 0D                 3523 	.db 0x0D
   726F 20 4D 45 4D 4F 52  3524 	.ascii " MEMORY FiLLING WIETH FOLLOWING DATA "
        59 20 46 69 4C 4C
        49 4E 47 20 57 49
        45 54 48 20 46 4F
        4C 4C 4F 57 49 4E
        47 20 44 41 54 41
        20
   7294 00                 3525 	.db 0x00
                    007F   3526 F___cli$_str_16$0$0 == .
   7295                    3527 __str_16:
   7295 0A                 3528 	.db 0x0A
   7296 0D                 3529 	.db 0x0D
   7297 20 52 65 61 64 69  3530 	.ascii " Reading back the data from the same location"
        6E 67 20 62 61 63
        6B 20 74 68 65 20
        64 61 74 61 20 66
        72 6F 6D 20 74 68
        65 20 73 61 6D 65
        20 6C 6F 63 61 74
        69 6F 6E
   72C4 00                 3531 	.db 0x00
                    00AF   3532 F___cli$_str_17$0$0 == .
   72C5                    3533 __str_17:
   72C5 53 75 62 20 41 64  3534 	.ascii "Sub Address #(1 to 31 ): "
        64 72 65 73 73 20
        23 28 31 20 74 6F
        20 33 31 20 29 3A
        20
   72DE 00                 3535 	.db 0x00
                    00C9   3536 F___cli$_str_18$0$0 == .
   72DF                    3537 __str_18:
   72DF 0D                 3538 	.db 0x0D
   72E0 0A                 3539 	.db 0x0A
   72E1 49 6E 70 75 74 20  3540 	.ascii "Input recived :  "
        72 65 63 69 76 65
        64 20 3A 20 20
   72F2 00                 3541 	.db 0x00
                    00DD   3542 F___cli$_str_19$0$0 == .
   72F3                    3543 __str_19:
   72F3 0D                 3544 	.db 0x0D
   72F4 0A                 3545 	.db 0x0A
   72F5 49 6E 76 61 69 64  3546 	.ascii "Invaid input !!!!! Enter the Sub Address # ( 1 to 31)to di"
        20 69 6E 70 75 74
        20 21 21 21 21 21
        20 45 6E 74 65 72
        20 74 68 65 20 53
        75 62 20 41 64 64
        72 65 73 73 20 23
        20 28 20 31 20 74
        6F 20 33 31 29 74
        6F 20 64 69
   732F 73 70 6C 61 79 20  3547 	.ascii "splay Data: "
        44 61 74 61 3A 20
   733B 00                 3548 	.db 0x00
                           3549 	.area XINIT   (CODE)
                    0000   3550 F___cli$__xinit_user_input$0$0 == .
   733E                    3551 __xinit__user_input:
   733E 00 00 00 00        3552 	.byte #0x00,#0x00,#0x00,#0x00
                    0004   3553 F___cli$__xinit_last_rt_subaddress$0$0 == .
   7342                    3554 __xinit__last_rt_subaddress:
   7342 20                 3555 	.db #0x20
                           3556 	.area CABS    (ABS,CODE)
