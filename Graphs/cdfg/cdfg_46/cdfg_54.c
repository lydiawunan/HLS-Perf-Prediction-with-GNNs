#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 372009403
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, unsigned short p_5[5],
                 unsigned long long p_9[4][5][2])
{
  signed char v_19;
  short v_17;
  short v_15;
  short v_13;
  unsigned long v_11;
  unsigned int v_7;
  double v;
  unsigned int result;
  v_19 = (signed char)p_5[2];
  v_17 = (short)p_5[0];
  v_15 = (short)-15886;
  v_13 = (short)5339;
  v_11 = 60178UL;
  v_7 = 3390757551U;
  v = 8998616957.77;
  while ((unsigned long long)(1035194081U | ((unsigned int)(! p_5[3]) + v_7)) <= 
         (31ULL / (p_9[3][4][0] + 52ULL) | 489897135ULL / (p_9[0][1][0] + 396ULL)) - (unsigned long long)v_11) {
    v_15 = (int)v_17 * ((int)v_15 % ((int)v_13 % ((int)((short)1.23867305901e+38) + 679) + 237));
    v_11 = (unsigned long)((unsigned long long)v_7 / (((unsigned long long)(- v_19) + 
                                                       p_9[3][4][0] * p_9[3][0][0]) + 282ULL));
    v_17 = (short)(- ((unsigned long)p_5[2] / 4294943445UL));
    v_11 = ! (v_11 / (unsigned long)((int)v_19 + 445) | 4294957134UL);
  }
  while_0_break: ;
  result = (unsigned int)(((110. + v) + (double)((long)p | 19359L)) - 39.);
  return result;
}


