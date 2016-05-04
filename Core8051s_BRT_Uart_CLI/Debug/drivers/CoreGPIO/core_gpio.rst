                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.3 #4543 (Dec 31 2006)
                              4 ; This file generated Wed May 04 10:48:19 2016
                              5 ;--------------------------------------------------------
                              6 	.module ___drivers_CoreGPIO_core_gpio
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _GPIO_clear_irq_PARM_2
                             13 	.globl _GPIO_disable_irq_PARM_2
                             14 	.globl _GPIO_enable_irq_PARM_2
                             15 	.globl _GPIO_drive_inout_PARM_3
                             16 	.globl _GPIO_drive_inout_PARM_2
                             17 	.globl _GPIO_set_output_PARM_3
                             18 	.globl _GPIO_set_output_PARM_2
                             19 	.globl _GPIO_set_outputs_PARM_2
                             20 	.globl _GPIO_config_PARM_3
                             21 	.globl _GPIO_config_PARM_2
                             22 	.globl _GPIO_init_PARM_3
                             23 	.globl _GPIO_init_PARM_2
                             24 	.globl _GPIO_init
                             25 	.globl _GPIO_config
                             26 	.globl _GPIO_set_outputs
                             27 	.globl _GPIO_get_inputs
                             28 	.globl _GPIO_get_outputs
                             29 	.globl _GPIO_set_output
                             30 	.globl _GPIO_drive_inout
                             31 	.globl _GPIO_enable_irq
                             32 	.globl _GPIO_disable_irq
                             33 	.globl _GPIO_clear_irq
                             34 ;--------------------------------------------------------
                             35 ; special function registers
                             36 ;--------------------------------------------------------
                             37 	.area RSEG    (DATA)
                             38 ;--------------------------------------------------------
                             39 ; special function bits
                             40 ;--------------------------------------------------------
                             41 	.area RSEG    (DATA)
                             42 ;--------------------------------------------------------
                             43 ; overlayable register banks
                             44 ;--------------------------------------------------------
                             45 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                      46 	.ds 8
                             47 ;--------------------------------------------------------
                             48 ; internal ram data
                             49 ;--------------------------------------------------------
                             50 	.area DSEG    (DATA)
                    0000     51 LGPIO_set_outputs$sloc1$1$0==.
   005A                      52 _GPIO_set_outputs_sloc1_1_0:
   005A                      53 	.ds 4
                    0004     54 LGPIO_set_outputs$sloc2$1$0==.
   005E                      55 _GPIO_set_outputs_sloc2_1_0:
   005E                      56 	.ds 4
                    0008     57 LGPIO_set_output$sloc0$1$0==.
   0062                      58 _GPIO_set_output_sloc0_1_0:
   0062                      59 	.ds 4
                    000C     60 LGPIO_set_output$sloc2$1$0==.
   0066                      61 _GPIO_set_output_sloc2_1_0:
   0066                      62 	.ds 4
                    0010     63 LGPIO_clear_irq$sloc0$1$0==.
   006A                      64 _GPIO_clear_irq_sloc0_1_0:
   006A                      65 	.ds 4
                             66 ;--------------------------------------------------------
                             67 ; overlayable items in internal ram 
                             68 ;--------------------------------------------------------
                             69 	.area OSEG    (OVR,DATA)
                             70 ;--------------------------------------------------------
                             71 ; indirectly addressable internal ram data
                             72 ;--------------------------------------------------------
                             73 	.area ISEG    (DATA)
                             74 ;--------------------------------------------------------
                             75 ; absolute internal ram data
                             76 ;--------------------------------------------------------
                             77 	.area IABS    (ABS,DATA)
                             78 	.area IABS    (ABS,DATA)
                             79 ;--------------------------------------------------------
                             80 ; bit data
                             81 ;--------------------------------------------------------
                             82 	.area BSEG    (BIT)
                             83 ;--------------------------------------------------------
                             84 ; paged external ram data
                             85 ;--------------------------------------------------------
                             86 	.area PSEG    (PAG,XDATA)
                             87 ;--------------------------------------------------------
                             88 ; external ram data
                             89 ;--------------------------------------------------------
                             90 	.area XSEG    (XDATA)
                    0000     91 LGPIO_init$base_addr$1$1==.
   0B2C                      92 _GPIO_init_PARM_2:
   0B2C                      93 	.ds 2
                    0002     94 LGPIO_init$bus_width$1$1==.
   0B2E                      95 _GPIO_init_PARM_3:
   0B2E                      96 	.ds 1
                    0003     97 LGPIO_init$this_gpio$1$1==.
   0B2F                      98 _GPIO_init_this_gpio_1_1:
   0B2F                      99 	.ds 3
                    0006    100 LGPIO_init$i$1$1==.
   0B32                     101 _GPIO_init_i_1_1:
   0B32                     102 	.ds 1
                    0007    103 LGPIO_init$cfg_reg_addr$1$1==.
   0B33                     104 _GPIO_init_cfg_reg_addr_1_1:
   0B33                     105 	.ds 2
                    0009    106 LGPIO_init$file_name$4$5==.
   0B35                     107 _GPIO_init_file_name_4_5:
   0B35                     108 	.ds 32
                    0029    109 LGPIO_config$port_id$1$1==.
   0B55                     110 _GPIO_config_PARM_2:
   0B55                     111 	.ds 1
                    002A    112 LGPIO_config$config$1$1==.
   0B56                     113 _GPIO_config_PARM_3:
   0B56                     114 	.ds 4
                    002E    115 LGPIO_config$this_gpio$1$1==.
   0B5A                     116 _GPIO_config_this_gpio_1_1:
   0B5A                     117 	.ds 3
                    0031    118 LGPIO_config$file_name$3$3==.
   0B5D                     119 _GPIO_config_file_name_3_3:
   0B5D                     120 	.ds 32
                    0051    121 LGPIO_config$file_name$4$6==.
   0B7D                     122 _GPIO_config_file_name_4_6:
   0B7D                     123 	.ds 32
                    0071    124 LGPIO_set_outputs$value$1$1==.
   0B9D                     125 _GPIO_set_outputs_PARM_2:
   0B9D                     126 	.ds 4
                    0075    127 LGPIO_set_outputs$this_gpio$1$1==.
   0BA1                     128 _GPIO_set_outputs_this_gpio_1_1:
   0BA1                     129 	.ds 3
                    0078    130 LGPIO_set_outputs$file_name$4$4==.
   0BA4                     131 _GPIO_set_outputs_file_name_4_4:
   0BA4                     132 	.ds 32
                    0098    133 LGPIO_set_outputs$file_name$3$6==.
   0BC4                     134 _GPIO_set_outputs_file_name_3_6:
   0BC4                     135 	.ds 32
                    00B8    136 LGPIO_get_inputs$this_gpio$1$1==.
   0BE4                     137 _GPIO_get_inputs_this_gpio_1_1:
   0BE4                     138 	.ds 3
                    00BB    139 LGPIO_get_inputs$gpio_in$1$1==.
   0BE7                     140 _GPIO_get_inputs_gpio_in_1_1:
   0BE7                     141 	.ds 4
                    00BF    142 LGPIO_get_inputs$file_name$4$4==.
   0BEB                     143 _GPIO_get_inputs_file_name_4_4:
   0BEB                     144 	.ds 32
                    00DF    145 LGPIO_get_outputs$this_gpio$1$1==.
   0C0B                     146 _GPIO_get_outputs_this_gpio_1_1:
   0C0B                     147 	.ds 3
                    00E2    148 LGPIO_get_outputs$gpio_out$1$1==.
   0C0E                     149 _GPIO_get_outputs_gpio_out_1_1:
   0C0E                     150 	.ds 4
                    00E6    151 LGPIO_get_outputs$file_name$4$4==.
   0C12                     152 _GPIO_get_outputs_file_name_4_4:
   0C12                     153 	.ds 32
                    0106    154 LGPIO_set_output$port_id$1$1==.
   0C32                     155 _GPIO_set_output_PARM_2:
   0C32                     156 	.ds 1
                    0107    157 LGPIO_set_output$value$1$1==.
   0C33                     158 _GPIO_set_output_PARM_3:
   0C33                     159 	.ds 1
                    0108    160 LGPIO_set_output$this_gpio$1$1==.
   0C34                     161 _GPIO_set_output_this_gpio_1_1:
   0C34                     162 	.ds 3
                    010B    163 LGPIO_set_output$file_name$3$3==.
   0C37                     164 _GPIO_set_output_file_name_3_3:
   0C37                     165 	.ds 32
                    012B    166 LGPIO_set_output$outputs_state$3$5==.
   0C57                     167 _GPIO_set_output_outputs_state_3_5:
   0C57                     168 	.ds 4
                    012F    169 LGPIO_set_output$file_name$5$9==.
   0C5B                     170 _GPIO_set_output_file_name_5_9:
   0C5B                     171 	.ds 32
                    014F    172 LGPIO_set_output$outputs_state$3$10==.
   0C7B                     173 _GPIO_set_output_outputs_state_3_10:
   0C7B                     174 	.ds 2
                    0151    175 LGPIO_set_output$file_name$5$14==.
   0C7D                     176 _GPIO_set_output_file_name_5_14:
   0C7D                     177 	.ds 32
                    0171    178 LGPIO_set_output$outputs_state$3$15==.
   0C9D                     179 _GPIO_set_output_outputs_state_3_15:
   0C9D                     180 	.ds 1
                    0172    181 LGPIO_set_output$file_name$5$19==.
   0C9E                     182 _GPIO_set_output_file_name_5_19:
   0C9E                     183 	.ds 32
                    0192    184 LGPIO_set_output$file_name$4$21==.
   0CBE                     185 _GPIO_set_output_file_name_4_21:
   0CBE                     186 	.ds 32
                    01B2    187 LGPIO_drive_inout$port_id$1$1==.
   0CDE                     188 _GPIO_drive_inout_PARM_2:
   0CDE                     189 	.ds 1
                    01B3    190 LGPIO_drive_inout$inout_state$1$1==.
   0CDF                     191 _GPIO_drive_inout_PARM_3:
   0CDF                     192 	.ds 1
                    01B4    193 LGPIO_drive_inout$this_gpio$1$1==.
   0CE0                     194 _GPIO_drive_inout_this_gpio_1_1:
   0CE0                     195 	.ds 3
                    01B7    196 LGPIO_drive_inout$file_name$3$3==.
   0CE3                     197 _GPIO_drive_inout_file_name_3_3:
   0CE3                     198 	.ds 32
                    01D7    199 LGPIO_drive_inout$file_name$4$6==.
   0D03                     200 _GPIO_drive_inout_file_name_4_6:
   0D03                     201 	.ds 32
                    01F7    202 LGPIO_enable_irq$port_id$1$1==.
   0D23                     203 _GPIO_enable_irq_PARM_2:
   0D23                     204 	.ds 1
                    01F8    205 LGPIO_enable_irq$this_gpio$1$1==.
   0D24                     206 _GPIO_enable_irq_this_gpio_1_1:
   0D24                     207 	.ds 3
                    01FB    208 LGPIO_enable_irq$file_name$3$3==.
   0D27                     209 _GPIO_enable_irq_file_name_3_3:
   0D27                     210 	.ds 32
                    021B    211 LGPIO_disable_irq$port_id$1$1==.
   0D47                     212 _GPIO_disable_irq_PARM_2:
   0D47                     213 	.ds 1
                    021C    214 LGPIO_disable_irq$this_gpio$1$1==.
   0D48                     215 _GPIO_disable_irq_this_gpio_1_1:
   0D48                     216 	.ds 3
                    021F    217 LGPIO_disable_irq$file_name$3$3==.
   0D4B                     218 _GPIO_disable_irq_file_name_3_3:
   0D4B                     219 	.ds 32
                    023F    220 LGPIO_clear_irq$port_id$1$1==.
   0D6B                     221 _GPIO_clear_irq_PARM_2:
   0D6B                     222 	.ds 1
                    0240    223 LGPIO_clear_irq$this_gpio$1$1==.
   0D6C                     224 _GPIO_clear_irq_this_gpio_1_1:
   0D6C                     225 	.ds 3
                    0243    226 LGPIO_clear_irq$file_name$4$4==.
   0D6F                     227 _GPIO_clear_irq_file_name_4_4:
   0D6F                     228 	.ds 32
                            229 ;--------------------------------------------------------
                            230 ; external initialized ram data
                            231 ;--------------------------------------------------------
                            232 	.area XISEG   (XDATA)
                            233 	.area HOME    (CODE)
                            234 	.area GSINIT0 (CODE)
                            235 	.area GSINIT1 (CODE)
                            236 	.area GSINIT2 (CODE)
                            237 	.area GSINIT3 (CODE)
                            238 	.area GSINIT4 (CODE)
                            239 	.area GSINIT5 (CODE)
                            240 	.area GSINIT  (CODE)
                            241 	.area GSFINAL (CODE)
                            242 	.area CSEG    (CODE)
                            243 ;--------------------------------------------------------
                            244 ; global & static initialisations
                            245 ;--------------------------------------------------------
                            246 	.area HOME    (CODE)
                            247 	.area GSINIT  (CODE)
                            248 	.area GSFINAL (CODE)
                            249 	.area GSINIT  (CODE)
                            250 ;--------------------------------------------------------
                            251 ; Home
                            252 ;--------------------------------------------------------
                            253 	.area HOME    (CODE)
                            254 	.area HOME    (CODE)
                            255 ;--------------------------------------------------------
                            256 ; code
                            257 ;--------------------------------------------------------
                            258 	.area CSEG    (CODE)
                            259 ;------------------------------------------------------------
                            260 ;Allocation info for local variables in function 'GPIO_init'
                            261 ;------------------------------------------------------------
                            262 ;base_addr                 Allocated with name '_GPIO_init_PARM_2'
                            263 ;bus_width                 Allocated with name '_GPIO_init_PARM_3'
                            264 ;this_gpio                 Allocated with name '_GPIO_init_this_gpio_1_1'
                            265 ;i                         Allocated with name '_GPIO_init_i_1_1'
                            266 ;cfg_reg_addr              Allocated with name '_GPIO_init_cfg_reg_addr_1_1'
                            267 ;file_name                 Allocated with name '_GPIO_init_file_name_4_5'
                            268 ;------------------------------------------------------------
                    0000    269 	G$GPIO_init$0$0 ==.
                    0000    270 	C$core_gpio.c$31$0$0 ==.
                            271 ;	../drivers/CoreGPIO/core_gpio.c:31: void GPIO_init
                            272 ;	-----------------------------------------
                            273 ;	 function GPIO_init
                            274 ;	-----------------------------------------
   51BC                     275 _GPIO_init:
                    0002    276 	ar2 = 0x02
                    0003    277 	ar3 = 0x03
                    0004    278 	ar4 = 0x04
                    0005    279 	ar5 = 0x05
                    0006    280 	ar6 = 0x06
                    0007    281 	ar7 = 0x07
                    0000    282 	ar0 = 0x00
                    0001    283 	ar1 = 0x01
                            284 ;	genReceive
   51BC AA F0               285 	mov	r2,b
   51BE AB 83               286 	mov	r3,dph
   51C0 E5 82               287 	mov	a,dpl
   51C2 90 0B 2F            288 	mov	dptr,#_GPIO_init_this_gpio_1_1
   51C5 F0                  289 	movx	@dptr,a
   51C6 A3                  290 	inc	dptr
   51C7 EB                  291 	mov	a,r3
   51C8 F0                  292 	movx	@dptr,a
   51C9 A3                  293 	inc	dptr
   51CA EA                  294 	mov	a,r2
   51CB F0                  295 	movx	@dptr,a
                    0010    296 	C$core_gpio.c$39$1$0 ==.
                            297 ;	../drivers/CoreGPIO/core_gpio.c:39: addr_t cfg_reg_addr = base_addr;
                            298 ;	genAssign
   51CC 90 0B 2C            299 	mov	dptr,#_GPIO_init_PARM_2
   51CF E0                  300 	movx	a,@dptr
   51D0 FA                  301 	mov	r2,a
   51D1 A3                  302 	inc	dptr
   51D2 E0                  303 	movx	a,@dptr
   51D3 FB                  304 	mov	r3,a
                    0018    305 	C$core_gpio.c$41$1$1 ==.
                            306 ;	../drivers/CoreGPIO/core_gpio.c:41: this_gpio->base_addr = base_addr;
                            307 ;	genAssign
   51D4 90 0B 2F            308 	mov	dptr,#_GPIO_init_this_gpio_1_1
   51D7 E0                  309 	movx	a,@dptr
   51D8 FC                  310 	mov	r4,a
   51D9 A3                  311 	inc	dptr
   51DA E0                  312 	movx	a,@dptr
   51DB FD                  313 	mov	r5,a
   51DC A3                  314 	inc	dptr
   51DD E0                  315 	movx	a,@dptr
   51DE FE                  316 	mov	r6,a
                            317 ;	genPointerSet
                            318 ;	genGenPointerSet
   51DF 8C 82               319 	mov	dpl,r4
   51E1 8D 83               320 	mov	dph,r5
   51E3 8E F0               321 	mov	b,r6
   51E5 EA                  322 	mov	a,r2
   51E6 12 70 A4            323 	lcall	__gptrput
   51E9 A3                  324 	inc	dptr
   51EA EB                  325 	mov	a,r3
   51EB 12 70 A4            326 	lcall	__gptrput
                    0032    327 	C$core_gpio.c$42$1$1 ==.
                            328 ;	../drivers/CoreGPIO/core_gpio.c:42: this_gpio->apb_bus_width = bus_width;
                            329 ;	genPlus
                            330 ;	genPlusIncr
   51EE 74 02               331 	mov	a,#0x02
   51F0 25 04               332 	add	a,ar4
   51F2 FC                  333 	mov	r4,a
   51F3 74 00               334 	mov	a,#0x00
   51F5 35 05               335 	addc	a,ar5
   51F7 FD                  336 	mov	r5,a
                            337 ;	genAssign
   51F8 90 0B 2E            338 	mov	dptr,#_GPIO_init_PARM_3
   51FB E0                  339 	movx	a,@dptr
   51FC FF                  340 	mov	r7,a
                            341 ;	genPointerSet
                            342 ;	genGenPointerSet
   51FD 8C 82               343 	mov	dpl,r4
   51FF 8D 83               344 	mov	dph,r5
   5201 8E F0               345 	mov	b,r6
   5203 EF                  346 	mov	a,r7
   5204 12 70 A4            347 	lcall	__gptrput
                    004B    348 	C$core_gpio.c$45$1$1 ==.
                            349 ;	../drivers/CoreGPIO/core_gpio.c:45: for( i = 0, cfg_reg_addr = base_addr; i < NB_OF_GPIO; ++i )
                            350 ;	genAssign
   5207 90 0B 32            351 	mov	dptr,#_GPIO_init_i_1_1
   520A 74 00               352 	mov	a,#0x00
   520C F0                  353 	movx	@dptr,a
                            354 ;	genAssign
   520D 90 0B 33            355 	mov	dptr,#_GPIO_init_cfg_reg_addr_1_1
   5210 EA                  356 	mov	a,r2
   5211 F0                  357 	movx	@dptr,a
   5212 A3                  358 	inc	dptr
   5213 EB                  359 	mov	a,r3
   5214 F0                  360 	movx	@dptr,a
   5215                     361 00111$:
                            362 ;	genAssign
   5215 90 0B 32            363 	mov	dptr,#_GPIO_init_i_1_1
   5218 E0                  364 	movx	a,@dptr
   5219 FA                  365 	mov	r2,a
                            366 ;	genCmpLt
                            367 ;	genCmp
   521A BA 20 00            368 	cjne	r2,#0x20,00122$
   521D                     369 00122$:
                            370 ;	genIfxJump
   521D 40 03               371 	jc	00123$
   521F 02 52 5A            372 	ljmp	00114$
   5222                     373 00123$:
                    0066    374 	C$core_gpio.c$47$2$2 ==.
                            375 ;	../drivers/CoreGPIO/core_gpio.c:47: HW_set_8bit_reg( cfg_reg_addr, 0 );
                            376 ;	genAssign
   5222 90 0B 33            377 	mov	dptr,#_GPIO_init_cfg_reg_addr_1_1
   5225 E0                  378 	movx	a,@dptr
   5226 FB                  379 	mov	r3,a
   5227 A3                  380 	inc	dptr
   5228 E0                  381 	movx	a,@dptr
   5229 FC                  382 	mov	r4,a
                            383 ;	genAssign
   522A 90 05 9D            384 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   522D 74 00               385 	mov	a,#0x00
   522F F0                  386 	movx	@dptr,a
                            387 ;	genCall
   5230 8B 82               388 	mov	dpl,r3
   5232 8C 83               389 	mov	dph,r4
   5234 C0 02               390 	push	ar2
   5236 C0 03               391 	push	ar3
   5238 C0 04               392 	push	ar4
   523A 12 1C 6F            393 	lcall	_HW_set_8bit_reg
   523D D0 04               394 	pop	ar4
   523F D0 03               395 	pop	ar3
   5241 D0 02               396 	pop	ar2
                    0087    397 	C$core_gpio.c$48$2$2 ==.
                            398 ;	../drivers/CoreGPIO/core_gpio.c:48: cfg_reg_addr += 4;
                            399 ;	genPlus
   5243 90 0B 33            400 	mov	dptr,#_GPIO_init_cfg_reg_addr_1_1
                            401 ;	genPlusIncr
   5246 74 04               402 	mov	a,#0x04
   5248 25 03               403 	add	a,ar3
   524A F0                  404 	movx	@dptr,a
   524B 74 00               405 	mov	a,#0x00
   524D 35 04               406 	addc	a,ar4
   524F A3                  407 	inc	dptr
   5250 F0                  408 	movx	@dptr,a
                    0095    409 	C$core_gpio.c$45$1$1 ==.
                            410 ;	../drivers/CoreGPIO/core_gpio.c:45: for( i = 0, cfg_reg_addr = base_addr; i < NB_OF_GPIO; ++i )
                            411 ;	genPlus
   5251 90 0B 32            412 	mov	dptr,#_GPIO_init_i_1_1
                            413 ;	genPlusIncr
   5254 EA                  414 	mov	a,r2
   5255 04                  415 	inc	a
   5256 F0                  416 	movx	@dptr,a
   5257 02 52 15            417 	ljmp	00111$
   525A                     418 00114$:
                    009E    419 	C$core_gpio.c$51$1$1 ==.
                            420 ;	../drivers/CoreGPIO/core_gpio.c:51: switch( this_gpio->apb_bus_width )
                            421 ;	genAssign
   525A 90 0B 2F            422 	mov	dptr,#_GPIO_init_this_gpio_1_1
   525D E0                  423 	movx	a,@dptr
   525E FA                  424 	mov	r2,a
   525F A3                  425 	inc	dptr
   5260 E0                  426 	movx	a,@dptr
   5261 FB                  427 	mov	r3,a
   5262 A3                  428 	inc	dptr
   5263 E0                  429 	movx	a,@dptr
   5264 FC                  430 	mov	r4,a
                            431 ;	genPlus
                            432 ;	genPlusIncr
   5265 74 02               433 	mov	a,#0x02
   5267 25 02               434 	add	a,ar2
   5269 FD                  435 	mov	r5,a
   526A 74 00               436 	mov	a,#0x00
   526C 35 03               437 	addc	a,ar3
   526E FE                  438 	mov	r6,a
   526F 8C 07               439 	mov	ar7,r4
                            440 ;	genPointerGet
                            441 ;	genGenPointerGet
   5271 8D 82               442 	mov	dpl,r5
   5273 8E 83               443 	mov	dph,r6
   5275 8F F0               444 	mov	b,r7
   5277 12 71 F6            445 	lcall	__gptrget
   527A FD                  446 	mov	r5,a
                            447 ;	genCmpEq
                            448 ;	gencjneshort
   527B BD 00 03            449 	cjne	r5,#0x00,00124$
   527E 02 53 27            450 	ljmp	00103$
   5281                     451 00124$:
                            452 ;	genCmpEq
                            453 ;	gencjneshort
   5281 BD 01 03            454 	cjne	r5,#0x01,00125$
   5284 02 52 C4            455 	ljmp	00102$
   5287                     456 00125$:
                            457 ;	genCmpEq
                            458 ;	gencjneshort
   5287 BD 02 02            459 	cjne	r5,#0x02,00126$
   528A 80 03               460 	sjmp	00127$
   528C                     461 00126$:
   528C 02 53 E6            462 	ljmp	00107$
   528F                     463 00127$:
                    00D3    464 	C$core_gpio.c$54$2$3 ==.
                            465 ;	../drivers/CoreGPIO/core_gpio.c:54: HAL_set_32bit_reg( this_gpio->base_addr, IRQ, CLEAR_ALL_IRQ32 );
                            466 ;	genPointerGet
                            467 ;	genGenPointerGet
   528F 8A 82               468 	mov	dpl,r2
   5291 8B 83               469 	mov	dph,r3
   5293 8C F0               470 	mov	b,r4
   5295 12 71 F6            471 	lcall	__gptrget
   5298 FD                  472 	mov	r5,a
   5299 A3                  473 	inc	dptr
   529A 12 71 F6            474 	lcall	__gptrget
   529D FE                  475 	mov	r6,a
                            476 ;	genPlus
                            477 ;	genPlusIncr
   529E 74 80               478 	mov	a,#0x80
   52A0 25 05               479 	add	a,ar5
   52A2 FD                  480 	mov	r5,a
   52A3 74 00               481 	mov	a,#0x00
   52A5 35 06               482 	addc	a,ar6
   52A7 FE                  483 	mov	r6,a
                            484 ;	genAssign
   52A8 90 05 9E            485 	mov	dptr,#_HW_set_32bit_reg_PARM_2
   52AB 74 FF               486 	mov	a,#0xFF
   52AD F0                  487 	movx	@dptr,a
   52AE A3                  488 	inc	dptr
   52AF 74 FF               489 	mov	a,#0xFF
   52B1 F0                  490 	movx	@dptr,a
   52B2 A3                  491 	inc	dptr
   52B3 74 FF               492 	mov	a,#0xFF
   52B5 F0                  493 	movx	@dptr,a
   52B6 A3                  494 	inc	dptr
   52B7 74 FF               495 	mov	a,#0xFF
   52B9 F0                  496 	movx	@dptr,a
                            497 ;	genCall
   52BA 8D 82               498 	mov	dpl,r5
   52BC 8E 83               499 	mov	dph,r6
   52BE 12 1C 38            500 	lcall	_HW_set_32bit_reg
                    0105    501 	C$core_gpio.c$55$2$3 ==.
                            502 ;	../drivers/CoreGPIO/core_gpio.c:55: break;
   52C1 02 54 BF            503 	ljmp	00115$
                    0108    504 	C$core_gpio.c$57$2$3 ==.
                            505 ;	../drivers/CoreGPIO/core_gpio.c:57: case GPIO_APB_16_BITS_BUS:
   52C4                     506 00102$:
                    0108    507 	C$core_gpio.c$58$2$3 ==.
                            508 ;	../drivers/CoreGPIO/core_gpio.c:58: HAL_set_16bit_reg( this_gpio->base_addr, IRQ0, (uint16_t)CLEAR_ALL_IRQ16 );
                            509 ;	genPointerGet
                            510 ;	genGenPointerGet
   52C4 8A 82               511 	mov	dpl,r2
   52C6 8B 83               512 	mov	dph,r3
   52C8 8C F0               513 	mov	b,r4
   52CA 12 71 F6            514 	lcall	__gptrget
   52CD FD                  515 	mov	r5,a
   52CE A3                  516 	inc	dptr
   52CF 12 71 F6            517 	lcall	__gptrget
   52D2 FE                  518 	mov	r6,a
                            519 ;	genPlus
                            520 ;	genPlusIncr
   52D3 74 80               521 	mov	a,#0x80
   52D5 25 05               522 	add	a,ar5
   52D7 FD                  523 	mov	r5,a
   52D8 74 00               524 	mov	a,#0x00
   52DA 35 06               525 	addc	a,ar6
   52DC FE                  526 	mov	r6,a
                            527 ;	genAssign
   52DD 90 05 9B            528 	mov	dptr,#_HW_set_16bit_reg_PARM_2
   52E0 74 FF               529 	mov	a,#0xFF
   52E2 F0                  530 	movx	@dptr,a
   52E3 A3                  531 	inc	dptr
   52E4 74 FF               532 	mov	a,#0xFF
   52E6 F0                  533 	movx	@dptr,a
                            534 ;	genCall
   52E7 8D 82               535 	mov	dpl,r5
   52E9 8E 83               536 	mov	dph,r6
   52EB C0 02               537 	push	ar2
   52ED C0 03               538 	push	ar3
   52EF C0 04               539 	push	ar4
   52F1 12 1C 54            540 	lcall	_HW_set_16bit_reg
   52F4 D0 04               541 	pop	ar4
   52F6 D0 03               542 	pop	ar3
   52F8 D0 02               543 	pop	ar2
                    013E    544 	C$core_gpio.c$59$2$3 ==.
                            545 ;	../drivers/CoreGPIO/core_gpio.c:59: HAL_set_16bit_reg( this_gpio->base_addr, IRQ1, (uint16_t)CLEAR_ALL_IRQ16 );
                            546 ;	genPointerGet
                            547 ;	genGenPointerGet
   52FA 8A 82               548 	mov	dpl,r2
   52FC 8B 83               549 	mov	dph,r3
   52FE 8C F0               550 	mov	b,r4
   5300 12 71 F6            551 	lcall	__gptrget
   5303 FD                  552 	mov	r5,a
   5304 A3                  553 	inc	dptr
   5305 12 71 F6            554 	lcall	__gptrget
   5308 FE                  555 	mov	r6,a
                            556 ;	genPlus
                            557 ;	genPlusIncr
   5309 74 84               558 	mov	a,#0x84
   530B 25 05               559 	add	a,ar5
   530D FD                  560 	mov	r5,a
   530E 74 00               561 	mov	a,#0x00
   5310 35 06               562 	addc	a,ar6
   5312 FE                  563 	mov	r6,a
                            564 ;	genAssign
   5313 90 05 9B            565 	mov	dptr,#_HW_set_16bit_reg_PARM_2
   5316 74 FF               566 	mov	a,#0xFF
   5318 F0                  567 	movx	@dptr,a
   5319 A3                  568 	inc	dptr
   531A 74 FF               569 	mov	a,#0xFF
   531C F0                  570 	movx	@dptr,a
                            571 ;	genCall
   531D 8D 82               572 	mov	dpl,r5
   531F 8E 83               573 	mov	dph,r6
   5321 12 1C 54            574 	lcall	_HW_set_16bit_reg
                    0168    575 	C$core_gpio.c$60$2$3 ==.
                            576 ;	../drivers/CoreGPIO/core_gpio.c:60: break;
   5324 02 54 BF            577 	ljmp	00115$
                    016B    578 	C$core_gpio.c$62$2$3 ==.
                            579 ;	../drivers/CoreGPIO/core_gpio.c:62: case GPIO_APB_8_BITS_BUS:
   5327                     580 00103$:
                    016B    581 	C$core_gpio.c$63$2$3 ==.
                            582 ;	../drivers/CoreGPIO/core_gpio.c:63: HAL_set_8bit_reg( this_gpio->base_addr, IRQ0, (uint8_t)CLEAR_ALL_IRQ8 );
                            583 ;	genPointerGet
                            584 ;	genGenPointerGet
   5327 8A 82               585 	mov	dpl,r2
   5329 8B 83               586 	mov	dph,r3
   532B 8C F0               587 	mov	b,r4
   532D 12 71 F6            588 	lcall	__gptrget
   5330 FD                  589 	mov	r5,a
   5331 A3                  590 	inc	dptr
   5332 12 71 F6            591 	lcall	__gptrget
   5335 FE                  592 	mov	r6,a
                            593 ;	genPlus
                            594 ;	genPlusIncr
   5336 74 80               595 	mov	a,#0x80
   5338 25 05               596 	add	a,ar5
   533A FD                  597 	mov	r5,a
   533B 74 00               598 	mov	a,#0x00
   533D 35 06               599 	addc	a,ar6
   533F FE                  600 	mov	r6,a
                            601 ;	genAssign
   5340 90 05 9D            602 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   5343 74 FF               603 	mov	a,#0xFF
   5345 F0                  604 	movx	@dptr,a
                            605 ;	genCall
   5346 8D 82               606 	mov	dpl,r5
   5348 8E 83               607 	mov	dph,r6
   534A C0 02               608 	push	ar2
   534C C0 03               609 	push	ar3
   534E C0 04               610 	push	ar4
   5350 12 1C 6F            611 	lcall	_HW_set_8bit_reg
   5353 D0 04               612 	pop	ar4
   5355 D0 03               613 	pop	ar3
   5357 D0 02               614 	pop	ar2
                    019D    615 	C$core_gpio.c$64$2$3 ==.
                            616 ;	../drivers/CoreGPIO/core_gpio.c:64: HAL_set_8bit_reg( this_gpio->base_addr, IRQ1, (uint8_t)CLEAR_ALL_IRQ8 );
                            617 ;	genPointerGet
                            618 ;	genGenPointerGet
   5359 8A 82               619 	mov	dpl,r2
   535B 8B 83               620 	mov	dph,r3
   535D 8C F0               621 	mov	b,r4
   535F 12 71 F6            622 	lcall	__gptrget
   5362 FD                  623 	mov	r5,a
   5363 A3                  624 	inc	dptr
   5364 12 71 F6            625 	lcall	__gptrget
   5367 FE                  626 	mov	r6,a
                            627 ;	genPlus
                            628 ;	genPlusIncr
   5368 74 84               629 	mov	a,#0x84
   536A 25 05               630 	add	a,ar5
   536C FD                  631 	mov	r5,a
   536D 74 00               632 	mov	a,#0x00
   536F 35 06               633 	addc	a,ar6
   5371 FE                  634 	mov	r6,a
                            635 ;	genAssign
   5372 90 05 9D            636 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   5375 74 FF               637 	mov	a,#0xFF
   5377 F0                  638 	movx	@dptr,a
                            639 ;	genCall
   5378 8D 82               640 	mov	dpl,r5
   537A 8E 83               641 	mov	dph,r6
   537C C0 02               642 	push	ar2
   537E C0 03               643 	push	ar3
   5380 C0 04               644 	push	ar4
   5382 12 1C 6F            645 	lcall	_HW_set_8bit_reg
   5385 D0 04               646 	pop	ar4
   5387 D0 03               647 	pop	ar3
   5389 D0 02               648 	pop	ar2
                    01CF    649 	C$core_gpio.c$65$2$3 ==.
                            650 ;	../drivers/CoreGPIO/core_gpio.c:65: HAL_set_8bit_reg( this_gpio->base_addr, IRQ2, (uint8_t)CLEAR_ALL_IRQ8 );
                            651 ;	genPointerGet
                            652 ;	genGenPointerGet
   538B 8A 82               653 	mov	dpl,r2
   538D 8B 83               654 	mov	dph,r3
   538F 8C F0               655 	mov	b,r4
   5391 12 71 F6            656 	lcall	__gptrget
   5394 FD                  657 	mov	r5,a
   5395 A3                  658 	inc	dptr
   5396 12 71 F6            659 	lcall	__gptrget
   5399 FE                  660 	mov	r6,a
                            661 ;	genPlus
                            662 ;	genPlusIncr
   539A 74 88               663 	mov	a,#0x88
   539C 25 05               664 	add	a,ar5
   539E FD                  665 	mov	r5,a
   539F 74 00               666 	mov	a,#0x00
   53A1 35 06               667 	addc	a,ar6
   53A3 FE                  668 	mov	r6,a
                            669 ;	genAssign
   53A4 90 05 9D            670 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   53A7 74 FF               671 	mov	a,#0xFF
   53A9 F0                  672 	movx	@dptr,a
                            673 ;	genCall
   53AA 8D 82               674 	mov	dpl,r5
   53AC 8E 83               675 	mov	dph,r6
   53AE C0 02               676 	push	ar2
   53B0 C0 03               677 	push	ar3
   53B2 C0 04               678 	push	ar4
   53B4 12 1C 6F            679 	lcall	_HW_set_8bit_reg
   53B7 D0 04               680 	pop	ar4
   53B9 D0 03               681 	pop	ar3
   53BB D0 02               682 	pop	ar2
                    0201    683 	C$core_gpio.c$66$2$3 ==.
                            684 ;	../drivers/CoreGPIO/core_gpio.c:66: HAL_set_8bit_reg( this_gpio->base_addr, IRQ3, (uint8_t)CLEAR_ALL_IRQ8 );
                            685 ;	genPointerGet
                            686 ;	genGenPointerGet
   53BD 8A 82               687 	mov	dpl,r2
   53BF 8B 83               688 	mov	dph,r3
   53C1 8C F0               689 	mov	b,r4
   53C3 12 71 F6            690 	lcall	__gptrget
   53C6 FA                  691 	mov	r2,a
   53C7 A3                  692 	inc	dptr
   53C8 12 71 F6            693 	lcall	__gptrget
   53CB FB                  694 	mov	r3,a
                            695 ;	genPlus
                            696 ;	genPlusIncr
   53CC 74 8C               697 	mov	a,#0x8C
   53CE 25 02               698 	add	a,ar2
   53D0 FA                  699 	mov	r2,a
   53D1 74 00               700 	mov	a,#0x00
   53D3 35 03               701 	addc	a,ar3
   53D5 FB                  702 	mov	r3,a
                            703 ;	genAssign
   53D6 90 05 9D            704 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   53D9 74 FF               705 	mov	a,#0xFF
   53DB F0                  706 	movx	@dptr,a
                            707 ;	genCall
   53DC 8A 82               708 	mov	dpl,r2
   53DE 8B 83               709 	mov	dph,r3
   53E0 12 1C 6F            710 	lcall	_HW_set_8bit_reg
                    0227    711 	C$core_gpio.c$67$2$3 ==.
                            712 ;	../drivers/CoreGPIO/core_gpio.c:67: break;
   53E3 02 54 BF            713 	ljmp	00115$
                    022A    714 	C$core_gpio.c$70$2$3 ==.
                            715 ;	../drivers/CoreGPIO/core_gpio.c:70: HAL_ASSERT(0);
   53E6                     716 00107$:
                            717 ;	genPointerSet
                            718 ;     genFarPointerSet
   53E6 90 0B 35            719 	mov	dptr,#_GPIO_init_file_name_4_5
   53E9 74 2E               720 	mov	a,#0x2E
   53EB F0                  721 	movx	@dptr,a
                            722 ;	genPointerSet
                            723 ;     genFarPointerSet
   53EC 90 0B 36            724 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0001)
   53EF 74 2E               725 	mov	a,#0x2E
   53F1 F0                  726 	movx	@dptr,a
                            727 ;	genPointerSet
                            728 ;     genFarPointerSet
   53F2 90 0B 37            729 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0002)
   53F5 74 2F               730 	mov	a,#0x2F
   53F7 F0                  731 	movx	@dptr,a
                            732 ;	genPointerSet
                            733 ;     genFarPointerSet
   53F8 90 0B 38            734 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0003)
   53FB 74 64               735 	mov	a,#0x64
   53FD F0                  736 	movx	@dptr,a
                            737 ;	genPointerSet
                            738 ;     genFarPointerSet
   53FE 90 0B 39            739 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0004)
   5401 74 72               740 	mov	a,#0x72
   5403 F0                  741 	movx	@dptr,a
                            742 ;	genPointerSet
                            743 ;     genFarPointerSet
   5404 90 0B 3A            744 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0005)
   5407 74 69               745 	mov	a,#0x69
   5409 F0                  746 	movx	@dptr,a
                            747 ;	genPointerSet
                            748 ;     genFarPointerSet
   540A 90 0B 3B            749 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0006)
   540D 74 76               750 	mov	a,#0x76
   540F F0                  751 	movx	@dptr,a
                            752 ;	genPointerSet
                            753 ;     genFarPointerSet
   5410 90 0B 3C            754 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0007)
   5413 74 65               755 	mov	a,#0x65
   5415 F0                  756 	movx	@dptr,a
                            757 ;	genPointerSet
                            758 ;     genFarPointerSet
   5416 90 0B 3D            759 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0008)
   5419 74 72               760 	mov	a,#0x72
   541B F0                  761 	movx	@dptr,a
                            762 ;	genPointerSet
                            763 ;     genFarPointerSet
   541C 90 0B 3E            764 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0009)
   541F 74 73               765 	mov	a,#0x73
   5421 F0                  766 	movx	@dptr,a
                            767 ;	genPointerSet
                            768 ;     genFarPointerSet
   5422 90 0B 3F            769 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x000a)
   5425 74 2F               770 	mov	a,#0x2F
   5427 F0                  771 	movx	@dptr,a
                            772 ;	genPointerSet
                            773 ;     genFarPointerSet
   5428 90 0B 40            774 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x000b)
   542B 74 43               775 	mov	a,#0x43
   542D F0                  776 	movx	@dptr,a
                            777 ;	genPointerSet
                            778 ;     genFarPointerSet
   542E 90 0B 41            779 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x000c)
   5431 74 6F               780 	mov	a,#0x6F
   5433 F0                  781 	movx	@dptr,a
                            782 ;	genPointerSet
                            783 ;     genFarPointerSet
   5434 90 0B 42            784 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x000d)
   5437 74 72               785 	mov	a,#0x72
   5439 F0                  786 	movx	@dptr,a
                            787 ;	genPointerSet
                            788 ;     genFarPointerSet
   543A 90 0B 43            789 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x000e)
   543D 74 65               790 	mov	a,#0x65
   543F F0                  791 	movx	@dptr,a
                            792 ;	genPointerSet
                            793 ;     genFarPointerSet
   5440 90 0B 44            794 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x000f)
   5443 74 47               795 	mov	a,#0x47
   5445 F0                  796 	movx	@dptr,a
                            797 ;	genPointerSet
                            798 ;     genFarPointerSet
   5446 90 0B 45            799 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0010)
   5449 74 50               800 	mov	a,#0x50
   544B F0                  801 	movx	@dptr,a
                            802 ;	genPointerSet
                            803 ;     genFarPointerSet
   544C 90 0B 46            804 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0011)
   544F 74 49               805 	mov	a,#0x49
   5451 F0                  806 	movx	@dptr,a
                            807 ;	genPointerSet
                            808 ;     genFarPointerSet
   5452 90 0B 47            809 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0012)
   5455 74 4F               810 	mov	a,#0x4F
   5457 F0                  811 	movx	@dptr,a
                            812 ;	genPointerSet
                            813 ;     genFarPointerSet
   5458 90 0B 48            814 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0013)
   545B 74 2F               815 	mov	a,#0x2F
   545D F0                  816 	movx	@dptr,a
                            817 ;	genPointerSet
                            818 ;     genFarPointerSet
   545E 90 0B 49            819 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0014)
   5461 74 63               820 	mov	a,#0x63
   5463 F0                  821 	movx	@dptr,a
                            822 ;	genPointerSet
                            823 ;     genFarPointerSet
   5464 90 0B 4A            824 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0015)
   5467 74 6F               825 	mov	a,#0x6F
   5469 F0                  826 	movx	@dptr,a
                            827 ;	genPointerSet
                            828 ;     genFarPointerSet
   546A 90 0B 4B            829 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0016)
   546D 74 72               830 	mov	a,#0x72
   546F F0                  831 	movx	@dptr,a
                            832 ;	genPointerSet
                            833 ;     genFarPointerSet
   5470 90 0B 4C            834 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0017)
   5473 74 65               835 	mov	a,#0x65
   5475 F0                  836 	movx	@dptr,a
                            837 ;	genPointerSet
                            838 ;     genFarPointerSet
   5476 90 0B 4D            839 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0018)
   5479 74 5F               840 	mov	a,#0x5F
   547B F0                  841 	movx	@dptr,a
                            842 ;	genPointerSet
                            843 ;     genFarPointerSet
   547C 90 0B 4E            844 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x0019)
   547F 74 67               845 	mov	a,#0x67
   5481 F0                  846 	movx	@dptr,a
                            847 ;	genPointerSet
                            848 ;     genFarPointerSet
   5482 90 0B 4F            849 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x001a)
   5485 74 70               850 	mov	a,#0x70
   5487 F0                  851 	movx	@dptr,a
                            852 ;	genPointerSet
                            853 ;     genFarPointerSet
   5488 90 0B 50            854 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x001b)
   548B 74 69               855 	mov	a,#0x69
   548D F0                  856 	movx	@dptr,a
                            857 ;	genPointerSet
                            858 ;     genFarPointerSet
   548E 90 0B 51            859 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x001c)
   5491 74 6F               860 	mov	a,#0x6F
   5493 F0                  861 	movx	@dptr,a
                            862 ;	genPointerSet
                            863 ;     genFarPointerSet
   5494 90 0B 52            864 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x001d)
   5497 74 2E               865 	mov	a,#0x2E
   5499 F0                  866 	movx	@dptr,a
                            867 ;	genPointerSet
                            868 ;     genFarPointerSet
   549A 90 0B 53            869 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x001e)
   549D 74 63               870 	mov	a,#0x63
   549F F0                  871 	movx	@dptr,a
                            872 ;	genPointerSet
                            873 ;     genFarPointerSet
   54A0 90 0B 54            874 	mov	dptr,#(_GPIO_init_file_name_4_5 + 0x001f)
   54A3 74 00               875 	mov	a,#0x00
   54A5 F0                  876 	movx	@dptr,a
                            877 ;	genAssign
   54A6 90 05 80            878 	mov	dptr,#_HAL_assert_fail_PARM_2
   54A9 74 46               879 	mov	a,#0x46
   54AB F0                  880 	movx	@dptr,a
   54AC E4                  881 	clr	a
   54AD A3                  882 	inc	dptr
   54AE F0                  883 	movx	@dptr,a
   54AF A3                  884 	inc	dptr
   54B0 F0                  885 	movx	@dptr,a
   54B1 A3                  886 	inc	dptr
   54B2 F0                  887 	movx	@dptr,a
                            888 ;	genCall
   54B3 75 82 35            889 	mov	dpl,#_GPIO_init_file_name_4_5
   54B6 75 83 0B            890 	mov	dph,#(_GPIO_init_file_name_4_5 >> 8)
   54B9 75 F0 00            891 	mov	b,#0x00
   54BC 12 1B CC            892 	lcall	_HAL_assert_fail
                    0303    893 	C$core_gpio.c$72$1$1 ==.
                            894 ;	../drivers/CoreGPIO/core_gpio.c:72: }
   54BF                     895 00115$:
                    0303    896 	C$core_gpio.c$73$1$1 ==.
                    0303    897 	XG$GPIO_init$0$0 ==.
   54BF 22                  898 	ret
                            899 ;------------------------------------------------------------
                            900 ;Allocation info for local variables in function 'GPIO_config'
                            901 ;------------------------------------------------------------
                            902 ;port_id                   Allocated with name '_GPIO_config_PARM_2'
                            903 ;config                    Allocated with name '_GPIO_config_PARM_3'
                            904 ;this_gpio                 Allocated with name '_GPIO_config_this_gpio_1_1'
                            905 ;file_name                 Allocated with name '_GPIO_config_file_name_3_3'
                            906 ;cfg_reg_addr              Allocated with name '_GPIO_config_cfg_reg_addr_2_4'
                            907 ;file_name                 Allocated with name '_GPIO_config_file_name_4_6'
                            908 ;------------------------------------------------------------
                    0304    909 	G$GPIO_config$0$0 ==.
                    0304    910 	C$core_gpio.c$79$1$1 ==.
                            911 ;	../drivers/CoreGPIO/core_gpio.c:79: void GPIO_config
                            912 ;	-----------------------------------------
                            913 ;	 function GPIO_config
                            914 ;	-----------------------------------------
   54C0                     915 _GPIO_config:
                            916 ;	genReceive
   54C0 AA F0               917 	mov	r2,b
   54C2 AB 83               918 	mov	r3,dph
   54C4 E5 82               919 	mov	a,dpl
   54C6 90 0B 5A            920 	mov	dptr,#_GPIO_config_this_gpio_1_1
   54C9 F0                  921 	movx	@dptr,a
   54CA A3                  922 	inc	dptr
   54CB EB                  923 	mov	a,r3
   54CC F0                  924 	movx	@dptr,a
   54CD A3                  925 	inc	dptr
   54CE EA                  926 	mov	a,r2
   54CF F0                  927 	movx	@dptr,a
                    0314    928 	C$core_gpio.c$86$2$2 ==.
                            929 ;	../drivers/CoreGPIO/core_gpio.c:86: HAL_ASSERT( port_id < NB_OF_GPIO );
                            930 ;	genAssign
   54D0 90 0B 55            931 	mov	dptr,#_GPIO_config_PARM_2
   54D3 E0                  932 	movx	a,@dptr
   54D4 FA                  933 	mov	r2,a
                            934 ;	genCmpLt
                            935 ;	genCmp
   54D5 BA 20 00            936 	cjne	r2,#0x20,00118$
   54D8                     937 00118$:
   54D8 E4                  938 	clr	a
   54D9 33                  939 	rlc	a
   54DA FB                  940 	mov	r3,a
                            941 ;	genIfx
   54DB EB                  942 	mov	a,r3
                            943 ;	genIfxJump
   54DC 60 03               944 	jz	00119$
   54DE 02 55 C2            945 	ljmp	00104$
   54E1                     946 00119$:
                            947 ;	genPointerSet
                            948 ;     genFarPointerSet
   54E1 90 0B 5D            949 	mov	dptr,#_GPIO_config_file_name_3_3
   54E4 74 2E               950 	mov	a,#0x2E
   54E6 F0                  951 	movx	@dptr,a
                            952 ;	genPointerSet
                            953 ;     genFarPointerSet
   54E7 90 0B 5E            954 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0001)
   54EA 74 2E               955 	mov	a,#0x2E
   54EC F0                  956 	movx	@dptr,a
                            957 ;	genPointerSet
                            958 ;     genFarPointerSet
   54ED 90 0B 5F            959 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0002)
   54F0 74 2F               960 	mov	a,#0x2F
   54F2 F0                  961 	movx	@dptr,a
                            962 ;	genPointerSet
                            963 ;     genFarPointerSet
   54F3 90 0B 60            964 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0003)
   54F6 74 64               965 	mov	a,#0x64
   54F8 F0                  966 	movx	@dptr,a
                            967 ;	genPointerSet
                            968 ;     genFarPointerSet
   54F9 90 0B 61            969 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0004)
   54FC 74 72               970 	mov	a,#0x72
   54FE F0                  971 	movx	@dptr,a
                            972 ;	genPointerSet
                            973 ;     genFarPointerSet
   54FF 90 0B 62            974 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0005)
   5502 74 69               975 	mov	a,#0x69
   5504 F0                  976 	movx	@dptr,a
                            977 ;	genPointerSet
                            978 ;     genFarPointerSet
   5505 90 0B 63            979 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0006)
   5508 74 76               980 	mov	a,#0x76
   550A F0                  981 	movx	@dptr,a
                            982 ;	genPointerSet
                            983 ;     genFarPointerSet
   550B 90 0B 64            984 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0007)
   550E 74 65               985 	mov	a,#0x65
   5510 F0                  986 	movx	@dptr,a
                            987 ;	genPointerSet
                            988 ;     genFarPointerSet
   5511 90 0B 65            989 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0008)
   5514 74 72               990 	mov	a,#0x72
   5516 F0                  991 	movx	@dptr,a
                            992 ;	genPointerSet
                            993 ;     genFarPointerSet
   5517 90 0B 66            994 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0009)
   551A 74 73               995 	mov	a,#0x73
   551C F0                  996 	movx	@dptr,a
                            997 ;	genPointerSet
                            998 ;     genFarPointerSet
   551D 90 0B 67            999 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x000a)
   5520 74 2F              1000 	mov	a,#0x2F
   5522 F0                 1001 	movx	@dptr,a
                           1002 ;	genPointerSet
                           1003 ;     genFarPointerSet
   5523 90 0B 68           1004 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x000b)
   5526 74 43              1005 	mov	a,#0x43
   5528 F0                 1006 	movx	@dptr,a
                           1007 ;	genPointerSet
                           1008 ;     genFarPointerSet
   5529 90 0B 69           1009 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x000c)
   552C 74 6F              1010 	mov	a,#0x6F
   552E F0                 1011 	movx	@dptr,a
                           1012 ;	genPointerSet
                           1013 ;     genFarPointerSet
   552F 90 0B 6A           1014 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x000d)
   5532 74 72              1015 	mov	a,#0x72
   5534 F0                 1016 	movx	@dptr,a
                           1017 ;	genPointerSet
                           1018 ;     genFarPointerSet
   5535 90 0B 6B           1019 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x000e)
   5538 74 65              1020 	mov	a,#0x65
   553A F0                 1021 	movx	@dptr,a
                           1022 ;	genPointerSet
                           1023 ;     genFarPointerSet
   553B 90 0B 6C           1024 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x000f)
   553E 74 47              1025 	mov	a,#0x47
   5540 F0                 1026 	movx	@dptr,a
                           1027 ;	genPointerSet
                           1028 ;     genFarPointerSet
   5541 90 0B 6D           1029 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0010)
   5544 74 50              1030 	mov	a,#0x50
   5546 F0                 1031 	movx	@dptr,a
                           1032 ;	genPointerSet
                           1033 ;     genFarPointerSet
   5547 90 0B 6E           1034 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0011)
   554A 74 49              1035 	mov	a,#0x49
   554C F0                 1036 	movx	@dptr,a
                           1037 ;	genPointerSet
                           1038 ;     genFarPointerSet
   554D 90 0B 6F           1039 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0012)
   5550 74 4F              1040 	mov	a,#0x4F
   5552 F0                 1041 	movx	@dptr,a
                           1042 ;	genPointerSet
                           1043 ;     genFarPointerSet
   5553 90 0B 70           1044 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0013)
   5556 74 2F              1045 	mov	a,#0x2F
   5558 F0                 1046 	movx	@dptr,a
                           1047 ;	genPointerSet
                           1048 ;     genFarPointerSet
   5559 90 0B 71           1049 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0014)
   555C 74 63              1050 	mov	a,#0x63
   555E F0                 1051 	movx	@dptr,a
                           1052 ;	genPointerSet
                           1053 ;     genFarPointerSet
   555F 90 0B 72           1054 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0015)
   5562 74 6F              1055 	mov	a,#0x6F
   5564 F0                 1056 	movx	@dptr,a
                           1057 ;	genPointerSet
                           1058 ;     genFarPointerSet
   5565 90 0B 73           1059 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0016)
   5568 74 72              1060 	mov	a,#0x72
   556A F0                 1061 	movx	@dptr,a
                           1062 ;	genPointerSet
                           1063 ;     genFarPointerSet
   556B 90 0B 74           1064 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0017)
   556E 74 65              1065 	mov	a,#0x65
   5570 F0                 1066 	movx	@dptr,a
                           1067 ;	genPointerSet
                           1068 ;     genFarPointerSet
   5571 90 0B 75           1069 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0018)
   5574 74 5F              1070 	mov	a,#0x5F
   5576 F0                 1071 	movx	@dptr,a
                           1072 ;	genPointerSet
                           1073 ;     genFarPointerSet
   5577 90 0B 76           1074 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x0019)
   557A 74 67              1075 	mov	a,#0x67
   557C F0                 1076 	movx	@dptr,a
                           1077 ;	genPointerSet
                           1078 ;     genFarPointerSet
   557D 90 0B 77           1079 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x001a)
   5580 74 70              1080 	mov	a,#0x70
   5582 F0                 1081 	movx	@dptr,a
                           1082 ;	genPointerSet
                           1083 ;     genFarPointerSet
   5583 90 0B 78           1084 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x001b)
   5586 74 69              1085 	mov	a,#0x69
   5588 F0                 1086 	movx	@dptr,a
                           1087 ;	genPointerSet
                           1088 ;     genFarPointerSet
   5589 90 0B 79           1089 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x001c)
   558C 74 6F              1090 	mov	a,#0x6F
   558E F0                 1091 	movx	@dptr,a
                           1092 ;	genPointerSet
                           1093 ;     genFarPointerSet
   558F 90 0B 7A           1094 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x001d)
   5592 74 2E              1095 	mov	a,#0x2E
   5594 F0                 1096 	movx	@dptr,a
                           1097 ;	genPointerSet
                           1098 ;     genFarPointerSet
   5595 90 0B 7B           1099 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x001e)
   5598 74 63              1100 	mov	a,#0x63
   559A F0                 1101 	movx	@dptr,a
                           1102 ;	genPointerSet
                           1103 ;     genFarPointerSet
   559B 90 0B 7C           1104 	mov	dptr,#(_GPIO_config_file_name_3_3 + 0x001f)
   559E 74 00              1105 	mov	a,#0x00
   55A0 F0                 1106 	movx	@dptr,a
                           1107 ;	genAssign
   55A1 90 05 80           1108 	mov	dptr,#_HAL_assert_fail_PARM_2
   55A4 74 56              1109 	mov	a,#0x56
   55A6 F0                 1110 	movx	@dptr,a
   55A7 E4                 1111 	clr	a
   55A8 A3                 1112 	inc	dptr
   55A9 F0                 1113 	movx	@dptr,a
   55AA A3                 1114 	inc	dptr
   55AB F0                 1115 	movx	@dptr,a
   55AC A3                 1116 	inc	dptr
   55AD F0                 1117 	movx	@dptr,a
                           1118 ;	genCall
   55AE 75 82 5D           1119 	mov	dpl,#_GPIO_config_file_name_3_3
   55B1 75 83 0B           1120 	mov	dph,#(_GPIO_config_file_name_3_3 >> 8)
   55B4 75 F0 00           1121 	mov	b,#0x00
   55B7 C0 02              1122 	push	ar2
   55B9 C0 03              1123 	push	ar3
   55BB 12 1B CC           1124 	lcall	_HAL_assert_fail
   55BE D0 03              1125 	pop	ar3
   55C0 D0 02              1126 	pop	ar2
   55C2                    1127 00104$:
                    0406   1128 	C$core_gpio.c$88$1$1 ==.
                           1129 ;	../drivers/CoreGPIO/core_gpio.c:88: if ( port_id < NB_OF_GPIO )
                           1130 ;	genIfx
   55C2 EB                 1131 	mov	a,r3
                           1132 ;	genIfxJump
   55C3 70 03              1133 	jnz	00120$
   55C5 02 57 4D           1134 	ljmp	00113$
   55C8                    1135 00120$:
                    040C   1136 	C$core_gpio.c$90$2$4 ==.
                           1137 ;	../drivers/CoreGPIO/core_gpio.c:90: uint32_t cfg_reg_addr = this_gpio->base_addr;
                           1138 ;	genAssign
   55C8 90 0B 5A           1139 	mov	dptr,#_GPIO_config_this_gpio_1_1
   55CB E0                 1140 	movx	a,@dptr
   55CC FB                 1141 	mov	r3,a
   55CD A3                 1142 	inc	dptr
   55CE E0                 1143 	movx	a,@dptr
   55CF FC                 1144 	mov	r4,a
   55D0 A3                 1145 	inc	dptr
   55D1 E0                 1146 	movx	a,@dptr
   55D2 FD                 1147 	mov	r5,a
                           1148 ;	genPointerGet
                           1149 ;	genGenPointerGet
   55D3 8B 82              1150 	mov	dpl,r3
   55D5 8C 83              1151 	mov	dph,r4
   55D7 8D F0              1152 	mov	b,r5
   55D9 12 71 F6           1153 	lcall	__gptrget
   55DC FB                 1154 	mov	r3,a
   55DD A3                 1155 	inc	dptr
   55DE 12 71 F6           1156 	lcall	__gptrget
   55E1 FC                 1157 	mov	r4,a
                           1158 ;	genCast
   55E2 7D 00              1159 	mov	r5,#0x00
   55E4 7E 00              1160 	mov	r6,#0x00
                    042A   1161 	C$core_gpio.c$91$2$4 ==.
                           1162 ;	../drivers/CoreGPIO/core_gpio.c:91: cfg_reg_addr += (port_id * 4);
                           1163 ;	genMult
                           1164 ;	genMultOneByte
   55E6 EA                 1165 	mov	a,r2
   55E7 75 F0 04           1166 	mov	b,#0x04
   55EA A4                 1167 	mul	ab
   55EB FA                 1168 	mov	r2,a
   55EC AF F0              1169 	mov	r7,b
                           1170 ;	genCast
   55EE EF                 1171 	mov	a,r7
   55EF 33                 1172 	rlc	a
   55F0 95 E0              1173 	subb	a,acc
   55F2 F8                 1174 	mov	r0,a
   55F3 F9                 1175 	mov	r1,a
                           1176 ;	genPlus
   55F4 E5 02              1177 	mov	a,ar2
   55F6 25 03              1178 	add	a,ar3
   55F8 FB                 1179 	mov	r3,a
   55F9 E5 07              1180 	mov	a,ar7
   55FB 35 04              1181 	addc	a,ar4
   55FD FC                 1182 	mov	r4,a
   55FE E5 00              1183 	mov	a,ar0
   5600 35 05              1184 	addc	a,ar5
   5602 FD                 1185 	mov	r5,a
   5603 E5 01              1186 	mov	a,ar1
   5605 35 06              1187 	addc	a,ar6
   5607 FE                 1188 	mov	r6,a
                    044C   1189 	C$core_gpio.c$92$2$4 ==.
                           1190 ;	../drivers/CoreGPIO/core_gpio.c:92: HW_set_32bit_reg( cfg_reg_addr, config );
                           1191 ;	genCast
                           1192 ;	genAssign
   5608 90 0B 56           1193 	mov	dptr,#_GPIO_config_PARM_3
   560B E0                 1194 	movx	a,@dptr
   560C FA                 1195 	mov	r2,a
   560D A3                 1196 	inc	dptr
   560E E0                 1197 	movx	a,@dptr
   560F FD                 1198 	mov	r5,a
   5610 A3                 1199 	inc	dptr
   5611 E0                 1200 	movx	a,@dptr
   5612 FE                 1201 	mov	r6,a
   5613 A3                 1202 	inc	dptr
   5614 E0                 1203 	movx	a,@dptr
   5615 FF                 1204 	mov	r7,a
                           1205 ;	genAssign
   5616 90 05 9E           1206 	mov	dptr,#_HW_set_32bit_reg_PARM_2
   5619 EA                 1207 	mov	a,r2
   561A F0                 1208 	movx	@dptr,a
   561B A3                 1209 	inc	dptr
   561C ED                 1210 	mov	a,r5
   561D F0                 1211 	movx	@dptr,a
   561E A3                 1212 	inc	dptr
   561F EE                 1213 	mov	a,r6
   5620 F0                 1214 	movx	@dptr,a
   5621 A3                 1215 	inc	dptr
   5622 EF                 1216 	mov	a,r7
   5623 F0                 1217 	movx	@dptr,a
                           1218 ;	genCall
   5624 8B 82              1219 	mov	dpl,r3
   5626 8C 83              1220 	mov	dph,r4
   5628 C0 02              1221 	push	ar2
   562A C0 03              1222 	push	ar3
   562C C0 04              1223 	push	ar4
   562E C0 05              1224 	push	ar5
   5630 C0 06              1225 	push	ar6
   5632 C0 07              1226 	push	ar7
   5634 12 1C 38           1227 	lcall	_HW_set_32bit_reg
   5637 D0 07              1228 	pop	ar7
   5639 D0 06              1229 	pop	ar6
   563B D0 05              1230 	pop	ar5
   563D D0 04              1231 	pop	ar4
   563F D0 03              1232 	pop	ar3
   5641 D0 02              1233 	pop	ar2
                    0487   1234 	C$core_gpio.c$101$3$5 ==.
                           1235 ;	../drivers/CoreGPIO/core_gpio.c:101: HAL_ASSERT( HW_get_32bit_reg( cfg_reg_addr ) == config );
                           1236 ;	genCall
   5643 8B 82              1237 	mov	dpl,r3
   5645 8C 83              1238 	mov	dph,r4
   5647 C0 02              1239 	push	ar2
   5649 C0 05              1240 	push	ar5
   564B C0 06              1241 	push	ar6
   564D C0 07              1242 	push	ar7
   564F 12 1C 2C           1243 	lcall	_HW_get_32bit_reg
   5652 AB 82              1244 	mov	r3,dpl
   5654 AC 83              1245 	mov	r4,dph
   5656 A8 F0              1246 	mov	r0,b
   5658 F9                 1247 	mov	r1,a
   5659 D0 07              1248 	pop	ar7
   565B D0 06              1249 	pop	ar6
   565D D0 05              1250 	pop	ar5
   565F D0 02              1251 	pop	ar2
                           1252 ;	genCmpEq
                           1253 ;	gencjneshort
   5661 EB                 1254 	mov	a,r3
   5662 B5 02 0F           1255 	cjne	a,ar2,00121$
   5665 EC                 1256 	mov	a,r4
   5666 B5 05 0B           1257 	cjne	a,ar5,00121$
   5669 E8                 1258 	mov	a,r0
   566A B5 06 07           1259 	cjne	a,ar6,00121$
   566D E9                 1260 	mov	a,r1
   566E B5 07 03           1261 	cjne	a,ar7,00121$
   5671 02 57 4D           1262 	ljmp	00113$
   5674                    1263 00121$:
                           1264 ;	genPointerSet
                           1265 ;     genFarPointerSet
   5674 90 0B 7D           1266 	mov	dptr,#_GPIO_config_file_name_4_6
   5677 74 2E              1267 	mov	a,#0x2E
   5679 F0                 1268 	movx	@dptr,a
                           1269 ;	genPointerSet
                           1270 ;     genFarPointerSet
   567A 90 0B 7E           1271 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0001)
   567D 74 2E              1272 	mov	a,#0x2E
   567F F0                 1273 	movx	@dptr,a
                           1274 ;	genPointerSet
                           1275 ;     genFarPointerSet
   5680 90 0B 7F           1276 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0002)
   5683 74 2F              1277 	mov	a,#0x2F
   5685 F0                 1278 	movx	@dptr,a
                           1279 ;	genPointerSet
                           1280 ;     genFarPointerSet
   5686 90 0B 80           1281 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0003)
   5689 74 64              1282 	mov	a,#0x64
   568B F0                 1283 	movx	@dptr,a
                           1284 ;	genPointerSet
                           1285 ;     genFarPointerSet
   568C 90 0B 81           1286 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0004)
   568F 74 72              1287 	mov	a,#0x72
   5691 F0                 1288 	movx	@dptr,a
                           1289 ;	genPointerSet
                           1290 ;     genFarPointerSet
   5692 90 0B 82           1291 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0005)
   5695 74 69              1292 	mov	a,#0x69
   5697 F0                 1293 	movx	@dptr,a
                           1294 ;	genPointerSet
                           1295 ;     genFarPointerSet
   5698 90 0B 83           1296 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0006)
   569B 74 76              1297 	mov	a,#0x76
   569D F0                 1298 	movx	@dptr,a
                           1299 ;	genPointerSet
                           1300 ;     genFarPointerSet
   569E 90 0B 84           1301 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0007)
   56A1 74 65              1302 	mov	a,#0x65
   56A3 F0                 1303 	movx	@dptr,a
                           1304 ;	genPointerSet
                           1305 ;     genFarPointerSet
   56A4 90 0B 85           1306 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0008)
   56A7 74 72              1307 	mov	a,#0x72
   56A9 F0                 1308 	movx	@dptr,a
                           1309 ;	genPointerSet
                           1310 ;     genFarPointerSet
   56AA 90 0B 86           1311 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0009)
   56AD 74 73              1312 	mov	a,#0x73
   56AF F0                 1313 	movx	@dptr,a
                           1314 ;	genPointerSet
                           1315 ;     genFarPointerSet
   56B0 90 0B 87           1316 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x000a)
   56B3 74 2F              1317 	mov	a,#0x2F
   56B5 F0                 1318 	movx	@dptr,a
                           1319 ;	genPointerSet
                           1320 ;     genFarPointerSet
   56B6 90 0B 88           1321 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x000b)
   56B9 74 43              1322 	mov	a,#0x43
   56BB F0                 1323 	movx	@dptr,a
                           1324 ;	genPointerSet
                           1325 ;     genFarPointerSet
   56BC 90 0B 89           1326 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x000c)
   56BF 74 6F              1327 	mov	a,#0x6F
   56C1 F0                 1328 	movx	@dptr,a
                           1329 ;	genPointerSet
                           1330 ;     genFarPointerSet
   56C2 90 0B 8A           1331 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x000d)
   56C5 74 72              1332 	mov	a,#0x72
   56C7 F0                 1333 	movx	@dptr,a
                           1334 ;	genPointerSet
                           1335 ;     genFarPointerSet
   56C8 90 0B 8B           1336 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x000e)
   56CB 74 65              1337 	mov	a,#0x65
   56CD F0                 1338 	movx	@dptr,a
                           1339 ;	genPointerSet
                           1340 ;     genFarPointerSet
   56CE 90 0B 8C           1341 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x000f)
   56D1 74 47              1342 	mov	a,#0x47
   56D3 F0                 1343 	movx	@dptr,a
                           1344 ;	genPointerSet
                           1345 ;     genFarPointerSet
   56D4 90 0B 8D           1346 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0010)
   56D7 74 50              1347 	mov	a,#0x50
   56D9 F0                 1348 	movx	@dptr,a
                           1349 ;	genPointerSet
                           1350 ;     genFarPointerSet
   56DA 90 0B 8E           1351 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0011)
   56DD 74 49              1352 	mov	a,#0x49
   56DF F0                 1353 	movx	@dptr,a
                           1354 ;	genPointerSet
                           1355 ;     genFarPointerSet
   56E0 90 0B 8F           1356 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0012)
   56E3 74 4F              1357 	mov	a,#0x4F
   56E5 F0                 1358 	movx	@dptr,a
                           1359 ;	genPointerSet
                           1360 ;     genFarPointerSet
   56E6 90 0B 90           1361 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0013)
   56E9 74 2F              1362 	mov	a,#0x2F
   56EB F0                 1363 	movx	@dptr,a
                           1364 ;	genPointerSet
                           1365 ;     genFarPointerSet
   56EC 90 0B 91           1366 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0014)
   56EF 74 63              1367 	mov	a,#0x63
   56F1 F0                 1368 	movx	@dptr,a
                           1369 ;	genPointerSet
                           1370 ;     genFarPointerSet
   56F2 90 0B 92           1371 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0015)
   56F5 74 6F              1372 	mov	a,#0x6F
   56F7 F0                 1373 	movx	@dptr,a
                           1374 ;	genPointerSet
                           1375 ;     genFarPointerSet
   56F8 90 0B 93           1376 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0016)
   56FB 74 72              1377 	mov	a,#0x72
   56FD F0                 1378 	movx	@dptr,a
                           1379 ;	genPointerSet
                           1380 ;     genFarPointerSet
   56FE 90 0B 94           1381 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0017)
   5701 74 65              1382 	mov	a,#0x65
   5703 F0                 1383 	movx	@dptr,a
                           1384 ;	genPointerSet
                           1385 ;     genFarPointerSet
   5704 90 0B 95           1386 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0018)
   5707 74 5F              1387 	mov	a,#0x5F
   5709 F0                 1388 	movx	@dptr,a
                           1389 ;	genPointerSet
                           1390 ;     genFarPointerSet
   570A 90 0B 96           1391 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x0019)
   570D 74 67              1392 	mov	a,#0x67
   570F F0                 1393 	movx	@dptr,a
                           1394 ;	genPointerSet
                           1395 ;     genFarPointerSet
   5710 90 0B 97           1396 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x001a)
   5713 74 70              1397 	mov	a,#0x70
   5715 F0                 1398 	movx	@dptr,a
                           1399 ;	genPointerSet
                           1400 ;     genFarPointerSet
   5716 90 0B 98           1401 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x001b)
   5719 74 69              1402 	mov	a,#0x69
   571B F0                 1403 	movx	@dptr,a
                           1404 ;	genPointerSet
                           1405 ;     genFarPointerSet
   571C 90 0B 99           1406 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x001c)
   571F 74 6F              1407 	mov	a,#0x6F
   5721 F0                 1408 	movx	@dptr,a
                           1409 ;	genPointerSet
                           1410 ;     genFarPointerSet
   5722 90 0B 9A           1411 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x001d)
   5725 74 2E              1412 	mov	a,#0x2E
   5727 F0                 1413 	movx	@dptr,a
                           1414 ;	genPointerSet
                           1415 ;     genFarPointerSet
   5728 90 0B 9B           1416 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x001e)
   572B 74 63              1417 	mov	a,#0x63
   572D F0                 1418 	movx	@dptr,a
                           1419 ;	genPointerSet
                           1420 ;     genFarPointerSet
   572E 90 0B 9C           1421 	mov	dptr,#(_GPIO_config_file_name_4_6 + 0x001f)
   5731 74 00              1422 	mov	a,#0x00
   5733 F0                 1423 	movx	@dptr,a
                           1424 ;	genAssign
   5734 90 05 80           1425 	mov	dptr,#_HAL_assert_fail_PARM_2
   5737 74 65              1426 	mov	a,#0x65
   5739 F0                 1427 	movx	@dptr,a
   573A E4                 1428 	clr	a
   573B A3                 1429 	inc	dptr
   573C F0                 1430 	movx	@dptr,a
   573D A3                 1431 	inc	dptr
   573E F0                 1432 	movx	@dptr,a
   573F A3                 1433 	inc	dptr
   5740 F0                 1434 	movx	@dptr,a
                           1435 ;	genCall
   5741 75 82 7D           1436 	mov	dpl,#_GPIO_config_file_name_4_6
   5744 75 83 0B           1437 	mov	dph,#(_GPIO_config_file_name_4_6 >> 8)
   5747 75 F0 00           1438 	mov	b,#0x00
   574A 12 1B CC           1439 	lcall	_HAL_assert_fail
   574D                    1440 00113$:
                    0591   1441 	C$core_gpio.c$103$2$1 ==.
                    0591   1442 	XG$GPIO_config$0$0 ==.
   574D 22                 1443 	ret
                           1444 ;------------------------------------------------------------
                           1445 ;Allocation info for local variables in function 'GPIO_set_outputs'
                           1446 ;------------------------------------------------------------
                           1447 ;sloc0                     Allocated with name '_GPIO_set_outputs_sloc0_1_0'
                           1448 ;sloc1                     Allocated with name '_GPIO_set_outputs_sloc1_1_0'
                           1449 ;sloc2                     Allocated with name '_GPIO_set_outputs_sloc2_1_0'
                           1450 ;value                     Allocated with name '_GPIO_set_outputs_PARM_2'
                           1451 ;this_gpio                 Allocated with name '_GPIO_set_outputs_this_gpio_1_1'
                           1452 ;file_name                 Allocated with name '_GPIO_set_outputs_file_name_4_4'
                           1453 ;file_name                 Allocated with name '_GPIO_set_outputs_file_name_3_6'
                           1454 ;------------------------------------------------------------
                    0592   1455 	G$GPIO_set_outputs$0$0 ==.
                    0592   1456 	C$core_gpio.c$109$2$1 ==.
                           1457 ;	../drivers/CoreGPIO/core_gpio.c:109: void GPIO_set_outputs
                           1458 ;	-----------------------------------------
                           1459 ;	 function GPIO_set_outputs
                           1460 ;	-----------------------------------------
   574E                    1461 _GPIO_set_outputs:
                           1462 ;	genReceive
   574E AA F0              1463 	mov	r2,b
   5750 AB 83              1464 	mov	r3,dph
   5752 E5 82              1465 	mov	a,dpl
   5754 90 0B A1           1466 	mov	dptr,#_GPIO_set_outputs_this_gpio_1_1
   5757 F0                 1467 	movx	@dptr,a
   5758 A3                 1468 	inc	dptr
   5759 EB                 1469 	mov	a,r3
   575A F0                 1470 	movx	@dptr,a
   575B A3                 1471 	inc	dptr
   575C EA                 1472 	mov	a,r2
   575D F0                 1473 	movx	@dptr,a
                    05A2   1474 	C$core_gpio.c$115$1$1 ==.
                           1475 ;	../drivers/CoreGPIO/core_gpio.c:115: switch( this_gpio->apb_bus_width )
                           1476 ;	genAssign
   575E 90 0B A1           1477 	mov	dptr,#_GPIO_set_outputs_this_gpio_1_1
   5761 E0                 1478 	movx	a,@dptr
   5762 FA                 1479 	mov	r2,a
   5763 A3                 1480 	inc	dptr
   5764 E0                 1481 	movx	a,@dptr
   5765 FB                 1482 	mov	r3,a
   5766 A3                 1483 	inc	dptr
   5767 E0                 1484 	movx	a,@dptr
   5768 FC                 1485 	mov	r4,a
                           1486 ;	genPlus
                           1487 ;	genPlusIncr
   5769 74 02              1488 	mov	a,#0x02
   576B 25 02              1489 	add	a,ar2
   576D FD                 1490 	mov	r5,a
   576E 74 00              1491 	mov	a,#0x00
   5770 35 03              1492 	addc	a,ar3
   5772 FE                 1493 	mov	r6,a
   5773 8C 07              1494 	mov	ar7,r4
                           1495 ;	genPointerGet
                           1496 ;	genGenPointerGet
   5775 8D 82              1497 	mov	dpl,r5
   5777 8E 83              1498 	mov	dph,r6
   5779 8F F0              1499 	mov	b,r7
   577B 12 71 F6           1500 	lcall	__gptrget
   577E FD                 1501 	mov	r5,a
                           1502 ;	genCmpEq
                           1503 ;	gencjneshort
   577F BD 00 03           1504 	cjne	r5,#0x00,00122$
   5782 02 58 47           1505 	ljmp	00103$
   5785                    1506 00122$:
                           1507 ;	genCmpEq
                           1508 ;	gencjneshort
   5785 BD 01 03           1509 	cjne	r5,#0x01,00123$
   5788 02 57 D2           1510 	ljmp	00102$
   578B                    1511 00123$:
                           1512 ;	genCmpEq
                           1513 ;	gencjneshort
   578B BD 02 02           1514 	cjne	r5,#0x02,00124$
   578E 80 03              1515 	sjmp	00125$
   5790                    1516 00124$:
   5790 02 59 18           1517 	ljmp	00107$
   5793                    1518 00125$:
                    05D7   1519 	C$core_gpio.c$118$2$2 ==.
                           1520 ;	../drivers/CoreGPIO/core_gpio.c:118: HAL_set_32bit_reg( this_gpio->base_addr, GPIO_OUT, value );
                           1521 ;	genPointerGet
                           1522 ;	genGenPointerGet
   5793 8A 82              1523 	mov	dpl,r2
   5795 8B 83              1524 	mov	dph,r3
   5797 8C F0              1525 	mov	b,r4
   5799 12 71 F6           1526 	lcall	__gptrget
   579C FD                 1527 	mov	r5,a
   579D A3                 1528 	inc	dptr
   579E 12 71 F6           1529 	lcall	__gptrget
   57A1 FE                 1530 	mov	r6,a
                           1531 ;	genPlus
                           1532 ;	genPlusIncr
   57A2 74 A0              1533 	mov	a,#0xA0
   57A4 25 05              1534 	add	a,ar5
   57A6 FA                 1535 	mov	r2,a
   57A7 74 00              1536 	mov	a,#0x00
   57A9 35 06              1537 	addc	a,ar6
   57AB FB                 1538 	mov	r3,a
                           1539 ;	genAssign
   57AC 90 0B 9D           1540 	mov	dptr,#_GPIO_set_outputs_PARM_2
   57AF E0                 1541 	movx	a,@dptr
   57B0 FF                 1542 	mov	r7,a
   57B1 A3                 1543 	inc	dptr
   57B2 E0                 1544 	movx	a,@dptr
   57B3 F8                 1545 	mov	r0,a
   57B4 A3                 1546 	inc	dptr
   57B5 E0                 1547 	movx	a,@dptr
   57B6 F9                 1548 	mov	r1,a
   57B7 A3                 1549 	inc	dptr
   57B8 E0                 1550 	movx	a,@dptr
   57B9 FD                 1551 	mov	r5,a
                           1552 ;	genAssign
   57BA 90 05 9E           1553 	mov	dptr,#_HW_set_32bit_reg_PARM_2
   57BD EF                 1554 	mov	a,r7
   57BE F0                 1555 	movx	@dptr,a
   57BF A3                 1556 	inc	dptr
   57C0 E8                 1557 	mov	a,r0
   57C1 F0                 1558 	movx	@dptr,a
   57C2 A3                 1559 	inc	dptr
   57C3 E9                 1560 	mov	a,r1
   57C4 F0                 1561 	movx	@dptr,a
   57C5 A3                 1562 	inc	dptr
   57C6 ED                 1563 	mov	a,r5
   57C7 F0                 1564 	movx	@dptr,a
                           1565 ;	genCall
   57C8 8A 82              1566 	mov	dpl,r2
   57CA 8B 83              1567 	mov	dph,r3
   57CC 12 1C 38           1568 	lcall	_HW_set_32bit_reg
                    0613   1569 	C$core_gpio.c$119$2$2 ==.
                           1570 ;	../drivers/CoreGPIO/core_gpio.c:119: break;
   57CF 02 59 F1           1571 	ljmp	00113$
                    0616   1572 	C$core_gpio.c$121$2$2 ==.
                           1573 ;	../drivers/CoreGPIO/core_gpio.c:121: case GPIO_APB_16_BITS_BUS:
   57D2                    1574 00102$:
                    0616   1575 	C$core_gpio.c$122$2$2 ==.
                           1576 ;	../drivers/CoreGPIO/core_gpio.c:122: HAL_set_16bit_reg( this_gpio->base_addr, GPIO_OUT0, (uint16_t)value );
                           1577 ;	genPointerGet
                           1578 ;	genGenPointerGet
   57D2 8A 82              1579 	mov	dpl,r2
   57D4 8B 83              1580 	mov	dph,r3
   57D6 8C F0              1581 	mov	b,r4
   57D8 12 71 F6           1582 	lcall	__gptrget
   57DB FD                 1583 	mov	r5,a
   57DC A3                 1584 	inc	dptr
   57DD 12 71 F6           1585 	lcall	__gptrget
   57E0 FE                 1586 	mov	r6,a
                           1587 ;	genPlus
                           1588 ;	genPlusIncr
   57E1 74 A0              1589 	mov	a,#0xA0
   57E3 25 05              1590 	add	a,ar5
   57E5 FD                 1591 	mov	r5,a
   57E6 74 00              1592 	mov	a,#0x00
   57E8 35 06              1593 	addc	a,ar6
   57EA FE                 1594 	mov	r6,a
                           1595 ;	genAssign
   57EB 90 0B 9D           1596 	mov	dptr,#_GPIO_set_outputs_PARM_2
   57EE E0                 1597 	movx	a,@dptr
   57EF F5 5A              1598 	mov	_GPIO_set_outputs_sloc1_1_0,a
   57F1 A3                 1599 	inc	dptr
   57F2 E0                 1600 	movx	a,@dptr
   57F3 F5 5B              1601 	mov	(_GPIO_set_outputs_sloc1_1_0 + 1),a
   57F5 A3                 1602 	inc	dptr
   57F6 E0                 1603 	movx	a,@dptr
   57F7 F5 5C              1604 	mov	(_GPIO_set_outputs_sloc1_1_0 + 2),a
   57F9 A3                 1605 	inc	dptr
   57FA E0                 1606 	movx	a,@dptr
   57FB F5 5D              1607 	mov	(_GPIO_set_outputs_sloc1_1_0 + 3),a
                           1608 ;	genCast
   57FD 90 05 9B           1609 	mov	dptr,#_HW_set_16bit_reg_PARM_2
   5800 E5 5A              1610 	mov	a,_GPIO_set_outputs_sloc1_1_0
   5802 F0                 1611 	movx	@dptr,a
   5803 A3                 1612 	inc	dptr
   5804 E5 5B              1613 	mov	a,(_GPIO_set_outputs_sloc1_1_0 + 1)
   5806 F0                 1614 	movx	@dptr,a
                           1615 ;	genCall
   5807 8D 82              1616 	mov	dpl,r5
   5809 8E 83              1617 	mov	dph,r6
   580B C0 02              1618 	push	ar2
   580D C0 03              1619 	push	ar3
   580F C0 04              1620 	push	ar4
   5811 12 1C 54           1621 	lcall	_HW_set_16bit_reg
   5814 D0 04              1622 	pop	ar4
   5816 D0 03              1623 	pop	ar3
   5818 D0 02              1624 	pop	ar2
                    065E   1625 	C$core_gpio.c$123$2$2 ==.
                           1626 ;	../drivers/CoreGPIO/core_gpio.c:123: HAL_set_16bit_reg( this_gpio->base_addr, GPIO_OUT1, (uint16_t)(value >> 16) );
                           1627 ;	genPointerGet
                           1628 ;	genGenPointerGet
   581A 8A 82              1629 	mov	dpl,r2
   581C 8B 83              1630 	mov	dph,r3
   581E 8C F0              1631 	mov	b,r4
   5820 12 71 F6           1632 	lcall	__gptrget
   5823 FE                 1633 	mov	r6,a
   5824 A3                 1634 	inc	dptr
   5825 12 71 F6           1635 	lcall	__gptrget
   5828 FD                 1636 	mov	r5,a
                           1637 ;	genPlus
                           1638 ;	genPlusIncr
   5829 74 A4              1639 	mov	a,#0xA4
   582B 25 06              1640 	add	a,ar6
   582D FE                 1641 	mov	r6,a
   582E 74 00              1642 	mov	a,#0x00
   5830 35 05              1643 	addc	a,ar5
   5832 FD                 1644 	mov	r5,a
                           1645 ;	genGetWord
   5833 90 05 9B           1646 	mov	dptr,#_HW_set_16bit_reg_PARM_2
   5836 E5 5C              1647 	mov	a,(_GPIO_set_outputs_sloc1_1_0 + 2)
   5838 F0                 1648 	movx	@dptr,a
   5839 A3                 1649 	inc	dptr
   583A E5 5D              1650 	mov	a,(_GPIO_set_outputs_sloc1_1_0 + 3)
   583C F0                 1651 	movx	@dptr,a
                           1652 ;	genCall
   583D 8E 82              1653 	mov	dpl,r6
   583F 8D 83              1654 	mov	dph,r5
   5841 12 1C 54           1655 	lcall	_HW_set_16bit_reg
                    0688   1656 	C$core_gpio.c$124$2$2 ==.
                           1657 ;	../drivers/CoreGPIO/core_gpio.c:124: break;
   5844 02 59 F1           1658 	ljmp	00113$
                    068B   1659 	C$core_gpio.c$126$2$2 ==.
                           1660 ;	../drivers/CoreGPIO/core_gpio.c:126: case GPIO_APB_8_BITS_BUS:
   5847                    1661 00103$:
                    068B   1662 	C$core_gpio.c$127$2$2 ==.
                           1663 ;	../drivers/CoreGPIO/core_gpio.c:127: HAL_set_8bit_reg( this_gpio->base_addr, GPIO_OUT0, (uint8_t)value );
                           1664 ;	genPointerGet
                           1665 ;	genGenPointerGet
   5847 8A 82              1666 	mov	dpl,r2
   5849 8B 83              1667 	mov	dph,r3
   584B 8C F0              1668 	mov	b,r4
   584D 12 71 F6           1669 	lcall	__gptrget
   5850 FD                 1670 	mov	r5,a
   5851 A3                 1671 	inc	dptr
   5852 12 71 F6           1672 	lcall	__gptrget
   5855 FE                 1673 	mov	r6,a
                           1674 ;	genPlus
                           1675 ;	genPlusIncr
   5856 74 A0              1676 	mov	a,#0xA0
   5858 25 05              1677 	add	a,ar5
   585A FD                 1678 	mov	r5,a
   585B 74 00              1679 	mov	a,#0x00
   585D 35 06              1680 	addc	a,ar6
   585F FE                 1681 	mov	r6,a
                           1682 ;	genAssign
   5860 90 0B 9D           1683 	mov	dptr,#_GPIO_set_outputs_PARM_2
   5863 E0                 1684 	movx	a,@dptr
   5864 F5 5E              1685 	mov	_GPIO_set_outputs_sloc2_1_0,a
   5866 A3                 1686 	inc	dptr
   5867 E0                 1687 	movx	a,@dptr
   5868 F5 5F              1688 	mov	(_GPIO_set_outputs_sloc2_1_0 + 1),a
   586A A3                 1689 	inc	dptr
   586B E0                 1690 	movx	a,@dptr
   586C F5 60              1691 	mov	(_GPIO_set_outputs_sloc2_1_0 + 2),a
   586E A3                 1692 	inc	dptr
   586F E0                 1693 	movx	a,@dptr
   5870 F5 61              1694 	mov	(_GPIO_set_outputs_sloc2_1_0 + 3),a
                           1695 ;	genCast
   5872 90 05 9D           1696 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   5875 E5 5E              1697 	mov	a,_GPIO_set_outputs_sloc2_1_0
   5877 F0                 1698 	movx	@dptr,a
                           1699 ;	genCall
   5878 8D 82              1700 	mov	dpl,r5
   587A 8E 83              1701 	mov	dph,r6
   587C C0 02              1702 	push	ar2
   587E C0 03              1703 	push	ar3
   5880 C0 04              1704 	push	ar4
   5882 12 1C 6F           1705 	lcall	_HW_set_8bit_reg
   5885 D0 04              1706 	pop	ar4
   5887 D0 03              1707 	pop	ar3
   5889 D0 02              1708 	pop	ar2
                    06CF   1709 	C$core_gpio.c$128$2$2 ==.
                           1710 ;	../drivers/CoreGPIO/core_gpio.c:128: HAL_set_8bit_reg( this_gpio->base_addr, GPIO_OUT1, (uint8_t)(value >> 8) );
                           1711 ;	genPointerGet
                           1712 ;	genGenPointerGet
   588B 8A 82              1713 	mov	dpl,r2
   588D 8B 83              1714 	mov	dph,r3
   588F 8C F0              1715 	mov	b,r4
   5891 12 71 F6           1716 	lcall	__gptrget
   5894 FE                 1717 	mov	r6,a
   5895 A3                 1718 	inc	dptr
   5896 12 71 F6           1719 	lcall	__gptrget
   5899 FD                 1720 	mov	r5,a
                           1721 ;	genPlus
                           1722 ;	genPlusIncr
   589A 74 A4              1723 	mov	a,#0xA4
   589C 25 06              1724 	add	a,ar6
   589E FE                 1725 	mov	r6,a
   589F 74 00              1726 	mov	a,#0x00
   58A1 35 05              1727 	addc	a,ar5
   58A3 FD                 1728 	mov	r5,a
                           1729 ;	genGetByte
   58A4 90 05 9D           1730 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   58A7 E5 5F              1731 	mov	a,(_GPIO_set_outputs_sloc2_1_0 + 1)
   58A9 F0                 1732 	movx	@dptr,a
                           1733 ;	genCall
   58AA 8E 82              1734 	mov	dpl,r6
   58AC 8D 83              1735 	mov	dph,r5
   58AE C0 02              1736 	push	ar2
   58B0 C0 03              1737 	push	ar3
   58B2 C0 04              1738 	push	ar4
   58B4 12 1C 6F           1739 	lcall	_HW_set_8bit_reg
   58B7 D0 04              1740 	pop	ar4
   58B9 D0 03              1741 	pop	ar3
   58BB D0 02              1742 	pop	ar2
                    0701   1743 	C$core_gpio.c$129$2$2 ==.
                           1744 ;	../drivers/CoreGPIO/core_gpio.c:129: HAL_set_8bit_reg( this_gpio->base_addr, GPIO_OUT2, (uint8_t)(value >> 16) );
                           1745 ;	genPointerGet
                           1746 ;	genGenPointerGet
   58BD 8A 82              1747 	mov	dpl,r2
   58BF 8B 83              1748 	mov	dph,r3
   58C1 8C F0              1749 	mov	b,r4
   58C3 12 71 F6           1750 	lcall	__gptrget
   58C6 FD                 1751 	mov	r5,a
   58C7 A3                 1752 	inc	dptr
   58C8 12 71 F6           1753 	lcall	__gptrget
   58CB FE                 1754 	mov	r6,a
                           1755 ;	genPlus
                           1756 ;	genPlusIncr
   58CC 74 A8              1757 	mov	a,#0xA8
   58CE 25 05              1758 	add	a,ar5
   58D0 FD                 1759 	mov	r5,a
   58D1 74 00              1760 	mov	a,#0x00
   58D3 35 06              1761 	addc	a,ar6
   58D5 FE                 1762 	mov	r6,a
                           1763 ;	genGetByte
   58D6 90 05 9D           1764 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   58D9 E5 60              1765 	mov	a,(_GPIO_set_outputs_sloc2_1_0 + 2)
   58DB F0                 1766 	movx	@dptr,a
                           1767 ;	genCall
   58DC 8D 82              1768 	mov	dpl,r5
   58DE 8E 83              1769 	mov	dph,r6
   58E0 C0 02              1770 	push	ar2
   58E2 C0 03              1771 	push	ar3
   58E4 C0 04              1772 	push	ar4
   58E6 12 1C 6F           1773 	lcall	_HW_set_8bit_reg
   58E9 D0 04              1774 	pop	ar4
   58EB D0 03              1775 	pop	ar3
   58ED D0 02              1776 	pop	ar2
                    0733   1777 	C$core_gpio.c$130$2$2 ==.
                           1778 ;	../drivers/CoreGPIO/core_gpio.c:130: HAL_set_8bit_reg( this_gpio->base_addr, GPIO_OUT3, (uint8_t)(value >> 24) );
                           1779 ;	genPointerGet
                           1780 ;	genGenPointerGet
   58EF 8A 82              1781 	mov	dpl,r2
   58F1 8B 83              1782 	mov	dph,r3
   58F3 8C F0              1783 	mov	b,r4
   58F5 12 71 F6           1784 	lcall	__gptrget
   58F8 FA                 1785 	mov	r2,a
   58F9 A3                 1786 	inc	dptr
   58FA 12 71 F6           1787 	lcall	__gptrget
   58FD FB                 1788 	mov	r3,a
                           1789 ;	genPlus
                           1790 ;	genPlusIncr
   58FE 74 AC              1791 	mov	a,#0xAC
   5900 25 02              1792 	add	a,ar2
   5902 FA                 1793 	mov	r2,a
   5903 74 00              1794 	mov	a,#0x00
   5905 35 03              1795 	addc	a,ar3
   5907 FB                 1796 	mov	r3,a
                           1797 ;	genGetByte
   5908 90 05 9D           1798 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   590B E5 61              1799 	mov	a,(_GPIO_set_outputs_sloc2_1_0 + 3)
   590D F0                 1800 	movx	@dptr,a
                           1801 ;	genCall
   590E 8A 82              1802 	mov	dpl,r2
   5910 8B 83              1803 	mov	dph,r3
   5912 12 1C 6F           1804 	lcall	_HW_set_8bit_reg
                    0759   1805 	C$core_gpio.c$131$2$2 ==.
                           1806 ;	../drivers/CoreGPIO/core_gpio.c:131: break;
   5915 02 59 F1           1807 	ljmp	00113$
                    075C   1808 	C$core_gpio.c$134$2$2 ==.
                           1809 ;	../drivers/CoreGPIO/core_gpio.c:134: HAL_ASSERT(0);
   5918                    1810 00107$:
                           1811 ;	genPointerSet
                           1812 ;     genFarPointerSet
   5918 90 0B A4           1813 	mov	dptr,#_GPIO_set_outputs_file_name_4_4
   591B 74 2E              1814 	mov	a,#0x2E
   591D F0                 1815 	movx	@dptr,a
                           1816 ;	genPointerSet
                           1817 ;     genFarPointerSet
   591E 90 0B A5           1818 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0001)
   5921 74 2E              1819 	mov	a,#0x2E
   5923 F0                 1820 	movx	@dptr,a
                           1821 ;	genPointerSet
                           1822 ;     genFarPointerSet
   5924 90 0B A6           1823 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0002)
   5927 74 2F              1824 	mov	a,#0x2F
   5929 F0                 1825 	movx	@dptr,a
                           1826 ;	genPointerSet
                           1827 ;     genFarPointerSet
   592A 90 0B A7           1828 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0003)
   592D 74 64              1829 	mov	a,#0x64
   592F F0                 1830 	movx	@dptr,a
                           1831 ;	genPointerSet
                           1832 ;     genFarPointerSet
   5930 90 0B A8           1833 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0004)
   5933 74 72              1834 	mov	a,#0x72
   5935 F0                 1835 	movx	@dptr,a
                           1836 ;	genPointerSet
                           1837 ;     genFarPointerSet
   5936 90 0B A9           1838 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0005)
   5939 74 69              1839 	mov	a,#0x69
   593B F0                 1840 	movx	@dptr,a
                           1841 ;	genPointerSet
                           1842 ;     genFarPointerSet
   593C 90 0B AA           1843 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0006)
   593F 74 76              1844 	mov	a,#0x76
   5941 F0                 1845 	movx	@dptr,a
                           1846 ;	genPointerSet
                           1847 ;     genFarPointerSet
   5942 90 0B AB           1848 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0007)
   5945 74 65              1849 	mov	a,#0x65
   5947 F0                 1850 	movx	@dptr,a
                           1851 ;	genPointerSet
                           1852 ;     genFarPointerSet
   5948 90 0B AC           1853 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0008)
   594B 74 72              1854 	mov	a,#0x72
   594D F0                 1855 	movx	@dptr,a
                           1856 ;	genPointerSet
                           1857 ;     genFarPointerSet
   594E 90 0B AD           1858 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0009)
   5951 74 73              1859 	mov	a,#0x73
   5953 F0                 1860 	movx	@dptr,a
                           1861 ;	genPointerSet
                           1862 ;     genFarPointerSet
   5954 90 0B AE           1863 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x000a)
   5957 74 2F              1864 	mov	a,#0x2F
   5959 F0                 1865 	movx	@dptr,a
                           1866 ;	genPointerSet
                           1867 ;     genFarPointerSet
   595A 90 0B AF           1868 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x000b)
   595D 74 43              1869 	mov	a,#0x43
   595F F0                 1870 	movx	@dptr,a
                           1871 ;	genPointerSet
                           1872 ;     genFarPointerSet
   5960 90 0B B0           1873 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x000c)
   5963 74 6F              1874 	mov	a,#0x6F
   5965 F0                 1875 	movx	@dptr,a
                           1876 ;	genPointerSet
                           1877 ;     genFarPointerSet
   5966 90 0B B1           1878 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x000d)
   5969 74 72              1879 	mov	a,#0x72
   596B F0                 1880 	movx	@dptr,a
                           1881 ;	genPointerSet
                           1882 ;     genFarPointerSet
   596C 90 0B B2           1883 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x000e)
   596F 74 65              1884 	mov	a,#0x65
   5971 F0                 1885 	movx	@dptr,a
                           1886 ;	genPointerSet
                           1887 ;     genFarPointerSet
   5972 90 0B B3           1888 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x000f)
   5975 74 47              1889 	mov	a,#0x47
   5977 F0                 1890 	movx	@dptr,a
                           1891 ;	genPointerSet
                           1892 ;     genFarPointerSet
   5978 90 0B B4           1893 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0010)
   597B 74 50              1894 	mov	a,#0x50
   597D F0                 1895 	movx	@dptr,a
                           1896 ;	genPointerSet
                           1897 ;     genFarPointerSet
   597E 90 0B B5           1898 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0011)
   5981 74 49              1899 	mov	a,#0x49
   5983 F0                 1900 	movx	@dptr,a
                           1901 ;	genPointerSet
                           1902 ;     genFarPointerSet
   5984 90 0B B6           1903 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0012)
   5987 74 4F              1904 	mov	a,#0x4F
   5989 F0                 1905 	movx	@dptr,a
                           1906 ;	genPointerSet
                           1907 ;     genFarPointerSet
   598A 90 0B B7           1908 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0013)
   598D 74 2F              1909 	mov	a,#0x2F
   598F F0                 1910 	movx	@dptr,a
                           1911 ;	genPointerSet
                           1912 ;     genFarPointerSet
   5990 90 0B B8           1913 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0014)
   5993 74 63              1914 	mov	a,#0x63
   5995 F0                 1915 	movx	@dptr,a
                           1916 ;	genPointerSet
                           1917 ;     genFarPointerSet
   5996 90 0B B9           1918 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0015)
   5999 74 6F              1919 	mov	a,#0x6F
   599B F0                 1920 	movx	@dptr,a
                           1921 ;	genPointerSet
                           1922 ;     genFarPointerSet
   599C 90 0B BA           1923 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0016)
   599F 74 72              1924 	mov	a,#0x72
   59A1 F0                 1925 	movx	@dptr,a
                           1926 ;	genPointerSet
                           1927 ;     genFarPointerSet
   59A2 90 0B BB           1928 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0017)
   59A5 74 65              1929 	mov	a,#0x65
   59A7 F0                 1930 	movx	@dptr,a
                           1931 ;	genPointerSet
                           1932 ;     genFarPointerSet
   59A8 90 0B BC           1933 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0018)
   59AB 74 5F              1934 	mov	a,#0x5F
   59AD F0                 1935 	movx	@dptr,a
                           1936 ;	genPointerSet
                           1937 ;     genFarPointerSet
   59AE 90 0B BD           1938 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x0019)
   59B1 74 67              1939 	mov	a,#0x67
   59B3 F0                 1940 	movx	@dptr,a
                           1941 ;	genPointerSet
                           1942 ;     genFarPointerSet
   59B4 90 0B BE           1943 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x001a)
   59B7 74 70              1944 	mov	a,#0x70
   59B9 F0                 1945 	movx	@dptr,a
                           1946 ;	genPointerSet
                           1947 ;     genFarPointerSet
   59BA 90 0B BF           1948 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x001b)
   59BD 74 69              1949 	mov	a,#0x69
   59BF F0                 1950 	movx	@dptr,a
                           1951 ;	genPointerSet
                           1952 ;     genFarPointerSet
   59C0 90 0B C0           1953 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x001c)
   59C3 74 6F              1954 	mov	a,#0x6F
   59C5 F0                 1955 	movx	@dptr,a
                           1956 ;	genPointerSet
                           1957 ;     genFarPointerSet
   59C6 90 0B C1           1958 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x001d)
   59C9 74 2E              1959 	mov	a,#0x2E
   59CB F0                 1960 	movx	@dptr,a
                           1961 ;	genPointerSet
                           1962 ;     genFarPointerSet
   59CC 90 0B C2           1963 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x001e)
   59CF 74 63              1964 	mov	a,#0x63
   59D1 F0                 1965 	movx	@dptr,a
                           1966 ;	genPointerSet
                           1967 ;     genFarPointerSet
   59D2 90 0B C3           1968 	mov	dptr,#(_GPIO_set_outputs_file_name_4_4 + 0x001f)
   59D5 74 00              1969 	mov	a,#0x00
   59D7 F0                 1970 	movx	@dptr,a
                           1971 ;	genAssign
   59D8 90 05 80           1972 	mov	dptr,#_HAL_assert_fail_PARM_2
   59DB 74 86              1973 	mov	a,#0x86
   59DD F0                 1974 	movx	@dptr,a
   59DE E4                 1975 	clr	a
   59DF A3                 1976 	inc	dptr
   59E0 F0                 1977 	movx	@dptr,a
   59E1 A3                 1978 	inc	dptr
   59E2 F0                 1979 	movx	@dptr,a
   59E3 A3                 1980 	inc	dptr
   59E4 F0                 1981 	movx	@dptr,a
                           1982 ;	genCall
   59E5 75 82 A4           1983 	mov	dpl,#_GPIO_set_outputs_file_name_4_4
   59E8 75 83 0B           1984 	mov	dph,#(_GPIO_set_outputs_file_name_4_4 >> 8)
   59EB 75 F0 00           1985 	mov	b,#0x00
   59EE 12 1B CC           1986 	lcall	_HAL_assert_fail
                    0835   1987 	C$core_gpio.c$145$1$1 ==.
                           1988 ;	../drivers/CoreGPIO/core_gpio.c:145: HAL_ASSERT( GPIO_get_outputs( this_gpio ) == value );
   59F1                    1989 00113$:
                           1990 ;	genAssign
   59F1 90 0B A1           1991 	mov	dptr,#_GPIO_set_outputs_this_gpio_1_1
   59F4 E0                 1992 	movx	a,@dptr
   59F5 FA                 1993 	mov	r2,a
   59F6 A3                 1994 	inc	dptr
   59F7 E0                 1995 	movx	a,@dptr
   59F8 FB                 1996 	mov	r3,a
   59F9 A3                 1997 	inc	dptr
   59FA E0                 1998 	movx	a,@dptr
   59FB FC                 1999 	mov	r4,a
                           2000 ;	genCall
   59FC 8A 82              2001 	mov	dpl,r2
   59FE 8B 83              2002 	mov	dph,r3
   5A00 8C F0              2003 	mov	b,r4
   5A02 12 5D 3C           2004 	lcall	_GPIO_get_outputs
   5A05 AA 82              2005 	mov	r2,dpl
   5A07 AB 83              2006 	mov	r3,dph
   5A09 AC F0              2007 	mov	r4,b
   5A0B FD                 2008 	mov	r5,a
                           2009 ;	genAssign
   5A0C 90 0B 9D           2010 	mov	dptr,#_GPIO_set_outputs_PARM_2
   5A0F E0                 2011 	movx	a,@dptr
   5A10 FE                 2012 	mov	r6,a
   5A11 A3                 2013 	inc	dptr
   5A12 E0                 2014 	movx	a,@dptr
   5A13 FF                 2015 	mov	r7,a
   5A14 A3                 2016 	inc	dptr
   5A15 E0                 2017 	movx	a,@dptr
   5A16 F8                 2018 	mov	r0,a
   5A17 A3                 2019 	inc	dptr
   5A18 E0                 2020 	movx	a,@dptr
   5A19 F9                 2021 	mov	r1,a
                           2022 ;	genCmpEq
                           2023 ;	gencjneshort
   5A1A EA                 2024 	mov	a,r2
   5A1B B5 06 0F           2025 	cjne	a,ar6,00126$
   5A1E EB                 2026 	mov	a,r3
   5A1F B5 07 0B           2027 	cjne	a,ar7,00126$
   5A22 EC                 2028 	mov	a,r4
   5A23 B5 00 07           2029 	cjne	a,ar0,00126$
   5A26 ED                 2030 	mov	a,r5
   5A27 B5 01 03           2031 	cjne	a,ar1,00126$
   5A2A 02 5B 06           2032 	ljmp	00116$
   5A2D                    2033 00126$:
                           2034 ;	genPointerSet
                           2035 ;     genFarPointerSet
   5A2D 90 0B C4           2036 	mov	dptr,#_GPIO_set_outputs_file_name_3_6
   5A30 74 2E              2037 	mov	a,#0x2E
   5A32 F0                 2038 	movx	@dptr,a
                           2039 ;	genPointerSet
                           2040 ;     genFarPointerSet
   5A33 90 0B C5           2041 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0001)
   5A36 74 2E              2042 	mov	a,#0x2E
   5A38 F0                 2043 	movx	@dptr,a
                           2044 ;	genPointerSet
                           2045 ;     genFarPointerSet
   5A39 90 0B C6           2046 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0002)
   5A3C 74 2F              2047 	mov	a,#0x2F
   5A3E F0                 2048 	movx	@dptr,a
                           2049 ;	genPointerSet
                           2050 ;     genFarPointerSet
   5A3F 90 0B C7           2051 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0003)
   5A42 74 64              2052 	mov	a,#0x64
   5A44 F0                 2053 	movx	@dptr,a
                           2054 ;	genPointerSet
                           2055 ;     genFarPointerSet
   5A45 90 0B C8           2056 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0004)
   5A48 74 72              2057 	mov	a,#0x72
   5A4A F0                 2058 	movx	@dptr,a
                           2059 ;	genPointerSet
                           2060 ;     genFarPointerSet
   5A4B 90 0B C9           2061 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0005)
   5A4E 74 69              2062 	mov	a,#0x69
   5A50 F0                 2063 	movx	@dptr,a
                           2064 ;	genPointerSet
                           2065 ;     genFarPointerSet
   5A51 90 0B CA           2066 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0006)
   5A54 74 76              2067 	mov	a,#0x76
   5A56 F0                 2068 	movx	@dptr,a
                           2069 ;	genPointerSet
                           2070 ;     genFarPointerSet
   5A57 90 0B CB           2071 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0007)
   5A5A 74 65              2072 	mov	a,#0x65
   5A5C F0                 2073 	movx	@dptr,a
                           2074 ;	genPointerSet
                           2075 ;     genFarPointerSet
   5A5D 90 0B CC           2076 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0008)
   5A60 74 72              2077 	mov	a,#0x72
   5A62 F0                 2078 	movx	@dptr,a
                           2079 ;	genPointerSet
                           2080 ;     genFarPointerSet
   5A63 90 0B CD           2081 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0009)
   5A66 74 73              2082 	mov	a,#0x73
   5A68 F0                 2083 	movx	@dptr,a
                           2084 ;	genPointerSet
                           2085 ;     genFarPointerSet
   5A69 90 0B CE           2086 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x000a)
   5A6C 74 2F              2087 	mov	a,#0x2F
   5A6E F0                 2088 	movx	@dptr,a
                           2089 ;	genPointerSet
                           2090 ;     genFarPointerSet
   5A6F 90 0B CF           2091 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x000b)
   5A72 74 43              2092 	mov	a,#0x43
   5A74 F0                 2093 	movx	@dptr,a
                           2094 ;	genPointerSet
                           2095 ;     genFarPointerSet
   5A75 90 0B D0           2096 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x000c)
   5A78 74 6F              2097 	mov	a,#0x6F
   5A7A F0                 2098 	movx	@dptr,a
                           2099 ;	genPointerSet
                           2100 ;     genFarPointerSet
   5A7B 90 0B D1           2101 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x000d)
   5A7E 74 72              2102 	mov	a,#0x72
   5A80 F0                 2103 	movx	@dptr,a
                           2104 ;	genPointerSet
                           2105 ;     genFarPointerSet
   5A81 90 0B D2           2106 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x000e)
   5A84 74 65              2107 	mov	a,#0x65
   5A86 F0                 2108 	movx	@dptr,a
                           2109 ;	genPointerSet
                           2110 ;     genFarPointerSet
   5A87 90 0B D3           2111 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x000f)
   5A8A 74 47              2112 	mov	a,#0x47
   5A8C F0                 2113 	movx	@dptr,a
                           2114 ;	genPointerSet
                           2115 ;     genFarPointerSet
   5A8D 90 0B D4           2116 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0010)
   5A90 74 50              2117 	mov	a,#0x50
   5A92 F0                 2118 	movx	@dptr,a
                           2119 ;	genPointerSet
                           2120 ;     genFarPointerSet
   5A93 90 0B D5           2121 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0011)
   5A96 74 49              2122 	mov	a,#0x49
   5A98 F0                 2123 	movx	@dptr,a
                           2124 ;	genPointerSet
                           2125 ;     genFarPointerSet
   5A99 90 0B D6           2126 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0012)
   5A9C 74 4F              2127 	mov	a,#0x4F
   5A9E F0                 2128 	movx	@dptr,a
                           2129 ;	genPointerSet
                           2130 ;     genFarPointerSet
   5A9F 90 0B D7           2131 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0013)
   5AA2 74 2F              2132 	mov	a,#0x2F
   5AA4 F0                 2133 	movx	@dptr,a
                           2134 ;	genPointerSet
                           2135 ;     genFarPointerSet
   5AA5 90 0B D8           2136 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0014)
   5AA8 74 63              2137 	mov	a,#0x63
   5AAA F0                 2138 	movx	@dptr,a
                           2139 ;	genPointerSet
                           2140 ;     genFarPointerSet
   5AAB 90 0B D9           2141 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0015)
   5AAE 74 6F              2142 	mov	a,#0x6F
   5AB0 F0                 2143 	movx	@dptr,a
                           2144 ;	genPointerSet
                           2145 ;     genFarPointerSet
   5AB1 90 0B DA           2146 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0016)
   5AB4 74 72              2147 	mov	a,#0x72
   5AB6 F0                 2148 	movx	@dptr,a
                           2149 ;	genPointerSet
                           2150 ;     genFarPointerSet
   5AB7 90 0B DB           2151 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0017)
   5ABA 74 65              2152 	mov	a,#0x65
   5ABC F0                 2153 	movx	@dptr,a
                           2154 ;	genPointerSet
                           2155 ;     genFarPointerSet
   5ABD 90 0B DC           2156 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0018)
   5AC0 74 5F              2157 	mov	a,#0x5F
   5AC2 F0                 2158 	movx	@dptr,a
                           2159 ;	genPointerSet
                           2160 ;     genFarPointerSet
   5AC3 90 0B DD           2161 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x0019)
   5AC6 74 67              2162 	mov	a,#0x67
   5AC8 F0                 2163 	movx	@dptr,a
                           2164 ;	genPointerSet
                           2165 ;     genFarPointerSet
   5AC9 90 0B DE           2166 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x001a)
   5ACC 74 70              2167 	mov	a,#0x70
   5ACE F0                 2168 	movx	@dptr,a
                           2169 ;	genPointerSet
                           2170 ;     genFarPointerSet
   5ACF 90 0B DF           2171 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x001b)
   5AD2 74 69              2172 	mov	a,#0x69
   5AD4 F0                 2173 	movx	@dptr,a
                           2174 ;	genPointerSet
                           2175 ;     genFarPointerSet
   5AD5 90 0B E0           2176 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x001c)
   5AD8 74 6F              2177 	mov	a,#0x6F
   5ADA F0                 2178 	movx	@dptr,a
                           2179 ;	genPointerSet
                           2180 ;     genFarPointerSet
   5ADB 90 0B E1           2181 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x001d)
   5ADE 74 2E              2182 	mov	a,#0x2E
   5AE0 F0                 2183 	movx	@dptr,a
                           2184 ;	genPointerSet
                           2185 ;     genFarPointerSet
   5AE1 90 0B E2           2186 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x001e)
   5AE4 74 63              2187 	mov	a,#0x63
   5AE6 F0                 2188 	movx	@dptr,a
                           2189 ;	genPointerSet
                           2190 ;     genFarPointerSet
   5AE7 90 0B E3           2191 	mov	dptr,#(_GPIO_set_outputs_file_name_3_6 + 0x001f)
   5AEA 74 00              2192 	mov	a,#0x00
   5AEC F0                 2193 	movx	@dptr,a
                           2194 ;	genAssign
   5AED 90 05 80           2195 	mov	dptr,#_HAL_assert_fail_PARM_2
   5AF0 74 91              2196 	mov	a,#0x91
   5AF2 F0                 2197 	movx	@dptr,a
   5AF3 E4                 2198 	clr	a
   5AF4 A3                 2199 	inc	dptr
   5AF5 F0                 2200 	movx	@dptr,a
   5AF6 A3                 2201 	inc	dptr
   5AF7 F0                 2202 	movx	@dptr,a
   5AF8 A3                 2203 	inc	dptr
   5AF9 F0                 2204 	movx	@dptr,a
                           2205 ;	genCall
   5AFA 75 82 C4           2206 	mov	dpl,#_GPIO_set_outputs_file_name_3_6
   5AFD 75 83 0B           2207 	mov	dph,#(_GPIO_set_outputs_file_name_3_6 >> 8)
   5B00 75 F0 00           2208 	mov	b,#0x00
   5B03 12 1B CC           2209 	lcall	_HAL_assert_fail
   5B06                    2210 00116$:
                    094A   2211 	C$core_gpio.c$146$1$1 ==.
                    094A   2212 	XG$GPIO_set_outputs$0$0 ==.
   5B06 22                 2213 	ret
                           2214 ;------------------------------------------------------------
                           2215 ;Allocation info for local variables in function 'GPIO_get_inputs'
                           2216 ;------------------------------------------------------------
                           2217 ;this_gpio                 Allocated with name '_GPIO_get_inputs_this_gpio_1_1'
                           2218 ;gpio_in                   Allocated with name '_GPIO_get_inputs_gpio_in_1_1'
                           2219 ;file_name                 Allocated with name '_GPIO_get_inputs_file_name_4_4'
                           2220 ;------------------------------------------------------------
                    094B   2221 	G$GPIO_get_inputs$0$0 ==.
                    094B   2222 	C$core_gpio.c$152$1$1 ==.
                           2223 ;	../drivers/CoreGPIO/core_gpio.c:152: uint32_t GPIO_get_inputs
                           2224 ;	-----------------------------------------
                           2225 ;	 function GPIO_get_inputs
                           2226 ;	-----------------------------------------
   5B07                    2227 _GPIO_get_inputs:
                           2228 ;	genReceive
   5B07 AA F0              2229 	mov	r2,b
   5B09 AB 83              2230 	mov	r3,dph
   5B0B E5 82              2231 	mov	a,dpl
   5B0D 90 0B E4           2232 	mov	dptr,#_GPIO_get_inputs_this_gpio_1_1
   5B10 F0                 2233 	movx	@dptr,a
   5B11 A3                 2234 	inc	dptr
   5B12 EB                 2235 	mov	a,r3
   5B13 F0                 2236 	movx	@dptr,a
   5B14 A3                 2237 	inc	dptr
   5B15 EA                 2238 	mov	a,r2
   5B16 F0                 2239 	movx	@dptr,a
                    095B   2240 	C$core_gpio.c$157$1$1 ==.
                           2241 ;	../drivers/CoreGPIO/core_gpio.c:157: uint32_t gpio_in = 0;
                           2242 ;	genAssign
   5B17 90 0B E7           2243 	mov	dptr,#_GPIO_get_inputs_gpio_in_1_1
   5B1A E4                 2244 	clr	a
   5B1B F0                 2245 	movx	@dptr,a
   5B1C A3                 2246 	inc	dptr
   5B1D F0                 2247 	movx	@dptr,a
   5B1E A3                 2248 	inc	dptr
   5B1F F0                 2249 	movx	@dptr,a
   5B20 A3                 2250 	inc	dptr
   5B21 F0                 2251 	movx	@dptr,a
                    0966   2252 	C$core_gpio.c$159$1$1 ==.
                           2253 ;	../drivers/CoreGPIO/core_gpio.c:159: switch( this_gpio->apb_bus_width )
                           2254 ;	genAssign
   5B22 90 0B E4           2255 	mov	dptr,#_GPIO_get_inputs_this_gpio_1_1
   5B25 E0                 2256 	movx	a,@dptr
   5B26 FA                 2257 	mov	r2,a
   5B27 A3                 2258 	inc	dptr
   5B28 E0                 2259 	movx	a,@dptr
   5B29 FB                 2260 	mov	r3,a
   5B2A A3                 2261 	inc	dptr
   5B2B E0                 2262 	movx	a,@dptr
   5B2C FC                 2263 	mov	r4,a
                           2264 ;	genPlus
                           2265 ;	genPlusIncr
   5B2D 74 02              2266 	mov	a,#0x02
   5B2F 25 02              2267 	add	a,ar2
   5B31 FD                 2268 	mov	r5,a
   5B32 74 00              2269 	mov	a,#0x00
   5B34 35 03              2270 	addc	a,ar3
   5B36 FE                 2271 	mov	r6,a
   5B37 8C 07              2272 	mov	ar7,r4
                           2273 ;	genPointerGet
                           2274 ;	genGenPointerGet
   5B39 8D 82              2275 	mov	dpl,r5
   5B3B 8E 83              2276 	mov	dph,r6
   5B3D 8F F0              2277 	mov	b,r7
   5B3F 12 71 F6           2278 	lcall	__gptrget
   5B42 FD                 2279 	mov	r5,a
                           2280 ;	genCmpEq
                           2281 ;	gencjneshort
   5B43 BD 00 03           2282 	cjne	r5,#0x00,00116$
   5B46 02 5B C6           2283 	ljmp	00103$
   5B49                    2284 00116$:
                           2285 ;	genCmpEq
                           2286 ;	gencjneshort
   5B49 BD 01 03           2287 	cjne	r5,#0x01,00117$
   5B4C 02 5B 8F           2288 	ljmp	00102$
   5B4F                    2289 00117$:
                           2290 ;	genCmpEq
                           2291 ;	gencjneshort
   5B4F BD 02 02           2292 	cjne	r5,#0x02,00118$
   5B52 80 03              2293 	sjmp	00119$
   5B54                    2294 00118$:
   5B54 02 5C 4D           2295 	ljmp	00107$
   5B57                    2296 00119$:
                    099B   2297 	C$core_gpio.c$162$2$2 ==.
                           2298 ;	../drivers/CoreGPIO/core_gpio.c:162: gpio_in = HAL_get_32bit_reg( this_gpio->base_addr, GPIO_IN );
                           2299 ;	genPointerGet
                           2300 ;	genGenPointerGet
   5B57 8A 82              2301 	mov	dpl,r2
   5B59 8B 83              2302 	mov	dph,r3
   5B5B 8C F0              2303 	mov	b,r4
   5B5D 12 71 F6           2304 	lcall	__gptrget
   5B60 FD                 2305 	mov	r5,a
   5B61 A3                 2306 	inc	dptr
   5B62 12 71 F6           2307 	lcall	__gptrget
   5B65 FE                 2308 	mov	r6,a
                           2309 ;	genPlus
                           2310 ;	genPlusIncr
   5B66 74 90              2311 	mov	a,#0x90
   5B68 25 05              2312 	add	a,ar5
   5B6A FD                 2313 	mov	r5,a
   5B6B 74 00              2314 	mov	a,#0x00
   5B6D 35 06              2315 	addc	a,ar6
   5B6F FE                 2316 	mov	r6,a
                           2317 ;	genCall
   5B70 8D 82              2318 	mov	dpl,r5
   5B72 8E 83              2319 	mov	dph,r6
   5B74 12 1C 2C           2320 	lcall	_HW_get_32bit_reg
   5B77 AD 82              2321 	mov	r5,dpl
   5B79 AE 83              2322 	mov	r6,dph
   5B7B AF F0              2323 	mov	r7,b
   5B7D F8                 2324 	mov	r0,a
                           2325 ;	genAssign
   5B7E 90 0B E7           2326 	mov	dptr,#_GPIO_get_inputs_gpio_in_1_1
   5B81 ED                 2327 	mov	a,r5
   5B82 F0                 2328 	movx	@dptr,a
   5B83 A3                 2329 	inc	dptr
   5B84 EE                 2330 	mov	a,r6
   5B85 F0                 2331 	movx	@dptr,a
   5B86 A3                 2332 	inc	dptr
   5B87 EF                 2333 	mov	a,r7
   5B88 F0                 2334 	movx	@dptr,a
   5B89 A3                 2335 	inc	dptr
   5B8A E8                 2336 	mov	a,r0
   5B8B F0                 2337 	movx	@dptr,a
                    09D0   2338 	C$core_gpio.c$163$2$2 ==.
                           2339 ;	../drivers/CoreGPIO/core_gpio.c:163: break;
   5B8C 02 5D 26           2340 	ljmp	00110$
                    09D3   2341 	C$core_gpio.c$165$2$2 ==.
                           2342 ;	../drivers/CoreGPIO/core_gpio.c:165: case GPIO_APB_16_BITS_BUS:
   5B8F                    2343 00102$:
                    09D3   2344 	C$core_gpio.c$166$2$2 ==.
                           2345 ;	../drivers/CoreGPIO/core_gpio.c:166: gpio_in |= HAL_get_16bit_reg( this_gpio->base_addr, GPIO_IN0 );
                           2346 ;	genPointerGet
                           2347 ;	genGenPointerGet
   5B8F 8A 82              2348 	mov	dpl,r2
   5B91 8B 83              2349 	mov	dph,r3
   5B93 8C F0              2350 	mov	b,r4
   5B95 12 71 F6           2351 	lcall	__gptrget
   5B98 FD                 2352 	mov	r5,a
   5B99 A3                 2353 	inc	dptr
   5B9A 12 71 F6           2354 	lcall	__gptrget
   5B9D FE                 2355 	mov	r6,a
                           2356 ;	genPlus
                           2357 ;	genPlusIncr
   5B9E 74 90              2358 	mov	a,#0x90
   5BA0 25 05              2359 	add	a,ar5
   5BA2 FD                 2360 	mov	r5,a
   5BA3 74 00              2361 	mov	a,#0x00
   5BA5 35 06              2362 	addc	a,ar6
   5BA7 FE                 2363 	mov	r6,a
                           2364 ;	genCall
   5BA8 8D 82              2365 	mov	dpl,r5
   5BAA 8E 83              2366 	mov	dph,r6
   5BAC 12 1C 68           2367 	lcall	_HW_get_16bit_reg
   5BAF AD 82              2368 	mov	r5,dpl
   5BB1 AE 83              2369 	mov	r6,dph
                           2370 ;	genCast
   5BB3 90 0B E7           2371 	mov	dptr,#_GPIO_get_inputs_gpio_in_1_1
   5BB6 ED                 2372 	mov	a,r5
   5BB7 F0                 2373 	movx	@dptr,a
   5BB8 A3                 2374 	inc	dptr
   5BB9 EE                 2375 	mov	a,r6
   5BBA F0                 2376 	movx	@dptr,a
   5BBB A3                 2377 	inc	dptr
   5BBC 74 00              2378 	mov	a,#0x00
   5BBE F0                 2379 	movx	@dptr,a
   5BBF A3                 2380 	inc	dptr
   5BC0 74 00              2381 	mov	a,#0x00
   5BC2 F0                 2382 	movx	@dptr,a
                    0A07   2383 	C$core_gpio.c$168$2$2 ==.
                           2384 ;	../drivers/CoreGPIO/core_gpio.c:168: break;
   5BC3 02 5D 26           2385 	ljmp	00110$
                    0A0A   2386 	C$core_gpio.c$170$2$2 ==.
                           2387 ;	../drivers/CoreGPIO/core_gpio.c:170: case GPIO_APB_8_BITS_BUS:
   5BC6                    2388 00103$:
                    0A0A   2389 	C$core_gpio.c$171$2$2 ==.
                           2390 ;	../drivers/CoreGPIO/core_gpio.c:171: gpio_in |= HAL_get_8bit_reg( this_gpio->base_addr, GPIO_IN0 );
                           2391 ;	genPointerGet
                           2392 ;	genGenPointerGet
   5BC6 8A 82              2393 	mov	dpl,r2
   5BC8 8B 83              2394 	mov	dph,r3
   5BCA 8C F0              2395 	mov	b,r4
   5BCC 12 71 F6           2396 	lcall	__gptrget
   5BCF FD                 2397 	mov	r5,a
   5BD0 A3                 2398 	inc	dptr
   5BD1 12 71 F6           2399 	lcall	__gptrget
   5BD4 FE                 2400 	mov	r6,a
                           2401 ;	genPlus
                           2402 ;	genPlusIncr
   5BD5 74 90              2403 	mov	a,#0x90
   5BD7 25 05              2404 	add	a,ar5
   5BD9 FD                 2405 	mov	r5,a
   5BDA 74 00              2406 	mov	a,#0x00
   5BDC 35 06              2407 	addc	a,ar6
   5BDE FE                 2408 	mov	r6,a
                           2409 ;	genCall
   5BDF 8D 82              2410 	mov	dpl,r5
   5BE1 8E 83              2411 	mov	dph,r6
   5BE3 C0 02              2412 	push	ar2
   5BE5 C0 03              2413 	push	ar3
   5BE7 C0 04              2414 	push	ar4
   5BE9 12 1C 7D           2415 	lcall	_HW_get_8bit_reg
   5BEC AD 82              2416 	mov	r5,dpl
   5BEE D0 04              2417 	pop	ar4
   5BF0 D0 03              2418 	pop	ar3
   5BF2 D0 02              2419 	pop	ar2
                           2420 ;	genCast
   5BF4 7E 00              2421 	mov	r6,#0x00
   5BF6 7F 00              2422 	mov	r7,#0x00
   5BF8 78 00              2423 	mov	r0,#0x00
                    0A3E   2424 	C$core_gpio.c$172$2$2 ==.
                           2425 ;	../drivers/CoreGPIO/core_gpio.c:172: gpio_in |= (HAL_get_8bit_reg( this_gpio->base_addr, GPIO_IN1 ) << 8);
                           2426 ;	genPointerGet
                           2427 ;	genGenPointerGet
   5BFA 8A 82              2428 	mov	dpl,r2
   5BFC 8B 83              2429 	mov	dph,r3
   5BFE 8C F0              2430 	mov	b,r4
   5C00 12 71 F6           2431 	lcall	__gptrget
   5C03 FA                 2432 	mov	r2,a
   5C04 A3                 2433 	inc	dptr
   5C05 12 71 F6           2434 	lcall	__gptrget
   5C08 FB                 2435 	mov	r3,a
                           2436 ;	genPlus
                           2437 ;	genPlusIncr
   5C09 74 94              2438 	mov	a,#0x94
   5C0B 25 02              2439 	add	a,ar2
   5C0D FA                 2440 	mov	r2,a
   5C0E 74 00              2441 	mov	a,#0x00
   5C10 35 03              2442 	addc	a,ar3
   5C12 FB                 2443 	mov	r3,a
                           2444 ;	genCall
   5C13 8A 82              2445 	mov	dpl,r2
   5C15 8B 83              2446 	mov	dph,r3
   5C17 C0 05              2447 	push	ar5
   5C19 C0 06              2448 	push	ar6
   5C1B C0 07              2449 	push	ar7
   5C1D C0 00              2450 	push	ar0
   5C1F 12 1C 7D           2451 	lcall	_HW_get_8bit_reg
   5C22 AA 82              2452 	mov	r2,dpl
   5C24 D0 00              2453 	pop	ar0
   5C26 D0 07              2454 	pop	ar7
   5C28 D0 06              2455 	pop	ar6
   5C2A D0 05              2456 	pop	ar5
                           2457 ;	genCast
   5C2C 7B 00              2458 	mov	r3,#0x00
                           2459 ;	genLeftShift
                           2460 ;	genLeftShiftLiteral
                           2461 ;	genlshTwo
   5C2E 8A 03              2462 	mov	ar3,r2
   5C30 7A 00              2463 	mov	r2,#0x00
                           2464 ;	genCast
   5C32 EB                 2465 	mov	a,r3
   5C33 33                 2466 	rlc	a
   5C34 95 E0              2467 	subb	a,acc
   5C36 FC                 2468 	mov	r4,a
   5C37 F9                 2469 	mov	r1,a
                           2470 ;	genOr
   5C38 90 0B E7           2471 	mov	dptr,#_GPIO_get_inputs_gpio_in_1_1
   5C3B EA                 2472 	mov	a,r2
   5C3C 4D                 2473 	orl	a,r5
   5C3D F0                 2474 	movx	@dptr,a
   5C3E EB                 2475 	mov	a,r3
   5C3F 4E                 2476 	orl	a,r6
   5C40 A3                 2477 	inc	dptr
   5C41 F0                 2478 	movx	@dptr,a
   5C42 EC                 2479 	mov	a,r4
   5C43 4F                 2480 	orl	a,r7
   5C44 A3                 2481 	inc	dptr
   5C45 F0                 2482 	movx	@dptr,a
   5C46 E9                 2483 	mov	a,r1
   5C47 48                 2484 	orl	a,r0
   5C48 A3                 2485 	inc	dptr
   5C49 F0                 2486 	movx	@dptr,a
                    0A8E   2487 	C$core_gpio.c$175$2$2 ==.
                           2488 ;	../drivers/CoreGPIO/core_gpio.c:175: break;
   5C4A 02 5D 26           2489 	ljmp	00110$
                    0A91   2490 	C$core_gpio.c$178$2$2 ==.
                           2491 ;	../drivers/CoreGPIO/core_gpio.c:178: HAL_ASSERT(0);
   5C4D                    2492 00107$:
                           2493 ;	genPointerSet
                           2494 ;     genFarPointerSet
   5C4D 90 0B EB           2495 	mov	dptr,#_GPIO_get_inputs_file_name_4_4
   5C50 74 2E              2496 	mov	a,#0x2E
   5C52 F0                 2497 	movx	@dptr,a
                           2498 ;	genPointerSet
                           2499 ;     genFarPointerSet
   5C53 90 0B EC           2500 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0001)
   5C56 74 2E              2501 	mov	a,#0x2E
   5C58 F0                 2502 	movx	@dptr,a
                           2503 ;	genPointerSet
                           2504 ;     genFarPointerSet
   5C59 90 0B ED           2505 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0002)
   5C5C 74 2F              2506 	mov	a,#0x2F
   5C5E F0                 2507 	movx	@dptr,a
                           2508 ;	genPointerSet
                           2509 ;     genFarPointerSet
   5C5F 90 0B EE           2510 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0003)
   5C62 74 64              2511 	mov	a,#0x64
   5C64 F0                 2512 	movx	@dptr,a
                           2513 ;	genPointerSet
                           2514 ;     genFarPointerSet
   5C65 90 0B EF           2515 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0004)
   5C68 74 72              2516 	mov	a,#0x72
   5C6A F0                 2517 	movx	@dptr,a
                           2518 ;	genPointerSet
                           2519 ;     genFarPointerSet
   5C6B 90 0B F0           2520 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0005)
   5C6E 74 69              2521 	mov	a,#0x69
   5C70 F0                 2522 	movx	@dptr,a
                           2523 ;	genPointerSet
                           2524 ;     genFarPointerSet
   5C71 90 0B F1           2525 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0006)
   5C74 74 76              2526 	mov	a,#0x76
   5C76 F0                 2527 	movx	@dptr,a
                           2528 ;	genPointerSet
                           2529 ;     genFarPointerSet
   5C77 90 0B F2           2530 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0007)
   5C7A 74 65              2531 	mov	a,#0x65
   5C7C F0                 2532 	movx	@dptr,a
                           2533 ;	genPointerSet
                           2534 ;     genFarPointerSet
   5C7D 90 0B F3           2535 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0008)
   5C80 74 72              2536 	mov	a,#0x72
   5C82 F0                 2537 	movx	@dptr,a
                           2538 ;	genPointerSet
                           2539 ;     genFarPointerSet
   5C83 90 0B F4           2540 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0009)
   5C86 74 73              2541 	mov	a,#0x73
   5C88 F0                 2542 	movx	@dptr,a
                           2543 ;	genPointerSet
                           2544 ;     genFarPointerSet
   5C89 90 0B F5           2545 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x000a)
   5C8C 74 2F              2546 	mov	a,#0x2F
   5C8E F0                 2547 	movx	@dptr,a
                           2548 ;	genPointerSet
                           2549 ;     genFarPointerSet
   5C8F 90 0B F6           2550 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x000b)
   5C92 74 43              2551 	mov	a,#0x43
   5C94 F0                 2552 	movx	@dptr,a
                           2553 ;	genPointerSet
                           2554 ;     genFarPointerSet
   5C95 90 0B F7           2555 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x000c)
   5C98 74 6F              2556 	mov	a,#0x6F
   5C9A F0                 2557 	movx	@dptr,a
                           2558 ;	genPointerSet
                           2559 ;     genFarPointerSet
   5C9B 90 0B F8           2560 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x000d)
   5C9E 74 72              2561 	mov	a,#0x72
   5CA0 F0                 2562 	movx	@dptr,a
                           2563 ;	genPointerSet
                           2564 ;     genFarPointerSet
   5CA1 90 0B F9           2565 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x000e)
   5CA4 74 65              2566 	mov	a,#0x65
   5CA6 F0                 2567 	movx	@dptr,a
                           2568 ;	genPointerSet
                           2569 ;     genFarPointerSet
   5CA7 90 0B FA           2570 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x000f)
   5CAA 74 47              2571 	mov	a,#0x47
   5CAC F0                 2572 	movx	@dptr,a
                           2573 ;	genPointerSet
                           2574 ;     genFarPointerSet
   5CAD 90 0B FB           2575 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0010)
   5CB0 74 50              2576 	mov	a,#0x50
   5CB2 F0                 2577 	movx	@dptr,a
                           2578 ;	genPointerSet
                           2579 ;     genFarPointerSet
   5CB3 90 0B FC           2580 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0011)
   5CB6 74 49              2581 	mov	a,#0x49
   5CB8 F0                 2582 	movx	@dptr,a
                           2583 ;	genPointerSet
                           2584 ;     genFarPointerSet
   5CB9 90 0B FD           2585 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0012)
   5CBC 74 4F              2586 	mov	a,#0x4F
   5CBE F0                 2587 	movx	@dptr,a
                           2588 ;	genPointerSet
                           2589 ;     genFarPointerSet
   5CBF 90 0B FE           2590 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0013)
   5CC2 74 2F              2591 	mov	a,#0x2F
   5CC4 F0                 2592 	movx	@dptr,a
                           2593 ;	genPointerSet
                           2594 ;     genFarPointerSet
   5CC5 90 0B FF           2595 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0014)
   5CC8 74 63              2596 	mov	a,#0x63
   5CCA F0                 2597 	movx	@dptr,a
                           2598 ;	genPointerSet
                           2599 ;     genFarPointerSet
   5CCB 90 0C 00           2600 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0015)
   5CCE 74 6F              2601 	mov	a,#0x6F
   5CD0 F0                 2602 	movx	@dptr,a
                           2603 ;	genPointerSet
                           2604 ;     genFarPointerSet
   5CD1 90 0C 01           2605 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0016)
   5CD4 74 72              2606 	mov	a,#0x72
   5CD6 F0                 2607 	movx	@dptr,a
                           2608 ;	genPointerSet
                           2609 ;     genFarPointerSet
   5CD7 90 0C 02           2610 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0017)
   5CDA 74 65              2611 	mov	a,#0x65
   5CDC F0                 2612 	movx	@dptr,a
                           2613 ;	genPointerSet
                           2614 ;     genFarPointerSet
   5CDD 90 0C 03           2615 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0018)
   5CE0 74 5F              2616 	mov	a,#0x5F
   5CE2 F0                 2617 	movx	@dptr,a
                           2618 ;	genPointerSet
                           2619 ;     genFarPointerSet
   5CE3 90 0C 04           2620 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x0019)
   5CE6 74 67              2621 	mov	a,#0x67
   5CE8 F0                 2622 	movx	@dptr,a
                           2623 ;	genPointerSet
                           2624 ;     genFarPointerSet
   5CE9 90 0C 05           2625 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x001a)
   5CEC 74 70              2626 	mov	a,#0x70
   5CEE F0                 2627 	movx	@dptr,a
                           2628 ;	genPointerSet
                           2629 ;     genFarPointerSet
   5CEF 90 0C 06           2630 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x001b)
   5CF2 74 69              2631 	mov	a,#0x69
   5CF4 F0                 2632 	movx	@dptr,a
                           2633 ;	genPointerSet
                           2634 ;     genFarPointerSet
   5CF5 90 0C 07           2635 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x001c)
   5CF8 74 6F              2636 	mov	a,#0x6F
   5CFA F0                 2637 	movx	@dptr,a
                           2638 ;	genPointerSet
                           2639 ;     genFarPointerSet
   5CFB 90 0C 08           2640 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x001d)
   5CFE 74 2E              2641 	mov	a,#0x2E
   5D00 F0                 2642 	movx	@dptr,a
                           2643 ;	genPointerSet
                           2644 ;     genFarPointerSet
   5D01 90 0C 09           2645 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x001e)
   5D04 74 63              2646 	mov	a,#0x63
   5D06 F0                 2647 	movx	@dptr,a
                           2648 ;	genPointerSet
                           2649 ;     genFarPointerSet
   5D07 90 0C 0A           2650 	mov	dptr,#(_GPIO_get_inputs_file_name_4_4 + 0x001f)
   5D0A 74 00              2651 	mov	a,#0x00
   5D0C F0                 2652 	movx	@dptr,a
                           2653 ;	genAssign
   5D0D 90 05 80           2654 	mov	dptr,#_HAL_assert_fail_PARM_2
   5D10 74 B2              2655 	mov	a,#0xB2
   5D12 F0                 2656 	movx	@dptr,a
   5D13 E4                 2657 	clr	a
   5D14 A3                 2658 	inc	dptr
   5D15 F0                 2659 	movx	@dptr,a
   5D16 A3                 2660 	inc	dptr
   5D17 F0                 2661 	movx	@dptr,a
   5D18 A3                 2662 	inc	dptr
   5D19 F0                 2663 	movx	@dptr,a
                           2664 ;	genCall
   5D1A 75 82 EB           2665 	mov	dpl,#_GPIO_get_inputs_file_name_4_4
   5D1D 75 83 0B           2666 	mov	dph,#(_GPIO_get_inputs_file_name_4_4 >> 8)
   5D20 75 F0 00           2667 	mov	b,#0x00
   5D23 12 1B CC           2668 	lcall	_HAL_assert_fail
                    0B6A   2669 	C$core_gpio.c$180$1$1 ==.
                           2670 ;	../drivers/CoreGPIO/core_gpio.c:180: }
   5D26                    2671 00110$:
                    0B6A   2672 	C$core_gpio.c$182$1$1 ==.
                           2673 ;	../drivers/CoreGPIO/core_gpio.c:182: return gpio_in;
                           2674 ;	genAssign
   5D26 90 0B E7           2675 	mov	dptr,#_GPIO_get_inputs_gpio_in_1_1
   5D29 E0                 2676 	movx	a,@dptr
   5D2A FA                 2677 	mov	r2,a
   5D2B A3                 2678 	inc	dptr
   5D2C E0                 2679 	movx	a,@dptr
   5D2D FB                 2680 	mov	r3,a
   5D2E A3                 2681 	inc	dptr
   5D2F E0                 2682 	movx	a,@dptr
   5D30 FC                 2683 	mov	r4,a
   5D31 A3                 2684 	inc	dptr
   5D32 E0                 2685 	movx	a,@dptr
   5D33 FD                 2686 	mov	r5,a
                           2687 ;	genRet
   5D34 8A 82              2688 	mov	dpl,r2
   5D36 8B 83              2689 	mov	dph,r3
   5D38 8C F0              2690 	mov	b,r4
   5D3A ED                 2691 	mov	a,r5
   5D3B                    2692 00111$:
                    0B7F   2693 	C$core_gpio.c$183$1$1 ==.
                    0B7F   2694 	XG$GPIO_get_inputs$0$0 ==.
   5D3B 22                 2695 	ret
                           2696 ;------------------------------------------------------------
                           2697 ;Allocation info for local variables in function 'GPIO_get_outputs'
                           2698 ;------------------------------------------------------------
                           2699 ;this_gpio                 Allocated with name '_GPIO_get_outputs_this_gpio_1_1'
                           2700 ;gpio_out                  Allocated with name '_GPIO_get_outputs_gpio_out_1_1'
                           2701 ;file_name                 Allocated with name '_GPIO_get_outputs_file_name_4_4'
                           2702 ;------------------------------------------------------------
                    0B80   2703 	G$GPIO_get_outputs$0$0 ==.
                    0B80   2704 	C$core_gpio.c$189$1$1 ==.
                           2705 ;	../drivers/CoreGPIO/core_gpio.c:189: uint32_t GPIO_get_outputs
                           2706 ;	-----------------------------------------
                           2707 ;	 function GPIO_get_outputs
                           2708 ;	-----------------------------------------
   5D3C                    2709 _GPIO_get_outputs:
                           2710 ;	genReceive
   5D3C AA F0              2711 	mov	r2,b
   5D3E AB 83              2712 	mov	r3,dph
   5D40 E5 82              2713 	mov	a,dpl
   5D42 90 0C 0B           2714 	mov	dptr,#_GPIO_get_outputs_this_gpio_1_1
   5D45 F0                 2715 	movx	@dptr,a
   5D46 A3                 2716 	inc	dptr
   5D47 EB                 2717 	mov	a,r3
   5D48 F0                 2718 	movx	@dptr,a
   5D49 A3                 2719 	inc	dptr
   5D4A EA                 2720 	mov	a,r2
   5D4B F0                 2721 	movx	@dptr,a
                    0B90   2722 	C$core_gpio.c$194$1$1 ==.
                           2723 ;	../drivers/CoreGPIO/core_gpio.c:194: uint32_t gpio_out = 0;
                           2724 ;	genAssign
   5D4C 90 0C 0E           2725 	mov	dptr,#_GPIO_get_outputs_gpio_out_1_1
   5D4F E4                 2726 	clr	a
   5D50 F0                 2727 	movx	@dptr,a
   5D51 A3                 2728 	inc	dptr
   5D52 F0                 2729 	movx	@dptr,a
   5D53 A3                 2730 	inc	dptr
   5D54 F0                 2731 	movx	@dptr,a
   5D55 A3                 2732 	inc	dptr
   5D56 F0                 2733 	movx	@dptr,a
                    0B9B   2734 	C$core_gpio.c$196$1$1 ==.
                           2735 ;	../drivers/CoreGPIO/core_gpio.c:196: switch( this_gpio->apb_bus_width )
                           2736 ;	genAssign
   5D57 90 0C 0B           2737 	mov	dptr,#_GPIO_get_outputs_this_gpio_1_1
   5D5A E0                 2738 	movx	a,@dptr
   5D5B FA                 2739 	mov	r2,a
   5D5C A3                 2740 	inc	dptr
   5D5D E0                 2741 	movx	a,@dptr
   5D5E FB                 2742 	mov	r3,a
   5D5F A3                 2743 	inc	dptr
   5D60 E0                 2744 	movx	a,@dptr
   5D61 FC                 2745 	mov	r4,a
                           2746 ;	genPlus
                           2747 ;	genPlusIncr
   5D62 74 02              2748 	mov	a,#0x02
   5D64 25 02              2749 	add	a,ar2
   5D66 FD                 2750 	mov	r5,a
   5D67 74 00              2751 	mov	a,#0x00
   5D69 35 03              2752 	addc	a,ar3
   5D6B FE                 2753 	mov	r6,a
   5D6C 8C 07              2754 	mov	ar7,r4
                           2755 ;	genPointerGet
                           2756 ;	genGenPointerGet
   5D6E 8D 82              2757 	mov	dpl,r5
   5D70 8E 83              2758 	mov	dph,r6
   5D72 8F F0              2759 	mov	b,r7
   5D74 12 71 F6           2760 	lcall	__gptrget
   5D77 FD                 2761 	mov	r5,a
                           2762 ;	genCmpEq
                           2763 ;	gencjneshort
   5D78 BD 00 03           2764 	cjne	r5,#0x00,00116$
   5D7B 02 5D FB           2765 	ljmp	00103$
   5D7E                    2766 00116$:
                           2767 ;	genCmpEq
                           2768 ;	gencjneshort
   5D7E BD 01 03           2769 	cjne	r5,#0x01,00117$
   5D81 02 5D C4           2770 	ljmp	00102$
   5D84                    2771 00117$:
                           2772 ;	genCmpEq
                           2773 ;	gencjneshort
   5D84 BD 02 02           2774 	cjne	r5,#0x02,00118$
   5D87 80 03              2775 	sjmp	00119$
   5D89                    2776 00118$:
   5D89 02 5E 80           2777 	ljmp	00107$
   5D8C                    2778 00119$:
                    0BD0   2779 	C$core_gpio.c$199$2$2 ==.
                           2780 ;	../drivers/CoreGPIO/core_gpio.c:199: gpio_out = HAL_get_32bit_reg( this_gpio->base_addr, GPIO_OUT );
                           2781 ;	genPointerGet
                           2782 ;	genGenPointerGet
   5D8C 8A 82              2783 	mov	dpl,r2
   5D8E 8B 83              2784 	mov	dph,r3
   5D90 8C F0              2785 	mov	b,r4
   5D92 12 71 F6           2786 	lcall	__gptrget
   5D95 FD                 2787 	mov	r5,a
   5D96 A3                 2788 	inc	dptr
   5D97 12 71 F6           2789 	lcall	__gptrget
   5D9A FE                 2790 	mov	r6,a
                           2791 ;	genPlus
                           2792 ;	genPlusIncr
   5D9B 74 A0              2793 	mov	a,#0xA0
   5D9D 25 05              2794 	add	a,ar5
   5D9F FD                 2795 	mov	r5,a
   5DA0 74 00              2796 	mov	a,#0x00
   5DA2 35 06              2797 	addc	a,ar6
   5DA4 FE                 2798 	mov	r6,a
                           2799 ;	genCall
   5DA5 8D 82              2800 	mov	dpl,r5
   5DA7 8E 83              2801 	mov	dph,r6
   5DA9 12 1C 2C           2802 	lcall	_HW_get_32bit_reg
   5DAC AD 82              2803 	mov	r5,dpl
   5DAE AE 83              2804 	mov	r6,dph
   5DB0 AF F0              2805 	mov	r7,b
   5DB2 F8                 2806 	mov	r0,a
                           2807 ;	genAssign
   5DB3 90 0C 0E           2808 	mov	dptr,#_GPIO_get_outputs_gpio_out_1_1
   5DB6 ED                 2809 	mov	a,r5
   5DB7 F0                 2810 	movx	@dptr,a
   5DB8 A3                 2811 	inc	dptr
   5DB9 EE                 2812 	mov	a,r6
   5DBA F0                 2813 	movx	@dptr,a
   5DBB A3                 2814 	inc	dptr
   5DBC EF                 2815 	mov	a,r7
   5DBD F0                 2816 	movx	@dptr,a
   5DBE A3                 2817 	inc	dptr
   5DBF E8                 2818 	mov	a,r0
   5DC0 F0                 2819 	movx	@dptr,a
                    0C05   2820 	C$core_gpio.c$200$2$2 ==.
                           2821 ;	../drivers/CoreGPIO/core_gpio.c:200: break;
   5DC1 02 5F 59           2822 	ljmp	00110$
                    0C08   2823 	C$core_gpio.c$202$2$2 ==.
                           2824 ;	../drivers/CoreGPIO/core_gpio.c:202: case GPIO_APB_16_BITS_BUS:
   5DC4                    2825 00102$:
                    0C08   2826 	C$core_gpio.c$203$2$2 ==.
                           2827 ;	../drivers/CoreGPIO/core_gpio.c:203: gpio_out |= HAL_get_16bit_reg( this_gpio->base_addr, GPIO_OUT0 );
                           2828 ;	genPointerGet
                           2829 ;	genGenPointerGet
   5DC4 8A 82              2830 	mov	dpl,r2
   5DC6 8B 83              2831 	mov	dph,r3
   5DC8 8C F0              2832 	mov	b,r4
   5DCA 12 71 F6           2833 	lcall	__gptrget
   5DCD FD                 2834 	mov	r5,a
   5DCE A3                 2835 	inc	dptr
   5DCF 12 71 F6           2836 	lcall	__gptrget
   5DD2 FE                 2837 	mov	r6,a
                           2838 ;	genPlus
                           2839 ;	genPlusIncr
   5DD3 74 A0              2840 	mov	a,#0xA0
   5DD5 25 05              2841 	add	a,ar5
   5DD7 FD                 2842 	mov	r5,a
   5DD8 74 00              2843 	mov	a,#0x00
   5DDA 35 06              2844 	addc	a,ar6
   5DDC FE                 2845 	mov	r6,a
                           2846 ;	genCall
   5DDD 8D 82              2847 	mov	dpl,r5
   5DDF 8E 83              2848 	mov	dph,r6
   5DE1 12 1C 68           2849 	lcall	_HW_get_16bit_reg
   5DE4 AD 82              2850 	mov	r5,dpl
   5DE6 AE 83              2851 	mov	r6,dph
                           2852 ;	genCast
   5DE8 90 0C 0E           2853 	mov	dptr,#_GPIO_get_outputs_gpio_out_1_1
   5DEB ED                 2854 	mov	a,r5
   5DEC F0                 2855 	movx	@dptr,a
   5DED A3                 2856 	inc	dptr
   5DEE EE                 2857 	mov	a,r6
   5DEF F0                 2858 	movx	@dptr,a
   5DF0 A3                 2859 	inc	dptr
   5DF1 74 00              2860 	mov	a,#0x00
   5DF3 F0                 2861 	movx	@dptr,a
   5DF4 A3                 2862 	inc	dptr
   5DF5 74 00              2863 	mov	a,#0x00
   5DF7 F0                 2864 	movx	@dptr,a
                    0C3C   2865 	C$core_gpio.c$205$2$2 ==.
                           2866 ;	../drivers/CoreGPIO/core_gpio.c:205: break;
   5DF8 02 5F 59           2867 	ljmp	00110$
                    0C3F   2868 	C$core_gpio.c$207$2$2 ==.
                           2869 ;	../drivers/CoreGPIO/core_gpio.c:207: case GPIO_APB_8_BITS_BUS:
   5DFB                    2870 00103$:
                    0C3F   2871 	C$core_gpio.c$208$2$2 ==.
                           2872 ;	../drivers/CoreGPIO/core_gpio.c:208: gpio_out |= HAL_get_16bit_reg( this_gpio->base_addr, GPIO_OUT0 );
                           2873 ;	genPointerGet
                           2874 ;	genGenPointerGet
   5DFB 8A 82              2875 	mov	dpl,r2
   5DFD 8B 83              2876 	mov	dph,r3
   5DFF 8C F0              2877 	mov	b,r4
   5E01 12 71 F6           2878 	lcall	__gptrget
   5E04 FD                 2879 	mov	r5,a
   5E05 A3                 2880 	inc	dptr
   5E06 12 71 F6           2881 	lcall	__gptrget
   5E09 FE                 2882 	mov	r6,a
                           2883 ;	genPlus
                           2884 ;	genPlusIncr
   5E0A 74 A0              2885 	mov	a,#0xA0
   5E0C 25 05              2886 	add	a,ar5
   5E0E FD                 2887 	mov	r5,a
   5E0F 74 00              2888 	mov	a,#0x00
   5E11 35 06              2889 	addc	a,ar6
   5E13 FE                 2890 	mov	r6,a
                           2891 ;	genCall
   5E14 8D 82              2892 	mov	dpl,r5
   5E16 8E 83              2893 	mov	dph,r6
   5E18 C0 02              2894 	push	ar2
   5E1A C0 03              2895 	push	ar3
   5E1C C0 04              2896 	push	ar4
   5E1E 12 1C 68           2897 	lcall	_HW_get_16bit_reg
   5E21 AD 82              2898 	mov	r5,dpl
   5E23 AE 83              2899 	mov	r6,dph
   5E25 D0 04              2900 	pop	ar4
   5E27 D0 03              2901 	pop	ar3
   5E29 D0 02              2902 	pop	ar2
                           2903 ;	genCast
   5E2B 7F 00              2904 	mov	r7,#0x00
   5E2D 78 00              2905 	mov	r0,#0x00
                    0C73   2906 	C$core_gpio.c$209$2$2 ==.
                           2907 ;	../drivers/CoreGPIO/core_gpio.c:209: gpio_out |= (HAL_get_16bit_reg( this_gpio->base_addr, GPIO_OUT1 ) << 8);
                           2908 ;	genPointerGet
                           2909 ;	genGenPointerGet
   5E2F 8A 82              2910 	mov	dpl,r2
   5E31 8B 83              2911 	mov	dph,r3
   5E33 8C F0              2912 	mov	b,r4
   5E35 12 71 F6           2913 	lcall	__gptrget
   5E38 FA                 2914 	mov	r2,a
   5E39 A3                 2915 	inc	dptr
   5E3A 12 71 F6           2916 	lcall	__gptrget
   5E3D FB                 2917 	mov	r3,a
                           2918 ;	genPlus
                           2919 ;	genPlusIncr
   5E3E 74 A4              2920 	mov	a,#0xA4
   5E40 25 02              2921 	add	a,ar2
   5E42 FA                 2922 	mov	r2,a
   5E43 74 00              2923 	mov	a,#0x00
   5E45 35 03              2924 	addc	a,ar3
   5E47 FB                 2925 	mov	r3,a
                           2926 ;	genCall
   5E48 8A 82              2927 	mov	dpl,r2
   5E4A 8B 83              2928 	mov	dph,r3
   5E4C C0 05              2929 	push	ar5
   5E4E C0 06              2930 	push	ar6
   5E50 C0 07              2931 	push	ar7
   5E52 C0 00              2932 	push	ar0
   5E54 12 1C 68           2933 	lcall	_HW_get_16bit_reg
   5E57 AA 82              2934 	mov	r2,dpl
   5E59 AB 83              2935 	mov	r3,dph
   5E5B D0 00              2936 	pop	ar0
   5E5D D0 07              2937 	pop	ar7
   5E5F D0 06              2938 	pop	ar6
   5E61 D0 05              2939 	pop	ar5
                           2940 ;	genLeftShift
                           2941 ;	genLeftShiftLiteral
                           2942 ;	genlshTwo
   5E63 8A 03              2943 	mov	ar3,r2
   5E65 7A 00              2944 	mov	r2,#0x00
                           2945 ;	genCast
   5E67 7C 00              2946 	mov	r4,#0x00
   5E69 79 00              2947 	mov	r1,#0x00
                           2948 ;	genOr
   5E6B 90 0C 0E           2949 	mov	dptr,#_GPIO_get_outputs_gpio_out_1_1
   5E6E EA                 2950 	mov	a,r2
   5E6F 4D                 2951 	orl	a,r5
   5E70 F0                 2952 	movx	@dptr,a
   5E71 EB                 2953 	mov	a,r3
   5E72 4E                 2954 	orl	a,r6
   5E73 A3                 2955 	inc	dptr
   5E74 F0                 2956 	movx	@dptr,a
   5E75 EC                 2957 	mov	a,r4
   5E76 4F                 2958 	orl	a,r7
   5E77 A3                 2959 	inc	dptr
   5E78 F0                 2960 	movx	@dptr,a
   5E79 E9                 2961 	mov	a,r1
   5E7A 48                 2962 	orl	a,r0
   5E7B A3                 2963 	inc	dptr
   5E7C F0                 2964 	movx	@dptr,a
                    0CC1   2965 	C$core_gpio.c$212$2$2 ==.
                           2966 ;	../drivers/CoreGPIO/core_gpio.c:212: break;
   5E7D 02 5F 59           2967 	ljmp	00110$
                    0CC4   2968 	C$core_gpio.c$215$2$2 ==.
                           2969 ;	../drivers/CoreGPIO/core_gpio.c:215: HAL_ASSERT(0);
   5E80                    2970 00107$:
                           2971 ;	genPointerSet
                           2972 ;     genFarPointerSet
   5E80 90 0C 12           2973 	mov	dptr,#_GPIO_get_outputs_file_name_4_4
   5E83 74 2E              2974 	mov	a,#0x2E
   5E85 F0                 2975 	movx	@dptr,a
                           2976 ;	genPointerSet
                           2977 ;     genFarPointerSet
   5E86 90 0C 13           2978 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0001)
   5E89 74 2E              2979 	mov	a,#0x2E
   5E8B F0                 2980 	movx	@dptr,a
                           2981 ;	genPointerSet
                           2982 ;     genFarPointerSet
   5E8C 90 0C 14           2983 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0002)
   5E8F 74 2F              2984 	mov	a,#0x2F
   5E91 F0                 2985 	movx	@dptr,a
                           2986 ;	genPointerSet
                           2987 ;     genFarPointerSet
   5E92 90 0C 15           2988 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0003)
   5E95 74 64              2989 	mov	a,#0x64
   5E97 F0                 2990 	movx	@dptr,a
                           2991 ;	genPointerSet
                           2992 ;     genFarPointerSet
   5E98 90 0C 16           2993 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0004)
   5E9B 74 72              2994 	mov	a,#0x72
   5E9D F0                 2995 	movx	@dptr,a
                           2996 ;	genPointerSet
                           2997 ;     genFarPointerSet
   5E9E 90 0C 17           2998 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0005)
   5EA1 74 69              2999 	mov	a,#0x69
   5EA3 F0                 3000 	movx	@dptr,a
                           3001 ;	genPointerSet
                           3002 ;     genFarPointerSet
   5EA4 90 0C 18           3003 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0006)
   5EA7 74 76              3004 	mov	a,#0x76
   5EA9 F0                 3005 	movx	@dptr,a
                           3006 ;	genPointerSet
                           3007 ;     genFarPointerSet
   5EAA 90 0C 19           3008 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0007)
   5EAD 74 65              3009 	mov	a,#0x65
   5EAF F0                 3010 	movx	@dptr,a
                           3011 ;	genPointerSet
                           3012 ;     genFarPointerSet
   5EB0 90 0C 1A           3013 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0008)
   5EB3 74 72              3014 	mov	a,#0x72
   5EB5 F0                 3015 	movx	@dptr,a
                           3016 ;	genPointerSet
                           3017 ;     genFarPointerSet
   5EB6 90 0C 1B           3018 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0009)
   5EB9 74 73              3019 	mov	a,#0x73
   5EBB F0                 3020 	movx	@dptr,a
                           3021 ;	genPointerSet
                           3022 ;     genFarPointerSet
   5EBC 90 0C 1C           3023 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x000a)
   5EBF 74 2F              3024 	mov	a,#0x2F
   5EC1 F0                 3025 	movx	@dptr,a
                           3026 ;	genPointerSet
                           3027 ;     genFarPointerSet
   5EC2 90 0C 1D           3028 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x000b)
   5EC5 74 43              3029 	mov	a,#0x43
   5EC7 F0                 3030 	movx	@dptr,a
                           3031 ;	genPointerSet
                           3032 ;     genFarPointerSet
   5EC8 90 0C 1E           3033 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x000c)
   5ECB 74 6F              3034 	mov	a,#0x6F
   5ECD F0                 3035 	movx	@dptr,a
                           3036 ;	genPointerSet
                           3037 ;     genFarPointerSet
   5ECE 90 0C 1F           3038 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x000d)
   5ED1 74 72              3039 	mov	a,#0x72
   5ED3 F0                 3040 	movx	@dptr,a
                           3041 ;	genPointerSet
                           3042 ;     genFarPointerSet
   5ED4 90 0C 20           3043 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x000e)
   5ED7 74 65              3044 	mov	a,#0x65
   5ED9 F0                 3045 	movx	@dptr,a
                           3046 ;	genPointerSet
                           3047 ;     genFarPointerSet
   5EDA 90 0C 21           3048 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x000f)
   5EDD 74 47              3049 	mov	a,#0x47
   5EDF F0                 3050 	movx	@dptr,a
                           3051 ;	genPointerSet
                           3052 ;     genFarPointerSet
   5EE0 90 0C 22           3053 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0010)
   5EE3 74 50              3054 	mov	a,#0x50
   5EE5 F0                 3055 	movx	@dptr,a
                           3056 ;	genPointerSet
                           3057 ;     genFarPointerSet
   5EE6 90 0C 23           3058 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0011)
   5EE9 74 49              3059 	mov	a,#0x49
   5EEB F0                 3060 	movx	@dptr,a
                           3061 ;	genPointerSet
                           3062 ;     genFarPointerSet
   5EEC 90 0C 24           3063 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0012)
   5EEF 74 4F              3064 	mov	a,#0x4F
   5EF1 F0                 3065 	movx	@dptr,a
                           3066 ;	genPointerSet
                           3067 ;     genFarPointerSet
   5EF2 90 0C 25           3068 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0013)
   5EF5 74 2F              3069 	mov	a,#0x2F
   5EF7 F0                 3070 	movx	@dptr,a
                           3071 ;	genPointerSet
                           3072 ;     genFarPointerSet
   5EF8 90 0C 26           3073 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0014)
   5EFB 74 63              3074 	mov	a,#0x63
   5EFD F0                 3075 	movx	@dptr,a
                           3076 ;	genPointerSet
                           3077 ;     genFarPointerSet
   5EFE 90 0C 27           3078 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0015)
   5F01 74 6F              3079 	mov	a,#0x6F
   5F03 F0                 3080 	movx	@dptr,a
                           3081 ;	genPointerSet
                           3082 ;     genFarPointerSet
   5F04 90 0C 28           3083 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0016)
   5F07 74 72              3084 	mov	a,#0x72
   5F09 F0                 3085 	movx	@dptr,a
                           3086 ;	genPointerSet
                           3087 ;     genFarPointerSet
   5F0A 90 0C 29           3088 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0017)
   5F0D 74 65              3089 	mov	a,#0x65
   5F0F F0                 3090 	movx	@dptr,a
                           3091 ;	genPointerSet
                           3092 ;     genFarPointerSet
   5F10 90 0C 2A           3093 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0018)
   5F13 74 5F              3094 	mov	a,#0x5F
   5F15 F0                 3095 	movx	@dptr,a
                           3096 ;	genPointerSet
                           3097 ;     genFarPointerSet
   5F16 90 0C 2B           3098 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x0019)
   5F19 74 67              3099 	mov	a,#0x67
   5F1B F0                 3100 	movx	@dptr,a
                           3101 ;	genPointerSet
                           3102 ;     genFarPointerSet
   5F1C 90 0C 2C           3103 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x001a)
   5F1F 74 70              3104 	mov	a,#0x70
   5F21 F0                 3105 	movx	@dptr,a
                           3106 ;	genPointerSet
                           3107 ;     genFarPointerSet
   5F22 90 0C 2D           3108 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x001b)
   5F25 74 69              3109 	mov	a,#0x69
   5F27 F0                 3110 	movx	@dptr,a
                           3111 ;	genPointerSet
                           3112 ;     genFarPointerSet
   5F28 90 0C 2E           3113 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x001c)
   5F2B 74 6F              3114 	mov	a,#0x6F
   5F2D F0                 3115 	movx	@dptr,a
                           3116 ;	genPointerSet
                           3117 ;     genFarPointerSet
   5F2E 90 0C 2F           3118 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x001d)
   5F31 74 2E              3119 	mov	a,#0x2E
   5F33 F0                 3120 	movx	@dptr,a
                           3121 ;	genPointerSet
                           3122 ;     genFarPointerSet
   5F34 90 0C 30           3123 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x001e)
   5F37 74 63              3124 	mov	a,#0x63
   5F39 F0                 3125 	movx	@dptr,a
                           3126 ;	genPointerSet
                           3127 ;     genFarPointerSet
   5F3A 90 0C 31           3128 	mov	dptr,#(_GPIO_get_outputs_file_name_4_4 + 0x001f)
   5F3D 74 00              3129 	mov	a,#0x00
   5F3F F0                 3130 	movx	@dptr,a
                           3131 ;	genAssign
   5F40 90 05 80           3132 	mov	dptr,#_HAL_assert_fail_PARM_2
   5F43 74 D7              3133 	mov	a,#0xD7
   5F45 F0                 3134 	movx	@dptr,a
   5F46 E4                 3135 	clr	a
   5F47 A3                 3136 	inc	dptr
   5F48 F0                 3137 	movx	@dptr,a
   5F49 A3                 3138 	inc	dptr
   5F4A F0                 3139 	movx	@dptr,a
   5F4B A3                 3140 	inc	dptr
   5F4C F0                 3141 	movx	@dptr,a
                           3142 ;	genCall
   5F4D 75 82 12           3143 	mov	dpl,#_GPIO_get_outputs_file_name_4_4
   5F50 75 83 0C           3144 	mov	dph,#(_GPIO_get_outputs_file_name_4_4 >> 8)
   5F53 75 F0 00           3145 	mov	b,#0x00
   5F56 12 1B CC           3146 	lcall	_HAL_assert_fail
                    0D9D   3147 	C$core_gpio.c$217$1$1 ==.
                           3148 ;	../drivers/CoreGPIO/core_gpio.c:217: }
   5F59                    3149 00110$:
                    0D9D   3150 	C$core_gpio.c$219$1$1 ==.
                           3151 ;	../drivers/CoreGPIO/core_gpio.c:219: return gpio_out;
                           3152 ;	genAssign
   5F59 90 0C 0E           3153 	mov	dptr,#_GPIO_get_outputs_gpio_out_1_1
   5F5C E0                 3154 	movx	a,@dptr
   5F5D FA                 3155 	mov	r2,a
   5F5E A3                 3156 	inc	dptr
   5F5F E0                 3157 	movx	a,@dptr
   5F60 FB                 3158 	mov	r3,a
   5F61 A3                 3159 	inc	dptr
   5F62 E0                 3160 	movx	a,@dptr
   5F63 FC                 3161 	mov	r4,a
   5F64 A3                 3162 	inc	dptr
   5F65 E0                 3163 	movx	a,@dptr
   5F66 FD                 3164 	mov	r5,a
                           3165 ;	genRet
   5F67 8A 82              3166 	mov	dpl,r2
   5F69 8B 83              3167 	mov	dph,r3
   5F6B 8C F0              3168 	mov	b,r4
   5F6D ED                 3169 	mov	a,r5
   5F6E                    3170 00111$:
                    0DB2   3171 	C$core_gpio.c$220$1$1 ==.
                    0DB2   3172 	XG$GPIO_get_outputs$0$0 ==.
   5F6E 22                 3173 	ret
                           3174 ;------------------------------------------------------------
                           3175 ;Allocation info for local variables in function 'GPIO_set_output'
                           3176 ;------------------------------------------------------------
                           3177 ;sloc0                     Allocated with name '_GPIO_set_output_sloc0_1_0'
                           3178 ;sloc1                     Allocated with name '_GPIO_set_output_sloc1_1_0'
                           3179 ;sloc2                     Allocated with name '_GPIO_set_output_sloc2_1_0'
                           3180 ;port_id                   Allocated with name '_GPIO_set_output_PARM_2'
                           3181 ;value                     Allocated with name '_GPIO_set_output_PARM_3'
                           3182 ;this_gpio                 Allocated with name '_GPIO_set_output_this_gpio_1_1'
                           3183 ;file_name                 Allocated with name '_GPIO_set_output_file_name_3_3'
                           3184 ;outputs_state             Allocated with name '_GPIO_set_output_outputs_state_3_5'
                           3185 ;file_name                 Allocated with name '_GPIO_set_output_file_name_5_9'
                           3186 ;outputs_state             Allocated with name '_GPIO_set_output_outputs_state_3_10'
                           3187 ;gpio_out_reg_addr         Allocated with name '_GPIO_set_output_gpio_out_reg_addr_3_10'
                           3188 ;file_name                 Allocated with name '_GPIO_set_output_file_name_5_14'
                           3189 ;outputs_state             Allocated with name '_GPIO_set_output_outputs_state_3_15'
                           3190 ;gpio_out_reg_addr         Allocated with name '_GPIO_set_output_gpio_out_reg_addr_3_15'
                           3191 ;file_name                 Allocated with name '_GPIO_set_output_file_name_5_19'
                           3192 ;file_name                 Allocated with name '_GPIO_set_output_file_name_4_21'
                           3193 ;------------------------------------------------------------
                    0DB3   3194 	G$GPIO_set_output$0$0 ==.
                    0DB3   3195 	C$core_gpio.c$226$1$1 ==.
                           3196 ;	../drivers/CoreGPIO/core_gpio.c:226: void GPIO_set_output
                           3197 ;	-----------------------------------------
                           3198 ;	 function GPIO_set_output
                           3199 ;	-----------------------------------------
   5F6F                    3200 _GPIO_set_output:
                           3201 ;	genReceive
   5F6F AA F0              3202 	mov	r2,b
   5F71 AB 83              3203 	mov	r3,dph
   5F73 E5 82              3204 	mov	a,dpl
   5F75 90 0C 34           3205 	mov	dptr,#_GPIO_set_output_this_gpio_1_1
   5F78 F0                 3206 	movx	@dptr,a
   5F79 A3                 3207 	inc	dptr
   5F7A EB                 3208 	mov	a,r3
   5F7B F0                 3209 	movx	@dptr,a
   5F7C A3                 3210 	inc	dptr
   5F7D EA                 3211 	mov	a,r2
   5F7E F0                 3212 	movx	@dptr,a
                    0DC3   3213 	C$core_gpio.c$233$2$2 ==.
                           3214 ;	../drivers/CoreGPIO/core_gpio.c:233: HAL_ASSERT( port_id < NB_OF_GPIO );
                           3215 ;	genAssign
   5F7F 90 0C 32           3216 	mov	dptr,#_GPIO_set_output_PARM_2
   5F82 E0                 3217 	movx	a,@dptr
   5F83 FA                 3218 	mov	r2,a
                           3219 ;	genCmpLt
                           3220 ;	genCmp
   5F84 BA 20 00           3221 	cjne	r2,#0x20,00152$
   5F87                    3222 00152$:
                           3223 ;	genIfxJump
   5F87 50 03              3224 	jnc	00153$
   5F89 02 60 69           3225 	ljmp	00104$
   5F8C                    3226 00153$:
                           3227 ;	genPointerSet
                           3228 ;     genFarPointerSet
   5F8C 90 0C 37           3229 	mov	dptr,#_GPIO_set_output_file_name_3_3
   5F8F 74 2E              3230 	mov	a,#0x2E
   5F91 F0                 3231 	movx	@dptr,a
                           3232 ;	genPointerSet
                           3233 ;     genFarPointerSet
   5F92 90 0C 38           3234 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0001)
   5F95 74 2E              3235 	mov	a,#0x2E
   5F97 F0                 3236 	movx	@dptr,a
                           3237 ;	genPointerSet
                           3238 ;     genFarPointerSet
   5F98 90 0C 39           3239 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0002)
   5F9B 74 2F              3240 	mov	a,#0x2F
   5F9D F0                 3241 	movx	@dptr,a
                           3242 ;	genPointerSet
                           3243 ;     genFarPointerSet
   5F9E 90 0C 3A           3244 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0003)
   5FA1 74 64              3245 	mov	a,#0x64
   5FA3 F0                 3246 	movx	@dptr,a
                           3247 ;	genPointerSet
                           3248 ;     genFarPointerSet
   5FA4 90 0C 3B           3249 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0004)
   5FA7 74 72              3250 	mov	a,#0x72
   5FA9 F0                 3251 	movx	@dptr,a
                           3252 ;	genPointerSet
                           3253 ;     genFarPointerSet
   5FAA 90 0C 3C           3254 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0005)
   5FAD 74 69              3255 	mov	a,#0x69
   5FAF F0                 3256 	movx	@dptr,a
                           3257 ;	genPointerSet
                           3258 ;     genFarPointerSet
   5FB0 90 0C 3D           3259 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0006)
   5FB3 74 76              3260 	mov	a,#0x76
   5FB5 F0                 3261 	movx	@dptr,a
                           3262 ;	genPointerSet
                           3263 ;     genFarPointerSet
   5FB6 90 0C 3E           3264 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0007)
   5FB9 74 65              3265 	mov	a,#0x65
   5FBB F0                 3266 	movx	@dptr,a
                           3267 ;	genPointerSet
                           3268 ;     genFarPointerSet
   5FBC 90 0C 3F           3269 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0008)
   5FBF 74 72              3270 	mov	a,#0x72
   5FC1 F0                 3271 	movx	@dptr,a
                           3272 ;	genPointerSet
                           3273 ;     genFarPointerSet
   5FC2 90 0C 40           3274 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0009)
   5FC5 74 73              3275 	mov	a,#0x73
   5FC7 F0                 3276 	movx	@dptr,a
                           3277 ;	genPointerSet
                           3278 ;     genFarPointerSet
   5FC8 90 0C 41           3279 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x000a)
   5FCB 74 2F              3280 	mov	a,#0x2F
   5FCD F0                 3281 	movx	@dptr,a
                           3282 ;	genPointerSet
                           3283 ;     genFarPointerSet
   5FCE 90 0C 42           3284 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x000b)
   5FD1 74 43              3285 	mov	a,#0x43
   5FD3 F0                 3286 	movx	@dptr,a
                           3287 ;	genPointerSet
                           3288 ;     genFarPointerSet
   5FD4 90 0C 43           3289 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x000c)
   5FD7 74 6F              3290 	mov	a,#0x6F
   5FD9 F0                 3291 	movx	@dptr,a
                           3292 ;	genPointerSet
                           3293 ;     genFarPointerSet
   5FDA 90 0C 44           3294 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x000d)
   5FDD 74 72              3295 	mov	a,#0x72
   5FDF F0                 3296 	movx	@dptr,a
                           3297 ;	genPointerSet
                           3298 ;     genFarPointerSet
   5FE0 90 0C 45           3299 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x000e)
   5FE3 74 65              3300 	mov	a,#0x65
   5FE5 F0                 3301 	movx	@dptr,a
                           3302 ;	genPointerSet
                           3303 ;     genFarPointerSet
   5FE6 90 0C 46           3304 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x000f)
   5FE9 74 47              3305 	mov	a,#0x47
   5FEB F0                 3306 	movx	@dptr,a
                           3307 ;	genPointerSet
                           3308 ;     genFarPointerSet
   5FEC 90 0C 47           3309 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0010)
   5FEF 74 50              3310 	mov	a,#0x50
   5FF1 F0                 3311 	movx	@dptr,a
                           3312 ;	genPointerSet
                           3313 ;     genFarPointerSet
   5FF2 90 0C 48           3314 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0011)
   5FF5 74 49              3315 	mov	a,#0x49
   5FF7 F0                 3316 	movx	@dptr,a
                           3317 ;	genPointerSet
                           3318 ;     genFarPointerSet
   5FF8 90 0C 49           3319 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0012)
   5FFB 74 4F              3320 	mov	a,#0x4F
   5FFD F0                 3321 	movx	@dptr,a
                           3322 ;	genPointerSet
                           3323 ;     genFarPointerSet
   5FFE 90 0C 4A           3324 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0013)
   6001 74 2F              3325 	mov	a,#0x2F
   6003 F0                 3326 	movx	@dptr,a
                           3327 ;	genPointerSet
                           3328 ;     genFarPointerSet
   6004 90 0C 4B           3329 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0014)
   6007 74 63              3330 	mov	a,#0x63
   6009 F0                 3331 	movx	@dptr,a
                           3332 ;	genPointerSet
                           3333 ;     genFarPointerSet
   600A 90 0C 4C           3334 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0015)
   600D 74 6F              3335 	mov	a,#0x6F
   600F F0                 3336 	movx	@dptr,a
                           3337 ;	genPointerSet
                           3338 ;     genFarPointerSet
   6010 90 0C 4D           3339 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0016)
   6013 74 72              3340 	mov	a,#0x72
   6015 F0                 3341 	movx	@dptr,a
                           3342 ;	genPointerSet
                           3343 ;     genFarPointerSet
   6016 90 0C 4E           3344 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0017)
   6019 74 65              3345 	mov	a,#0x65
   601B F0                 3346 	movx	@dptr,a
                           3347 ;	genPointerSet
                           3348 ;     genFarPointerSet
   601C 90 0C 4F           3349 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0018)
   601F 74 5F              3350 	mov	a,#0x5F
   6021 F0                 3351 	movx	@dptr,a
                           3352 ;	genPointerSet
                           3353 ;     genFarPointerSet
   6022 90 0C 50           3354 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x0019)
   6025 74 67              3355 	mov	a,#0x67
   6027 F0                 3356 	movx	@dptr,a
                           3357 ;	genPointerSet
                           3358 ;     genFarPointerSet
   6028 90 0C 51           3359 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x001a)
   602B 74 70              3360 	mov	a,#0x70
   602D F0                 3361 	movx	@dptr,a
                           3362 ;	genPointerSet
                           3363 ;     genFarPointerSet
   602E 90 0C 52           3364 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x001b)
   6031 74 69              3365 	mov	a,#0x69
   6033 F0                 3366 	movx	@dptr,a
                           3367 ;	genPointerSet
                           3368 ;     genFarPointerSet
   6034 90 0C 53           3369 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x001c)
   6037 74 6F              3370 	mov	a,#0x6F
   6039 F0                 3371 	movx	@dptr,a
                           3372 ;	genPointerSet
                           3373 ;     genFarPointerSet
   603A 90 0C 54           3374 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x001d)
   603D 74 2E              3375 	mov	a,#0x2E
   603F F0                 3376 	movx	@dptr,a
                           3377 ;	genPointerSet
                           3378 ;     genFarPointerSet
   6040 90 0C 55           3379 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x001e)
   6043 74 63              3380 	mov	a,#0x63
   6045 F0                 3381 	movx	@dptr,a
                           3382 ;	genPointerSet
                           3383 ;     genFarPointerSet
   6046 90 0C 56           3384 	mov	dptr,#(_GPIO_set_output_file_name_3_3 + 0x001f)
   6049 74 00              3385 	mov	a,#0x00
   604B F0                 3386 	movx	@dptr,a
                           3387 ;	genAssign
   604C 90 05 80           3388 	mov	dptr,#_HAL_assert_fail_PARM_2
   604F 74 E9              3389 	mov	a,#0xE9
   6051 F0                 3390 	movx	@dptr,a
   6052 E4                 3391 	clr	a
   6053 A3                 3392 	inc	dptr
   6054 F0                 3393 	movx	@dptr,a
   6055 A3                 3394 	inc	dptr
   6056 F0                 3395 	movx	@dptr,a
   6057 A3                 3396 	inc	dptr
   6058 F0                 3397 	movx	@dptr,a
                           3398 ;	genCall
   6059 75 82 37           3399 	mov	dpl,#_GPIO_set_output_file_name_3_3
   605C 75 83 0C           3400 	mov	dph,#(_GPIO_set_output_file_name_3_3 >> 8)
   605F 75 F0 00           3401 	mov	b,#0x00
   6062 C0 02              3402 	push	ar2
   6064 12 1B CC           3403 	lcall	_HAL_assert_fail
   6067 D0 02              3404 	pop	ar2
   6069                    3405 00104$:
                    0EAD   3406 	C$core_gpio.c$236$1$1 ==.
                           3407 ;	../drivers/CoreGPIO/core_gpio.c:236: switch( this_gpio->apb_bus_width )
                           3408 ;	genAssign
   6069 90 0C 34           3409 	mov	dptr,#_GPIO_set_output_this_gpio_1_1
   606C E0                 3410 	movx	a,@dptr
   606D FB                 3411 	mov	r3,a
   606E A3                 3412 	inc	dptr
   606F E0                 3413 	movx	a,@dptr
   6070 FC                 3414 	mov	r4,a
   6071 A3                 3415 	inc	dptr
   6072 E0                 3416 	movx	a,@dptr
   6073 FD                 3417 	mov	r5,a
                           3418 ;	genPlus
                           3419 ;	genPlusIncr
   6074 74 02              3420 	mov	a,#0x02
   6076 25 03              3421 	add	a,ar3
   6078 FE                 3422 	mov	r6,a
   6079 74 00              3423 	mov	a,#0x00
   607B 35 04              3424 	addc	a,ar4
   607D FF                 3425 	mov	r7,a
   607E 8D 00              3426 	mov	ar0,r5
                           3427 ;	genPointerGet
                           3428 ;	genGenPointerGet
   6080 8E 82              3429 	mov	dpl,r6
   6082 8F 83              3430 	mov	dph,r7
   6084 88 F0              3431 	mov	b,r0
   6086 12 71 F6           3432 	lcall	__gptrget
   6089 FE                 3433 	mov	r6,a
                           3434 ;	genCmpEq
                           3435 ;	gencjneshort
   608A BE 00 03           3436 	cjne	r6,#0x00,00154$
   608D 02 64 A1           3437 	ljmp	00124$
   6090                    3438 00154$:
                           3439 ;	genCmpEq
                           3440 ;	gencjneshort
   6090 BE 01 03           3441 	cjne	r6,#0x01,00155$
   6093 02 62 C2           3442 	ljmp	00115$
   6096                    3443 00155$:
                           3444 ;	genCmpEq
                           3445 ;	gencjneshort
   6096 BE 02 02           3446 	cjne	r6,#0x02,00156$
   6099 80 03              3447 	sjmp	00157$
   609B                    3448 00156$:
   609B 02 66 39           3449 	ljmp	00136$
   609E                    3450 00157$:
                    0EE2   3451 	C$core_gpio.c$242$1$1 ==.
                           3452 ;	../drivers/CoreGPIO/core_gpio.c:242: outputs_state = HAL_get_32bit_reg( this_gpio->base_addr, GPIO_OUT );
                           3453 ;	genIpush
   609E C0 02              3454 	push	ar2
                           3455 ;	genPointerGet
                           3456 ;	genGenPointerGet
   60A0 8B 82              3457 	mov	dpl,r3
   60A2 8C 83              3458 	mov	dph,r4
   60A4 8D F0              3459 	mov	b,r5
   60A6 12 71 F6           3460 	lcall	__gptrget
   60A9 FE                 3461 	mov	r6,a
   60AA A3                 3462 	inc	dptr
   60AB 12 71 F6           3463 	lcall	__gptrget
   60AE FF                 3464 	mov	r7,a
                           3465 ;	genPlus
                           3466 ;	genPlusIncr
   60AF 74 A0              3467 	mov	a,#0xA0
   60B1 25 06              3468 	add	a,ar6
   60B3 FE                 3469 	mov	r6,a
   60B4 74 00              3470 	mov	a,#0x00
   60B6 35 07              3471 	addc	a,ar7
   60B8 FF                 3472 	mov	r7,a
                           3473 ;	genCall
   60B9 8E 82              3474 	mov	dpl,r6
   60BB 8F 83              3475 	mov	dph,r7
   60BD C0 02              3476 	push	ar2
   60BF 12 1C 2C           3477 	lcall	_HW_get_32bit_reg
   60C2 85 82 62           3478 	mov	_GPIO_set_output_sloc0_1_0,dpl
   60C5 85 83 63           3479 	mov	(_GPIO_set_output_sloc0_1_0 + 1),dph
   60C8 85 F0 64           3480 	mov	(_GPIO_set_output_sloc0_1_0 + 2),b
   60CB F5 65              3481 	mov	(_GPIO_set_output_sloc0_1_0 + 3),a
   60CD D0 02              3482 	pop	ar2
                    0F13   3483 	C$core_gpio.c$243$3$5 ==.
                           3484 ;	../drivers/CoreGPIO/core_gpio.c:243: if ( 0 == value )
                           3485 ;	genAssign
   60CF 90 0C 33           3486 	mov	dptr,#_GPIO_set_output_PARM_3
   60D2 E0                 3487 	movx	a,@dptr
   60D3 FA                 3488 	mov	r2,a
                           3489 ;	genCmpEq
                           3490 ;	gencjne
                           3491 ;	gencjneshort
   60D4 BA 00 04           3492 	cjne	r2,#0x00,00158$
   60D7 74 01              3493 	mov	a,#0x01
   60D9 80 01              3494 	sjmp	00159$
   60DB                    3495 00158$:
   60DB E4                 3496 	clr	a
   60DC                    3497 00159$:
                           3498 ;	genIpop
   60DC D0 02              3499 	pop	ar2
                           3500 ;	genIfx
                           3501 ;	genIfxJump
   60DE 70 03              3502 	jnz	00160$
   60E0 02 61 1C           3503 	ljmp	00108$
   60E3                    3504 00160$:
                    0F27   3505 	C$core_gpio.c$245$4$6 ==.
                           3506 ;	../drivers/CoreGPIO/core_gpio.c:245: outputs_state &= ~(1 << port_id);
                           3507 ;	genLeftShift
   60E3 8A F0              3508 	mov	b,r2
   60E5 05 F0              3509 	inc	b
   60E7 7E 01              3510 	mov	r6,#0x01
   60E9 7F 00              3511 	mov	r7,#0x00
   60EB 80 07              3512 	sjmp	00162$
   60ED                    3513 00161$:
   60ED EE                 3514 	mov	a,r6
   60EE 25 E0              3515 	add	a,acc
   60F0 FE                 3516 	mov	r6,a
   60F1 EF                 3517 	mov	a,r7
   60F2 33                 3518 	rlc	a
   60F3 FF                 3519 	mov	r7,a
   60F4                    3520 00162$:
   60F4 D5 F0 F6           3521 	djnz	b,00161$
                           3522 ;	genCpl
   60F7 EE                 3523 	mov	a,r6
   60F8 F4                 3524 	cpl	a
   60F9 FE                 3525 	mov	r6,a
   60FA EF                 3526 	mov	a,r7
   60FB F4                 3527 	cpl	a
   60FC FF                 3528 	mov	r7,a
                           3529 ;	genCast
   60FD EF                 3530 	mov	a,r7
   60FE 33                 3531 	rlc	a
   60FF 95 E0              3532 	subb	a,acc
   6101 F8                 3533 	mov	r0,a
   6102 F9                 3534 	mov	r1,a
                           3535 ;	genAnd
   6103 90 0C 57           3536 	mov	dptr,#_GPIO_set_output_outputs_state_3_5
   6106 EE                 3537 	mov	a,r6
   6107 55 62              3538 	anl	a,_GPIO_set_output_sloc0_1_0
   6109 F0                 3539 	movx	@dptr,a
   610A EF                 3540 	mov	a,r7
   610B 55 63              3541 	anl	a,(_GPIO_set_output_sloc0_1_0 + 1)
   610D A3                 3542 	inc	dptr
   610E F0                 3543 	movx	@dptr,a
   610F E8                 3544 	mov	a,r0
   6110 55 64              3545 	anl	a,(_GPIO_set_output_sloc0_1_0 + 2)
   6112 A3                 3546 	inc	dptr
   6113 F0                 3547 	movx	@dptr,a
   6114 E9                 3548 	mov	a,r1
   6115 55 65              3549 	anl	a,(_GPIO_set_output_sloc0_1_0 + 3)
   6117 A3                 3550 	inc	dptr
   6118 F0                 3551 	movx	@dptr,a
   6119 02 61 4C           3552 	ljmp	00109$
   611C                    3553 00108$:
                    0F60   3554 	C$core_gpio.c$249$4$7 ==.
                           3555 ;	../drivers/CoreGPIO/core_gpio.c:249: outputs_state |= 1 << port_id;
                           3556 ;	genLeftShift
   611C 8A F0              3557 	mov	b,r2
   611E 05 F0              3558 	inc	b
   6120 7E 01              3559 	mov	r6,#0x01
   6122 7F 00              3560 	mov	r7,#0x00
   6124 80 07              3561 	sjmp	00164$
   6126                    3562 00163$:
   6126 EE                 3563 	mov	a,r6
   6127 25 E0              3564 	add	a,acc
   6129 FE                 3565 	mov	r6,a
   612A EF                 3566 	mov	a,r7
   612B 33                 3567 	rlc	a
   612C FF                 3568 	mov	r7,a
   612D                    3569 00164$:
   612D D5 F0 F6           3570 	djnz	b,00163$
                           3571 ;	genCast
   6130 EF                 3572 	mov	a,r7
   6131 33                 3573 	rlc	a
   6132 95 E0              3574 	subb	a,acc
   6134 F8                 3575 	mov	r0,a
   6135 F9                 3576 	mov	r1,a
                           3577 ;	genOr
   6136 90 0C 57           3578 	mov	dptr,#_GPIO_set_output_outputs_state_3_5
   6139 EE                 3579 	mov	a,r6
   613A 45 62              3580 	orl	a,_GPIO_set_output_sloc0_1_0
   613C F0                 3581 	movx	@dptr,a
   613D EF                 3582 	mov	a,r7
   613E 45 63              3583 	orl	a,(_GPIO_set_output_sloc0_1_0 + 1)
   6140 A3                 3584 	inc	dptr
   6141 F0                 3585 	movx	@dptr,a
   6142 E8                 3586 	mov	a,r0
   6143 45 64              3587 	orl	a,(_GPIO_set_output_sloc0_1_0 + 2)
   6145 A3                 3588 	inc	dptr
   6146 F0                 3589 	movx	@dptr,a
   6147 E9                 3590 	mov	a,r1
   6148 45 65              3591 	orl	a,(_GPIO_set_output_sloc0_1_0 + 3)
   614A A3                 3592 	inc	dptr
   614B F0                 3593 	movx	@dptr,a
   614C                    3594 00109$:
                    0F90   3595 	C$core_gpio.c$251$3$5 ==.
                           3596 ;	../drivers/CoreGPIO/core_gpio.c:251: HAL_set_32bit_reg( this_gpio->base_addr, GPIO_OUT, outputs_state );
                           3597 ;	genAssign
   614C 90 0C 34           3598 	mov	dptr,#_GPIO_set_output_this_gpio_1_1
   614F E0                 3599 	movx	a,@dptr
   6150 FA                 3600 	mov	r2,a
   6151 A3                 3601 	inc	dptr
   6152 E0                 3602 	movx	a,@dptr
   6153 FB                 3603 	mov	r3,a
   6154 A3                 3604 	inc	dptr
   6155 E0                 3605 	movx	a,@dptr
   6156 FC                 3606 	mov	r4,a
                           3607 ;	genPointerGet
                           3608 ;	genGenPointerGet
   6157 8A 82              3609 	mov	dpl,r2
   6159 8B 83              3610 	mov	dph,r3
   615B 8C F0              3611 	mov	b,r4
   615D 12 71 F6           3612 	lcall	__gptrget
   6160 F9                 3613 	mov	r1,a
   6161 A3                 3614 	inc	dptr
   6162 12 71 F6           3615 	lcall	__gptrget
   6165 FE                 3616 	mov	r6,a
                           3617 ;	genPlus
                           3618 ;	genPlusIncr
   6166 74 A0              3619 	mov	a,#0xA0
   6168 25 01              3620 	add	a,ar1
   616A FD                 3621 	mov	r5,a
   616B 74 00              3622 	mov	a,#0x00
   616D 35 06              3623 	addc	a,ar6
   616F FE                 3624 	mov	r6,a
                           3625 ;	genAssign
   6170 90 0C 57           3626 	mov	dptr,#_GPIO_set_output_outputs_state_3_5
   6173 E0                 3627 	movx	a,@dptr
   6174 F5 66              3628 	mov	_GPIO_set_output_sloc2_1_0,a
   6176 A3                 3629 	inc	dptr
   6177 E0                 3630 	movx	a,@dptr
   6178 F5 67              3631 	mov	(_GPIO_set_output_sloc2_1_0 + 1),a
   617A A3                 3632 	inc	dptr
   617B E0                 3633 	movx	a,@dptr
   617C F5 68              3634 	mov	(_GPIO_set_output_sloc2_1_0 + 2),a
   617E A3                 3635 	inc	dptr
   617F E0                 3636 	movx	a,@dptr
   6180 F5 69              3637 	mov	(_GPIO_set_output_sloc2_1_0 + 3),a
                           3638 ;	genAssign
   6182 90 05 9E           3639 	mov	dptr,#_HW_set_32bit_reg_PARM_2
   6185 E5 66              3640 	mov	a,_GPIO_set_output_sloc2_1_0
   6187 F0                 3641 	movx	@dptr,a
   6188 A3                 3642 	inc	dptr
   6189 E5 67              3643 	mov	a,(_GPIO_set_output_sloc2_1_0 + 1)
   618B F0                 3644 	movx	@dptr,a
   618C A3                 3645 	inc	dptr
   618D E5 68              3646 	mov	a,(_GPIO_set_output_sloc2_1_0 + 2)
   618F F0                 3647 	movx	@dptr,a
   6190 A3                 3648 	inc	dptr
   6191 E5 69              3649 	mov	a,(_GPIO_set_output_sloc2_1_0 + 3)
   6193 F0                 3650 	movx	@dptr,a
                           3651 ;	genCall
   6194 8D 82              3652 	mov	dpl,r5
   6196 8E 83              3653 	mov	dph,r6
   6198 C0 02              3654 	push	ar2
   619A C0 03              3655 	push	ar3
   619C C0 04              3656 	push	ar4
   619E 12 1C 38           3657 	lcall	_HW_set_32bit_reg
   61A1 D0 04              3658 	pop	ar4
   61A3 D0 03              3659 	pop	ar3
   61A5 D0 02              3660 	pop	ar2
                    0FEB   3661 	C$core_gpio.c$260$4$8 ==.
                           3662 ;	../drivers/CoreGPIO/core_gpio.c:260: HAL_ASSERT( HAL_get_32bit_reg( this_gpio->base_addr, GPIO_OUT ) == outputs_state );
                           3663 ;	genPointerGet
                           3664 ;	genGenPointerGet
   61A7 8A 82              3665 	mov	dpl,r2
   61A9 8B 83              3666 	mov	dph,r3
   61AB 8C F0              3667 	mov	b,r4
   61AD 12 71 F6           3668 	lcall	__gptrget
   61B0 FE                 3669 	mov	r6,a
   61B1 A3                 3670 	inc	dptr
   61B2 12 71 F6           3671 	lcall	__gptrget
   61B5 FF                 3672 	mov	r7,a
                           3673 ;	genPlus
                           3674 ;	genPlusIncr
   61B6 74 A0              3675 	mov	a,#0xA0
   61B8 25 06              3676 	add	a,ar6
   61BA FE                 3677 	mov	r6,a
   61BB 74 00              3678 	mov	a,#0x00
   61BD 35 07              3679 	addc	a,ar7
   61BF FF                 3680 	mov	r7,a
                           3681 ;	genCall
   61C0 8E 82              3682 	mov	dpl,r6
   61C2 8F 83              3683 	mov	dph,r7
   61C4 12 1C 2C           3684 	lcall	_HW_get_32bit_reg
   61C7 AE 82              3685 	mov	r6,dpl
   61C9 AF 83              3686 	mov	r7,dph
   61CB A8 F0              3687 	mov	r0,b
   61CD F9                 3688 	mov	r1,a
                           3689 ;	genCmpEq
                           3690 ;	gencjneshort
   61CE EE                 3691 	mov	a,r6
   61CF B5 66 0F           3692 	cjne	a,_GPIO_set_output_sloc2_1_0,00165$
   61D2 EF                 3693 	mov	a,r7
   61D3 B5 67 0B           3694 	cjne	a,(_GPIO_set_output_sloc2_1_0 + 1),00165$
   61D6 E8                 3695 	mov	a,r0
   61D7 B5 68 07           3696 	cjne	a,(_GPIO_set_output_sloc2_1_0 + 2),00165$
   61DA E9                 3697 	mov	a,r1
   61DB B5 69 03           3698 	cjne	a,(_GPIO_set_output_sloc2_1_0 + 3),00165$
   61DE 02 67 17           3699 	ljmp	00140$
   61E1                    3700 00165$:
                           3701 ;	genPointerSet
                           3702 ;     genFarPointerSet
   61E1 90 0C 5B           3703 	mov	dptr,#_GPIO_set_output_file_name_5_9
   61E4 74 2E              3704 	mov	a,#0x2E
   61E6 F0                 3705 	movx	@dptr,a
                           3706 ;	genPointerSet
                           3707 ;     genFarPointerSet
   61E7 90 0C 5C           3708 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0001)
   61EA 74 2E              3709 	mov	a,#0x2E
   61EC F0                 3710 	movx	@dptr,a
                           3711 ;	genPointerSet
                           3712 ;     genFarPointerSet
   61ED 90 0C 5D           3713 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0002)
   61F0 74 2F              3714 	mov	a,#0x2F
   61F2 F0                 3715 	movx	@dptr,a
                           3716 ;	genPointerSet
                           3717 ;     genFarPointerSet
   61F3 90 0C 5E           3718 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0003)
   61F6 74 64              3719 	mov	a,#0x64
   61F8 F0                 3720 	movx	@dptr,a
                           3721 ;	genPointerSet
                           3722 ;     genFarPointerSet
   61F9 90 0C 5F           3723 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0004)
   61FC 74 72              3724 	mov	a,#0x72
   61FE F0                 3725 	movx	@dptr,a
                           3726 ;	genPointerSet
                           3727 ;     genFarPointerSet
   61FF 90 0C 60           3728 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0005)
   6202 74 69              3729 	mov	a,#0x69
   6204 F0                 3730 	movx	@dptr,a
                           3731 ;	genPointerSet
                           3732 ;     genFarPointerSet
   6205 90 0C 61           3733 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0006)
   6208 74 76              3734 	mov	a,#0x76
   620A F0                 3735 	movx	@dptr,a
                           3736 ;	genPointerSet
                           3737 ;     genFarPointerSet
   620B 90 0C 62           3738 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0007)
   620E 74 65              3739 	mov	a,#0x65
   6210 F0                 3740 	movx	@dptr,a
                           3741 ;	genPointerSet
                           3742 ;     genFarPointerSet
   6211 90 0C 63           3743 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0008)
   6214 74 72              3744 	mov	a,#0x72
   6216 F0                 3745 	movx	@dptr,a
                           3746 ;	genPointerSet
                           3747 ;     genFarPointerSet
   6217 90 0C 64           3748 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0009)
   621A 74 73              3749 	mov	a,#0x73
   621C F0                 3750 	movx	@dptr,a
                           3751 ;	genPointerSet
                           3752 ;     genFarPointerSet
   621D 90 0C 65           3753 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x000a)
   6220 74 2F              3754 	mov	a,#0x2F
   6222 F0                 3755 	movx	@dptr,a
                           3756 ;	genPointerSet
                           3757 ;     genFarPointerSet
   6223 90 0C 66           3758 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x000b)
   6226 74 43              3759 	mov	a,#0x43
   6228 F0                 3760 	movx	@dptr,a
                           3761 ;	genPointerSet
                           3762 ;     genFarPointerSet
   6229 90 0C 67           3763 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x000c)
   622C 74 6F              3764 	mov	a,#0x6F
   622E F0                 3765 	movx	@dptr,a
                           3766 ;	genPointerSet
                           3767 ;     genFarPointerSet
   622F 90 0C 68           3768 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x000d)
   6232 74 72              3769 	mov	a,#0x72
   6234 F0                 3770 	movx	@dptr,a
                           3771 ;	genPointerSet
                           3772 ;     genFarPointerSet
   6235 90 0C 69           3773 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x000e)
   6238 74 65              3774 	mov	a,#0x65
   623A F0                 3775 	movx	@dptr,a
                           3776 ;	genPointerSet
                           3777 ;     genFarPointerSet
   623B 90 0C 6A           3778 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x000f)
   623E 74 47              3779 	mov	a,#0x47
   6240 F0                 3780 	movx	@dptr,a
                           3781 ;	genPointerSet
                           3782 ;     genFarPointerSet
   6241 90 0C 6B           3783 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0010)
   6244 74 50              3784 	mov	a,#0x50
   6246 F0                 3785 	movx	@dptr,a
                           3786 ;	genPointerSet
                           3787 ;     genFarPointerSet
   6247 90 0C 6C           3788 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0011)
   624A 74 49              3789 	mov	a,#0x49
   624C F0                 3790 	movx	@dptr,a
                           3791 ;	genPointerSet
                           3792 ;     genFarPointerSet
   624D 90 0C 6D           3793 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0012)
   6250 74 4F              3794 	mov	a,#0x4F
   6252 F0                 3795 	movx	@dptr,a
                           3796 ;	genPointerSet
                           3797 ;     genFarPointerSet
   6253 90 0C 6E           3798 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0013)
   6256 74 2F              3799 	mov	a,#0x2F
   6258 F0                 3800 	movx	@dptr,a
                           3801 ;	genPointerSet
                           3802 ;     genFarPointerSet
   6259 90 0C 6F           3803 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0014)
   625C 74 63              3804 	mov	a,#0x63
   625E F0                 3805 	movx	@dptr,a
                           3806 ;	genPointerSet
                           3807 ;     genFarPointerSet
   625F 90 0C 70           3808 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0015)
   6262 74 6F              3809 	mov	a,#0x6F
   6264 F0                 3810 	movx	@dptr,a
                           3811 ;	genPointerSet
                           3812 ;     genFarPointerSet
   6265 90 0C 71           3813 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0016)
   6268 74 72              3814 	mov	a,#0x72
   626A F0                 3815 	movx	@dptr,a
                           3816 ;	genPointerSet
                           3817 ;     genFarPointerSet
   626B 90 0C 72           3818 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0017)
   626E 74 65              3819 	mov	a,#0x65
   6270 F0                 3820 	movx	@dptr,a
                           3821 ;	genPointerSet
                           3822 ;     genFarPointerSet
   6271 90 0C 73           3823 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0018)
   6274 74 5F              3824 	mov	a,#0x5F
   6276 F0                 3825 	movx	@dptr,a
                           3826 ;	genPointerSet
                           3827 ;     genFarPointerSet
   6277 90 0C 74           3828 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x0019)
   627A 74 67              3829 	mov	a,#0x67
   627C F0                 3830 	movx	@dptr,a
                           3831 ;	genPointerSet
                           3832 ;     genFarPointerSet
   627D 90 0C 75           3833 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x001a)
   6280 74 70              3834 	mov	a,#0x70
   6282 F0                 3835 	movx	@dptr,a
                           3836 ;	genPointerSet
                           3837 ;     genFarPointerSet
   6283 90 0C 76           3838 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x001b)
   6286 74 69              3839 	mov	a,#0x69
   6288 F0                 3840 	movx	@dptr,a
                           3841 ;	genPointerSet
                           3842 ;     genFarPointerSet
   6289 90 0C 77           3843 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x001c)
   628C 74 6F              3844 	mov	a,#0x6F
   628E F0                 3845 	movx	@dptr,a
                           3846 ;	genPointerSet
                           3847 ;     genFarPointerSet
   628F 90 0C 78           3848 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x001d)
   6292 74 2E              3849 	mov	a,#0x2E
   6294 F0                 3850 	movx	@dptr,a
                           3851 ;	genPointerSet
                           3852 ;     genFarPointerSet
   6295 90 0C 79           3853 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x001e)
   6298 74 63              3854 	mov	a,#0x63
   629A F0                 3855 	movx	@dptr,a
                           3856 ;	genPointerSet
                           3857 ;     genFarPointerSet
   629B 90 0C 7A           3858 	mov	dptr,#(_GPIO_set_output_file_name_5_9 + 0x001f)
   629E 74 00              3859 	mov	a,#0x00
   62A0 F0                 3860 	movx	@dptr,a
                           3861 ;	genAssign
   62A1 90 05 80           3862 	mov	dptr,#_HAL_assert_fail_PARM_2
   62A4 74 04              3863 	mov	a,#0x04
   62A6 F0                 3864 	movx	@dptr,a
   62A7 A3                 3865 	inc	dptr
   62A8 74 01              3866 	mov	a,#0x01
   62AA F0                 3867 	movx	@dptr,a
   62AB A3                 3868 	inc	dptr
   62AC 74 00              3869 	mov	a,#0x00
   62AE F0                 3870 	movx	@dptr,a
   62AF A3                 3871 	inc	dptr
   62B0 74 00              3872 	mov	a,#0x00
   62B2 F0                 3873 	movx	@dptr,a
                           3874 ;	genCall
   62B3 75 82 5B           3875 	mov	dpl,#_GPIO_set_output_file_name_5_9
   62B6 75 83 0C           3876 	mov	dph,#(_GPIO_set_output_file_name_5_9 >> 8)
   62B9 75 F0 00           3877 	mov	b,#0x00
   62BC 12 1B CC           3878 	lcall	_HAL_assert_fail
                    1103   3879 	C$core_gpio.c$262$2$4 ==.
                           3880 ;	../drivers/CoreGPIO/core_gpio.c:262: break;
   62BF 02 67 17           3881 	ljmp	00140$
                    1106   3882 	C$core_gpio.c$264$2$4 ==.
                           3883 ;	../drivers/CoreGPIO/core_gpio.c:264: case GPIO_APB_16_BITS_BUS:
   62C2                    3884 00115$:
                    1106   3885 	C$core_gpio.c$267$3$10 ==.
                           3886 ;	../drivers/CoreGPIO/core_gpio.c:267: uint32_t gpio_out_reg_addr = this_gpio->base_addr + GPIO_OUT_REG_OFFSET + ((port_id >> 4) * 4);
                           3887 ;	genPointerGet
                           3888 ;	genGenPointerGet
   62C2 8B 82              3889 	mov	dpl,r3
   62C4 8C 83              3890 	mov	dph,r4
   62C6 8D F0              3891 	mov	b,r5
   62C8 12 71 F6           3892 	lcall	__gptrget
   62CB FE                 3893 	mov	r6,a
   62CC A3                 3894 	inc	dptr
   62CD 12 71 F6           3895 	lcall	__gptrget
   62D0 FF                 3896 	mov	r7,a
                           3897 ;	genPlus
                           3898 ;	genPlusIncr
   62D1 74 A0              3899 	mov	a,#0xA0
   62D3 25 06              3900 	add	a,ar6
   62D5 FE                 3901 	mov	r6,a
   62D6 74 00              3902 	mov	a,#0x00
   62D8 35 07              3903 	addc	a,ar7
   62DA FF                 3904 	mov	r7,a
                           3905 ;	genRightShift
                           3906 ;	genRightShiftLiteral
                           3907 ;	genrshOne
   62DB EA                 3908 	mov	a,r2
   62DC C4                 3909 	swap	a
   62DD 54 0F              3910 	anl	a,#0x0f
   62DF F8                 3911 	mov	r0,a
                           3912 ;	genMult
                           3913 ;	genMultOneByte
   62E0 E8                 3914 	mov	a,r0
   62E1 75 F0 04           3915 	mov	b,#0x04
   62E4 A4                 3916 	mul	ab
                           3917 ;	genPlus
   62E5 25 06              3918 	add	a,ar6
   62E7 FE                 3919 	mov	r6,a
   62E8 E5 07              3920 	mov	a,ar7
   62EA 35 F0              3921 	addc	a,b
   62EC FF                 3922 	mov	r7,a
                           3923 ;	genCast
   62ED 78 00              3924 	mov	r0,#0x00
   62EF 79 00              3925 	mov	r1,#0x00
                    1135   3926 	C$core_gpio.c$269$3$10 ==.
                           3927 ;	../drivers/CoreGPIO/core_gpio.c:269: outputs_state = HW_get_16bit_reg( gpio_out_reg_addr );
                           3928 ;	genCast
                           3929 ;	genCall
   62F1 8E 82              3930 	mov	dpl,r6
   62F3 8F 83              3931 	mov	dph,r7
   62F5 C0 02              3932 	push	ar2
   62F7 C0 06              3933 	push	ar6
   62F9 C0 07              3934 	push	ar7
   62FB 12 1C 68           3935 	lcall	_HW_get_16bit_reg
   62FE A8 82              3936 	mov	r0,dpl
   6300 A9 83              3937 	mov	r1,dph
   6302 D0 07              3938 	pop	ar7
   6304 D0 06              3939 	pop	ar6
   6306 D0 02              3940 	pop	ar2
                    114C   3941 	C$core_gpio.c$270$1$1 ==.
                           3942 ;	../drivers/CoreGPIO/core_gpio.c:270: if ( 0 == value )
                           3943 ;	genIpush
   6308 C0 02              3944 	push	ar2
                           3945 ;	genAssign
   630A 90 0C 33           3946 	mov	dptr,#_GPIO_set_output_PARM_3
   630D E0                 3947 	movx	a,@dptr
   630E FA                 3948 	mov	r2,a
                           3949 ;	genCmpEq
                           3950 ;	gencjne
                           3951 ;	gencjneshort
   630F BA 00 04           3952 	cjne	r2,#0x00,00166$
   6312 74 01              3953 	mov	a,#0x01
   6314 80 01              3954 	sjmp	00167$
   6316                    3955 00166$:
   6316 E4                 3956 	clr	a
   6317                    3957 00167$:
                           3958 ;	genIpop
   6317 D0 02              3959 	pop	ar2
                           3960 ;	genIfx
                           3961 ;	genIfxJump
   6319 70 03              3962 	jnz	00168$
   631B 02 63 51           3963 	ljmp	00117$
   631E                    3964 00168$:
                    1162   3965 	C$core_gpio.c$272$1$1 ==.
                           3966 ;	../drivers/CoreGPIO/core_gpio.c:272: outputs_state &= ~(1 << (port_id & 0x0F));
                           3967 ;	genIpush
   631E C0 06              3968 	push	ar6
   6320 C0 07              3969 	push	ar7
                           3970 ;	genAnd
   6322 74 0F              3971 	mov	a,#0x0F
   6324 5A                 3972 	anl	a,r2
   6325 FE                 3973 	mov	r6,a
                           3974 ;	genLeftShift
   6326 8E F0              3975 	mov	b,r6
   6328 05 F0              3976 	inc	b
   632A 7E 01              3977 	mov	r6,#0x01
   632C 7F 00              3978 	mov	r7,#0x00
   632E 80 07              3979 	sjmp	00170$
   6330                    3980 00169$:
   6330 EE                 3981 	mov	a,r6
   6331 25 E0              3982 	add	a,acc
   6333 FE                 3983 	mov	r6,a
   6334 EF                 3984 	mov	a,r7
   6335 33                 3985 	rlc	a
   6336 FF                 3986 	mov	r7,a
   6337                    3987 00170$:
   6337 D5 F0 F6           3988 	djnz	b,00169$
                           3989 ;	genCpl
   633A EE                 3990 	mov	a,r6
   633B F4                 3991 	cpl	a
   633C FE                 3992 	mov	r6,a
   633D EF                 3993 	mov	a,r7
   633E F4                 3994 	cpl	a
   633F FF                 3995 	mov	r7,a
                           3996 ;	genAnd
   6340 90 0C 7B           3997 	mov	dptr,#_GPIO_set_output_outputs_state_3_10
   6343 EE                 3998 	mov	a,r6
   6344 58                 3999 	anl	a,r0
   6345 F0                 4000 	movx	@dptr,a
   6346 EF                 4001 	mov	a,r7
   6347 59                 4002 	anl	a,r1
   6348 A3                 4003 	inc	dptr
   6349 F0                 4004 	movx	@dptr,a
                           4005 ;	genIpop
   634A D0 07              4006 	pop	ar7
   634C D0 06              4007 	pop	ar6
   634E 02 63 7B           4008 	ljmp	00118$
   6351                    4009 00117$:
                    1195   4010 	C$core_gpio.c$276$1$1 ==.
                           4011 ;	../drivers/CoreGPIO/core_gpio.c:276: outputs_state |= 1 << (port_id & 0x0F);
                           4012 ;	genIpush
   6351 C0 06              4013 	push	ar6
   6353 C0 07              4014 	push	ar7
                           4015 ;	genAnd
   6355 74 0F              4016 	mov	a,#0x0F
   6357 5A                 4017 	anl	a,r2
   6358 FE                 4018 	mov	r6,a
                           4019 ;	genLeftShift
   6359 8E F0              4020 	mov	b,r6
   635B 05 F0              4021 	inc	b
   635D 7E 01              4022 	mov	r6,#0x01
   635F 7F 00              4023 	mov	r7,#0x00
   6361 80 07              4024 	sjmp	00172$
   6363                    4025 00171$:
   6363 EE                 4026 	mov	a,r6
   6364 25 E0              4027 	add	a,acc
   6366 FE                 4028 	mov	r6,a
   6367 EF                 4029 	mov	a,r7
   6368 33                 4030 	rlc	a
   6369 FF                 4031 	mov	r7,a
   636A                    4032 00172$:
   636A D5 F0 F6           4033 	djnz	b,00171$
                           4034 ;	genOr
   636D 90 0C 7B           4035 	mov	dptr,#_GPIO_set_output_outputs_state_3_10
   6370 EE                 4036 	mov	a,r6
   6371 48                 4037 	orl	a,r0
   6372 F0                 4038 	movx	@dptr,a
   6373 EF                 4039 	mov	a,r7
   6374 49                 4040 	orl	a,r1
   6375 A3                 4041 	inc	dptr
   6376 F0                 4042 	movx	@dptr,a
                    11BB   4043 	C$core_gpio.c$321$1$1 ==.
                           4044 ;	../drivers/CoreGPIO/core_gpio.c:321: }
                           4045 ;	genIpop
   6377 D0 07              4046 	pop	ar7
   6379 D0 06              4047 	pop	ar6
                    11BF   4048 	C$core_gpio.c$276$3$10 ==.
                           4049 ;	../drivers/CoreGPIO/core_gpio.c:276: outputs_state |= 1 << (port_id & 0x0F);
   637B                    4050 00118$:
                    11BF   4051 	C$core_gpio.c$278$3$10 ==.
                           4052 ;	../drivers/CoreGPIO/core_gpio.c:278: HW_set_16bit_reg( gpio_out_reg_addr, outputs_state );
                           4053 ;	genAssign
   637B 90 0C 7B           4054 	mov	dptr,#_GPIO_set_output_outputs_state_3_10
   637E E0                 4055 	movx	a,@dptr
   637F F8                 4056 	mov	r0,a
   6380 A3                 4057 	inc	dptr
   6381 E0                 4058 	movx	a,@dptr
   6382 F9                 4059 	mov	r1,a
                           4060 ;	genAssign
   6383 90 05 9B           4061 	mov	dptr,#_HW_set_16bit_reg_PARM_2
   6386 E8                 4062 	mov	a,r0
   6387 F0                 4063 	movx	@dptr,a
   6388 A3                 4064 	inc	dptr
   6389 E9                 4065 	mov	a,r1
   638A F0                 4066 	movx	@dptr,a
                           4067 ;	genCall
   638B 8E 82              4068 	mov	dpl,r6
   638D 8F 83              4069 	mov	dph,r7
   638F C0 06              4070 	push	ar6
   6391 C0 07              4071 	push	ar7
   6393 C0 00              4072 	push	ar0
   6395 C0 01              4073 	push	ar1
   6397 12 1C 54           4074 	lcall	_HW_set_16bit_reg
   639A D0 01              4075 	pop	ar1
   639C D0 00              4076 	pop	ar0
   639E D0 07              4077 	pop	ar7
   63A0 D0 06              4078 	pop	ar6
                    11E6   4079 	C$core_gpio.c$287$4$13 ==.
                           4080 ;	../drivers/CoreGPIO/core_gpio.c:287: HAL_ASSERT( HW_get_16bit_reg( gpio_out_reg_addr ) == outputs_state );
                           4081 ;	genCall
   63A2 8E 82              4082 	mov	dpl,r6
   63A4 8F 83              4083 	mov	dph,r7
   63A6 C0 00              4084 	push	ar0
   63A8 C0 01              4085 	push	ar1
   63AA 12 1C 68           4086 	lcall	_HW_get_16bit_reg
   63AD AE 82              4087 	mov	r6,dpl
   63AF AF 83              4088 	mov	r7,dph
   63B1 D0 01              4089 	pop	ar1
   63B3 D0 00              4090 	pop	ar0
                           4091 ;	genCmpEq
                           4092 ;	gencjneshort
   63B5 EE                 4093 	mov	a,r6
   63B6 B5 00 07           4094 	cjne	a,ar0,00173$
   63B9 EF                 4095 	mov	a,r7
   63BA B5 01 03           4096 	cjne	a,ar1,00173$
   63BD 02 67 17           4097 	ljmp	00140$
   63C0                    4098 00173$:
                           4099 ;	genPointerSet
                           4100 ;     genFarPointerSet
   63C0 90 0C 7D           4101 	mov	dptr,#_GPIO_set_output_file_name_5_14
   63C3 74 2E              4102 	mov	a,#0x2E
   63C5 F0                 4103 	movx	@dptr,a
                           4104 ;	genPointerSet
                           4105 ;     genFarPointerSet
   63C6 90 0C 7E           4106 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0001)
   63C9 74 2E              4107 	mov	a,#0x2E
   63CB F0                 4108 	movx	@dptr,a
                           4109 ;	genPointerSet
                           4110 ;     genFarPointerSet
   63CC 90 0C 7F           4111 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0002)
   63CF 74 2F              4112 	mov	a,#0x2F
   63D1 F0                 4113 	movx	@dptr,a
                           4114 ;	genPointerSet
                           4115 ;     genFarPointerSet
   63D2 90 0C 80           4116 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0003)
   63D5 74 64              4117 	mov	a,#0x64
   63D7 F0                 4118 	movx	@dptr,a
                           4119 ;	genPointerSet
                           4120 ;     genFarPointerSet
   63D8 90 0C 81           4121 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0004)
   63DB 74 72              4122 	mov	a,#0x72
   63DD F0                 4123 	movx	@dptr,a
                           4124 ;	genPointerSet
                           4125 ;     genFarPointerSet
   63DE 90 0C 82           4126 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0005)
   63E1 74 69              4127 	mov	a,#0x69
   63E3 F0                 4128 	movx	@dptr,a
                           4129 ;	genPointerSet
                           4130 ;     genFarPointerSet
   63E4 90 0C 83           4131 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0006)
   63E7 74 76              4132 	mov	a,#0x76
   63E9 F0                 4133 	movx	@dptr,a
                           4134 ;	genPointerSet
                           4135 ;     genFarPointerSet
   63EA 90 0C 84           4136 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0007)
   63ED 74 65              4137 	mov	a,#0x65
   63EF F0                 4138 	movx	@dptr,a
                           4139 ;	genPointerSet
                           4140 ;     genFarPointerSet
   63F0 90 0C 85           4141 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0008)
   63F3 74 72              4142 	mov	a,#0x72
   63F5 F0                 4143 	movx	@dptr,a
                           4144 ;	genPointerSet
                           4145 ;     genFarPointerSet
   63F6 90 0C 86           4146 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0009)
   63F9 74 73              4147 	mov	a,#0x73
   63FB F0                 4148 	movx	@dptr,a
                           4149 ;	genPointerSet
                           4150 ;     genFarPointerSet
   63FC 90 0C 87           4151 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x000a)
   63FF 74 2F              4152 	mov	a,#0x2F
   6401 F0                 4153 	movx	@dptr,a
                           4154 ;	genPointerSet
                           4155 ;     genFarPointerSet
   6402 90 0C 88           4156 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x000b)
   6405 74 43              4157 	mov	a,#0x43
   6407 F0                 4158 	movx	@dptr,a
                           4159 ;	genPointerSet
                           4160 ;     genFarPointerSet
   6408 90 0C 89           4161 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x000c)
   640B 74 6F              4162 	mov	a,#0x6F
   640D F0                 4163 	movx	@dptr,a
                           4164 ;	genPointerSet
                           4165 ;     genFarPointerSet
   640E 90 0C 8A           4166 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x000d)
   6411 74 72              4167 	mov	a,#0x72
   6413 F0                 4168 	movx	@dptr,a
                           4169 ;	genPointerSet
                           4170 ;     genFarPointerSet
   6414 90 0C 8B           4171 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x000e)
   6417 74 65              4172 	mov	a,#0x65
   6419 F0                 4173 	movx	@dptr,a
                           4174 ;	genPointerSet
                           4175 ;     genFarPointerSet
   641A 90 0C 8C           4176 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x000f)
   641D 74 47              4177 	mov	a,#0x47
   641F F0                 4178 	movx	@dptr,a
                           4179 ;	genPointerSet
                           4180 ;     genFarPointerSet
   6420 90 0C 8D           4181 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0010)
   6423 74 50              4182 	mov	a,#0x50
   6425 F0                 4183 	movx	@dptr,a
                           4184 ;	genPointerSet
                           4185 ;     genFarPointerSet
   6426 90 0C 8E           4186 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0011)
   6429 74 49              4187 	mov	a,#0x49
   642B F0                 4188 	movx	@dptr,a
                           4189 ;	genPointerSet
                           4190 ;     genFarPointerSet
   642C 90 0C 8F           4191 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0012)
   642F 74 4F              4192 	mov	a,#0x4F
   6431 F0                 4193 	movx	@dptr,a
                           4194 ;	genPointerSet
                           4195 ;     genFarPointerSet
   6432 90 0C 90           4196 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0013)
   6435 74 2F              4197 	mov	a,#0x2F
   6437 F0                 4198 	movx	@dptr,a
                           4199 ;	genPointerSet
                           4200 ;     genFarPointerSet
   6438 90 0C 91           4201 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0014)
   643B 74 63              4202 	mov	a,#0x63
   643D F0                 4203 	movx	@dptr,a
                           4204 ;	genPointerSet
                           4205 ;     genFarPointerSet
   643E 90 0C 92           4206 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0015)
   6441 74 6F              4207 	mov	a,#0x6F
   6443 F0                 4208 	movx	@dptr,a
                           4209 ;	genPointerSet
                           4210 ;     genFarPointerSet
   6444 90 0C 93           4211 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0016)
   6447 74 72              4212 	mov	a,#0x72
   6449 F0                 4213 	movx	@dptr,a
                           4214 ;	genPointerSet
                           4215 ;     genFarPointerSet
   644A 90 0C 94           4216 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0017)
   644D 74 65              4217 	mov	a,#0x65
   644F F0                 4218 	movx	@dptr,a
                           4219 ;	genPointerSet
                           4220 ;     genFarPointerSet
   6450 90 0C 95           4221 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0018)
   6453 74 5F              4222 	mov	a,#0x5F
   6455 F0                 4223 	movx	@dptr,a
                           4224 ;	genPointerSet
                           4225 ;     genFarPointerSet
   6456 90 0C 96           4226 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x0019)
   6459 74 67              4227 	mov	a,#0x67
   645B F0                 4228 	movx	@dptr,a
                           4229 ;	genPointerSet
                           4230 ;     genFarPointerSet
   645C 90 0C 97           4231 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x001a)
   645F 74 70              4232 	mov	a,#0x70
   6461 F0                 4233 	movx	@dptr,a
                           4234 ;	genPointerSet
                           4235 ;     genFarPointerSet
   6462 90 0C 98           4236 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x001b)
   6465 74 69              4237 	mov	a,#0x69
   6467 F0                 4238 	movx	@dptr,a
                           4239 ;	genPointerSet
                           4240 ;     genFarPointerSet
   6468 90 0C 99           4241 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x001c)
   646B 74 6F              4242 	mov	a,#0x6F
   646D F0                 4243 	movx	@dptr,a
                           4244 ;	genPointerSet
                           4245 ;     genFarPointerSet
   646E 90 0C 9A           4246 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x001d)
   6471 74 2E              4247 	mov	a,#0x2E
   6473 F0                 4248 	movx	@dptr,a
                           4249 ;	genPointerSet
                           4250 ;     genFarPointerSet
   6474 90 0C 9B           4251 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x001e)
   6477 74 63              4252 	mov	a,#0x63
   6479 F0                 4253 	movx	@dptr,a
                           4254 ;	genPointerSet
                           4255 ;     genFarPointerSet
   647A 90 0C 9C           4256 	mov	dptr,#(_GPIO_set_output_file_name_5_14 + 0x001f)
   647D 74 00              4257 	mov	a,#0x00
   647F F0                 4258 	movx	@dptr,a
                           4259 ;	genAssign
   6480 90 05 80           4260 	mov	dptr,#_HAL_assert_fail_PARM_2
   6483 74 1F              4261 	mov	a,#0x1F
   6485 F0                 4262 	movx	@dptr,a
   6486 A3                 4263 	inc	dptr
   6487 74 01              4264 	mov	a,#0x01
   6489 F0                 4265 	movx	@dptr,a
   648A A3                 4266 	inc	dptr
   648B 74 00              4267 	mov	a,#0x00
   648D F0                 4268 	movx	@dptr,a
   648E A3                 4269 	inc	dptr
   648F 74 00              4270 	mov	a,#0x00
   6491 F0                 4271 	movx	@dptr,a
                           4272 ;	genCall
   6492 75 82 7D           4273 	mov	dpl,#_GPIO_set_output_file_name_5_14
   6495 75 83 0C           4274 	mov	dph,#(_GPIO_set_output_file_name_5_14 >> 8)
   6498 75 F0 00           4275 	mov	b,#0x00
   649B 12 1B CC           4276 	lcall	_HAL_assert_fail
                    12E2   4277 	C$core_gpio.c$289$2$4 ==.
                           4278 ;	../drivers/CoreGPIO/core_gpio.c:289: break;
   649E 02 67 17           4279 	ljmp	00140$
                    12E5   4280 	C$core_gpio.c$291$2$4 ==.
                           4281 ;	../drivers/CoreGPIO/core_gpio.c:291: case GPIO_APB_8_BITS_BUS:
   64A1                    4282 00124$:
                    12E5   4283 	C$core_gpio.c$294$3$15 ==.
                           4284 ;	../drivers/CoreGPIO/core_gpio.c:294: uint32_t gpio_out_reg_addr = this_gpio->base_addr + GPIO_OUT_REG_OFFSET + ((port_id >> 3) * 4);
                           4285 ;	genPointerGet
                           4286 ;	genGenPointerGet
   64A1 8B 82              4287 	mov	dpl,r3
   64A3 8C 83              4288 	mov	dph,r4
   64A5 8D F0              4289 	mov	b,r5
   64A7 12 71 F6           4290 	lcall	__gptrget
   64AA FB                 4291 	mov	r3,a
   64AB A3                 4292 	inc	dptr
   64AC 12 71 F6           4293 	lcall	__gptrget
   64AF FC                 4294 	mov	r4,a
                           4295 ;	genPlus
                           4296 ;	genPlusIncr
   64B0 74 A0              4297 	mov	a,#0xA0
   64B2 25 03              4298 	add	a,ar3
   64B4 FB                 4299 	mov	r3,a
   64B5 74 00              4300 	mov	a,#0x00
   64B7 35 04              4301 	addc	a,ar4
   64B9 FC                 4302 	mov	r4,a
                           4303 ;	genRightShift
                           4304 ;	genRightShiftLiteral
                           4305 ;	genrshOne
   64BA EA                 4306 	mov	a,r2
   64BB C4                 4307 	swap	a
   64BC 23                 4308 	rl	a
   64BD 54 1F              4309 	anl	a,#0x1f
   64BF FD                 4310 	mov	r5,a
                           4311 ;	genMult
                           4312 ;	genMultOneByte
   64C0 ED                 4313 	mov	a,r5
   64C1 75 F0 04           4314 	mov	b,#0x04
   64C4 A4                 4315 	mul	ab
                           4316 ;	genPlus
   64C5 25 03              4317 	add	a,ar3
   64C7 FB                 4318 	mov	r3,a
   64C8 E5 04              4319 	mov	a,ar4
   64CA 35 F0              4320 	addc	a,b
   64CC FC                 4321 	mov	r4,a
                           4322 ;	genCast
   64CD 7D 00              4323 	mov	r5,#0x00
   64CF 7E 00              4324 	mov	r6,#0x00
                    1315   4325 	C$core_gpio.c$296$3$15 ==.
                           4326 ;	../drivers/CoreGPIO/core_gpio.c:296: outputs_state = HW_get_8bit_reg( gpio_out_reg_addr );
                           4327 ;	genCast
                           4328 ;	genCall
   64D1 8B 82              4329 	mov	dpl,r3
   64D3 8C 83              4330 	mov	dph,r4
   64D5 C0 02              4331 	push	ar2
   64D7 C0 03              4332 	push	ar3
   64D9 C0 04              4333 	push	ar4
   64DB 12 1C 7D           4334 	lcall	_HW_get_8bit_reg
   64DE AD 82              4335 	mov	r5,dpl
   64E0 D0 04              4336 	pop	ar4
   64E2 D0 03              4337 	pop	ar3
   64E4 D0 02              4338 	pop	ar2
                    132A   4339 	C$core_gpio.c$297$3$15 ==.
                           4340 ;	../drivers/CoreGPIO/core_gpio.c:297: if ( 0 == value )
                           4341 ;	genAssign
   64E6 90 0C 33           4342 	mov	dptr,#_GPIO_set_output_PARM_3
   64E9 E0                 4343 	movx	a,@dptr
   64EA FE                 4344 	mov	r6,a
                           4345 ;	genCmpEq
                           4346 ;	gencjneshort
   64EB BE 00 02           4347 	cjne	r6,#0x00,00174$
   64EE 80 03              4348 	sjmp	00175$
   64F0                    4349 00174$:
   64F0 02 65 10           4350 	ljmp	00126$
   64F3                    4351 00175$:
                    1337   4352 	C$core_gpio.c$299$4$16 ==.
                           4353 ;	../drivers/CoreGPIO/core_gpio.c:299: outputs_state &= ~(1 << (port_id & 0x07));
                           4354 ;	genAnd
   64F3 74 07              4355 	mov	a,#0x07
   64F5 5A                 4356 	anl	a,r2
                           4357 ;	genLeftShift
   64F6 F5 F0              4358 	mov	b,a
   64F8 05 F0              4359 	inc	b
   64FA 74 01              4360 	mov	a,#0x01
   64FC 80 02              4361 	sjmp	00178$
   64FE                    4362 00176$:
   64FE 25 E0              4363 	add	a,acc
   6500                    4364 00178$:
   6500 D5 F0 FB           4365 	djnz	b,00176$
   6503 FE                 4366 	mov	r6,a
                           4367 ;	genCpl
   6504 EE                 4368 	mov	a,r6
   6505 F4                 4369 	cpl	a
   6506 FE                 4370 	mov	r6,a
                           4371 ;	genAnd
   6507 90 0C 9D           4372 	mov	dptr,#_GPIO_set_output_outputs_state_3_15
   650A EE                 4373 	mov	a,r6
   650B 5D                 4374 	anl	a,r5
   650C F0                 4375 	movx	@dptr,a
   650D 02 65 27           4376 	ljmp	00127$
   6510                    4377 00126$:
                    1354   4378 	C$core_gpio.c$303$4$17 ==.
                           4379 ;	../drivers/CoreGPIO/core_gpio.c:303: outputs_state |= 1 << (port_id & 0x07);
                           4380 ;	genAnd
   6510 74 07              4381 	mov	a,#0x07
   6512 5A                 4382 	anl	a,r2
                           4383 ;	genLeftShift
   6513 F5 F0              4384 	mov	b,a
   6515 05 F0              4385 	inc	b
   6517 74 01              4386 	mov	a,#0x01
   6519 80 02              4387 	sjmp	00181$
   651B                    4388 00179$:
   651B 25 E0              4389 	add	a,acc
   651D                    4390 00181$:
   651D D5 F0 FB           4391 	djnz	b,00179$
   6520 FA                 4392 	mov	r2,a
                           4393 ;	genOr
   6521 90 0C 9D           4394 	mov	dptr,#_GPIO_set_output_outputs_state_3_15
   6524 EA                 4395 	mov	a,r2
   6525 4D                 4396 	orl	a,r5
   6526 F0                 4397 	movx	@dptr,a
   6527                    4398 00127$:
                    136B   4399 	C$core_gpio.c$305$3$15 ==.
                           4400 ;	../drivers/CoreGPIO/core_gpio.c:305: HW_set_8bit_reg( gpio_out_reg_addr, outputs_state );
                           4401 ;	genAssign
   6527 90 0C 9D           4402 	mov	dptr,#_GPIO_set_output_outputs_state_3_15
   652A E0                 4403 	movx	a,@dptr
   652B FA                 4404 	mov	r2,a
                           4405 ;	genAssign
   652C 90 05 9D           4406 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   652F EA                 4407 	mov	a,r2
   6530 F0                 4408 	movx	@dptr,a
                           4409 ;	genCall
   6531 8B 82              4410 	mov	dpl,r3
   6533 8C 83              4411 	mov	dph,r4
   6535 C0 02              4412 	push	ar2
   6537 C0 03              4413 	push	ar3
   6539 C0 04              4414 	push	ar4
   653B 12 1C 6F           4415 	lcall	_HW_set_8bit_reg
   653E D0 04              4416 	pop	ar4
   6540 D0 03              4417 	pop	ar3
   6542 D0 02              4418 	pop	ar2
                    1388   4419 	C$core_gpio.c$314$4$18 ==.
                           4420 ;	../drivers/CoreGPIO/core_gpio.c:314: HAL_ASSERT( HW_get_8bit_reg( gpio_out_reg_addr ) == outputs_state );
                           4421 ;	genCall
   6544 8B 82              4422 	mov	dpl,r3
   6546 8C 83              4423 	mov	dph,r4
   6548 C0 02              4424 	push	ar2
   654A 12 1C 7D           4425 	lcall	_HW_get_8bit_reg
   654D AB 82              4426 	mov	r3,dpl
   654F D0 02              4427 	pop	ar2
                           4428 ;	genCmpEq
                           4429 ;	gencjneshort
   6551 EB                 4430 	mov	a,r3
   6552 B5 02 03           4431 	cjne	a,ar2,00182$
   6555 02 67 17           4432 	ljmp	00140$
   6558                    4433 00182$:
                           4434 ;	genPointerSet
                           4435 ;     genFarPointerSet
   6558 90 0C 9E           4436 	mov	dptr,#_GPIO_set_output_file_name_5_19
   655B 74 2E              4437 	mov	a,#0x2E
   655D F0                 4438 	movx	@dptr,a
                           4439 ;	genPointerSet
                           4440 ;     genFarPointerSet
   655E 90 0C 9F           4441 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0001)
   6561 74 2E              4442 	mov	a,#0x2E
   6563 F0                 4443 	movx	@dptr,a
                           4444 ;	genPointerSet
                           4445 ;     genFarPointerSet
   6564 90 0C A0           4446 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0002)
   6567 74 2F              4447 	mov	a,#0x2F
   6569 F0                 4448 	movx	@dptr,a
                           4449 ;	genPointerSet
                           4450 ;     genFarPointerSet
   656A 90 0C A1           4451 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0003)
   656D 74 64              4452 	mov	a,#0x64
   656F F0                 4453 	movx	@dptr,a
                           4454 ;	genPointerSet
                           4455 ;     genFarPointerSet
   6570 90 0C A2           4456 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0004)
   6573 74 72              4457 	mov	a,#0x72
   6575 F0                 4458 	movx	@dptr,a
                           4459 ;	genPointerSet
                           4460 ;     genFarPointerSet
   6576 90 0C A3           4461 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0005)
   6579 74 69              4462 	mov	a,#0x69
   657B F0                 4463 	movx	@dptr,a
                           4464 ;	genPointerSet
                           4465 ;     genFarPointerSet
   657C 90 0C A4           4466 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0006)
   657F 74 76              4467 	mov	a,#0x76
   6581 F0                 4468 	movx	@dptr,a
                           4469 ;	genPointerSet
                           4470 ;     genFarPointerSet
   6582 90 0C A5           4471 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0007)
   6585 74 65              4472 	mov	a,#0x65
   6587 F0                 4473 	movx	@dptr,a
                           4474 ;	genPointerSet
                           4475 ;     genFarPointerSet
   6588 90 0C A6           4476 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0008)
   658B 74 72              4477 	mov	a,#0x72
   658D F0                 4478 	movx	@dptr,a
                           4479 ;	genPointerSet
                           4480 ;     genFarPointerSet
   658E 90 0C A7           4481 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0009)
   6591 74 73              4482 	mov	a,#0x73
   6593 F0                 4483 	movx	@dptr,a
                           4484 ;	genPointerSet
                           4485 ;     genFarPointerSet
   6594 90 0C A8           4486 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x000a)
   6597 74 2F              4487 	mov	a,#0x2F
   6599 F0                 4488 	movx	@dptr,a
                           4489 ;	genPointerSet
                           4490 ;     genFarPointerSet
   659A 90 0C A9           4491 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x000b)
   659D 74 43              4492 	mov	a,#0x43
   659F F0                 4493 	movx	@dptr,a
                           4494 ;	genPointerSet
                           4495 ;     genFarPointerSet
   65A0 90 0C AA           4496 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x000c)
   65A3 74 6F              4497 	mov	a,#0x6F
   65A5 F0                 4498 	movx	@dptr,a
                           4499 ;	genPointerSet
                           4500 ;     genFarPointerSet
   65A6 90 0C AB           4501 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x000d)
   65A9 74 72              4502 	mov	a,#0x72
   65AB F0                 4503 	movx	@dptr,a
                           4504 ;	genPointerSet
                           4505 ;     genFarPointerSet
   65AC 90 0C AC           4506 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x000e)
   65AF 74 65              4507 	mov	a,#0x65
   65B1 F0                 4508 	movx	@dptr,a
                           4509 ;	genPointerSet
                           4510 ;     genFarPointerSet
   65B2 90 0C AD           4511 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x000f)
   65B5 74 47              4512 	mov	a,#0x47
   65B7 F0                 4513 	movx	@dptr,a
                           4514 ;	genPointerSet
                           4515 ;     genFarPointerSet
   65B8 90 0C AE           4516 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0010)
   65BB 74 50              4517 	mov	a,#0x50
   65BD F0                 4518 	movx	@dptr,a
                           4519 ;	genPointerSet
                           4520 ;     genFarPointerSet
   65BE 90 0C AF           4521 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0011)
   65C1 74 49              4522 	mov	a,#0x49
   65C3 F0                 4523 	movx	@dptr,a
                           4524 ;	genPointerSet
                           4525 ;     genFarPointerSet
   65C4 90 0C B0           4526 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0012)
   65C7 74 4F              4527 	mov	a,#0x4F
   65C9 F0                 4528 	movx	@dptr,a
                           4529 ;	genPointerSet
                           4530 ;     genFarPointerSet
   65CA 90 0C B1           4531 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0013)
   65CD 74 2F              4532 	mov	a,#0x2F
   65CF F0                 4533 	movx	@dptr,a
                           4534 ;	genPointerSet
                           4535 ;     genFarPointerSet
   65D0 90 0C B2           4536 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0014)
   65D3 74 63              4537 	mov	a,#0x63
   65D5 F0                 4538 	movx	@dptr,a
                           4539 ;	genPointerSet
                           4540 ;     genFarPointerSet
   65D6 90 0C B3           4541 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0015)
   65D9 74 6F              4542 	mov	a,#0x6F
   65DB F0                 4543 	movx	@dptr,a
                           4544 ;	genPointerSet
                           4545 ;     genFarPointerSet
   65DC 90 0C B4           4546 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0016)
   65DF 74 72              4547 	mov	a,#0x72
   65E1 F0                 4548 	movx	@dptr,a
                           4549 ;	genPointerSet
                           4550 ;     genFarPointerSet
   65E2 90 0C B5           4551 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0017)
   65E5 74 65              4552 	mov	a,#0x65
   65E7 F0                 4553 	movx	@dptr,a
                           4554 ;	genPointerSet
                           4555 ;     genFarPointerSet
   65E8 90 0C B6           4556 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0018)
   65EB 74 5F              4557 	mov	a,#0x5F
   65ED F0                 4558 	movx	@dptr,a
                           4559 ;	genPointerSet
                           4560 ;     genFarPointerSet
   65EE 90 0C B7           4561 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x0019)
   65F1 74 67              4562 	mov	a,#0x67
   65F3 F0                 4563 	movx	@dptr,a
                           4564 ;	genPointerSet
                           4565 ;     genFarPointerSet
   65F4 90 0C B8           4566 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x001a)
   65F7 74 70              4567 	mov	a,#0x70
   65F9 F0                 4568 	movx	@dptr,a
                           4569 ;	genPointerSet
                           4570 ;     genFarPointerSet
   65FA 90 0C B9           4571 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x001b)
   65FD 74 69              4572 	mov	a,#0x69
   65FF F0                 4573 	movx	@dptr,a
                           4574 ;	genPointerSet
                           4575 ;     genFarPointerSet
   6600 90 0C BA           4576 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x001c)
   6603 74 6F              4577 	mov	a,#0x6F
   6605 F0                 4578 	movx	@dptr,a
                           4579 ;	genPointerSet
                           4580 ;     genFarPointerSet
   6606 90 0C BB           4581 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x001d)
   6609 74 2E              4582 	mov	a,#0x2E
   660B F0                 4583 	movx	@dptr,a
                           4584 ;	genPointerSet
                           4585 ;     genFarPointerSet
   660C 90 0C BC           4586 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x001e)
   660F 74 63              4587 	mov	a,#0x63
   6611 F0                 4588 	movx	@dptr,a
                           4589 ;	genPointerSet
                           4590 ;     genFarPointerSet
   6612 90 0C BD           4591 	mov	dptr,#(_GPIO_set_output_file_name_5_19 + 0x001f)
   6615 74 00              4592 	mov	a,#0x00
   6617 F0                 4593 	movx	@dptr,a
                           4594 ;	genAssign
   6618 90 05 80           4595 	mov	dptr,#_HAL_assert_fail_PARM_2
   661B 74 3A              4596 	mov	a,#0x3A
   661D F0                 4597 	movx	@dptr,a
   661E A3                 4598 	inc	dptr
   661F 74 01              4599 	mov	a,#0x01
   6621 F0                 4600 	movx	@dptr,a
   6622 A3                 4601 	inc	dptr
   6623 74 00              4602 	mov	a,#0x00
   6625 F0                 4603 	movx	@dptr,a
   6626 A3                 4604 	inc	dptr
   6627 74 00              4605 	mov	a,#0x00
   6629 F0                 4606 	movx	@dptr,a
                           4607 ;	genCall
   662A 75 82 9E           4608 	mov	dpl,#_GPIO_set_output_file_name_5_19
   662D 75 83 0C           4609 	mov	dph,#(_GPIO_set_output_file_name_5_19 >> 8)
   6630 75 F0 00           4610 	mov	b,#0x00
   6633 12 1B CC           4611 	lcall	_HAL_assert_fail
                    147A   4612 	C$core_gpio.c$316$2$4 ==.
                           4613 ;	../drivers/CoreGPIO/core_gpio.c:316: break;
   6636 02 67 17           4614 	ljmp	00140$
                    147D   4615 	C$core_gpio.c$319$2$4 ==.
                           4616 ;	../drivers/CoreGPIO/core_gpio.c:319: HAL_ASSERT(0);
   6639                    4617 00136$:
                           4618 ;	genPointerSet
                           4619 ;     genFarPointerSet
   6639 90 0C BE           4620 	mov	dptr,#_GPIO_set_output_file_name_4_21
   663C 74 2E              4621 	mov	a,#0x2E
   663E F0                 4622 	movx	@dptr,a
                           4623 ;	genPointerSet
                           4624 ;     genFarPointerSet
   663F 90 0C BF           4625 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0001)
   6642 74 2E              4626 	mov	a,#0x2E
   6644 F0                 4627 	movx	@dptr,a
                           4628 ;	genPointerSet
                           4629 ;     genFarPointerSet
   6645 90 0C C0           4630 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0002)
   6648 74 2F              4631 	mov	a,#0x2F
   664A F0                 4632 	movx	@dptr,a
                           4633 ;	genPointerSet
                           4634 ;     genFarPointerSet
   664B 90 0C C1           4635 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0003)
   664E 74 64              4636 	mov	a,#0x64
   6650 F0                 4637 	movx	@dptr,a
                           4638 ;	genPointerSet
                           4639 ;     genFarPointerSet
   6651 90 0C C2           4640 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0004)
   6654 74 72              4641 	mov	a,#0x72
   6656 F0                 4642 	movx	@dptr,a
                           4643 ;	genPointerSet
                           4644 ;     genFarPointerSet
   6657 90 0C C3           4645 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0005)
   665A 74 69              4646 	mov	a,#0x69
   665C F0                 4647 	movx	@dptr,a
                           4648 ;	genPointerSet
                           4649 ;     genFarPointerSet
   665D 90 0C C4           4650 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0006)
   6660 74 76              4651 	mov	a,#0x76
   6662 F0                 4652 	movx	@dptr,a
                           4653 ;	genPointerSet
                           4654 ;     genFarPointerSet
   6663 90 0C C5           4655 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0007)
   6666 74 65              4656 	mov	a,#0x65
   6668 F0                 4657 	movx	@dptr,a
                           4658 ;	genPointerSet
                           4659 ;     genFarPointerSet
   6669 90 0C C6           4660 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0008)
   666C 74 72              4661 	mov	a,#0x72
   666E F0                 4662 	movx	@dptr,a
                           4663 ;	genPointerSet
                           4664 ;     genFarPointerSet
   666F 90 0C C7           4665 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0009)
   6672 74 73              4666 	mov	a,#0x73
   6674 F0                 4667 	movx	@dptr,a
                           4668 ;	genPointerSet
                           4669 ;     genFarPointerSet
   6675 90 0C C8           4670 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x000a)
   6678 74 2F              4671 	mov	a,#0x2F
   667A F0                 4672 	movx	@dptr,a
                           4673 ;	genPointerSet
                           4674 ;     genFarPointerSet
   667B 90 0C C9           4675 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x000b)
   667E 74 43              4676 	mov	a,#0x43
   6680 F0                 4677 	movx	@dptr,a
                           4678 ;	genPointerSet
                           4679 ;     genFarPointerSet
   6681 90 0C CA           4680 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x000c)
   6684 74 6F              4681 	mov	a,#0x6F
   6686 F0                 4682 	movx	@dptr,a
                           4683 ;	genPointerSet
                           4684 ;     genFarPointerSet
   6687 90 0C CB           4685 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x000d)
   668A 74 72              4686 	mov	a,#0x72
   668C F0                 4687 	movx	@dptr,a
                           4688 ;	genPointerSet
                           4689 ;     genFarPointerSet
   668D 90 0C CC           4690 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x000e)
   6690 74 65              4691 	mov	a,#0x65
   6692 F0                 4692 	movx	@dptr,a
                           4693 ;	genPointerSet
                           4694 ;     genFarPointerSet
   6693 90 0C CD           4695 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x000f)
   6696 74 47              4696 	mov	a,#0x47
   6698 F0                 4697 	movx	@dptr,a
                           4698 ;	genPointerSet
                           4699 ;     genFarPointerSet
   6699 90 0C CE           4700 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0010)
   669C 74 50              4701 	mov	a,#0x50
   669E F0                 4702 	movx	@dptr,a
                           4703 ;	genPointerSet
                           4704 ;     genFarPointerSet
   669F 90 0C CF           4705 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0011)
   66A2 74 49              4706 	mov	a,#0x49
   66A4 F0                 4707 	movx	@dptr,a
                           4708 ;	genPointerSet
                           4709 ;     genFarPointerSet
   66A5 90 0C D0           4710 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0012)
   66A8 74 4F              4711 	mov	a,#0x4F
   66AA F0                 4712 	movx	@dptr,a
                           4713 ;	genPointerSet
                           4714 ;     genFarPointerSet
   66AB 90 0C D1           4715 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0013)
   66AE 74 2F              4716 	mov	a,#0x2F
   66B0 F0                 4717 	movx	@dptr,a
                           4718 ;	genPointerSet
                           4719 ;     genFarPointerSet
   66B1 90 0C D2           4720 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0014)
   66B4 74 63              4721 	mov	a,#0x63
   66B6 F0                 4722 	movx	@dptr,a
                           4723 ;	genPointerSet
                           4724 ;     genFarPointerSet
   66B7 90 0C D3           4725 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0015)
   66BA 74 6F              4726 	mov	a,#0x6F
   66BC F0                 4727 	movx	@dptr,a
                           4728 ;	genPointerSet
                           4729 ;     genFarPointerSet
   66BD 90 0C D4           4730 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0016)
   66C0 74 72              4731 	mov	a,#0x72
   66C2 F0                 4732 	movx	@dptr,a
                           4733 ;	genPointerSet
                           4734 ;     genFarPointerSet
   66C3 90 0C D5           4735 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0017)
   66C6 74 65              4736 	mov	a,#0x65
   66C8 F0                 4737 	movx	@dptr,a
                           4738 ;	genPointerSet
                           4739 ;     genFarPointerSet
   66C9 90 0C D6           4740 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0018)
   66CC 74 5F              4741 	mov	a,#0x5F
   66CE F0                 4742 	movx	@dptr,a
                           4743 ;	genPointerSet
                           4744 ;     genFarPointerSet
   66CF 90 0C D7           4745 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x0019)
   66D2 74 67              4746 	mov	a,#0x67
   66D4 F0                 4747 	movx	@dptr,a
                           4748 ;	genPointerSet
                           4749 ;     genFarPointerSet
   66D5 90 0C D8           4750 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x001a)
   66D8 74 70              4751 	mov	a,#0x70
   66DA F0                 4752 	movx	@dptr,a
                           4753 ;	genPointerSet
                           4754 ;     genFarPointerSet
   66DB 90 0C D9           4755 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x001b)
   66DE 74 69              4756 	mov	a,#0x69
   66E0 F0                 4757 	movx	@dptr,a
                           4758 ;	genPointerSet
                           4759 ;     genFarPointerSet
   66E1 90 0C DA           4760 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x001c)
   66E4 74 6F              4761 	mov	a,#0x6F
   66E6 F0                 4762 	movx	@dptr,a
                           4763 ;	genPointerSet
                           4764 ;     genFarPointerSet
   66E7 90 0C DB           4765 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x001d)
   66EA 74 2E              4766 	mov	a,#0x2E
   66EC F0                 4767 	movx	@dptr,a
                           4768 ;	genPointerSet
                           4769 ;     genFarPointerSet
   66ED 90 0C DC           4770 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x001e)
   66F0 74 63              4771 	mov	a,#0x63
   66F2 F0                 4772 	movx	@dptr,a
                           4773 ;	genPointerSet
                           4774 ;     genFarPointerSet
   66F3 90 0C DD           4775 	mov	dptr,#(_GPIO_set_output_file_name_4_21 + 0x001f)
   66F6 74 00              4776 	mov	a,#0x00
   66F8 F0                 4777 	movx	@dptr,a
                           4778 ;	genAssign
   66F9 90 05 80           4779 	mov	dptr,#_HAL_assert_fail_PARM_2
   66FC 74 3F              4780 	mov	a,#0x3F
   66FE F0                 4781 	movx	@dptr,a
   66FF A3                 4782 	inc	dptr
   6700 74 01              4783 	mov	a,#0x01
   6702 F0                 4784 	movx	@dptr,a
   6703 A3                 4785 	inc	dptr
   6704 74 00              4786 	mov	a,#0x00
   6706 F0                 4787 	movx	@dptr,a
   6707 A3                 4788 	inc	dptr
   6708 74 00              4789 	mov	a,#0x00
   670A F0                 4790 	movx	@dptr,a
                           4791 ;	genCall
   670B 75 82 BE           4792 	mov	dpl,#_GPIO_set_output_file_name_4_21
   670E 75 83 0C           4793 	mov	dph,#(_GPIO_set_output_file_name_4_21 >> 8)
   6711 75 F0 00           4794 	mov	b,#0x00
   6714 12 1B CC           4795 	lcall	_HAL_assert_fail
                    155B   4796 	C$core_gpio.c$321$1$1 ==.
                           4797 ;	../drivers/CoreGPIO/core_gpio.c:321: }
   6717                    4798 00140$:
                    155B   4799 	C$core_gpio.c$322$1$1 ==.
                    155B   4800 	XG$GPIO_set_output$0$0 ==.
   6717 22                 4801 	ret
                           4802 ;------------------------------------------------------------
                           4803 ;Allocation info for local variables in function 'GPIO_drive_inout'
                           4804 ;------------------------------------------------------------
                           4805 ;port_id                   Allocated with name '_GPIO_drive_inout_PARM_2'
                           4806 ;inout_state               Allocated with name '_GPIO_drive_inout_PARM_3'
                           4807 ;this_gpio                 Allocated with name '_GPIO_drive_inout_this_gpio_1_1'
                           4808 ;config                    Allocated with name '_GPIO_drive_inout_config_1_1'
                           4809 ;cfg_reg_addr              Allocated with name '_GPIO_drive_inout_cfg_reg_addr_1_1'
                           4810 ;file_name                 Allocated with name '_GPIO_drive_inout_file_name_3_3'
                           4811 ;file_name                 Allocated with name '_GPIO_drive_inout_file_name_4_6'
                           4812 ;------------------------------------------------------------
                    155C   4813 	G$GPIO_drive_inout$0$0 ==.
                    155C   4814 	C$core_gpio.c$328$1$1 ==.
                           4815 ;	../drivers/CoreGPIO/core_gpio.c:328: void GPIO_drive_inout
                           4816 ;	-----------------------------------------
                           4817 ;	 function GPIO_drive_inout
                           4818 ;	-----------------------------------------
   6718                    4819 _GPIO_drive_inout:
                           4820 ;	genReceive
   6718 AA F0              4821 	mov	r2,b
   671A AB 83              4822 	mov	r3,dph
   671C E5 82              4823 	mov	a,dpl
   671E 90 0C E0           4824 	mov	dptr,#_GPIO_drive_inout_this_gpio_1_1
   6721 F0                 4825 	movx	@dptr,a
   6722 A3                 4826 	inc	dptr
   6723 EB                 4827 	mov	a,r3
   6724 F0                 4828 	movx	@dptr,a
   6725 A3                 4829 	inc	dptr
   6726 EA                 4830 	mov	a,r2
   6727 F0                 4831 	movx	@dptr,a
                    156C   4832 	C$core_gpio.c$338$2$2 ==.
                           4833 ;	../drivers/CoreGPIO/core_gpio.c:338: HAL_ASSERT( port_id < NB_OF_GPIO );
                           4834 ;	genAssign
   6728 90 0C DE           4835 	mov	dptr,#_GPIO_drive_inout_PARM_2
   672B E0                 4836 	movx	a,@dptr
   672C FA                 4837 	mov	r2,a
                           4838 ;	genCmpLt
                           4839 ;	genCmp
   672D BA 20 00           4840 	cjne	r2,#0x20,00122$
   6730                    4841 00122$:
                           4842 ;	genIfxJump
   6730 50 03              4843 	jnc	00123$
   6732 02 68 17           4844 	ljmp	00104$
   6735                    4845 00123$:
                           4846 ;	genPointerSet
                           4847 ;     genFarPointerSet
   6735 90 0C E3           4848 	mov	dptr,#_GPIO_drive_inout_file_name_3_3
   6738 74 2E              4849 	mov	a,#0x2E
   673A F0                 4850 	movx	@dptr,a
                           4851 ;	genPointerSet
                           4852 ;     genFarPointerSet
   673B 90 0C E4           4853 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0001)
   673E 74 2E              4854 	mov	a,#0x2E
   6740 F0                 4855 	movx	@dptr,a
                           4856 ;	genPointerSet
                           4857 ;     genFarPointerSet
   6741 90 0C E5           4858 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0002)
   6744 74 2F              4859 	mov	a,#0x2F
   6746 F0                 4860 	movx	@dptr,a
                           4861 ;	genPointerSet
                           4862 ;     genFarPointerSet
   6747 90 0C E6           4863 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0003)
   674A 74 64              4864 	mov	a,#0x64
   674C F0                 4865 	movx	@dptr,a
                           4866 ;	genPointerSet
                           4867 ;     genFarPointerSet
   674D 90 0C E7           4868 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0004)
   6750 74 72              4869 	mov	a,#0x72
   6752 F0                 4870 	movx	@dptr,a
                           4871 ;	genPointerSet
                           4872 ;     genFarPointerSet
   6753 90 0C E8           4873 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0005)
   6756 74 69              4874 	mov	a,#0x69
   6758 F0                 4875 	movx	@dptr,a
                           4876 ;	genPointerSet
                           4877 ;     genFarPointerSet
   6759 90 0C E9           4878 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0006)
   675C 74 76              4879 	mov	a,#0x76
   675E F0                 4880 	movx	@dptr,a
                           4881 ;	genPointerSet
                           4882 ;     genFarPointerSet
   675F 90 0C EA           4883 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0007)
   6762 74 65              4884 	mov	a,#0x65
   6764 F0                 4885 	movx	@dptr,a
                           4886 ;	genPointerSet
                           4887 ;     genFarPointerSet
   6765 90 0C EB           4888 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0008)
   6768 74 72              4889 	mov	a,#0x72
   676A F0                 4890 	movx	@dptr,a
                           4891 ;	genPointerSet
                           4892 ;     genFarPointerSet
   676B 90 0C EC           4893 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0009)
   676E 74 73              4894 	mov	a,#0x73
   6770 F0                 4895 	movx	@dptr,a
                           4896 ;	genPointerSet
                           4897 ;     genFarPointerSet
   6771 90 0C ED           4898 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x000a)
   6774 74 2F              4899 	mov	a,#0x2F
   6776 F0                 4900 	movx	@dptr,a
                           4901 ;	genPointerSet
                           4902 ;     genFarPointerSet
   6777 90 0C EE           4903 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x000b)
   677A 74 43              4904 	mov	a,#0x43
   677C F0                 4905 	movx	@dptr,a
                           4906 ;	genPointerSet
                           4907 ;     genFarPointerSet
   677D 90 0C EF           4908 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x000c)
   6780 74 6F              4909 	mov	a,#0x6F
   6782 F0                 4910 	movx	@dptr,a
                           4911 ;	genPointerSet
                           4912 ;     genFarPointerSet
   6783 90 0C F0           4913 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x000d)
   6786 74 72              4914 	mov	a,#0x72
   6788 F0                 4915 	movx	@dptr,a
                           4916 ;	genPointerSet
                           4917 ;     genFarPointerSet
   6789 90 0C F1           4918 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x000e)
   678C 74 65              4919 	mov	a,#0x65
   678E F0                 4920 	movx	@dptr,a
                           4921 ;	genPointerSet
                           4922 ;     genFarPointerSet
   678F 90 0C F2           4923 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x000f)
   6792 74 47              4924 	mov	a,#0x47
   6794 F0                 4925 	movx	@dptr,a
                           4926 ;	genPointerSet
                           4927 ;     genFarPointerSet
   6795 90 0C F3           4928 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0010)
   6798 74 50              4929 	mov	a,#0x50
   679A F0                 4930 	movx	@dptr,a
                           4931 ;	genPointerSet
                           4932 ;     genFarPointerSet
   679B 90 0C F4           4933 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0011)
   679E 74 49              4934 	mov	a,#0x49
   67A0 F0                 4935 	movx	@dptr,a
                           4936 ;	genPointerSet
                           4937 ;     genFarPointerSet
   67A1 90 0C F5           4938 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0012)
   67A4 74 4F              4939 	mov	a,#0x4F
   67A6 F0                 4940 	movx	@dptr,a
                           4941 ;	genPointerSet
                           4942 ;     genFarPointerSet
   67A7 90 0C F6           4943 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0013)
   67AA 74 2F              4944 	mov	a,#0x2F
   67AC F0                 4945 	movx	@dptr,a
                           4946 ;	genPointerSet
                           4947 ;     genFarPointerSet
   67AD 90 0C F7           4948 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0014)
   67B0 74 63              4949 	mov	a,#0x63
   67B2 F0                 4950 	movx	@dptr,a
                           4951 ;	genPointerSet
                           4952 ;     genFarPointerSet
   67B3 90 0C F8           4953 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0015)
   67B6 74 6F              4954 	mov	a,#0x6F
   67B8 F0                 4955 	movx	@dptr,a
                           4956 ;	genPointerSet
                           4957 ;     genFarPointerSet
   67B9 90 0C F9           4958 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0016)
   67BC 74 72              4959 	mov	a,#0x72
   67BE F0                 4960 	movx	@dptr,a
                           4961 ;	genPointerSet
                           4962 ;     genFarPointerSet
   67BF 90 0C FA           4963 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0017)
   67C2 74 65              4964 	mov	a,#0x65
   67C4 F0                 4965 	movx	@dptr,a
                           4966 ;	genPointerSet
                           4967 ;     genFarPointerSet
   67C5 90 0C FB           4968 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0018)
   67C8 74 5F              4969 	mov	a,#0x5F
   67CA F0                 4970 	movx	@dptr,a
                           4971 ;	genPointerSet
                           4972 ;     genFarPointerSet
   67CB 90 0C FC           4973 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x0019)
   67CE 74 67              4974 	mov	a,#0x67
   67D0 F0                 4975 	movx	@dptr,a
                           4976 ;	genPointerSet
                           4977 ;     genFarPointerSet
   67D1 90 0C FD           4978 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x001a)
   67D4 74 70              4979 	mov	a,#0x70
   67D6 F0                 4980 	movx	@dptr,a
                           4981 ;	genPointerSet
                           4982 ;     genFarPointerSet
   67D7 90 0C FE           4983 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x001b)
   67DA 74 69              4984 	mov	a,#0x69
   67DC F0                 4985 	movx	@dptr,a
                           4986 ;	genPointerSet
                           4987 ;     genFarPointerSet
   67DD 90 0C FF           4988 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x001c)
   67E0 74 6F              4989 	mov	a,#0x6F
   67E2 F0                 4990 	movx	@dptr,a
                           4991 ;	genPointerSet
                           4992 ;     genFarPointerSet
   67E3 90 0D 00           4993 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x001d)
   67E6 74 2E              4994 	mov	a,#0x2E
   67E8 F0                 4995 	movx	@dptr,a
                           4996 ;	genPointerSet
                           4997 ;     genFarPointerSet
   67E9 90 0D 01           4998 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x001e)
   67EC 74 63              4999 	mov	a,#0x63
   67EE F0                 5000 	movx	@dptr,a
                           5001 ;	genPointerSet
                           5002 ;     genFarPointerSet
   67EF 90 0D 02           5003 	mov	dptr,#(_GPIO_drive_inout_file_name_3_3 + 0x001f)
   67F2 74 00              5004 	mov	a,#0x00
   67F4 F0                 5005 	movx	@dptr,a
                           5006 ;	genAssign
   67F5 90 05 80           5007 	mov	dptr,#_HAL_assert_fail_PARM_2
   67F8 74 52              5008 	mov	a,#0x52
   67FA F0                 5009 	movx	@dptr,a
   67FB A3                 5010 	inc	dptr
   67FC 74 01              5011 	mov	a,#0x01
   67FE F0                 5012 	movx	@dptr,a
   67FF A3                 5013 	inc	dptr
   6800 74 00              5014 	mov	a,#0x00
   6802 F0                 5015 	movx	@dptr,a
   6803 A3                 5016 	inc	dptr
   6804 74 00              5017 	mov	a,#0x00
   6806 F0                 5018 	movx	@dptr,a
                           5019 ;	genCall
   6807 75 82 E3           5020 	mov	dpl,#_GPIO_drive_inout_file_name_3_3
   680A 75 83 0C           5021 	mov	dph,#(_GPIO_drive_inout_file_name_3_3 >> 8)
   680D 75 F0 00           5022 	mov	b,#0x00
   6810 C0 02              5023 	push	ar2
   6812 12 1B CC           5024 	lcall	_HAL_assert_fail
   6815 D0 02              5025 	pop	ar2
   6817                    5026 00104$:
                    165B   5027 	C$core_gpio.c$340$1$1 ==.
                           5028 ;	../drivers/CoreGPIO/core_gpio.c:340: switch( inout_state )
                           5029 ;	genAssign
   6817 90 0C DF           5030 	mov	dptr,#_GPIO_drive_inout_PARM_3
   681A E0                 5031 	movx	a,@dptr
   681B FB                 5032 	mov	r3,a
                           5033 ;	genCmpEq
                           5034 ;	gencjneshort
   681C BB 00 03           5035 	cjne	r3,#0x00,00124$
   681F 02 68 A8           5036 	ljmp	00107$
   6822                    5037 00124$:
                           5038 ;	genCmpEq
                           5039 ;	gencjneshort
   6822 BB 01 03           5040 	cjne	r3,#0x01,00125$
   6825 02 68 31           5041 	ljmp	00106$
   6828                    5042 00125$:
                           5043 ;	genCmpEq
                           5044 ;	gencjneshort
   6828 BB 02 03           5045 	cjne	r3,#0x02,00126$
   682B 02 69 1F           5046 	ljmp	00108$
   682E                    5047 00126$:
   682E 02 69 73           5048 	ljmp	00112$
                    1675   5049 	C$core_gpio.c$342$2$4 ==.
                           5050 ;	../drivers/CoreGPIO/core_gpio.c:342: case GPIO_DRIVE_HIGH:
   6831                    5051 00106$:
                    1675   5052 	C$core_gpio.c$344$2$4 ==.
                           5053 ;	../drivers/CoreGPIO/core_gpio.c:344: GPIO_set_output( this_gpio, port_id, 1 );
                           5054 ;	genAssign
   6831 90 0C E0           5055 	mov	dptr,#_GPIO_drive_inout_this_gpio_1_1
   6834 E0                 5056 	movx	a,@dptr
   6835 FB                 5057 	mov	r3,a
   6836 A3                 5058 	inc	dptr
   6837 E0                 5059 	movx	a,@dptr
   6838 FC                 5060 	mov	r4,a
   6839 A3                 5061 	inc	dptr
   683A E0                 5062 	movx	a,@dptr
   683B FD                 5063 	mov	r5,a
                           5064 ;	genAssign
   683C 90 0C 32           5065 	mov	dptr,#_GPIO_set_output_PARM_2
   683F EA                 5066 	mov	a,r2
   6840 F0                 5067 	movx	@dptr,a
                           5068 ;	genAssign
   6841 90 0C 33           5069 	mov	dptr,#_GPIO_set_output_PARM_3
   6844 74 01              5070 	mov	a,#0x01
   6846 F0                 5071 	movx	@dptr,a
                           5072 ;	genCall
   6847 8B 82              5073 	mov	dpl,r3
   6849 8C 83              5074 	mov	dph,r4
   684B 8D F0              5075 	mov	b,r5
   684D C0 02              5076 	push	ar2
   684F 12 5F 6F           5077 	lcall	_GPIO_set_output
   6852 D0 02              5078 	pop	ar2
                    1698   5079 	C$core_gpio.c$347$2$4 ==.
                           5080 ;	../drivers/CoreGPIO/core_gpio.c:347: cfg_reg_addr = this_gpio->base_addr + (port_id * 4);
                           5081 ;	genAssign
   6854 90 0C E0           5082 	mov	dptr,#_GPIO_drive_inout_this_gpio_1_1
   6857 E0                 5083 	movx	a,@dptr
   6858 FB                 5084 	mov	r3,a
   6859 A3                 5085 	inc	dptr
   685A E0                 5086 	movx	a,@dptr
   685B FC                 5087 	mov	r4,a
   685C A3                 5088 	inc	dptr
   685D E0                 5089 	movx	a,@dptr
   685E FD                 5090 	mov	r5,a
                           5091 ;	genPointerGet
                           5092 ;	genGenPointerGet
   685F 8B 82              5093 	mov	dpl,r3
   6861 8C 83              5094 	mov	dph,r4
   6863 8D F0              5095 	mov	b,r5
   6865 12 71 F6           5096 	lcall	__gptrget
   6868 FB                 5097 	mov	r3,a
   6869 A3                 5098 	inc	dptr
   686A 12 71 F6           5099 	lcall	__gptrget
   686D FC                 5100 	mov	r4,a
                           5101 ;	genMult
                           5102 ;	genMultOneByte
   686E EA                 5103 	mov	a,r2
   686F 75 F0 04           5104 	mov	b,#0x04
   6872 A4                 5105 	mul	ab
                           5106 ;	genPlus
   6873 25 03              5107 	add	a,ar3
   6875 FB                 5108 	mov	r3,a
   6876 E5 04              5109 	mov	a,ar4
   6878 35 F0              5110 	addc	a,b
   687A FC                 5111 	mov	r4,a
                           5112 ;	genCast
   687B 7D 00              5113 	mov	r5,#0x00
   687D 7E 00              5114 	mov	r6,#0x00
                    16C3   5115 	C$core_gpio.c$348$2$4 ==.
                           5116 ;	../drivers/CoreGPIO/core_gpio.c:348: config = HW_get_8bit_reg( cfg_reg_addr );
                           5117 ;	genCast
                           5118 ;	genCall
   687F 8B 82              5119 	mov	dpl,r3
   6881 8C 83              5120 	mov	dph,r4
   6883 C0 03              5121 	push	ar3
   6885 C0 04              5122 	push	ar4
   6887 12 1C 7D           5123 	lcall	_HW_get_8bit_reg
   688A AD 82              5124 	mov	r5,dpl
   688C D0 04              5125 	pop	ar4
   688E D0 03              5126 	pop	ar3
                           5127 ;	genCast
   6890 7E 00              5128 	mov	r6,#0x00
   6892 7F 00              5129 	mov	r7,#0x00
   6894 78 00              5130 	mov	r0,#0x00
                    16DA   5131 	C$core_gpio.c$349$2$4 ==.
                           5132 ;	../drivers/CoreGPIO/core_gpio.c:349: config |= OUTPUT_BUFFER_ENABLE_MASK;
                           5133 ;	genOr
   6896 43 05 04           5134 	orl	ar5,#0x04
                    16DD   5135 	C$core_gpio.c$350$2$4 ==.
                           5136 ;	../drivers/CoreGPIO/core_gpio.c:350: HW_set_8bit_reg( cfg_reg_addr, config );
                           5137 ;	genCast
   6899 90 05 9D           5138 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   689C ED                 5139 	mov	a,r5
   689D F0                 5140 	movx	@dptr,a
                           5141 ;	genCall
   689E 8B 82              5142 	mov	dpl,r3
   68A0 8C 83              5143 	mov	dph,r4
   68A2 12 1C 6F           5144 	lcall	_HW_set_8bit_reg
                    16E9   5145 	C$core_gpio.c$351$2$4 ==.
                           5146 ;	../drivers/CoreGPIO/core_gpio.c:351: break;
   68A5 02 6A 51           5147 	ljmp	00116$
                    16EC   5148 	C$core_gpio.c$353$2$4 ==.
                           5149 ;	../drivers/CoreGPIO/core_gpio.c:353: case GPIO_DRIVE_LOW:
   68A8                    5150 00107$:
                    16EC   5151 	C$core_gpio.c$355$2$4 ==.
                           5152 ;	../drivers/CoreGPIO/core_gpio.c:355: GPIO_set_output( this_gpio, port_id, 0 );
                           5153 ;	genAssign
   68A8 90 0C E0           5154 	mov	dptr,#_GPIO_drive_inout_this_gpio_1_1
   68AB E0                 5155 	movx	a,@dptr
   68AC FB                 5156 	mov	r3,a
   68AD A3                 5157 	inc	dptr
   68AE E0                 5158 	movx	a,@dptr
   68AF FC                 5159 	mov	r4,a
   68B0 A3                 5160 	inc	dptr
   68B1 E0                 5161 	movx	a,@dptr
   68B2 FD                 5162 	mov	r5,a
                           5163 ;	genAssign
   68B3 90 0C 32           5164 	mov	dptr,#_GPIO_set_output_PARM_2
   68B6 EA                 5165 	mov	a,r2
   68B7 F0                 5166 	movx	@dptr,a
                           5167 ;	genAssign
   68B8 90 0C 33           5168 	mov	dptr,#_GPIO_set_output_PARM_3
   68BB 74 00              5169 	mov	a,#0x00
   68BD F0                 5170 	movx	@dptr,a
                           5171 ;	genCall
   68BE 8B 82              5172 	mov	dpl,r3
   68C0 8C 83              5173 	mov	dph,r4
   68C2 8D F0              5174 	mov	b,r5
   68C4 C0 02              5175 	push	ar2
   68C6 12 5F 6F           5176 	lcall	_GPIO_set_output
   68C9 D0 02              5177 	pop	ar2
                    170F   5178 	C$core_gpio.c$358$2$4 ==.
                           5179 ;	../drivers/CoreGPIO/core_gpio.c:358: cfg_reg_addr = this_gpio->base_addr + (port_id * 4);
                           5180 ;	genAssign
   68CB 90 0C E0           5181 	mov	dptr,#_GPIO_drive_inout_this_gpio_1_1
   68CE E0                 5182 	movx	a,@dptr
   68CF FB                 5183 	mov	r3,a
   68D0 A3                 5184 	inc	dptr
   68D1 E0                 5185 	movx	a,@dptr
   68D2 FC                 5186 	mov	r4,a
   68D3 A3                 5187 	inc	dptr
   68D4 E0                 5188 	movx	a,@dptr
   68D5 FD                 5189 	mov	r5,a
                           5190 ;	genPointerGet
                           5191 ;	genGenPointerGet
   68D6 8B 82              5192 	mov	dpl,r3
   68D8 8C 83              5193 	mov	dph,r4
   68DA 8D F0              5194 	mov	b,r5
   68DC 12 71 F6           5195 	lcall	__gptrget
   68DF FB                 5196 	mov	r3,a
   68E0 A3                 5197 	inc	dptr
   68E1 12 71 F6           5198 	lcall	__gptrget
   68E4 FC                 5199 	mov	r4,a
                           5200 ;	genMult
                           5201 ;	genMultOneByte
   68E5 EA                 5202 	mov	a,r2
   68E6 75 F0 04           5203 	mov	b,#0x04
   68E9 A4                 5204 	mul	ab
                           5205 ;	genPlus
   68EA 25 03              5206 	add	a,ar3
   68EC FB                 5207 	mov	r3,a
   68ED E5 04              5208 	mov	a,ar4
   68EF 35 F0              5209 	addc	a,b
   68F1 FC                 5210 	mov	r4,a
                           5211 ;	genCast
   68F2 7D 00              5212 	mov	r5,#0x00
   68F4 7E 00              5213 	mov	r6,#0x00
                    173A   5214 	C$core_gpio.c$359$2$4 ==.
                           5215 ;	../drivers/CoreGPIO/core_gpio.c:359: config = HW_get_8bit_reg( cfg_reg_addr );
                           5216 ;	genCast
                           5217 ;	genCall
   68F6 8B 82              5218 	mov	dpl,r3
   68F8 8C 83              5219 	mov	dph,r4
   68FA C0 03              5220 	push	ar3
   68FC C0 04              5221 	push	ar4
   68FE 12 1C 7D           5222 	lcall	_HW_get_8bit_reg
   6901 AD 82              5223 	mov	r5,dpl
   6903 D0 04              5224 	pop	ar4
   6905 D0 03              5225 	pop	ar3
                           5226 ;	genCast
   6907 7E 00              5227 	mov	r6,#0x00
   6909 7F 00              5228 	mov	r7,#0x00
   690B 78 00              5229 	mov	r0,#0x00
                    1751   5230 	C$core_gpio.c$360$2$4 ==.
                           5231 ;	../drivers/CoreGPIO/core_gpio.c:360: config |= OUTPUT_BUFFER_ENABLE_MASK;
                           5232 ;	genOr
   690D 43 05 04           5233 	orl	ar5,#0x04
                    1754   5234 	C$core_gpio.c$361$2$4 ==.
                           5235 ;	../drivers/CoreGPIO/core_gpio.c:361: HW_set_8bit_reg( cfg_reg_addr, config );
                           5236 ;	genCast
   6910 90 05 9D           5237 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   6913 ED                 5238 	mov	a,r5
   6914 F0                 5239 	movx	@dptr,a
                           5240 ;	genCall
   6915 8B 82              5241 	mov	dpl,r3
   6917 8C 83              5242 	mov	dph,r4
   6919 12 1C 6F           5243 	lcall	_HW_set_8bit_reg
                    1760   5244 	C$core_gpio.c$362$2$4 ==.
                           5245 ;	../drivers/CoreGPIO/core_gpio.c:362: break;
   691C 02 6A 51           5246 	ljmp	00116$
                    1763   5247 	C$core_gpio.c$364$2$4 ==.
                           5248 ;	../drivers/CoreGPIO/core_gpio.c:364: case GPIO_HIGH_Z:
   691F                    5249 00108$:
                    1763   5250 	C$core_gpio.c$366$2$4 ==.
                           5251 ;	../drivers/CoreGPIO/core_gpio.c:366: cfg_reg_addr = this_gpio->base_addr + (port_id * 4);
                           5252 ;	genAssign
   691F 90 0C E0           5253 	mov	dptr,#_GPIO_drive_inout_this_gpio_1_1
   6922 E0                 5254 	movx	a,@dptr
   6923 FB                 5255 	mov	r3,a
   6924 A3                 5256 	inc	dptr
   6925 E0                 5257 	movx	a,@dptr
   6926 FC                 5258 	mov	r4,a
   6927 A3                 5259 	inc	dptr
   6928 E0                 5260 	movx	a,@dptr
   6929 FD                 5261 	mov	r5,a
                           5262 ;	genPointerGet
                           5263 ;	genGenPointerGet
   692A 8B 82              5264 	mov	dpl,r3
   692C 8C 83              5265 	mov	dph,r4
   692E 8D F0              5266 	mov	b,r5
   6930 12 71 F6           5267 	lcall	__gptrget
   6933 FB                 5268 	mov	r3,a
   6934 A3                 5269 	inc	dptr
   6935 12 71 F6           5270 	lcall	__gptrget
   6938 FC                 5271 	mov	r4,a
                           5272 ;	genMult
                           5273 ;	genMultOneByte
   6939 EA                 5274 	mov	a,r2
   693A 75 F0 04           5275 	mov	b,#0x04
   693D A4                 5276 	mul	ab
                           5277 ;	genPlus
   693E 25 03              5278 	add	a,ar3
   6940 FB                 5279 	mov	r3,a
   6941 E5 04              5280 	mov	a,ar4
   6943 35 F0              5281 	addc	a,b
   6945 FC                 5282 	mov	r4,a
                           5283 ;	genCast
   6946 7A 00              5284 	mov	r2,#0x00
   6948 7D 00              5285 	mov	r5,#0x00
                    178E   5286 	C$core_gpio.c$367$2$4 ==.
                           5287 ;	../drivers/CoreGPIO/core_gpio.c:367: config = HW_get_8bit_reg( cfg_reg_addr );
                           5288 ;	genCast
                           5289 ;	genCall
   694A 8B 82              5290 	mov	dpl,r3
   694C 8C 83              5291 	mov	dph,r4
   694E C0 03              5292 	push	ar3
   6950 C0 04              5293 	push	ar4
   6952 12 1C 7D           5294 	lcall	_HW_get_8bit_reg
   6955 AA 82              5295 	mov	r2,dpl
   6957 D0 04              5296 	pop	ar4
   6959 D0 03              5297 	pop	ar3
                           5298 ;	genCast
   695B 7D 00              5299 	mov	r5,#0x00
   695D 7E 00              5300 	mov	r6,#0x00
   695F 7F 00              5301 	mov	r7,#0x00
                    17A5   5302 	C$core_gpio.c$368$2$4 ==.
                           5303 ;	../drivers/CoreGPIO/core_gpio.c:368: config &= ~OUTPUT_BUFFER_ENABLE_MASK;
                           5304 ;	genAnd
   6961 53 02 FB           5305 	anl	ar2,#0xFB
                    17A8   5306 	C$core_gpio.c$369$2$4 ==.
                           5307 ;	../drivers/CoreGPIO/core_gpio.c:369: HW_set_8bit_reg( cfg_reg_addr, config );
                           5308 ;	genCast
   6964 90 05 9D           5309 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   6967 EA                 5310 	mov	a,r2
   6968 F0                 5311 	movx	@dptr,a
                           5312 ;	genCall
   6969 8B 82              5313 	mov	dpl,r3
   696B 8C 83              5314 	mov	dph,r4
   696D 12 1C 6F           5315 	lcall	_HW_set_8bit_reg
                    17B4   5316 	C$core_gpio.c$370$2$4 ==.
                           5317 ;	../drivers/CoreGPIO/core_gpio.c:370: break;
   6970 02 6A 51           5318 	ljmp	00116$
                    17B7   5319 	C$core_gpio.c$373$2$4 ==.
                           5320 ;	../drivers/CoreGPIO/core_gpio.c:373: HAL_ASSERT(0);
   6973                    5321 00112$:
                           5322 ;	genPointerSet
                           5323 ;     genFarPointerSet
   6973 90 0D 03           5324 	mov	dptr,#_GPIO_drive_inout_file_name_4_6
   6976 74 2E              5325 	mov	a,#0x2E
   6978 F0                 5326 	movx	@dptr,a
                           5327 ;	genPointerSet
                           5328 ;     genFarPointerSet
   6979 90 0D 04           5329 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0001)
   697C 74 2E              5330 	mov	a,#0x2E
   697E F0                 5331 	movx	@dptr,a
                           5332 ;	genPointerSet
                           5333 ;     genFarPointerSet
   697F 90 0D 05           5334 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0002)
   6982 74 2F              5335 	mov	a,#0x2F
   6984 F0                 5336 	movx	@dptr,a
                           5337 ;	genPointerSet
                           5338 ;     genFarPointerSet
   6985 90 0D 06           5339 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0003)
   6988 74 64              5340 	mov	a,#0x64
   698A F0                 5341 	movx	@dptr,a
                           5342 ;	genPointerSet
                           5343 ;     genFarPointerSet
   698B 90 0D 07           5344 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0004)
   698E 74 72              5345 	mov	a,#0x72
   6990 F0                 5346 	movx	@dptr,a
                           5347 ;	genPointerSet
                           5348 ;     genFarPointerSet
   6991 90 0D 08           5349 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0005)
   6994 74 69              5350 	mov	a,#0x69
   6996 F0                 5351 	movx	@dptr,a
                           5352 ;	genPointerSet
                           5353 ;     genFarPointerSet
   6997 90 0D 09           5354 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0006)
   699A 74 76              5355 	mov	a,#0x76
   699C F0                 5356 	movx	@dptr,a
                           5357 ;	genPointerSet
                           5358 ;     genFarPointerSet
   699D 90 0D 0A           5359 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0007)
   69A0 74 65              5360 	mov	a,#0x65
   69A2 F0                 5361 	movx	@dptr,a
                           5362 ;	genPointerSet
                           5363 ;     genFarPointerSet
   69A3 90 0D 0B           5364 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0008)
   69A6 74 72              5365 	mov	a,#0x72
   69A8 F0                 5366 	movx	@dptr,a
                           5367 ;	genPointerSet
                           5368 ;     genFarPointerSet
   69A9 90 0D 0C           5369 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0009)
   69AC 74 73              5370 	mov	a,#0x73
   69AE F0                 5371 	movx	@dptr,a
                           5372 ;	genPointerSet
                           5373 ;     genFarPointerSet
   69AF 90 0D 0D           5374 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x000a)
   69B2 74 2F              5375 	mov	a,#0x2F
   69B4 F0                 5376 	movx	@dptr,a
                           5377 ;	genPointerSet
                           5378 ;     genFarPointerSet
   69B5 90 0D 0E           5379 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x000b)
   69B8 74 43              5380 	mov	a,#0x43
   69BA F0                 5381 	movx	@dptr,a
                           5382 ;	genPointerSet
                           5383 ;     genFarPointerSet
   69BB 90 0D 0F           5384 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x000c)
   69BE 74 6F              5385 	mov	a,#0x6F
   69C0 F0                 5386 	movx	@dptr,a
                           5387 ;	genPointerSet
                           5388 ;     genFarPointerSet
   69C1 90 0D 10           5389 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x000d)
   69C4 74 72              5390 	mov	a,#0x72
   69C6 F0                 5391 	movx	@dptr,a
                           5392 ;	genPointerSet
                           5393 ;     genFarPointerSet
   69C7 90 0D 11           5394 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x000e)
   69CA 74 65              5395 	mov	a,#0x65
   69CC F0                 5396 	movx	@dptr,a
                           5397 ;	genPointerSet
                           5398 ;     genFarPointerSet
   69CD 90 0D 12           5399 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x000f)
   69D0 74 47              5400 	mov	a,#0x47
   69D2 F0                 5401 	movx	@dptr,a
                           5402 ;	genPointerSet
                           5403 ;     genFarPointerSet
   69D3 90 0D 13           5404 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0010)
   69D6 74 50              5405 	mov	a,#0x50
   69D8 F0                 5406 	movx	@dptr,a
                           5407 ;	genPointerSet
                           5408 ;     genFarPointerSet
   69D9 90 0D 14           5409 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0011)
   69DC 74 49              5410 	mov	a,#0x49
   69DE F0                 5411 	movx	@dptr,a
                           5412 ;	genPointerSet
                           5413 ;     genFarPointerSet
   69DF 90 0D 15           5414 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0012)
   69E2 74 4F              5415 	mov	a,#0x4F
   69E4 F0                 5416 	movx	@dptr,a
                           5417 ;	genPointerSet
                           5418 ;     genFarPointerSet
   69E5 90 0D 16           5419 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0013)
   69E8 74 2F              5420 	mov	a,#0x2F
   69EA F0                 5421 	movx	@dptr,a
                           5422 ;	genPointerSet
                           5423 ;     genFarPointerSet
   69EB 90 0D 17           5424 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0014)
   69EE 74 63              5425 	mov	a,#0x63
   69F0 F0                 5426 	movx	@dptr,a
                           5427 ;	genPointerSet
                           5428 ;     genFarPointerSet
   69F1 90 0D 18           5429 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0015)
   69F4 74 6F              5430 	mov	a,#0x6F
   69F6 F0                 5431 	movx	@dptr,a
                           5432 ;	genPointerSet
                           5433 ;     genFarPointerSet
   69F7 90 0D 19           5434 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0016)
   69FA 74 72              5435 	mov	a,#0x72
   69FC F0                 5436 	movx	@dptr,a
                           5437 ;	genPointerSet
                           5438 ;     genFarPointerSet
   69FD 90 0D 1A           5439 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0017)
   6A00 74 65              5440 	mov	a,#0x65
   6A02 F0                 5441 	movx	@dptr,a
                           5442 ;	genPointerSet
                           5443 ;     genFarPointerSet
   6A03 90 0D 1B           5444 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0018)
   6A06 74 5F              5445 	mov	a,#0x5F
   6A08 F0                 5446 	movx	@dptr,a
                           5447 ;	genPointerSet
                           5448 ;     genFarPointerSet
   6A09 90 0D 1C           5449 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x0019)
   6A0C 74 67              5450 	mov	a,#0x67
   6A0E F0                 5451 	movx	@dptr,a
                           5452 ;	genPointerSet
                           5453 ;     genFarPointerSet
   6A0F 90 0D 1D           5454 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x001a)
   6A12 74 70              5455 	mov	a,#0x70
   6A14 F0                 5456 	movx	@dptr,a
                           5457 ;	genPointerSet
                           5458 ;     genFarPointerSet
   6A15 90 0D 1E           5459 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x001b)
   6A18 74 69              5460 	mov	a,#0x69
   6A1A F0                 5461 	movx	@dptr,a
                           5462 ;	genPointerSet
                           5463 ;     genFarPointerSet
   6A1B 90 0D 1F           5464 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x001c)
   6A1E 74 6F              5465 	mov	a,#0x6F
   6A20 F0                 5466 	movx	@dptr,a
                           5467 ;	genPointerSet
                           5468 ;     genFarPointerSet
   6A21 90 0D 20           5469 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x001d)
   6A24 74 2E              5470 	mov	a,#0x2E
   6A26 F0                 5471 	movx	@dptr,a
                           5472 ;	genPointerSet
                           5473 ;     genFarPointerSet
   6A27 90 0D 21           5474 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x001e)
   6A2A 74 63              5475 	mov	a,#0x63
   6A2C F0                 5476 	movx	@dptr,a
                           5477 ;	genPointerSet
                           5478 ;     genFarPointerSet
   6A2D 90 0D 22           5479 	mov	dptr,#(_GPIO_drive_inout_file_name_4_6 + 0x001f)
   6A30 74 00              5480 	mov	a,#0x00
   6A32 F0                 5481 	movx	@dptr,a
                           5482 ;	genAssign
   6A33 90 05 80           5483 	mov	dptr,#_HAL_assert_fail_PARM_2
   6A36 74 75              5484 	mov	a,#0x75
   6A38 F0                 5485 	movx	@dptr,a
   6A39 A3                 5486 	inc	dptr
   6A3A 74 01              5487 	mov	a,#0x01
   6A3C F0                 5488 	movx	@dptr,a
   6A3D A3                 5489 	inc	dptr
   6A3E 74 00              5490 	mov	a,#0x00
   6A40 F0                 5491 	movx	@dptr,a
   6A41 A3                 5492 	inc	dptr
   6A42 74 00              5493 	mov	a,#0x00
   6A44 F0                 5494 	movx	@dptr,a
                           5495 ;	genCall
   6A45 75 82 03           5496 	mov	dpl,#_GPIO_drive_inout_file_name_4_6
   6A48 75 83 0D           5497 	mov	dph,#(_GPIO_drive_inout_file_name_4_6 >> 8)
   6A4B 75 F0 00           5498 	mov	b,#0x00
   6A4E 12 1B CC           5499 	lcall	_HAL_assert_fail
                    1895   5500 	C$core_gpio.c$375$1$1 ==.
                           5501 ;	../drivers/CoreGPIO/core_gpio.c:375: }
   6A51                    5502 00116$:
                    1895   5503 	C$core_gpio.c$376$1$1 ==.
                    1895   5504 	XG$GPIO_drive_inout$0$0 ==.
   6A51 22                 5505 	ret
                           5506 ;------------------------------------------------------------
                           5507 ;Allocation info for local variables in function 'GPIO_enable_irq'
                           5508 ;------------------------------------------------------------
                           5509 ;port_id                   Allocated with name '_GPIO_enable_irq_PARM_2'
                           5510 ;this_gpio                 Allocated with name '_GPIO_enable_irq_this_gpio_1_1'
                           5511 ;cfg_value                 Allocated with name '_GPIO_enable_irq_cfg_value_1_1'
                           5512 ;cfg_reg_addr              Allocated with name '_GPIO_enable_irq_cfg_reg_addr_1_1'
                           5513 ;file_name                 Allocated with name '_GPIO_enable_irq_file_name_3_3'
                           5514 ;------------------------------------------------------------
                    1896   5515 	G$GPIO_enable_irq$0$0 ==.
                    1896   5516 	C$core_gpio.c$382$1$1 ==.
                           5517 ;	../drivers/CoreGPIO/core_gpio.c:382: void GPIO_enable_irq
                           5518 ;	-----------------------------------------
                           5519 ;	 function GPIO_enable_irq
                           5520 ;	-----------------------------------------
   6A52                    5521 _GPIO_enable_irq:
                           5522 ;	genReceive
   6A52 AA F0              5523 	mov	r2,b
   6A54 AB 83              5524 	mov	r3,dph
   6A56 E5 82              5525 	mov	a,dpl
   6A58 90 0D 24           5526 	mov	dptr,#_GPIO_enable_irq_this_gpio_1_1
   6A5B F0                 5527 	movx	@dptr,a
   6A5C A3                 5528 	inc	dptr
   6A5D EB                 5529 	mov	a,r3
   6A5E F0                 5530 	movx	@dptr,a
   6A5F A3                 5531 	inc	dptr
   6A60 EA                 5532 	mov	a,r2
   6A61 F0                 5533 	movx	@dptr,a
                    18A6   5534 	C$core_gpio.c$389$1$1 ==.
                           5535 ;	../drivers/CoreGPIO/core_gpio.c:389: uint32_t cfg_reg_addr = this_gpio->base_addr;
                           5536 ;	genAssign
   6A62 90 0D 24           5537 	mov	dptr,#_GPIO_enable_irq_this_gpio_1_1
   6A65 E0                 5538 	movx	a,@dptr
   6A66 FA                 5539 	mov	r2,a
   6A67 A3                 5540 	inc	dptr
   6A68 E0                 5541 	movx	a,@dptr
   6A69 FB                 5542 	mov	r3,a
   6A6A A3                 5543 	inc	dptr
   6A6B E0                 5544 	movx	a,@dptr
   6A6C FC                 5545 	mov	r4,a
                           5546 ;	genPointerGet
                           5547 ;	genGenPointerGet
   6A6D 8A 82              5548 	mov	dpl,r2
   6A6F 8B 83              5549 	mov	dph,r3
   6A71 8C F0              5550 	mov	b,r4
   6A73 12 71 F6           5551 	lcall	__gptrget
   6A76 FA                 5552 	mov	r2,a
   6A77 A3                 5553 	inc	dptr
   6A78 12 71 F6           5554 	lcall	__gptrget
   6A7B FB                 5555 	mov	r3,a
                           5556 ;	genCast
   6A7C 7C 00              5557 	mov	r4,#0x00
   6A7E 7D 00              5558 	mov	r5,#0x00
                    18C4   5559 	C$core_gpio.c$391$2$2 ==.
                           5560 ;	../drivers/CoreGPIO/core_gpio.c:391: HAL_ASSERT( port_id < NB_OF_GPIO );
                           5561 ;	genAssign
   6A80 90 0D 23           5562 	mov	dptr,#_GPIO_enable_irq_PARM_2
   6A83 E0                 5563 	movx	a,@dptr
   6A84 FE                 5564 	mov	r6,a
                           5565 ;	genCmpLt
                           5566 ;	genCmp
   6A85 BE 20 00           5567 	cjne	r6,#0x20,00112$
   6A88                    5568 00112$:
   6A88 E4                 5569 	clr	a
   6A89 33                 5570 	rlc	a
   6A8A FF                 5571 	mov	r7,a
                           5572 ;	genIfx
   6A8B EF                 5573 	mov	a,r7
                           5574 ;	genIfxJump
   6A8C 60 03              5575 	jz	00113$
   6A8E 02 6B 87           5576 	ljmp	00104$
   6A91                    5577 00113$:
                           5578 ;	genPointerSet
                           5579 ;     genFarPointerSet
   6A91 90 0D 27           5580 	mov	dptr,#_GPIO_enable_irq_file_name_3_3
   6A94 74 2E              5581 	mov	a,#0x2E
   6A96 F0                 5582 	movx	@dptr,a
                           5583 ;	genPointerSet
                           5584 ;     genFarPointerSet
   6A97 90 0D 28           5585 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0001)
   6A9A 74 2E              5586 	mov	a,#0x2E
   6A9C F0                 5587 	movx	@dptr,a
                           5588 ;	genPointerSet
                           5589 ;     genFarPointerSet
   6A9D 90 0D 29           5590 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0002)
   6AA0 74 2F              5591 	mov	a,#0x2F
   6AA2 F0                 5592 	movx	@dptr,a
                           5593 ;	genPointerSet
                           5594 ;     genFarPointerSet
   6AA3 90 0D 2A           5595 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0003)
   6AA6 74 64              5596 	mov	a,#0x64
   6AA8 F0                 5597 	movx	@dptr,a
                           5598 ;	genPointerSet
                           5599 ;     genFarPointerSet
   6AA9 90 0D 2B           5600 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0004)
   6AAC 74 72              5601 	mov	a,#0x72
   6AAE F0                 5602 	movx	@dptr,a
                           5603 ;	genPointerSet
                           5604 ;     genFarPointerSet
   6AAF 90 0D 2C           5605 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0005)
   6AB2 74 69              5606 	mov	a,#0x69
   6AB4 F0                 5607 	movx	@dptr,a
                           5608 ;	genPointerSet
                           5609 ;     genFarPointerSet
   6AB5 90 0D 2D           5610 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0006)
   6AB8 74 76              5611 	mov	a,#0x76
   6ABA F0                 5612 	movx	@dptr,a
                           5613 ;	genPointerSet
                           5614 ;     genFarPointerSet
   6ABB 90 0D 2E           5615 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0007)
   6ABE 74 65              5616 	mov	a,#0x65
   6AC0 F0                 5617 	movx	@dptr,a
                           5618 ;	genPointerSet
                           5619 ;     genFarPointerSet
   6AC1 90 0D 2F           5620 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0008)
   6AC4 74 72              5621 	mov	a,#0x72
   6AC6 F0                 5622 	movx	@dptr,a
                           5623 ;	genPointerSet
                           5624 ;     genFarPointerSet
   6AC7 90 0D 30           5625 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0009)
   6ACA 74 73              5626 	mov	a,#0x73
   6ACC F0                 5627 	movx	@dptr,a
                           5628 ;	genPointerSet
                           5629 ;     genFarPointerSet
   6ACD 90 0D 31           5630 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x000a)
   6AD0 74 2F              5631 	mov	a,#0x2F
   6AD2 F0                 5632 	movx	@dptr,a
                           5633 ;	genPointerSet
                           5634 ;     genFarPointerSet
   6AD3 90 0D 32           5635 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x000b)
   6AD6 74 43              5636 	mov	a,#0x43
   6AD8 F0                 5637 	movx	@dptr,a
                           5638 ;	genPointerSet
                           5639 ;     genFarPointerSet
   6AD9 90 0D 33           5640 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x000c)
   6ADC 74 6F              5641 	mov	a,#0x6F
   6ADE F0                 5642 	movx	@dptr,a
                           5643 ;	genPointerSet
                           5644 ;     genFarPointerSet
   6ADF 90 0D 34           5645 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x000d)
   6AE2 74 72              5646 	mov	a,#0x72
   6AE4 F0                 5647 	movx	@dptr,a
                           5648 ;	genPointerSet
                           5649 ;     genFarPointerSet
   6AE5 90 0D 35           5650 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x000e)
   6AE8 74 65              5651 	mov	a,#0x65
   6AEA F0                 5652 	movx	@dptr,a
                           5653 ;	genPointerSet
                           5654 ;     genFarPointerSet
   6AEB 90 0D 36           5655 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x000f)
   6AEE 74 47              5656 	mov	a,#0x47
   6AF0 F0                 5657 	movx	@dptr,a
                           5658 ;	genPointerSet
                           5659 ;     genFarPointerSet
   6AF1 90 0D 37           5660 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0010)
   6AF4 74 50              5661 	mov	a,#0x50
   6AF6 F0                 5662 	movx	@dptr,a
                           5663 ;	genPointerSet
                           5664 ;     genFarPointerSet
   6AF7 90 0D 38           5665 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0011)
   6AFA 74 49              5666 	mov	a,#0x49
   6AFC F0                 5667 	movx	@dptr,a
                           5668 ;	genPointerSet
                           5669 ;     genFarPointerSet
   6AFD 90 0D 39           5670 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0012)
   6B00 74 4F              5671 	mov	a,#0x4F
   6B02 F0                 5672 	movx	@dptr,a
                           5673 ;	genPointerSet
                           5674 ;     genFarPointerSet
   6B03 90 0D 3A           5675 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0013)
   6B06 74 2F              5676 	mov	a,#0x2F
   6B08 F0                 5677 	movx	@dptr,a
                           5678 ;	genPointerSet
                           5679 ;     genFarPointerSet
   6B09 90 0D 3B           5680 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0014)
   6B0C 74 63              5681 	mov	a,#0x63
   6B0E F0                 5682 	movx	@dptr,a
                           5683 ;	genPointerSet
                           5684 ;     genFarPointerSet
   6B0F 90 0D 3C           5685 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0015)
   6B12 74 6F              5686 	mov	a,#0x6F
   6B14 F0                 5687 	movx	@dptr,a
                           5688 ;	genPointerSet
                           5689 ;     genFarPointerSet
   6B15 90 0D 3D           5690 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0016)
   6B18 74 72              5691 	mov	a,#0x72
   6B1A F0                 5692 	movx	@dptr,a
                           5693 ;	genPointerSet
                           5694 ;     genFarPointerSet
   6B1B 90 0D 3E           5695 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0017)
   6B1E 74 65              5696 	mov	a,#0x65
   6B20 F0                 5697 	movx	@dptr,a
                           5698 ;	genPointerSet
                           5699 ;     genFarPointerSet
   6B21 90 0D 3F           5700 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0018)
   6B24 74 5F              5701 	mov	a,#0x5F
   6B26 F0                 5702 	movx	@dptr,a
                           5703 ;	genPointerSet
                           5704 ;     genFarPointerSet
   6B27 90 0D 40           5705 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x0019)
   6B2A 74 67              5706 	mov	a,#0x67
   6B2C F0                 5707 	movx	@dptr,a
                           5708 ;	genPointerSet
                           5709 ;     genFarPointerSet
   6B2D 90 0D 41           5710 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x001a)
   6B30 74 70              5711 	mov	a,#0x70
   6B32 F0                 5712 	movx	@dptr,a
                           5713 ;	genPointerSet
                           5714 ;     genFarPointerSet
   6B33 90 0D 42           5715 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x001b)
   6B36 74 69              5716 	mov	a,#0x69
   6B38 F0                 5717 	movx	@dptr,a
                           5718 ;	genPointerSet
                           5719 ;     genFarPointerSet
   6B39 90 0D 43           5720 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x001c)
   6B3C 74 6F              5721 	mov	a,#0x6F
   6B3E F0                 5722 	movx	@dptr,a
                           5723 ;	genPointerSet
                           5724 ;     genFarPointerSet
   6B3F 90 0D 44           5725 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x001d)
   6B42 74 2E              5726 	mov	a,#0x2E
   6B44 F0                 5727 	movx	@dptr,a
                           5728 ;	genPointerSet
                           5729 ;     genFarPointerSet
   6B45 90 0D 45           5730 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x001e)
   6B48 74 63              5731 	mov	a,#0x63
   6B4A F0                 5732 	movx	@dptr,a
                           5733 ;	genPointerSet
                           5734 ;     genFarPointerSet
   6B4B 90 0D 46           5735 	mov	dptr,#(_GPIO_enable_irq_file_name_3_3 + 0x001f)
   6B4E 74 00              5736 	mov	a,#0x00
   6B50 F0                 5737 	movx	@dptr,a
                           5738 ;	genAssign
   6B51 90 05 80           5739 	mov	dptr,#_HAL_assert_fail_PARM_2
   6B54 74 87              5740 	mov	a,#0x87
   6B56 F0                 5741 	movx	@dptr,a
   6B57 A3                 5742 	inc	dptr
   6B58 74 01              5743 	mov	a,#0x01
   6B5A F0                 5744 	movx	@dptr,a
   6B5B A3                 5745 	inc	dptr
   6B5C 74 00              5746 	mov	a,#0x00
   6B5E F0                 5747 	movx	@dptr,a
   6B5F A3                 5748 	inc	dptr
   6B60 74 00              5749 	mov	a,#0x00
   6B62 F0                 5750 	movx	@dptr,a
                           5751 ;	genCall
   6B63 75 82 27           5752 	mov	dpl,#_GPIO_enable_irq_file_name_3_3
   6B66 75 83 0D           5753 	mov	dph,#(_GPIO_enable_irq_file_name_3_3 >> 8)
   6B69 75 F0 00           5754 	mov	b,#0x00
   6B6C C0 02              5755 	push	ar2
   6B6E C0 03              5756 	push	ar3
   6B70 C0 04              5757 	push	ar4
   6B72 C0 05              5758 	push	ar5
   6B74 C0 06              5759 	push	ar6
   6B76 C0 07              5760 	push	ar7
   6B78 12 1B CC           5761 	lcall	_HAL_assert_fail
   6B7B D0 07              5762 	pop	ar7
   6B7D D0 06              5763 	pop	ar6
   6B7F D0 05              5764 	pop	ar5
   6B81 D0 04              5765 	pop	ar4
   6B83 D0 03              5766 	pop	ar3
   6B85 D0 02              5767 	pop	ar2
   6B87                    5768 00104$:
                    19CB   5769 	C$core_gpio.c$393$1$1 ==.
                           5770 ;	../drivers/CoreGPIO/core_gpio.c:393: if ( port_id < NB_OF_GPIO )
                           5771 ;	genIfx
   6B87 EF                 5772 	mov	a,r7
                           5773 ;	genIfxJump
   6B88 70 03              5774 	jnz	00114$
   6B8A 02 6B D5           5775 	ljmp	00108$
   6B8D                    5776 00114$:
                    19D1   5777 	C$core_gpio.c$395$2$4 ==.
                           5778 ;	../drivers/CoreGPIO/core_gpio.c:395: cfg_reg_addr += (port_id * 4);
                           5779 ;	genMult
                           5780 ;	genMultOneByte
   6B8D EE                 5781 	mov	a,r6
   6B8E 75 F0 04           5782 	mov	b,#0x04
   6B91 A4                 5783 	mul	ab
   6B92 FE                 5784 	mov	r6,a
   6B93 AF F0              5785 	mov	r7,b
                           5786 ;	genCast
   6B95 EF                 5787 	mov	a,r7
   6B96 33                 5788 	rlc	a
   6B97 95 E0              5789 	subb	a,acc
   6B99 F8                 5790 	mov	r0,a
   6B9A F9                 5791 	mov	r1,a
                           5792 ;	genPlus
   6B9B E5 06              5793 	mov	a,ar6
   6B9D 25 02              5794 	add	a,ar2
   6B9F FA                 5795 	mov	r2,a
   6BA0 E5 07              5796 	mov	a,ar7
   6BA2 35 03              5797 	addc	a,ar3
   6BA4 FB                 5798 	mov	r3,a
   6BA5 E5 00              5799 	mov	a,ar0
   6BA7 35 04              5800 	addc	a,ar4
   6BA9 FC                 5801 	mov	r4,a
   6BAA E5 01              5802 	mov	a,ar1
   6BAC 35 05              5803 	addc	a,ar5
   6BAE FD                 5804 	mov	r5,a
                    19F3   5805 	C$core_gpio.c$396$2$4 ==.
                           5806 ;	../drivers/CoreGPIO/core_gpio.c:396: cfg_value = HW_get_8bit_reg( cfg_reg_addr );
                           5807 ;	genCast
                           5808 ;	genCall
   6BAF 8A 82              5809 	mov	dpl,r2
   6BB1 8B 83              5810 	mov	dph,r3
   6BB3 C0 02              5811 	push	ar2
   6BB5 C0 03              5812 	push	ar3
   6BB7 12 1C 7D           5813 	lcall	_HW_get_8bit_reg
   6BBA AC 82              5814 	mov	r4,dpl
   6BBC D0 03              5815 	pop	ar3
   6BBE D0 02              5816 	pop	ar2
                           5817 ;	genCast
   6BC0 7D 00              5818 	mov	r5,#0x00
   6BC2 7E 00              5819 	mov	r6,#0x00
   6BC4 7F 00              5820 	mov	r7,#0x00
                    1A0A   5821 	C$core_gpio.c$397$2$4 ==.
                           5822 ;	../drivers/CoreGPIO/core_gpio.c:397: cfg_value |= GPIO_INT_ENABLE_MASK;
                           5823 ;	genOr
   6BC6 43 04 08           5824 	orl	ar4,#0x08
                    1A0D   5825 	C$core_gpio.c$398$2$4 ==.
                           5826 ;	../drivers/CoreGPIO/core_gpio.c:398: HW_set_8bit_reg( cfg_reg_addr, cfg_value );
                           5827 ;	genCast
   6BC9 90 05 9D           5828 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   6BCC EC                 5829 	mov	a,r4
   6BCD F0                 5830 	movx	@dptr,a
                           5831 ;	genCall
   6BCE 8A 82              5832 	mov	dpl,r2
   6BD0 8B 83              5833 	mov	dph,r3
   6BD2 12 1C 6F           5834 	lcall	_HW_set_8bit_reg
   6BD5                    5835 00108$:
                    1A19   5836 	C$core_gpio.c$400$2$1 ==.
                    1A19   5837 	XG$GPIO_enable_irq$0$0 ==.
   6BD5 22                 5838 	ret
                           5839 ;------------------------------------------------------------
                           5840 ;Allocation info for local variables in function 'GPIO_disable_irq'
                           5841 ;------------------------------------------------------------
                           5842 ;port_id                   Allocated with name '_GPIO_disable_irq_PARM_2'
                           5843 ;this_gpio                 Allocated with name '_GPIO_disable_irq_this_gpio_1_1'
                           5844 ;cfg_value                 Allocated with name '_GPIO_disable_irq_cfg_value_1_1'
                           5845 ;cfg_reg_addr              Allocated with name '_GPIO_disable_irq_cfg_reg_addr_1_1'
                           5846 ;file_name                 Allocated with name '_GPIO_disable_irq_file_name_3_3'
                           5847 ;------------------------------------------------------------
                    1A1A   5848 	G$GPIO_disable_irq$0$0 ==.
                    1A1A   5849 	C$core_gpio.c$406$2$1 ==.
                           5850 ;	../drivers/CoreGPIO/core_gpio.c:406: void GPIO_disable_irq
                           5851 ;	-----------------------------------------
                           5852 ;	 function GPIO_disable_irq
                           5853 ;	-----------------------------------------
   6BD6                    5854 _GPIO_disable_irq:
                           5855 ;	genReceive
   6BD6 AA F0              5856 	mov	r2,b
   6BD8 AB 83              5857 	mov	r3,dph
   6BDA E5 82              5858 	mov	a,dpl
   6BDC 90 0D 48           5859 	mov	dptr,#_GPIO_disable_irq_this_gpio_1_1
   6BDF F0                 5860 	movx	@dptr,a
   6BE0 A3                 5861 	inc	dptr
   6BE1 EB                 5862 	mov	a,r3
   6BE2 F0                 5863 	movx	@dptr,a
   6BE3 A3                 5864 	inc	dptr
   6BE4 EA                 5865 	mov	a,r2
   6BE5 F0                 5866 	movx	@dptr,a
                    1A2A   5867 	C$core_gpio.c$413$1$1 ==.
                           5868 ;	../drivers/CoreGPIO/core_gpio.c:413: uint32_t cfg_reg_addr = this_gpio->base_addr;
                           5869 ;	genAssign
   6BE6 90 0D 48           5870 	mov	dptr,#_GPIO_disable_irq_this_gpio_1_1
   6BE9 E0                 5871 	movx	a,@dptr
   6BEA FA                 5872 	mov	r2,a
   6BEB A3                 5873 	inc	dptr
   6BEC E0                 5874 	movx	a,@dptr
   6BED FB                 5875 	mov	r3,a
   6BEE A3                 5876 	inc	dptr
   6BEF E0                 5877 	movx	a,@dptr
   6BF0 FC                 5878 	mov	r4,a
                           5879 ;	genPointerGet
                           5880 ;	genGenPointerGet
   6BF1 8A 82              5881 	mov	dpl,r2
   6BF3 8B 83              5882 	mov	dph,r3
   6BF5 8C F0              5883 	mov	b,r4
   6BF7 12 71 F6           5884 	lcall	__gptrget
   6BFA FA                 5885 	mov	r2,a
   6BFB A3                 5886 	inc	dptr
   6BFC 12 71 F6           5887 	lcall	__gptrget
   6BFF FB                 5888 	mov	r3,a
                           5889 ;	genCast
   6C00 7C 00              5890 	mov	r4,#0x00
   6C02 7D 00              5891 	mov	r5,#0x00
                    1A48   5892 	C$core_gpio.c$415$2$2 ==.
                           5893 ;	../drivers/CoreGPIO/core_gpio.c:415: HAL_ASSERT( port_id < NB_OF_GPIO );
                           5894 ;	genAssign
   6C04 90 0D 47           5895 	mov	dptr,#_GPIO_disable_irq_PARM_2
   6C07 E0                 5896 	movx	a,@dptr
   6C08 FE                 5897 	mov	r6,a
                           5898 ;	genCmpLt
                           5899 ;	genCmp
   6C09 BE 20 00           5900 	cjne	r6,#0x20,00112$
   6C0C                    5901 00112$:
   6C0C E4                 5902 	clr	a
   6C0D 33                 5903 	rlc	a
   6C0E FF                 5904 	mov	r7,a
                           5905 ;	genIfx
   6C0F EF                 5906 	mov	a,r7
                           5907 ;	genIfxJump
   6C10 60 03              5908 	jz	00113$
   6C12 02 6D 0B           5909 	ljmp	00104$
   6C15                    5910 00113$:
                           5911 ;	genPointerSet
                           5912 ;     genFarPointerSet
   6C15 90 0D 4B           5913 	mov	dptr,#_GPIO_disable_irq_file_name_3_3
   6C18 74 2E              5914 	mov	a,#0x2E
   6C1A F0                 5915 	movx	@dptr,a
                           5916 ;	genPointerSet
                           5917 ;     genFarPointerSet
   6C1B 90 0D 4C           5918 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0001)
   6C1E 74 2E              5919 	mov	a,#0x2E
   6C20 F0                 5920 	movx	@dptr,a
                           5921 ;	genPointerSet
                           5922 ;     genFarPointerSet
   6C21 90 0D 4D           5923 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0002)
   6C24 74 2F              5924 	mov	a,#0x2F
   6C26 F0                 5925 	movx	@dptr,a
                           5926 ;	genPointerSet
                           5927 ;     genFarPointerSet
   6C27 90 0D 4E           5928 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0003)
   6C2A 74 64              5929 	mov	a,#0x64
   6C2C F0                 5930 	movx	@dptr,a
                           5931 ;	genPointerSet
                           5932 ;     genFarPointerSet
   6C2D 90 0D 4F           5933 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0004)
   6C30 74 72              5934 	mov	a,#0x72
   6C32 F0                 5935 	movx	@dptr,a
                           5936 ;	genPointerSet
                           5937 ;     genFarPointerSet
   6C33 90 0D 50           5938 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0005)
   6C36 74 69              5939 	mov	a,#0x69
   6C38 F0                 5940 	movx	@dptr,a
                           5941 ;	genPointerSet
                           5942 ;     genFarPointerSet
   6C39 90 0D 51           5943 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0006)
   6C3C 74 76              5944 	mov	a,#0x76
   6C3E F0                 5945 	movx	@dptr,a
                           5946 ;	genPointerSet
                           5947 ;     genFarPointerSet
   6C3F 90 0D 52           5948 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0007)
   6C42 74 65              5949 	mov	a,#0x65
   6C44 F0                 5950 	movx	@dptr,a
                           5951 ;	genPointerSet
                           5952 ;     genFarPointerSet
   6C45 90 0D 53           5953 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0008)
   6C48 74 72              5954 	mov	a,#0x72
   6C4A F0                 5955 	movx	@dptr,a
                           5956 ;	genPointerSet
                           5957 ;     genFarPointerSet
   6C4B 90 0D 54           5958 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0009)
   6C4E 74 73              5959 	mov	a,#0x73
   6C50 F0                 5960 	movx	@dptr,a
                           5961 ;	genPointerSet
                           5962 ;     genFarPointerSet
   6C51 90 0D 55           5963 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x000a)
   6C54 74 2F              5964 	mov	a,#0x2F
   6C56 F0                 5965 	movx	@dptr,a
                           5966 ;	genPointerSet
                           5967 ;     genFarPointerSet
   6C57 90 0D 56           5968 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x000b)
   6C5A 74 43              5969 	mov	a,#0x43
   6C5C F0                 5970 	movx	@dptr,a
                           5971 ;	genPointerSet
                           5972 ;     genFarPointerSet
   6C5D 90 0D 57           5973 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x000c)
   6C60 74 6F              5974 	mov	a,#0x6F
   6C62 F0                 5975 	movx	@dptr,a
                           5976 ;	genPointerSet
                           5977 ;     genFarPointerSet
   6C63 90 0D 58           5978 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x000d)
   6C66 74 72              5979 	mov	a,#0x72
   6C68 F0                 5980 	movx	@dptr,a
                           5981 ;	genPointerSet
                           5982 ;     genFarPointerSet
   6C69 90 0D 59           5983 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x000e)
   6C6C 74 65              5984 	mov	a,#0x65
   6C6E F0                 5985 	movx	@dptr,a
                           5986 ;	genPointerSet
                           5987 ;     genFarPointerSet
   6C6F 90 0D 5A           5988 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x000f)
   6C72 74 47              5989 	mov	a,#0x47
   6C74 F0                 5990 	movx	@dptr,a
                           5991 ;	genPointerSet
                           5992 ;     genFarPointerSet
   6C75 90 0D 5B           5993 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0010)
   6C78 74 50              5994 	mov	a,#0x50
   6C7A F0                 5995 	movx	@dptr,a
                           5996 ;	genPointerSet
                           5997 ;     genFarPointerSet
   6C7B 90 0D 5C           5998 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0011)
   6C7E 74 49              5999 	mov	a,#0x49
   6C80 F0                 6000 	movx	@dptr,a
                           6001 ;	genPointerSet
                           6002 ;     genFarPointerSet
   6C81 90 0D 5D           6003 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0012)
   6C84 74 4F              6004 	mov	a,#0x4F
   6C86 F0                 6005 	movx	@dptr,a
                           6006 ;	genPointerSet
                           6007 ;     genFarPointerSet
   6C87 90 0D 5E           6008 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0013)
   6C8A 74 2F              6009 	mov	a,#0x2F
   6C8C F0                 6010 	movx	@dptr,a
                           6011 ;	genPointerSet
                           6012 ;     genFarPointerSet
   6C8D 90 0D 5F           6013 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0014)
   6C90 74 63              6014 	mov	a,#0x63
   6C92 F0                 6015 	movx	@dptr,a
                           6016 ;	genPointerSet
                           6017 ;     genFarPointerSet
   6C93 90 0D 60           6018 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0015)
   6C96 74 6F              6019 	mov	a,#0x6F
   6C98 F0                 6020 	movx	@dptr,a
                           6021 ;	genPointerSet
                           6022 ;     genFarPointerSet
   6C99 90 0D 61           6023 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0016)
   6C9C 74 72              6024 	mov	a,#0x72
   6C9E F0                 6025 	movx	@dptr,a
                           6026 ;	genPointerSet
                           6027 ;     genFarPointerSet
   6C9F 90 0D 62           6028 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0017)
   6CA2 74 65              6029 	mov	a,#0x65
   6CA4 F0                 6030 	movx	@dptr,a
                           6031 ;	genPointerSet
                           6032 ;     genFarPointerSet
   6CA5 90 0D 63           6033 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0018)
   6CA8 74 5F              6034 	mov	a,#0x5F
   6CAA F0                 6035 	movx	@dptr,a
                           6036 ;	genPointerSet
                           6037 ;     genFarPointerSet
   6CAB 90 0D 64           6038 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x0019)
   6CAE 74 67              6039 	mov	a,#0x67
   6CB0 F0                 6040 	movx	@dptr,a
                           6041 ;	genPointerSet
                           6042 ;     genFarPointerSet
   6CB1 90 0D 65           6043 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x001a)
   6CB4 74 70              6044 	mov	a,#0x70
   6CB6 F0                 6045 	movx	@dptr,a
                           6046 ;	genPointerSet
                           6047 ;     genFarPointerSet
   6CB7 90 0D 66           6048 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x001b)
   6CBA 74 69              6049 	mov	a,#0x69
   6CBC F0                 6050 	movx	@dptr,a
                           6051 ;	genPointerSet
                           6052 ;     genFarPointerSet
   6CBD 90 0D 67           6053 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x001c)
   6CC0 74 6F              6054 	mov	a,#0x6F
   6CC2 F0                 6055 	movx	@dptr,a
                           6056 ;	genPointerSet
                           6057 ;     genFarPointerSet
   6CC3 90 0D 68           6058 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x001d)
   6CC6 74 2E              6059 	mov	a,#0x2E
   6CC8 F0                 6060 	movx	@dptr,a
                           6061 ;	genPointerSet
                           6062 ;     genFarPointerSet
   6CC9 90 0D 69           6063 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x001e)
   6CCC 74 63              6064 	mov	a,#0x63
   6CCE F0                 6065 	movx	@dptr,a
                           6066 ;	genPointerSet
                           6067 ;     genFarPointerSet
   6CCF 90 0D 6A           6068 	mov	dptr,#(_GPIO_disable_irq_file_name_3_3 + 0x001f)
   6CD2 74 00              6069 	mov	a,#0x00
   6CD4 F0                 6070 	movx	@dptr,a
                           6071 ;	genAssign
   6CD5 90 05 80           6072 	mov	dptr,#_HAL_assert_fail_PARM_2
   6CD8 74 9F              6073 	mov	a,#0x9F
   6CDA F0                 6074 	movx	@dptr,a
   6CDB A3                 6075 	inc	dptr
   6CDC 74 01              6076 	mov	a,#0x01
   6CDE F0                 6077 	movx	@dptr,a
   6CDF A3                 6078 	inc	dptr
   6CE0 74 00              6079 	mov	a,#0x00
   6CE2 F0                 6080 	movx	@dptr,a
   6CE3 A3                 6081 	inc	dptr
   6CE4 74 00              6082 	mov	a,#0x00
   6CE6 F0                 6083 	movx	@dptr,a
                           6084 ;	genCall
   6CE7 75 82 4B           6085 	mov	dpl,#_GPIO_disable_irq_file_name_3_3
   6CEA 75 83 0D           6086 	mov	dph,#(_GPIO_disable_irq_file_name_3_3 >> 8)
   6CED 75 F0 00           6087 	mov	b,#0x00
   6CF0 C0 02              6088 	push	ar2
   6CF2 C0 03              6089 	push	ar3
   6CF4 C0 04              6090 	push	ar4
   6CF6 C0 05              6091 	push	ar5
   6CF8 C0 06              6092 	push	ar6
   6CFA C0 07              6093 	push	ar7
   6CFC 12 1B CC           6094 	lcall	_HAL_assert_fail
   6CFF D0 07              6095 	pop	ar7
   6D01 D0 06              6096 	pop	ar6
   6D03 D0 05              6097 	pop	ar5
   6D05 D0 04              6098 	pop	ar4
   6D07 D0 03              6099 	pop	ar3
   6D09 D0 02              6100 	pop	ar2
   6D0B                    6101 00104$:
                    1B4F   6102 	C$core_gpio.c$417$1$1 ==.
                           6103 ;	../drivers/CoreGPIO/core_gpio.c:417: if ( port_id < NB_OF_GPIO )
                           6104 ;	genIfx
   6D0B EF                 6105 	mov	a,r7
                           6106 ;	genIfxJump
   6D0C 70 03              6107 	jnz	00114$
   6D0E 02 6D 59           6108 	ljmp	00108$
   6D11                    6109 00114$:
                    1B55   6110 	C$core_gpio.c$419$2$4 ==.
                           6111 ;	../drivers/CoreGPIO/core_gpio.c:419: cfg_reg_addr += (port_id * 4);
                           6112 ;	genMult
                           6113 ;	genMultOneByte
   6D11 EE                 6114 	mov	a,r6
   6D12 75 F0 04           6115 	mov	b,#0x04
   6D15 A4                 6116 	mul	ab
   6D16 FE                 6117 	mov	r6,a
   6D17 AF F0              6118 	mov	r7,b
                           6119 ;	genCast
   6D19 EF                 6120 	mov	a,r7
   6D1A 33                 6121 	rlc	a
   6D1B 95 E0              6122 	subb	a,acc
   6D1D F8                 6123 	mov	r0,a
   6D1E F9                 6124 	mov	r1,a
                           6125 ;	genPlus
   6D1F E5 06              6126 	mov	a,ar6
   6D21 25 02              6127 	add	a,ar2
   6D23 FA                 6128 	mov	r2,a
   6D24 E5 07              6129 	mov	a,ar7
   6D26 35 03              6130 	addc	a,ar3
   6D28 FB                 6131 	mov	r3,a
   6D29 E5 00              6132 	mov	a,ar0
   6D2B 35 04              6133 	addc	a,ar4
   6D2D FC                 6134 	mov	r4,a
   6D2E E5 01              6135 	mov	a,ar1
   6D30 35 05              6136 	addc	a,ar5
   6D32 FD                 6137 	mov	r5,a
                    1B77   6138 	C$core_gpio.c$420$2$4 ==.
                           6139 ;	../drivers/CoreGPIO/core_gpio.c:420: cfg_value = HW_get_8bit_reg( cfg_reg_addr );
                           6140 ;	genCast
                           6141 ;	genCall
   6D33 8A 82              6142 	mov	dpl,r2
   6D35 8B 83              6143 	mov	dph,r3
   6D37 C0 02              6144 	push	ar2
   6D39 C0 03              6145 	push	ar3
   6D3B 12 1C 7D           6146 	lcall	_HW_get_8bit_reg
   6D3E AC 82              6147 	mov	r4,dpl
   6D40 D0 03              6148 	pop	ar3
   6D42 D0 02              6149 	pop	ar2
                           6150 ;	genCast
   6D44 7D 00              6151 	mov	r5,#0x00
   6D46 7E 00              6152 	mov	r6,#0x00
   6D48 7F 00              6153 	mov	r7,#0x00
                    1B8E   6154 	C$core_gpio.c$421$2$4 ==.
                           6155 ;	../drivers/CoreGPIO/core_gpio.c:421: cfg_value &= ~GPIO_INT_ENABLE_MASK;
                           6156 ;	genAnd
   6D4A 53 04 F7           6157 	anl	ar4,#0xF7
                    1B91   6158 	C$core_gpio.c$422$2$4 ==.
                           6159 ;	../drivers/CoreGPIO/core_gpio.c:422: HW_set_8bit_reg( cfg_reg_addr, cfg_value );
                           6160 ;	genCast
   6D4D 90 05 9D           6161 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   6D50 EC                 6162 	mov	a,r4
   6D51 F0                 6163 	movx	@dptr,a
                           6164 ;	genCall
   6D52 8A 82              6165 	mov	dpl,r2
   6D54 8B 83              6166 	mov	dph,r3
   6D56 12 1C 6F           6167 	lcall	_HW_set_8bit_reg
   6D59                    6168 00108$:
                    1B9D   6169 	C$core_gpio.c$424$2$1 ==.
                    1B9D   6170 	XG$GPIO_disable_irq$0$0 ==.
   6D59 22                 6171 	ret
                           6172 ;------------------------------------------------------------
                           6173 ;Allocation info for local variables in function 'GPIO_clear_irq'
                           6174 ;------------------------------------------------------------
                           6175 ;sloc0                     Allocated with name '_GPIO_clear_irq_sloc0_1_0'
                           6176 ;port_id                   Allocated with name '_GPIO_clear_irq_PARM_2'
                           6177 ;this_gpio                 Allocated with name '_GPIO_clear_irq_this_gpio_1_1'
                           6178 ;irq_clr_value             Allocated with name '_GPIO_clear_irq_irq_clr_value_1_1'
                           6179 ;file_name                 Allocated with name '_GPIO_clear_irq_file_name_4_4'
                           6180 ;------------------------------------------------------------
                    1B9E   6181 	G$GPIO_clear_irq$0$0 ==.
                    1B9E   6182 	C$core_gpio.c$430$2$1 ==.
                           6183 ;	../drivers/CoreGPIO/core_gpio.c:430: void GPIO_clear_irq
                           6184 ;	-----------------------------------------
                           6185 ;	 function GPIO_clear_irq
                           6186 ;	-----------------------------------------
   6D5A                    6187 _GPIO_clear_irq:
                           6188 ;	genReceive
   6D5A AA F0              6189 	mov	r2,b
   6D5C AB 83              6190 	mov	r3,dph
   6D5E E5 82              6191 	mov	a,dpl
   6D60 90 0D 6C           6192 	mov	dptr,#_GPIO_clear_irq_this_gpio_1_1
   6D63 F0                 6193 	movx	@dptr,a
   6D64 A3                 6194 	inc	dptr
   6D65 EB                 6195 	mov	a,r3
   6D66 F0                 6196 	movx	@dptr,a
   6D67 A3                 6197 	inc	dptr
   6D68 EA                 6198 	mov	a,r2
   6D69 F0                 6199 	movx	@dptr,a
                    1BAE   6200 	C$core_gpio.c$436$1$1 ==.
                           6201 ;	../drivers/CoreGPIO/core_gpio.c:436: uint32_t irq_clr_value = ((uint32_t)1) << ((uint32_t)port_id);
                           6202 ;	genAssign
   6D6A 90 0D 6B           6203 	mov	dptr,#_GPIO_clear_irq_PARM_2
   6D6D E0                 6204 	movx	a,@dptr
   6D6E FA                 6205 	mov	r2,a
                           6206 ;	genCast
   6D6F 7B 00              6207 	mov	r3,#0x00
   6D71 7C 00              6208 	mov	r4,#0x00
   6D73 7D 00              6209 	mov	r5,#0x00
                           6210 ;	genLeftShift
   6D75 8A F0              6211 	mov	b,r2
   6D77 05 F0              6212 	inc	b
   6D79 75 6A 01           6213 	mov	_GPIO_clear_irq_sloc0_1_0,#0x01
   6D7C 75 6B 00           6214 	mov	(_GPIO_clear_irq_sloc0_1_0 + 1),#0x00
   6D7F 75 6C 00           6215 	mov	(_GPIO_clear_irq_sloc0_1_0 + 2),#0x00
   6D82 75 6D 00           6216 	mov	(_GPIO_clear_irq_sloc0_1_0 + 3),#0x00
   6D85 80 15              6217 	sjmp	00117$
   6D87                    6218 00116$:
   6D87 E5 6A              6219 	mov	a,_GPIO_clear_irq_sloc0_1_0
   6D89 25 E0              6220 	add	a,acc
   6D8B F5 6A              6221 	mov	_GPIO_clear_irq_sloc0_1_0,a
   6D8D E5 6B              6222 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 1)
   6D8F 33                 6223 	rlc	a
   6D90 F5 6B              6224 	mov	(_GPIO_clear_irq_sloc0_1_0 + 1),a
   6D92 E5 6C              6225 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 2)
   6D94 33                 6226 	rlc	a
   6D95 F5 6C              6227 	mov	(_GPIO_clear_irq_sloc0_1_0 + 2),a
   6D97 E5 6D              6228 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 3)
   6D99 33                 6229 	rlc	a
   6D9A F5 6D              6230 	mov	(_GPIO_clear_irq_sloc0_1_0 + 3),a
   6D9C                    6231 00117$:
   6D9C D5 F0 E8           6232 	djnz	b,00116$
                    1BE3   6233 	C$core_gpio.c$438$1$1 ==.
                           6234 ;	../drivers/CoreGPIO/core_gpio.c:438: switch( this_gpio->apb_bus_width )
                           6235 ;	genAssign
   6D9F 90 0D 6C           6236 	mov	dptr,#_GPIO_clear_irq_this_gpio_1_1
   6DA2 E0                 6237 	movx	a,@dptr
   6DA3 FE                 6238 	mov	r6,a
   6DA4 A3                 6239 	inc	dptr
   6DA5 E0                 6240 	movx	a,@dptr
   6DA6 FF                 6241 	mov	r7,a
   6DA7 A3                 6242 	inc	dptr
   6DA8 E0                 6243 	movx	a,@dptr
   6DA9 F8                 6244 	mov	r0,a
                           6245 ;	genPlus
                           6246 ;	genPlusIncr
   6DAA 74 02              6247 	mov	a,#0x02
   6DAC 25 06              6248 	add	a,ar6
   6DAE F9                 6249 	mov	r1,a
   6DAF 74 00              6250 	mov	a,#0x00
   6DB1 35 07              6251 	addc	a,ar7
   6DB3 FA                 6252 	mov	r2,a
   6DB4 88 03              6253 	mov	ar3,r0
                           6254 ;	genPointerGet
                           6255 ;	genGenPointerGet
   6DB6 89 82              6256 	mov	dpl,r1
   6DB8 8A 83              6257 	mov	dph,r2
   6DBA 8B F0              6258 	mov	b,r3
   6DBC 12 71 F6           6259 	lcall	__gptrget
   6DBF FA                 6260 	mov	r2,a
                           6261 ;	genCmpEq
                           6262 ;	gencjneshort
   6DC0 BA 00 03           6263 	cjne	r2,#0x00,00118$
   6DC3 02 6E 6C           6264 	ljmp	00103$
   6DC6                    6265 00118$:
                           6266 ;	genCmpEq
                           6267 ;	gencjneshort
   6DC6 BA 01 03           6268 	cjne	r2,#0x01,00119$
   6DC9 02 6E 09           6269 	ljmp	00102$
   6DCC                    6270 00119$:
                           6271 ;	genCmpEq
                           6272 ;	gencjneshort
   6DCC BA 02 02           6273 	cjne	r2,#0x02,00120$
   6DCF 80 03              6274 	sjmp	00121$
   6DD1                    6275 00120$:
   6DD1 02 6F 2B           6276 	ljmp	00107$
   6DD4                    6277 00121$:
                    1C18   6278 	C$core_gpio.c$441$2$2 ==.
                           6279 ;	../drivers/CoreGPIO/core_gpio.c:441: HAL_set_32bit_reg( this_gpio->base_addr, IRQ, irq_clr_value );
                           6280 ;	genPointerGet
                           6281 ;	genGenPointerGet
   6DD4 8E 82              6282 	mov	dpl,r6
   6DD6 8F 83              6283 	mov	dph,r7
   6DD8 88 F0              6284 	mov	b,r0
   6DDA 12 71 F6           6285 	lcall	__gptrget
   6DDD FA                 6286 	mov	r2,a
   6DDE A3                 6287 	inc	dptr
   6DDF 12 71 F6           6288 	lcall	__gptrget
   6DE2 FB                 6289 	mov	r3,a
                           6290 ;	genPlus
                           6291 ;	genPlusIncr
   6DE3 74 80              6292 	mov	a,#0x80
   6DE5 25 02              6293 	add	a,ar2
   6DE7 FA                 6294 	mov	r2,a
   6DE8 74 00              6295 	mov	a,#0x00
   6DEA 35 03              6296 	addc	a,ar3
   6DEC FB                 6297 	mov	r3,a
                           6298 ;	genAssign
   6DED 90 05 9E           6299 	mov	dptr,#_HW_set_32bit_reg_PARM_2
   6DF0 E5 6A              6300 	mov	a,_GPIO_clear_irq_sloc0_1_0
   6DF2 F0                 6301 	movx	@dptr,a
   6DF3 A3                 6302 	inc	dptr
   6DF4 E5 6B              6303 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 1)
   6DF6 F0                 6304 	movx	@dptr,a
   6DF7 A3                 6305 	inc	dptr
   6DF8 E5 6C              6306 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 2)
   6DFA F0                 6307 	movx	@dptr,a
   6DFB A3                 6308 	inc	dptr
   6DFC E5 6D              6309 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 3)
   6DFE F0                 6310 	movx	@dptr,a
                           6311 ;	genCall
   6DFF 8A 82              6312 	mov	dpl,r2
   6E01 8B 83              6313 	mov	dph,r3
   6E03 12 1C 38           6314 	lcall	_HW_set_32bit_reg
                    1C4A   6315 	C$core_gpio.c$442$2$2 ==.
                           6316 ;	../drivers/CoreGPIO/core_gpio.c:442: break;
   6E06 02 70 09           6317 	ljmp	00111$
                    1C4D   6318 	C$core_gpio.c$444$2$2 ==.
                           6319 ;	../drivers/CoreGPIO/core_gpio.c:444: case GPIO_APB_16_BITS_BUS:
   6E09                    6320 00102$:
                    1C4D   6321 	C$core_gpio.c$445$2$2 ==.
                           6322 ;	../drivers/CoreGPIO/core_gpio.c:445: HAL_set_16bit_reg( this_gpio->base_addr, IRQ0, irq_clr_value );
                           6323 ;	genPointerGet
                           6324 ;	genGenPointerGet
   6E09 8E 82              6325 	mov	dpl,r6
   6E0B 8F 83              6326 	mov	dph,r7
   6E0D 88 F0              6327 	mov	b,r0
   6E0F 12 71 F6           6328 	lcall	__gptrget
   6E12 FA                 6329 	mov	r2,a
   6E13 A3                 6330 	inc	dptr
   6E14 12 71 F6           6331 	lcall	__gptrget
   6E17 FB                 6332 	mov	r3,a
                           6333 ;	genPlus
                           6334 ;	genPlusIncr
   6E18 74 80              6335 	mov	a,#0x80
   6E1A 25 02              6336 	add	a,ar2
   6E1C FA                 6337 	mov	r2,a
   6E1D 74 00              6338 	mov	a,#0x00
   6E1F 35 03              6339 	addc	a,ar3
   6E21 FB                 6340 	mov	r3,a
                           6341 ;	genCast
   6E22 90 05 9B           6342 	mov	dptr,#_HW_set_16bit_reg_PARM_2
   6E25 E5 6A              6343 	mov	a,_GPIO_clear_irq_sloc0_1_0
   6E27 F0                 6344 	movx	@dptr,a
   6E28 A3                 6345 	inc	dptr
   6E29 E5 6B              6346 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 1)
   6E2B F0                 6347 	movx	@dptr,a
                           6348 ;	genCall
   6E2C 8A 82              6349 	mov	dpl,r2
   6E2E 8B 83              6350 	mov	dph,r3
   6E30 C0 06              6351 	push	ar6
   6E32 C0 07              6352 	push	ar7
   6E34 C0 00              6353 	push	ar0
   6E36 12 1C 54           6354 	lcall	_HW_set_16bit_reg
   6E39 D0 00              6355 	pop	ar0
   6E3B D0 07              6356 	pop	ar7
   6E3D D0 06              6357 	pop	ar6
                    1C83   6358 	C$core_gpio.c$446$2$2 ==.
                           6359 ;	../drivers/CoreGPIO/core_gpio.c:446: HAL_set_16bit_reg( this_gpio->base_addr, IRQ1, irq_clr_value >> 16 );
                           6360 ;	genPointerGet
                           6361 ;	genGenPointerGet
   6E3F 8E 82              6362 	mov	dpl,r6
   6E41 8F 83              6363 	mov	dph,r7
   6E43 88 F0              6364 	mov	b,r0
   6E45 12 71 F6           6365 	lcall	__gptrget
   6E48 FA                 6366 	mov	r2,a
   6E49 A3                 6367 	inc	dptr
   6E4A 12 71 F6           6368 	lcall	__gptrget
   6E4D FB                 6369 	mov	r3,a
                           6370 ;	genPlus
                           6371 ;	genPlusIncr
   6E4E 74 84              6372 	mov	a,#0x84
   6E50 25 02              6373 	add	a,ar2
   6E52 FA                 6374 	mov	r2,a
   6E53 74 00              6375 	mov	a,#0x00
   6E55 35 03              6376 	addc	a,ar3
   6E57 FB                 6377 	mov	r3,a
                           6378 ;	genGetWord
   6E58 90 05 9B           6379 	mov	dptr,#_HW_set_16bit_reg_PARM_2
   6E5B E5 6C              6380 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 2)
   6E5D F0                 6381 	movx	@dptr,a
   6E5E A3                 6382 	inc	dptr
   6E5F E5 6D              6383 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 3)
   6E61 F0                 6384 	movx	@dptr,a
                           6385 ;	genCall
   6E62 8A 82              6386 	mov	dpl,r2
   6E64 8B 83              6387 	mov	dph,r3
   6E66 12 1C 54           6388 	lcall	_HW_set_16bit_reg
                    1CAD   6389 	C$core_gpio.c$447$2$2 ==.
                           6390 ;	../drivers/CoreGPIO/core_gpio.c:447: break;
   6E69 02 70 09           6391 	ljmp	00111$
                    1CB0   6392 	C$core_gpio.c$449$2$2 ==.
                           6393 ;	../drivers/CoreGPIO/core_gpio.c:449: case GPIO_APB_8_BITS_BUS:
   6E6C                    6394 00103$:
                    1CB0   6395 	C$core_gpio.c$450$2$2 ==.
                           6396 ;	../drivers/CoreGPIO/core_gpio.c:450: HAL_set_8bit_reg( this_gpio->base_addr, IRQ0, irq_clr_value );
                           6397 ;	genPointerGet
                           6398 ;	genGenPointerGet
   6E6C 8E 82              6399 	mov	dpl,r6
   6E6E 8F 83              6400 	mov	dph,r7
   6E70 88 F0              6401 	mov	b,r0
   6E72 12 71 F6           6402 	lcall	__gptrget
   6E75 FA                 6403 	mov	r2,a
   6E76 A3                 6404 	inc	dptr
   6E77 12 71 F6           6405 	lcall	__gptrget
   6E7A FB                 6406 	mov	r3,a
                           6407 ;	genPlus
                           6408 ;	genPlusIncr
   6E7B 74 80              6409 	mov	a,#0x80
   6E7D 25 02              6410 	add	a,ar2
   6E7F FA                 6411 	mov	r2,a
   6E80 74 00              6412 	mov	a,#0x00
   6E82 35 03              6413 	addc	a,ar3
   6E84 FB                 6414 	mov	r3,a
                           6415 ;	genCast
   6E85 90 05 9D           6416 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   6E88 E5 6A              6417 	mov	a,_GPIO_clear_irq_sloc0_1_0
   6E8A F0                 6418 	movx	@dptr,a
                           6419 ;	genCall
   6E8B 8A 82              6420 	mov	dpl,r2
   6E8D 8B 83              6421 	mov	dph,r3
   6E8F C0 06              6422 	push	ar6
   6E91 C0 07              6423 	push	ar7
   6E93 C0 00              6424 	push	ar0
   6E95 12 1C 6F           6425 	lcall	_HW_set_8bit_reg
   6E98 D0 00              6426 	pop	ar0
   6E9A D0 07              6427 	pop	ar7
   6E9C D0 06              6428 	pop	ar6
                    1CE2   6429 	C$core_gpio.c$451$2$2 ==.
                           6430 ;	../drivers/CoreGPIO/core_gpio.c:451: HAL_set_8bit_reg( this_gpio->base_addr, IRQ1, irq_clr_value >> 8 );
                           6431 ;	genPointerGet
                           6432 ;	genGenPointerGet
   6E9E 8E 82              6433 	mov	dpl,r6
   6EA0 8F 83              6434 	mov	dph,r7
   6EA2 88 F0              6435 	mov	b,r0
   6EA4 12 71 F6           6436 	lcall	__gptrget
   6EA7 FA                 6437 	mov	r2,a
   6EA8 A3                 6438 	inc	dptr
   6EA9 12 71 F6           6439 	lcall	__gptrget
   6EAC FB                 6440 	mov	r3,a
                           6441 ;	genPlus
                           6442 ;	genPlusIncr
   6EAD 74 84              6443 	mov	a,#0x84
   6EAF 25 02              6444 	add	a,ar2
   6EB1 FA                 6445 	mov	r2,a
   6EB2 74 00              6446 	mov	a,#0x00
   6EB4 35 03              6447 	addc	a,ar3
   6EB6 FB                 6448 	mov	r3,a
                           6449 ;	genGetByte
   6EB7 90 05 9D           6450 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   6EBA E5 6B              6451 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 1)
   6EBC F0                 6452 	movx	@dptr,a
                           6453 ;	genCall
   6EBD 8A 82              6454 	mov	dpl,r2
   6EBF 8B 83              6455 	mov	dph,r3
   6EC1 C0 06              6456 	push	ar6
   6EC3 C0 07              6457 	push	ar7
   6EC5 C0 00              6458 	push	ar0
   6EC7 12 1C 6F           6459 	lcall	_HW_set_8bit_reg
   6ECA D0 00              6460 	pop	ar0
   6ECC D0 07              6461 	pop	ar7
   6ECE D0 06              6462 	pop	ar6
                    1D14   6463 	C$core_gpio.c$452$2$2 ==.
                           6464 ;	../drivers/CoreGPIO/core_gpio.c:452: HAL_set_8bit_reg( this_gpio->base_addr, IRQ2, irq_clr_value >> 16 );
                           6465 ;	genPointerGet
                           6466 ;	genGenPointerGet
   6ED0 8E 82              6467 	mov	dpl,r6
   6ED2 8F 83              6468 	mov	dph,r7
   6ED4 88 F0              6469 	mov	b,r0
   6ED6 12 71 F6           6470 	lcall	__gptrget
   6ED9 FA                 6471 	mov	r2,a
   6EDA A3                 6472 	inc	dptr
   6EDB 12 71 F6           6473 	lcall	__gptrget
   6EDE FB                 6474 	mov	r3,a
                           6475 ;	genPlus
                           6476 ;	genPlusIncr
   6EDF 74 88              6477 	mov	a,#0x88
   6EE1 25 02              6478 	add	a,ar2
   6EE3 FA                 6479 	mov	r2,a
   6EE4 74 00              6480 	mov	a,#0x00
   6EE6 35 03              6481 	addc	a,ar3
   6EE8 FB                 6482 	mov	r3,a
                           6483 ;	genGetByte
   6EE9 90 05 9D           6484 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   6EEC E5 6C              6485 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 2)
   6EEE F0                 6486 	movx	@dptr,a
                           6487 ;	genCall
   6EEF 8A 82              6488 	mov	dpl,r2
   6EF1 8B 83              6489 	mov	dph,r3
   6EF3 C0 06              6490 	push	ar6
   6EF5 C0 07              6491 	push	ar7
   6EF7 C0 00              6492 	push	ar0
   6EF9 12 1C 6F           6493 	lcall	_HW_set_8bit_reg
   6EFC D0 00              6494 	pop	ar0
   6EFE D0 07              6495 	pop	ar7
   6F00 D0 06              6496 	pop	ar6
                    1D46   6497 	C$core_gpio.c$453$2$2 ==.
                           6498 ;	../drivers/CoreGPIO/core_gpio.c:453: HAL_set_8bit_reg( this_gpio->base_addr, IRQ3, irq_clr_value >> 24 );
                           6499 ;	genPointerGet
                           6500 ;	genGenPointerGet
   6F02 8E 82              6501 	mov	dpl,r6
   6F04 8F 83              6502 	mov	dph,r7
   6F06 88 F0              6503 	mov	b,r0
   6F08 12 71 F6           6504 	lcall	__gptrget
   6F0B FE                 6505 	mov	r6,a
   6F0C A3                 6506 	inc	dptr
   6F0D 12 71 F6           6507 	lcall	__gptrget
   6F10 FF                 6508 	mov	r7,a
                           6509 ;	genPlus
                           6510 ;	genPlusIncr
   6F11 74 8C              6511 	mov	a,#0x8C
   6F13 25 06              6512 	add	a,ar6
   6F15 FE                 6513 	mov	r6,a
   6F16 74 00              6514 	mov	a,#0x00
   6F18 35 07              6515 	addc	a,ar7
   6F1A FF                 6516 	mov	r7,a
                           6517 ;	genGetByte
   6F1B 90 05 9D           6518 	mov	dptr,#_HW_set_8bit_reg_PARM_2
   6F1E E5 6D              6519 	mov	a,(_GPIO_clear_irq_sloc0_1_0 + 3)
   6F20 F0                 6520 	movx	@dptr,a
                           6521 ;	genCall
   6F21 8E 82              6522 	mov	dpl,r6
   6F23 8F 83              6523 	mov	dph,r7
   6F25 12 1C 6F           6524 	lcall	_HW_set_8bit_reg
                    1D6C   6525 	C$core_gpio.c$454$2$2 ==.
                           6526 ;	../drivers/CoreGPIO/core_gpio.c:454: break;
   6F28 02 70 09           6527 	ljmp	00111$
                    1D6F   6528 	C$core_gpio.c$457$2$2 ==.
                           6529 ;	../drivers/CoreGPIO/core_gpio.c:457: HAL_ASSERT(0);
   6F2B                    6530 00107$:
                           6531 ;	genPointerSet
                           6532 ;     genFarPointerSet
   6F2B 90 0D 6F           6533 	mov	dptr,#_GPIO_clear_irq_file_name_4_4
   6F2E 74 2E              6534 	mov	a,#0x2E
   6F30 F0                 6535 	movx	@dptr,a
                           6536 ;	genPointerSet
                           6537 ;     genFarPointerSet
   6F31 90 0D 70           6538 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0001)
   6F34 74 2E              6539 	mov	a,#0x2E
   6F36 F0                 6540 	movx	@dptr,a
                           6541 ;	genPointerSet
                           6542 ;     genFarPointerSet
   6F37 90 0D 71           6543 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0002)
   6F3A 74 2F              6544 	mov	a,#0x2F
   6F3C F0                 6545 	movx	@dptr,a
                           6546 ;	genPointerSet
                           6547 ;     genFarPointerSet
   6F3D 90 0D 72           6548 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0003)
   6F40 74 64              6549 	mov	a,#0x64
   6F42 F0                 6550 	movx	@dptr,a
                           6551 ;	genPointerSet
                           6552 ;     genFarPointerSet
   6F43 90 0D 73           6553 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0004)
   6F46 74 72              6554 	mov	a,#0x72
   6F48 F0                 6555 	movx	@dptr,a
                           6556 ;	genPointerSet
                           6557 ;     genFarPointerSet
   6F49 90 0D 74           6558 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0005)
   6F4C 74 69              6559 	mov	a,#0x69
   6F4E F0                 6560 	movx	@dptr,a
                           6561 ;	genPointerSet
                           6562 ;     genFarPointerSet
   6F4F 90 0D 75           6563 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0006)
   6F52 74 76              6564 	mov	a,#0x76
   6F54 F0                 6565 	movx	@dptr,a
                           6566 ;	genPointerSet
                           6567 ;     genFarPointerSet
   6F55 90 0D 76           6568 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0007)
   6F58 74 65              6569 	mov	a,#0x65
   6F5A F0                 6570 	movx	@dptr,a
                           6571 ;	genPointerSet
                           6572 ;     genFarPointerSet
   6F5B 90 0D 77           6573 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0008)
   6F5E 74 72              6574 	mov	a,#0x72
   6F60 F0                 6575 	movx	@dptr,a
                           6576 ;	genPointerSet
                           6577 ;     genFarPointerSet
   6F61 90 0D 78           6578 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0009)
   6F64 74 73              6579 	mov	a,#0x73
   6F66 F0                 6580 	movx	@dptr,a
                           6581 ;	genPointerSet
                           6582 ;     genFarPointerSet
   6F67 90 0D 79           6583 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x000a)
   6F6A 74 2F              6584 	mov	a,#0x2F
   6F6C F0                 6585 	movx	@dptr,a
                           6586 ;	genPointerSet
                           6587 ;     genFarPointerSet
   6F6D 90 0D 7A           6588 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x000b)
   6F70 74 43              6589 	mov	a,#0x43
   6F72 F0                 6590 	movx	@dptr,a
                           6591 ;	genPointerSet
                           6592 ;     genFarPointerSet
   6F73 90 0D 7B           6593 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x000c)
   6F76 74 6F              6594 	mov	a,#0x6F
   6F78 F0                 6595 	movx	@dptr,a
                           6596 ;	genPointerSet
                           6597 ;     genFarPointerSet
   6F79 90 0D 7C           6598 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x000d)
   6F7C 74 72              6599 	mov	a,#0x72
   6F7E F0                 6600 	movx	@dptr,a
                           6601 ;	genPointerSet
                           6602 ;     genFarPointerSet
   6F7F 90 0D 7D           6603 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x000e)
   6F82 74 65              6604 	mov	a,#0x65
   6F84 F0                 6605 	movx	@dptr,a
                           6606 ;	genPointerSet
                           6607 ;     genFarPointerSet
   6F85 90 0D 7E           6608 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x000f)
   6F88 74 47              6609 	mov	a,#0x47
   6F8A F0                 6610 	movx	@dptr,a
                           6611 ;	genPointerSet
                           6612 ;     genFarPointerSet
   6F8B 90 0D 7F           6613 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0010)
   6F8E 74 50              6614 	mov	a,#0x50
   6F90 F0                 6615 	movx	@dptr,a
                           6616 ;	genPointerSet
                           6617 ;     genFarPointerSet
   6F91 90 0D 80           6618 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0011)
   6F94 74 49              6619 	mov	a,#0x49
   6F96 F0                 6620 	movx	@dptr,a
                           6621 ;	genPointerSet
                           6622 ;     genFarPointerSet
   6F97 90 0D 81           6623 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0012)
   6F9A 74 4F              6624 	mov	a,#0x4F
   6F9C F0                 6625 	movx	@dptr,a
                           6626 ;	genPointerSet
                           6627 ;     genFarPointerSet
   6F9D 90 0D 82           6628 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0013)
   6FA0 74 2F              6629 	mov	a,#0x2F
   6FA2 F0                 6630 	movx	@dptr,a
                           6631 ;	genPointerSet
                           6632 ;     genFarPointerSet
   6FA3 90 0D 83           6633 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0014)
   6FA6 74 63              6634 	mov	a,#0x63
   6FA8 F0                 6635 	movx	@dptr,a
                           6636 ;	genPointerSet
                           6637 ;     genFarPointerSet
   6FA9 90 0D 84           6638 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0015)
   6FAC 74 6F              6639 	mov	a,#0x6F
   6FAE F0                 6640 	movx	@dptr,a
                           6641 ;	genPointerSet
                           6642 ;     genFarPointerSet
   6FAF 90 0D 85           6643 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0016)
   6FB2 74 72              6644 	mov	a,#0x72
   6FB4 F0                 6645 	movx	@dptr,a
                           6646 ;	genPointerSet
                           6647 ;     genFarPointerSet
   6FB5 90 0D 86           6648 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0017)
   6FB8 74 65              6649 	mov	a,#0x65
   6FBA F0                 6650 	movx	@dptr,a
                           6651 ;	genPointerSet
                           6652 ;     genFarPointerSet
   6FBB 90 0D 87           6653 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0018)
   6FBE 74 5F              6654 	mov	a,#0x5F
   6FC0 F0                 6655 	movx	@dptr,a
                           6656 ;	genPointerSet
                           6657 ;     genFarPointerSet
   6FC1 90 0D 88           6658 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x0019)
   6FC4 74 67              6659 	mov	a,#0x67
   6FC6 F0                 6660 	movx	@dptr,a
                           6661 ;	genPointerSet
                           6662 ;     genFarPointerSet
   6FC7 90 0D 89           6663 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x001a)
   6FCA 74 70              6664 	mov	a,#0x70
   6FCC F0                 6665 	movx	@dptr,a
                           6666 ;	genPointerSet
                           6667 ;     genFarPointerSet
   6FCD 90 0D 8A           6668 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x001b)
   6FD0 74 69              6669 	mov	a,#0x69
   6FD2 F0                 6670 	movx	@dptr,a
                           6671 ;	genPointerSet
                           6672 ;     genFarPointerSet
   6FD3 90 0D 8B           6673 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x001c)
   6FD6 74 6F              6674 	mov	a,#0x6F
   6FD8 F0                 6675 	movx	@dptr,a
                           6676 ;	genPointerSet
                           6677 ;     genFarPointerSet
   6FD9 90 0D 8C           6678 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x001d)
   6FDC 74 2E              6679 	mov	a,#0x2E
   6FDE F0                 6680 	movx	@dptr,a
                           6681 ;	genPointerSet
                           6682 ;     genFarPointerSet
   6FDF 90 0D 8D           6683 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x001e)
   6FE2 74 63              6684 	mov	a,#0x63
   6FE4 F0                 6685 	movx	@dptr,a
                           6686 ;	genPointerSet
                           6687 ;     genFarPointerSet
   6FE5 90 0D 8E           6688 	mov	dptr,#(_GPIO_clear_irq_file_name_4_4 + 0x001f)
   6FE8 74 00              6689 	mov	a,#0x00
   6FEA F0                 6690 	movx	@dptr,a
                           6691 ;	genAssign
   6FEB 90 05 80           6692 	mov	dptr,#_HAL_assert_fail_PARM_2
   6FEE 74 C9              6693 	mov	a,#0xC9
   6FF0 F0                 6694 	movx	@dptr,a
   6FF1 A3                 6695 	inc	dptr
   6FF2 74 01              6696 	mov	a,#0x01
   6FF4 F0                 6697 	movx	@dptr,a
   6FF5 A3                 6698 	inc	dptr
   6FF6 74 00              6699 	mov	a,#0x00
   6FF8 F0                 6700 	movx	@dptr,a
   6FF9 A3                 6701 	inc	dptr
   6FFA 74 00              6702 	mov	a,#0x00
   6FFC F0                 6703 	movx	@dptr,a
                           6704 ;	genCall
   6FFD 75 82 6F           6705 	mov	dpl,#_GPIO_clear_irq_file_name_4_4
   7000 75 83 0D           6706 	mov	dph,#(_GPIO_clear_irq_file_name_4_4 >> 8)
   7003 75 F0 00           6707 	mov	b,#0x00
   7006 12 1B CC           6708 	lcall	_HAL_assert_fail
                    1E4D   6709 	C$core_gpio.c$459$1$1 ==.
                           6710 ;	../drivers/CoreGPIO/core_gpio.c:459: }
   7009                    6711 00111$:
                    1E4D   6712 	C$core_gpio.c$460$1$1 ==.
                    1E4D   6713 	XG$GPIO_clear_irq$0$0 ==.
   7009 22                 6714 	ret
                           6715 	.area CSEG    (CODE)
                           6716 	.area CONST   (CODE)
                           6717 	.area XINIT   (CODE)
                           6718 	.area CABS    (ABS,CODE)
