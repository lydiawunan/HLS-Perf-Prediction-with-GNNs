#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 971840449
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, char p_4, signed char p_7,
         unsigned long p_15[3][5][4], long p_19)
{
  signed char v_23;
  unsigned short v_21;
  long v_17;
  signed char v_13;
  short v_11;
  double v_9;
  short v;
  char result;
  v_23 = (signed char)43;
  v_21 = (unsigned short)60059;
  v_17 = -42642L;
  v_11 = (short)-14940;
  v = (short)p_19;
  if ((long long)((int)v_23 - (int)(! p_4)) / 8LL < 3418LL) {
    v_9 = (double)(~ ((unsigned long)((int)p_7 * -101) % (((unsigned long)v_11 + p_15[0][3][3]) + 663UL)));
    v_11 = (short)p_19;
    result = (char)(- ((unsigned long)p_7 % (p_15[2][2][1] + 950UL) - (unsigned long)(
                       (long)p_4 / (v_17 + 190L))));
  }
  else {
    v_11 = (short)(-4294957886UL);
    result = (char)v_21;
    v_9 = (double)(char)96;
  }
  while ((long)p < (long)((int)p_4 / ((int)v + 586) << (((int)p_7 - (int)p_7) & 31)) - 
                   (long)((int)p_4 / -86) * ((long)v_9 / -44132L)) {
    v_13 = (signed char)p_4;
    v_9 = (double)((float)(~ v_11) - (float)((long)v % 19941L) * 2.00757886405e+38f);
    v = (short)(~ v_13);
  }
  while_0_break: ;
  return result;
}


