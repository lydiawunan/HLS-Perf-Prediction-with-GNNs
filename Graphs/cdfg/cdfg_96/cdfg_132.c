#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 423215575
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, signed char p_5, short p_11, unsigned char p_13, double p_19)
{
  short v_21;
  long v_17;
  unsigned char v_15;
  float v_9;
  int v_7;
  int v;
  long result;
  v_21 = (short)-7196;
  v_17 = 811277845L;
  v_15 = (unsigned char)p;
  v_9 = (float)p_13;
  v_7 = -526208067;
  v = (int)p_11;
  result = (long)p_5;
  while ((long)(- v_9) << ((v_17 / (long)((int)p_11 + 508)) % (long)(
                           (int)p_13 + 995) & 31L) >= (long)p_19) {
    v = (unsigned long)v_21 - 4294921398UL;
    v_21 = (short)p_19;
    v_7 = (int)-1.33385842119e+38;
    v_17 = (long)v_21;
  }
  while_0_break: ;
  while ((unsigned long)v != (unsigned long)p * (unsigned long)((unsigned int)p_5 % 4294953963U)) {
    v_17 = v_7 + -545;
    v_7 = (int)((long)((float)(- v_15) + 329.784820557f) % (v_17 + 725L));
    result = ~ (! ((long)p_13 * p));
    v = (int)(((long)v_7 + p) % ((long)(v_9 / (v_9 + 415.f)) + 414L) + (long)(~ (
              (int)p_11 >> ((int)p_13 & 15))));
  }
  while_0_break_0: ;
  return result;
}


