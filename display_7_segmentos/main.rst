                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _SEGMENT_TABLE
                                     12 	.globl _main
                                     13 	.globl _display
                                     14 	.globl _disable_all_digits
                                     15 	.globl _delay
                                     16 	.globl _DIGIT4
                                     17 	.globl _DIGIT3
                                     18 	.globl _DIGIT2
                                     19 	.globl _DIGIT1
                                     20 	.globl _TF2
                                     21 	.globl _EXF2
                                     22 	.globl _RCLK
                                     23 	.globl _TCLK
                                     24 	.globl _EXEN2
                                     25 	.globl _TR2
                                     26 	.globl _C_T2
                                     27 	.globl _CP_RL2
                                     28 	.globl _T2CON_7
                                     29 	.globl _T2CON_6
                                     30 	.globl _T2CON_5
                                     31 	.globl _T2CON_4
                                     32 	.globl _T2CON_3
                                     33 	.globl _T2CON_2
                                     34 	.globl _T2CON_1
                                     35 	.globl _T2CON_0
                                     36 	.globl _PT2
                                     37 	.globl _ET2
                                     38 	.globl _CY
                                     39 	.globl _AC
                                     40 	.globl _F0
                                     41 	.globl _RS1
                                     42 	.globl _RS0
                                     43 	.globl _OV
                                     44 	.globl _F1
                                     45 	.globl _P
                                     46 	.globl _PS
                                     47 	.globl _PT1
                                     48 	.globl _PX1
                                     49 	.globl _PT0
                                     50 	.globl _PX0
                                     51 	.globl _RD
                                     52 	.globl _WR
                                     53 	.globl _T1
                                     54 	.globl _T0
                                     55 	.globl _INT1
                                     56 	.globl _INT0
                                     57 	.globl _TXD
                                     58 	.globl _RXD
                                     59 	.globl _P3_7
                                     60 	.globl _P3_6
                                     61 	.globl _P3_5
                                     62 	.globl _P3_4
                                     63 	.globl _P3_3
                                     64 	.globl _P3_2
                                     65 	.globl _P3_1
                                     66 	.globl _P3_0
                                     67 	.globl _EA
                                     68 	.globl _ES
                                     69 	.globl _ET1
                                     70 	.globl _EX1
                                     71 	.globl _ET0
                                     72 	.globl _EX0
                                     73 	.globl _P2_7
                                     74 	.globl _P2_6
                                     75 	.globl _P2_5
                                     76 	.globl _P2_4
                                     77 	.globl _P2_3
                                     78 	.globl _P2_2
                                     79 	.globl _P2_1
                                     80 	.globl _P2_0
                                     81 	.globl _SM0
                                     82 	.globl _SM1
                                     83 	.globl _SM2
                                     84 	.globl _REN
                                     85 	.globl _TB8
                                     86 	.globl _RB8
                                     87 	.globl _TI
                                     88 	.globl _RI
                                     89 	.globl _P1_7
                                     90 	.globl _P1_6
                                     91 	.globl _P1_5
                                     92 	.globl _P1_4
                                     93 	.globl _P1_3
                                     94 	.globl _P1_2
                                     95 	.globl _P1_1
                                     96 	.globl _P1_0
                                     97 	.globl _TF1
                                     98 	.globl _TR1
                                     99 	.globl _TF0
                                    100 	.globl _TR0
                                    101 	.globl _IE1
                                    102 	.globl _IT1
                                    103 	.globl _IE0
                                    104 	.globl _IT0
                                    105 	.globl _P0_7
                                    106 	.globl _P0_6
                                    107 	.globl _P0_5
                                    108 	.globl _P0_4
                                    109 	.globl _P0_3
                                    110 	.globl _P0_2
                                    111 	.globl _P0_1
                                    112 	.globl _P0_0
                                    113 	.globl _TH2
                                    114 	.globl _TL2
                                    115 	.globl _RCAP2H
                                    116 	.globl _RCAP2L
                                    117 	.globl _T2CON
                                    118 	.globl _B
                                    119 	.globl _ACC
                                    120 	.globl _PSW
                                    121 	.globl _IP
                                    122 	.globl _P3
                                    123 	.globl _IE
                                    124 	.globl _P2
                                    125 	.globl _SBUF
                                    126 	.globl _SCON
                                    127 	.globl _P1
                                    128 	.globl _TH1
                                    129 	.globl _TH0
                                    130 	.globl _TL1
                                    131 	.globl _TL0
                                    132 	.globl _TMOD
                                    133 	.globl _TCON
                                    134 	.globl _PCON
                                    135 	.globl _DPH
                                    136 	.globl _DPL
                                    137 	.globl _SP
                                    138 	.globl _P0
                                    139 	.globl _message
                                    140 ;--------------------------------------------------------
                                    141 ; special function registers
                                    142 ;--------------------------------------------------------
                                    143 	.area RSEG    (ABS,DATA)
      000000                        144 	.org 0x0000
                           000080   145 _P0	=	0x0080
                           000081   146 _SP	=	0x0081
                           000082   147 _DPL	=	0x0082
                           000083   148 _DPH	=	0x0083
                           000087   149 _PCON	=	0x0087
                           000088   150 _TCON	=	0x0088
                           000089   151 _TMOD	=	0x0089
                           00008A   152 _TL0	=	0x008a
                           00008B   153 _TL1	=	0x008b
                           00008C   154 _TH0	=	0x008c
                           00008D   155 _TH1	=	0x008d
                           000090   156 _P1	=	0x0090
                           000098   157 _SCON	=	0x0098
                           000099   158 _SBUF	=	0x0099
                           0000A0   159 _P2	=	0x00a0
                           0000A8   160 _IE	=	0x00a8
                           0000B0   161 _P3	=	0x00b0
                           0000B8   162 _IP	=	0x00b8
                           0000D0   163 _PSW	=	0x00d0
                           0000E0   164 _ACC	=	0x00e0
                           0000F0   165 _B	=	0x00f0
                           0000C8   166 _T2CON	=	0x00c8
                           0000CA   167 _RCAP2L	=	0x00ca
                           0000CB   168 _RCAP2H	=	0x00cb
                           0000CC   169 _TL2	=	0x00cc
                           0000CD   170 _TH2	=	0x00cd
                                    171 ;--------------------------------------------------------
                                    172 ; special function bits
                                    173 ;--------------------------------------------------------
                                    174 	.area RSEG    (ABS,DATA)
      000000                        175 	.org 0x0000
                           000080   176 _P0_0	=	0x0080
                           000081   177 _P0_1	=	0x0081
                           000082   178 _P0_2	=	0x0082
                           000083   179 _P0_3	=	0x0083
                           000084   180 _P0_4	=	0x0084
                           000085   181 _P0_5	=	0x0085
                           000086   182 _P0_6	=	0x0086
                           000087   183 _P0_7	=	0x0087
                           000088   184 _IT0	=	0x0088
                           000089   185 _IE0	=	0x0089
                           00008A   186 _IT1	=	0x008a
                           00008B   187 _IE1	=	0x008b
                           00008C   188 _TR0	=	0x008c
                           00008D   189 _TF0	=	0x008d
                           00008E   190 _TR1	=	0x008e
                           00008F   191 _TF1	=	0x008f
                           000090   192 _P1_0	=	0x0090
                           000091   193 _P1_1	=	0x0091
                           000092   194 _P1_2	=	0x0092
                           000093   195 _P1_3	=	0x0093
                           000094   196 _P1_4	=	0x0094
                           000095   197 _P1_5	=	0x0095
                           000096   198 _P1_6	=	0x0096
                           000097   199 _P1_7	=	0x0097
                           000098   200 _RI	=	0x0098
                           000099   201 _TI	=	0x0099
                           00009A   202 _RB8	=	0x009a
                           00009B   203 _TB8	=	0x009b
                           00009C   204 _REN	=	0x009c
                           00009D   205 _SM2	=	0x009d
                           00009E   206 _SM1	=	0x009e
                           00009F   207 _SM0	=	0x009f
                           0000A0   208 _P2_0	=	0x00a0
                           0000A1   209 _P2_1	=	0x00a1
                           0000A2   210 _P2_2	=	0x00a2
                           0000A3   211 _P2_3	=	0x00a3
                           0000A4   212 _P2_4	=	0x00a4
                           0000A5   213 _P2_5	=	0x00a5
                           0000A6   214 _P2_6	=	0x00a6
                           0000A7   215 _P2_7	=	0x00a7
                           0000A8   216 _EX0	=	0x00a8
                           0000A9   217 _ET0	=	0x00a9
                           0000AA   218 _EX1	=	0x00aa
                           0000AB   219 _ET1	=	0x00ab
                           0000AC   220 _ES	=	0x00ac
                           0000AF   221 _EA	=	0x00af
                           0000B0   222 _P3_0	=	0x00b0
                           0000B1   223 _P3_1	=	0x00b1
                           0000B2   224 _P3_2	=	0x00b2
                           0000B3   225 _P3_3	=	0x00b3
                           0000B4   226 _P3_4	=	0x00b4
                           0000B5   227 _P3_5	=	0x00b5
                           0000B6   228 _P3_6	=	0x00b6
                           0000B7   229 _P3_7	=	0x00b7
                           0000B0   230 _RXD	=	0x00b0
                           0000B1   231 _TXD	=	0x00b1
                           0000B2   232 _INT0	=	0x00b2
                           0000B3   233 _INT1	=	0x00b3
                           0000B4   234 _T0	=	0x00b4
                           0000B5   235 _T1	=	0x00b5
                           0000B6   236 _WR	=	0x00b6
                           0000B7   237 _RD	=	0x00b7
                           0000B8   238 _PX0	=	0x00b8
                           0000B9   239 _PT0	=	0x00b9
                           0000BA   240 _PX1	=	0x00ba
                           0000BB   241 _PT1	=	0x00bb
                           0000BC   242 _PS	=	0x00bc
                           0000D0   243 _P	=	0x00d0
                           0000D1   244 _F1	=	0x00d1
                           0000D2   245 _OV	=	0x00d2
                           0000D3   246 _RS0	=	0x00d3
                           0000D4   247 _RS1	=	0x00d4
                           0000D5   248 _F0	=	0x00d5
                           0000D6   249 _AC	=	0x00d6
                           0000D7   250 _CY	=	0x00d7
                           0000AD   251 _ET2	=	0x00ad
                           0000BD   252 _PT2	=	0x00bd
                           0000C8   253 _T2CON_0	=	0x00c8
                           0000C9   254 _T2CON_1	=	0x00c9
                           0000CA   255 _T2CON_2	=	0x00ca
                           0000CB   256 _T2CON_3	=	0x00cb
                           0000CC   257 _T2CON_4	=	0x00cc
                           0000CD   258 _T2CON_5	=	0x00cd
                           0000CE   259 _T2CON_6	=	0x00ce
                           0000CF   260 _T2CON_7	=	0x00cf
                           0000C8   261 _CP_RL2	=	0x00c8
                           0000C9   262 _C_T2	=	0x00c9
                           0000CA   263 _TR2	=	0x00ca
                           0000CB   264 _EXEN2	=	0x00cb
                           0000CC   265 _TCLK	=	0x00cc
                           0000CD   266 _RCLK	=	0x00cd
                           0000CE   267 _EXF2	=	0x00ce
                           0000CF   268 _TF2	=	0x00cf
                           0000A4   269 _DIGIT1	=	0x00a4
                           0000A5   270 _DIGIT2	=	0x00a5
                           0000A6   271 _DIGIT3	=	0x00a6
                           0000A7   272 _DIGIT4	=	0x00a7
                                    273 ;--------------------------------------------------------
                                    274 ; overlayable register banks
                                    275 ;--------------------------------------------------------
                                    276 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        277 	.ds 8
                                    278 ;--------------------------------------------------------
                                    279 ; internal ram data
                                    280 ;--------------------------------------------------------
                                    281 	.area DSEG    (DATA)
      000008                        282 _message::
      000008                        283 	.ds 4
                                    284 ;--------------------------------------------------------
                                    285 ; overlayable items in internal ram
                                    286 ;--------------------------------------------------------
                                    287 	.area	OSEG    (OVR,DATA)
                                    288 ;--------------------------------------------------------
                                    289 ; Stack segment in internal ram
                                    290 ;--------------------------------------------------------
                                    291 	.area	SSEG
      00000C                        292 __start__stack:
      00000C                        293 	.ds	1
                                    294 
                                    295 ;--------------------------------------------------------
                                    296 ; indirectly addressable internal ram data
                                    297 ;--------------------------------------------------------
                                    298 	.area ISEG    (DATA)
                                    299 ;--------------------------------------------------------
                                    300 ; absolute internal ram data
                                    301 ;--------------------------------------------------------
                                    302 	.area IABS    (ABS,DATA)
                                    303 	.area IABS    (ABS,DATA)
                                    304 ;--------------------------------------------------------
                                    305 ; bit data
                                    306 ;--------------------------------------------------------
                                    307 	.area BSEG    (BIT)
                                    308 ;--------------------------------------------------------
                                    309 ; paged external ram data
                                    310 ;--------------------------------------------------------
                                    311 	.area PSEG    (PAG,XDATA)
                                    312 ;--------------------------------------------------------
                                    313 ; external ram data
                                    314 ;--------------------------------------------------------
                                    315 	.area XSEG    (XDATA)
                                    316 ;--------------------------------------------------------
                                    317 ; absolute external ram data
                                    318 ;--------------------------------------------------------
                                    319 	.area XABS    (ABS,XDATA)
                                    320 ;--------------------------------------------------------
                                    321 ; external initialized ram data
                                    322 ;--------------------------------------------------------
                                    323 	.area XISEG   (XDATA)
                                    324 	.area HOME    (CODE)
                                    325 	.area GSINIT0 (CODE)
                                    326 	.area GSINIT1 (CODE)
                                    327 	.area GSINIT2 (CODE)
                                    328 	.area GSINIT3 (CODE)
                                    329 	.area GSINIT4 (CODE)
                                    330 	.area GSINIT5 (CODE)
                                    331 	.area GSINIT  (CODE)
                                    332 	.area GSFINAL (CODE)
                                    333 	.area CSEG    (CODE)
                                    334 ;--------------------------------------------------------
                                    335 ; interrupt vector
                                    336 ;--------------------------------------------------------
                                    337 	.area HOME    (CODE)
      000000                        338 __interrupt_vect:
      000000 02 00 06         [24]  339 	ljmp	__sdcc_gsinit_startup
                                    340 ;--------------------------------------------------------
                                    341 ; global & static initialisations
                                    342 ;--------------------------------------------------------
                                    343 	.area HOME    (CODE)
                                    344 	.area GSINIT  (CODE)
                                    345 	.area GSFINAL (CODE)
                                    346 	.area GSINIT  (CODE)
                                    347 	.globl __sdcc_gsinit_startup
                                    348 	.globl __sdcc_program_startup
                                    349 	.globl __start__stack
                                    350 	.globl __mcs51_genXINIT
                                    351 	.globl __mcs51_genXRAMCLEAR
                                    352 	.globl __mcs51_genRAMCLEAR
                                    353 ;	main.c:20: uchar message[4] = {5, 2, 0, 2}; // Personalize os índices aqui
      00005F 75 08 05         [24]  354 	mov	_message,#0x05
      000062 75 09 02         [24]  355 	mov	(_message + 0x0001),#0x02
      000065 75 0A 00         [24]  356 	mov	(_message + 0x0002),#0x00
      000068 75 0B 02         [24]  357 	mov	(_message + 0x0003),#0x02
                                    358 	.area GSFINAL (CODE)
      00006B 02 00 03         [24]  359 	ljmp	__sdcc_program_startup
                                    360 ;--------------------------------------------------------
                                    361 ; Home
                                    362 ;--------------------------------------------------------
                                    363 	.area HOME    (CODE)
                                    364 	.area HOME    (CODE)
      000003                        365 __sdcc_program_startup:
      000003 02 00 E7         [24]  366 	ljmp	_main
                                    367 ;	return from main will return to caller
                                    368 ;--------------------------------------------------------
                                    369 ; code
                                    370 ;--------------------------------------------------------
                                    371 	.area CSEG    (CODE)
                                    372 ;------------------------------------------------------------
                                    373 ;Allocation info for local variables in function 'delay'
                                    374 ;------------------------------------------------------------
                                    375 ;ms                        Allocated to registers r6 r7 
                                    376 ;i                         Allocated to registers r4 r5 
                                    377 ;j                         Allocated to registers r2 r3 
                                    378 ;------------------------------------------------------------
                                    379 ;	main.c:22: void delay(uint ms) 
                                    380 ;	-----------------------------------------
                                    381 ;	 function delay
                                    382 ;	-----------------------------------------
      00006E                        383 _delay:
                           000007   384 	ar7 = 0x07
                           000006   385 	ar6 = 0x06
                           000005   386 	ar5 = 0x05
                           000004   387 	ar4 = 0x04
                           000003   388 	ar3 = 0x03
                           000002   389 	ar2 = 0x02
                           000001   390 	ar1 = 0x01
                           000000   391 	ar0 = 0x00
      00006E AE 82            [24]  392 	mov	r6,dpl
      000070 AF 83            [24]  393 	mov	r7,dph
                                    394 ;	main.c:25: for (i = 0; i < ms; i++)
      000072 7C 00            [12]  395 	mov	r4,#0x00
      000074 7D 00            [12]  396 	mov	r5,#0x00
      000076                        397 00107$:
      000076 C3               [12]  398 	clr	c
      000077 EC               [12]  399 	mov	a,r4
      000078 9E               [12]  400 	subb	a,r6
      000079 ED               [12]  401 	mov	a,r5
      00007A 9F               [12]  402 	subb	a,r7
      00007B 50 14            [24]  403 	jnc	00109$
                                    404 ;	main.c:26: for (j = 0; j < 120; j++);
      00007D 7A 78            [12]  405 	mov	r2,#0x78
      00007F 7B 00            [12]  406 	mov	r3,#0x00
      000081                        407 00105$:
      000081 1A               [12]  408 	dec	r2
      000082 BA FF 01         [24]  409 	cjne	r2,#0xff,00130$
      000085 1B               [12]  410 	dec	r3
      000086                        411 00130$:
      000086 EA               [12]  412 	mov	a,r2
      000087 4B               [12]  413 	orl	a,r3
      000088 70 F7            [24]  414 	jnz	00105$
                                    415 ;	main.c:25: for (i = 0; i < ms; i++)
      00008A 0C               [12]  416 	inc	r4
      00008B BC 00 E8         [24]  417 	cjne	r4,#0x00,00107$
      00008E 0D               [12]  418 	inc	r5
      00008F 80 E5            [24]  419 	sjmp	00107$
      000091                        420 00109$:
                                    421 ;	main.c:27: }
      000091 22               [24]  422 	ret
                                    423 ;------------------------------------------------------------
                                    424 ;Allocation info for local variables in function 'disable_all_digits'
                                    425 ;------------------------------------------------------------
                                    426 ;	main.c:29: void disable_all_digits() {
                                    427 ;	-----------------------------------------
                                    428 ;	 function disable_all_digits
                                    429 ;	-----------------------------------------
      000092                        430 _disable_all_digits:
                                    431 ;	main.c:30: DIGIT1 = 1;
                                    432 ;	assignBit
      000092 D2 A4            [12]  433 	setb	_DIGIT1
                                    434 ;	main.c:31: DIGIT2 = 1;
                                    435 ;	assignBit
      000094 D2 A5            [12]  436 	setb	_DIGIT2
                                    437 ;	main.c:32: DIGIT3 = 1;
                                    438 ;	assignBit
      000096 D2 A6            [12]  439 	setb	_DIGIT3
                                    440 ;	main.c:33: DIGIT4 = 1;
                                    441 ;	assignBit
      000098 D2 A7            [12]  442 	setb	_DIGIT4
                                    443 ;	main.c:34: }
      00009A 22               [24]  444 	ret
                                    445 ;------------------------------------------------------------
                                    446 ;Allocation info for local variables in function 'display'
                                    447 ;------------------------------------------------------------
                                    448 ;	main.c:36: void display() 
                                    449 ;	-----------------------------------------
                                    450 ;	 function display
                                    451 ;	-----------------------------------------
      00009B                        452 _display:
                                    453 ;	main.c:38: disable_all_digits();
      00009B 12 00 92         [24]  454 	lcall	_disable_all_digits
                                    455 ;	main.c:39: P0 = SEGMENT_TABLE[message[0]];
      00009E E5 08            [12]  456 	mov	a,_message
      0000A0 90 00 F0         [24]  457 	mov	dptr,#_SEGMENT_TABLE
      0000A3 93               [24]  458 	movc	a,@a+dptr
      0000A4 F5 80            [12]  459 	mov	_P0,a
                                    460 ;	main.c:40: DIGIT1 = 0;
                                    461 ;	assignBit
      0000A6 C2 A4            [12]  462 	clr	_DIGIT1
                                    463 ;	main.c:41: delay(1);
      0000A8 90 00 01         [24]  464 	mov	dptr,#0x0001
      0000AB 12 00 6E         [24]  465 	lcall	_delay
                                    466 ;	main.c:43: disable_all_digits();
      0000AE 12 00 92         [24]  467 	lcall	_disable_all_digits
                                    468 ;	main.c:44: P0 = SEGMENT_TABLE[message[1]];
      0000B1 E5 09            [12]  469 	mov	a,(_message + 0x0001)
      0000B3 90 00 F0         [24]  470 	mov	dptr,#_SEGMENT_TABLE
      0000B6 93               [24]  471 	movc	a,@a+dptr
      0000B7 F5 80            [12]  472 	mov	_P0,a
                                    473 ;	main.c:45: DIGIT2 = 0;
                                    474 ;	assignBit
      0000B9 C2 A5            [12]  475 	clr	_DIGIT2
                                    476 ;	main.c:46: delay(1);
      0000BB 90 00 01         [24]  477 	mov	dptr,#0x0001
      0000BE 12 00 6E         [24]  478 	lcall	_delay
                                    479 ;	main.c:48: disable_all_digits();
      0000C1 12 00 92         [24]  480 	lcall	_disable_all_digits
                                    481 ;	main.c:49: P0 = SEGMENT_TABLE[message[2]];
      0000C4 E5 0A            [12]  482 	mov	a,(_message + 0x0002)
      0000C6 90 00 F0         [24]  483 	mov	dptr,#_SEGMENT_TABLE
      0000C9 93               [24]  484 	movc	a,@a+dptr
      0000CA F5 80            [12]  485 	mov	_P0,a
                                    486 ;	main.c:50: DIGIT3 = 0;
                                    487 ;	assignBit
      0000CC C2 A6            [12]  488 	clr	_DIGIT3
                                    489 ;	main.c:51: delay(1);
      0000CE 90 00 01         [24]  490 	mov	dptr,#0x0001
      0000D1 12 00 6E         [24]  491 	lcall	_delay
                                    492 ;	main.c:53: disable_all_digits();
      0000D4 12 00 92         [24]  493 	lcall	_disable_all_digits
                                    494 ;	main.c:54: P0 = SEGMENT_TABLE[message[3]];
      0000D7 E5 0B            [12]  495 	mov	a,(_message + 0x0003)
      0000D9 90 00 F0         [24]  496 	mov	dptr,#_SEGMENT_TABLE
      0000DC 93               [24]  497 	movc	a,@a+dptr
      0000DD F5 80            [12]  498 	mov	_P0,a
                                    499 ;	main.c:55: DIGIT4 = 0;
                                    500 ;	assignBit
      0000DF C2 A7            [12]  501 	clr	_DIGIT4
                                    502 ;	main.c:56: delay(1);
      0000E1 90 00 01         [24]  503 	mov	dptr,#0x0001
                                    504 ;	main.c:57: }
      0000E4 02 00 6E         [24]  505 	ljmp	_delay
                                    506 ;------------------------------------------------------------
                                    507 ;Allocation info for local variables in function 'main'
                                    508 ;------------------------------------------------------------
                                    509 ;	main.c:59: void main() 
                                    510 ;	-----------------------------------------
                                    511 ;	 function main
                                    512 ;	-----------------------------------------
      0000E7                        513 _main:
                                    514 ;	main.c:61: while (1) 
      0000E7                        515 00102$:
                                    516 ;	main.c:63: display();
      0000E7 12 00 9B         [24]  517 	lcall	_display
                                    518 ;	main.c:65: }
      0000EA 80 FB            [24]  519 	sjmp	00102$
                                    520 	.area CSEG    (CODE)
                                    521 	.area CONST   (CODE)
      0000F0                        522 _SEGMENT_TABLE:
      0000F0 C0                     523 	.db #0xc0	; 192
      0000F1 F9                     524 	.db #0xf9	; 249
      0000F2 A4                     525 	.db #0xa4	; 164
      0000F3 B0                     526 	.db #0xb0	; 176
      0000F4 99                     527 	.db #0x99	; 153
      0000F5 92                     528 	.db #0x92	; 146
      0000F6 82                     529 	.db #0x82	; 130
      0000F7 F8                     530 	.db #0xf8	; 248
      0000F8 80                     531 	.db #0x80	; 128
      0000F9 90                     532 	.db #0x90	; 144
      0000FA 88                     533 	.db #0x88	; 136
      0000FB 83                     534 	.db #0x83	; 131
      0000FC C6                     535 	.db #0xc6	; 198
      0000FD A1                     536 	.db #0xa1	; 161
      0000FE 86                     537 	.db #0x86	; 134
      0000FF 8E                     538 	.db #0x8e	; 142
      000100 C2                     539 	.db #0xc2	; 194
      000101 89                     540 	.db #0x89	; 137
      000102 F9                     541 	.db #0xf9	; 249
      000103 F1                     542 	.db #0xf1	; 241
      000104 C3                     543 	.db #0xc3	; 195
      000105 A9                     544 	.db #0xa9	; 169
      000106 C0                     545 	.db #0xc0	; 192
      000107 8C                     546 	.db #0x8c	; 140
      000108 98                     547 	.db #0x98	; 152
      000109 92                     548 	.db #0x92	; 146
      00010A 87                     549 	.db #0x87	; 135
      00010B C1                     550 	.db #0xc1	; 193
      00010C E3                     551 	.db #0xe3	; 227
      00010D 8E                     552 	.db #0x8e	; 142
      00010E FF                     553 	.db #0xff	; 255
      00010F 00                     554 	.db 0x00
      000110 00                     555 	.db 0x00
      000111 00                     556 	.db 0x00
      000112 00                     557 	.db 0x00
      000113 00                     558 	.db 0x00
      000114 00                     559 	.db 0x00
      000115 00                     560 	.db 0x00
                                    561 	.area XINIT   (CODE)
                                    562 	.area CABS    (ABS,CODE)
