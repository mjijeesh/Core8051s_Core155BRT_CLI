                              1 ;===============================================================================
                              2 ; Core8051s/SDCC HAL implementation for large memory model.
                              3 ;
                              4 ; SVN $Revision: 638 $
                              5 ; SVN $Date: 2009-02-11 15:02:08 +0000 (Wed, 11 Feb 2009) $
                              6 ;
                              7 ;===============================================================================
                              8 	.module ___hal_large
                              9 	.optsdcc -mmcs51 --model-large
                             10 	
                             11 	.globl _HW_get_32bit_reg
                             12 	.globl _HW_set_32bit_reg
                             13     .globl _HW_set_16bit_reg
                             14     .globl _HW_get_16bit_reg
                             15     .globl _HW_set_8bit_reg
                             16 	.globl _HW_get_8bit_reg
                             17 	.globl _HAL_enable_interrupts
                             18 	.globl _HAL_disable_interrupts
                             19 	.globl _HAL_restore_interrupts
                             20 	
                             21 ;===============================================================================
                    009A     22 	XWB1 = 0x9A
                    009B     23 	XWB2 = 0x9B
                    009C     24 	XWB3 = 0x9C	
                    009D     25 	XRB1 = 0x9D
                    009E     26 	XRB2 = 0x9E
                    009F     27 	XRB3 = 0x9F
                             28 
                             29 	.globl _P
                             30 	.globl _OV
                             31 	.globl _RS0
                             32 	.globl _RS1
                             33 	.globl _F0
                             34 	.globl _AC
                             35 	.globl _CY
                             36 	.globl _B
                             37 	.globl _ACC
                             38 	.globl _PSW
                             39 	.globl _XRB3
                             40 	.globl _XRB2
                             41 	.globl _XRB1
                             42 	.globl _XWB3
                             43 	.globl _XWB2
                             44 	.globl _XWB1
                             45 	.globl _DPS
                             46 	.globl _DPH1
                             47 	.globl _DPL1
                             48 	.globl _DPH
                             49 	.globl _DPL
                             50 	.globl _SP
                             51 	.globl _HW_set_32bit_reg_PARM_2
                             52 	.globl _HW_set_16bit_reg_PARM_2
                             53 	.globl _HW_set_8bit_reg_PARM_2
                             54 	
                             55 ;--------------------------------------------------------
                             56 ; special function registers
                             57 ;--------------------------------------------------------
                             58 	.area RSEG    (DATA)
                             59 ;G$SP$0$0==.
   005D                      60 _SP::
   005D                      61 	.ds 1
                             62 ;G$DPL$0$0==.
   005E                      63 _DPL::
   005E                      64 	.ds 1
                             65 ;G$DPH$0$0==.
   005F                      66 _DPH::
   005F                      67 	.ds 1
                             68 ;G$DPL1$0$0==.
   0060                      69 _DPL1::
   0060                      70 	.ds 1
                             71 ;G$DPH1$0$0==.
   0061                      72 _DPH1::
   0061                      73 	.ds 1
                             74 ;G$DPS$0$0==.
   0062                      75 _DPS::
   0062                      76 	.ds 1
                             77 ;G$XWB1$0$0==.
   0063                      78 _XWB1::
   0063                      79 	.ds 1
                             80 ;G$XWB2$0$0==.
   0064                      81 _XWB2::
   0064                      82 	.ds 1
                             83 ;G$XWB3$0$0==.
   0065                      84 _XWB3::
   0065                      85 	.ds 1
                             86 ;G$XRB1$0$0==.
   0066                      87 _XRB1::
   0066                      88 	.ds 1
                             89 ;G$XRB2$0$0==.
   0067                      90 _XRB2::
   0067                      91 	.ds 1
                             92 ;G$XRB3$0$0==.
   0068                      93 _XRB3::
   0068                      94 	.ds 1
                             95 ;G$PSW$0$0==.
   0069                      96 _PSW::
   0069                      97 	.ds 1
                             98 ;G$ACC$0$0==.
   006A                      99 _ACC::
   006A                     100 	.ds 1
                            101 ;G$B$0$0==.
   006B                     102 _B::
   006B                     103 	.ds 1
                            104 ;--------------------------------------------------------
                            105 ; special function bits
                            106 ;--------------------------------------------------------
                            107 	.area RSEG    (DATA)
                            108 ;G$CY$0$0==.
   006C                     109 _CY::
   006C                     110 	.ds 1
                            111 ;G$AC$0$0==.
   006D                     112 _AC::
   006D                     113 	.ds 1
                            114 ;G$F0$0$0==.
   006E                     115 _F0::
   006E                     116 	.ds 1
                            117 ;G$RS1$0$0==.
   006F                     118 _RS1::
   006F                     119 	.ds 1
                            120 ;G$RS0$0$0==.
   0070                     121 _RS0::
   0070                     122 	.ds 1
                            123 ;G$OV$0$0==.
   0071                     124 _OV::
   0071                     125 	.ds 1
                            126 ;G$P$0$0==.
   0072                     127 _P::
   0072                     128 	.ds 1
                            129 ;--------------------------------------------------------
                            130 ; overlayable register banks
                            131 ;--------------------------------------------------------
                            132 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     133 	.ds 8
                            134 ;--------------------------------------------------------
                            135 ; internal ram data
                            136 ;--------------------------------------------------------
                            137 	.area DSEG    (DATA)
                            138 ;--------------------------------------------------------
                            139 ; overlayable items in internal ram 
                            140 ;--------------------------------------------------------
                            141 	.area OSEG    (OVR,DATA)
                            142 ;--------------------------------------------------------
                            143 ; indirectly addressable internal ram data
                            144 ;--------------------------------------------------------
                            145 	.area ISEG    (DATA)
                            146 ;--------------------------------------------------------
                            147 ; absolute internal ram data
                            148 ;--------------------------------------------------------
                            149 	.area IABS    (ABS,DATA)
                            150 	.area IABS    (ABS,DATA)
                            151 ;--------------------------------------------------------
                            152 ; bit data
                            153 ;--------------------------------------------------------
                            154 	.area BSEG    (BIT)
                            155 ;--------------------------------------------------------
                            156 ; paged external ram data
                            157 ;--------------------------------------------------------
                            158 	.area PSEG    (PAG,XDATA)
                            159 ;--------------------------------------------------------
                            160 ; external ram data
                            161 ;--------------------------------------------------------
                            162 	.area XSEG    (XDATA)
                            163 
   003D                     164 _HW_get_32bit_reg_reg_addr_1_1:
   003D                     165 	.ds 2
                            166 
   003F                     167 _HW_get_32bit_reg_dummy_1_1:
   003F                     168 	.ds 2
                            169 
   0041                     170 _HW_get_32bit_reg_ret_val_1_1:
   0041                     171 	.ds 4
                            172 
   0045                     173 _HW_set_32bit_reg_ret_val_1_1:
   0045                     174 	.ds 4
                            175 
   0049                     176 _HW_set_16bit_reg_PARM_2:
   0049                     177     .ds 2
                            178 
   004B                     179 _HW_set_8bit_reg_PARM_2:
   004B                     180     .ds 1
                            181 
                            182 ;===============================================================================
                            183 ; external ram data
                            184 ;===============================================================================
                            185 	.area XSEG    (XDATA)
                            186 
   004C                     187 _HW_set_32bit_reg_PARM_2:
   004C                     188 	.ds 4
                            189 
                            190 	.area XISEG   (XDATA)
                            191 	.area HOME    (CODE)
                            192 	.area GSINIT0 (CODE)
                            193 	.area GSINIT1 (CODE)
                            194 	.area GSINIT2 (CODE)
                            195 	.area GSINIT3 (CODE)
                            196 	.area GSINIT4 (CODE)
                            197 	.area GSINIT5 (CODE)
                            198 	.area GSINIT  (CODE)
                            199 	.area GSFINAL (CODE)
                            200 	.area CSEG    (CODE)
                            201 
                            202 	.area HOME    (CODE)
                            203 	.area GSINIT  (CODE)
                            204 	.area GSFINAL (CODE)
                            205 	.area GSINIT  (CODE)
                            206 	
                            207 	; has code here
                            208 	
                            209 	.area HOME    (CODE)
                            210 	.area HOME    (CODE)
                            211 
                            212 ;===============================================================================
                            213 ; code
                            214 ;===============================================================================
                            215 	.area CSEG    (CODE)
                            216 
                            217 ;-------------------------------------------------------------------------------
                            218 ; HW_get_32bit_reg
                            219 ;
                    0000    220 	G$HW_get_32bit_reg$0$0 ==.
   0876                     221 _HW_get_32bit_reg:
   0876 E0                  222 	MOVX 	A,@DPTR
   0877 F5 82               223 	MOV  	DPL,A
   0879 85 9D 83            224 	MOV  	DPH,XRB1
   087C 85 9E F0            225 	MOV  	B,XRB2
   087F E5 9F               226 	MOV  	A,XRB3
   0881                     227 00101$:
                    000B    228 	XG$HW_get_32bit_reg$0$0 ==.
                            229 
   0881 22                  230 	RET  	
                            231 
                            232 ;-------------------------------------------------------------------------------
                            233 ; HW_set_32bit_reg
                            234 ;
                    000C    235 	G$HW_set_32bit_reg$0$0 ==.
   0882                     236 _HW_set_32bit_reg:
   0882 C0 83               237 	PUSH    DPH
   0884 C0 82               238 	PUSH    DPL	   
   0886 90 00 4D            239 	MOV     DPTR,#_HW_set_32bit_reg_PARM_2 + 1
   0889 E0                  240 	MOVX	A,@DPTR
   088A F5 9A               241 	MOV     XWB1,A
   088C A3                  242 	INC		DPTR
   088D E0                  243 	MOVX	A,@DPTR
   088E F5 9B               244 	MOV     XWB2,A
   0890 A3                  245 	INC		DPTR
   0891 E0                  246 	MOVX	A,@DPTR
   0892 F5 9C               247 	MOV     XWB3,A
   0894 90 00 4C            248 	MOV     DPTR,#_HW_set_32bit_reg_PARM_2
   0897 E0                  249 	MOVX	A,@DPTR
   0898 D0 82               250 	POP     DPL
   089A D0 83               251 	POP     DPH
   089C F0                  252 	MOVX 	@DPTR,A
   089D                     253 00101$:
                    0027    254 	XG$HW_set_32bit_reg$0$0 ==.
                            255 
   089D 22                  256 	RET  	
                            257 
                            258 ;-------------------------------------------------------------------------------
                            259 ; HW_set_16bit_reg
                            260 ;
                    0028    261     G$HW_set_16bit_reg$0$0 ==.
   089E                     262 _HW_set_16bit_reg:
   089E C0 83               263     PUSH    DPH
   08A0 C0 82               264     PUSH    DPL    
   08A2 90 00 4A            265     MOV     DPTR,#_HW_set_16bit_reg_PARM_2 + 1
   08A5 E0                  266     MOVX    A,@DPTR
   08A6 F5 9A               267     MOV     XWB1,A
   08A8 90 00 49            268     MOV     DPTR,#_HW_set_16bit_reg_PARM_2
   08AB E0                  269     MOVX    A,@DPTR
   08AC D0 82               270     POP     DPL
   08AE D0 83               271     POP     DPH
   08B0 F0                  272     MOVX    @DPTR,A
   08B1                     273 00101$:
                    003B    274     XG$HW_set_16bit_reg$0$0 ==.
                            275 
   08B1 22                  276     RET
                            277 
                            278 ;-------------------------------------------------------------------------------
                            279 ; HW_get_16bit_reg
                            280 ;
                    003C    281     G$HW_get_16bit_reg$0$0 ==.
   08B2                     282 _HW_get_16bit_reg:
   08B2 E0                  283     MOVX    A,@DPTR
   08B3 F5 82               284     MOV     DPL,A
   08B5 85 9D 83            285     MOV     DPH,XRB1
                            286 
   08B8                     287 00101$:
                    0042    288     XG$HW_get_16bit_reg$0$0 ==.
                            289 
   08B8 22                  290     RET
                            291     
                            292 ;-------------------------------------------------------------------------------
                            293 ; HW_set_8bit_reg
                            294 ;
                    0043    295     G$HW_set_8bit_reg$0$0 ==.
   08B9                     296 _HW_set_8bit_reg:
   08B9 C0 83               297     PUSH    DPH
   08BB C0 82               298     PUSH    DPL    
   08BD 90 00 4B            299     MOV     DPTR,#_HW_set_8bit_reg_PARM_2
   08C0 E0                  300     MOVX    A, @DPTR
   08C1 D0 82               301     POP     DPL
   08C3 D0 83               302     POP     DPH
   08C5 F0                  303     MOVX    @DPTR,A
                            304 
   08C6                     305 00101$:
                    0050    306     XG$HW_set_8bit_reg$0$0 ==.
                            307 
   08C6 22                  308     RET
                            309 
                            310 ;-------------------------------------------------------------------------------
                            311 ; HW_get_8bit_reg
                            312 ;
                    0051    313     G$HW_get_8bit_reg$0$0 ==.
   08C7                     314 _HW_get_8bit_reg:
   08C7 E0                  315     MOVX    A,@DPTR
   08C8 F5 82               316     MOV     DPL,A
   08CA                     317 00101$:
                    0054    318     XG$HW_get_8bit_reg$0$0 ==.
   08CA 22                  319     RET
                            320 
                            321 ;-------------------------------------------------------------------------------
                            322 ; HAL_enable_interrupts
                            323 ;
                    0055    324     G$HAL_enable_interrupts$0$0 ==.
   08CB                     325 _HAL_enable_interrupts:
   08CB 75 AF 80            326     MOV     EA,#0x80
                            327 
   08CE                     328 00101$:
                    0058    329     XG$HAL_enable_interrupts$0$0 ==.
   08CE 22                  330     RET
                            331 
                            332 ;-------------------------------------------------------------------------------
                            333 ; HAL_disable_interrupts
                            334 ;
                    0059    335     G$HAL_disable_interrupts$0$0 ==.
   08CF                     336 _HAL_disable_interrupts:
   08CF 85 AF 82            337     MOV     DPL,EA
   08D2 75 AF 00            338     MOV     EA,#0x00
   08D5                     339 00101$:
                    005F    340     XG$HAL_disable_interrupts$0$0 ==.
   08D5 22                  341     RET
                            342 
                            343 ;-------------------------------------------------------------------------------
                            344 ; HAL_restore_interrupts
                            345 ;
                    0060    346     G$HAL_restore_interrupts$0$0 ==.
   08D6                     347 _HAL_restore_interrupts:
   08D6 85 82 AF            348     MOV     EA,DPL
   08D9                     349 00101$:
                    0063    350     XG$HAL_restore_interrupts$0$0 ==.
   08D9 22                  351     RET
                            352 
                            353 ;-------------------------------------------------------------------------------
                            354     
                            355 	.area CSEG    (CODE)
                            356 	.area CONST   (CODE)
                            357 	.area XINIT   (CODE)
                            358 	.area CABS    (ABS,CODE)
                            359 	
