#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 742359623
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, signed char p_4, char p_19)
{
  unsigned long v_17;
  unsigned int v_15;
  unsigned char v_13;
  short v_11;
  short v_9;
  signed char v_7;
  unsigned int v;
  float result;
  v_17 = (unsigned long)p_19;
  v_15 = (unsigned int)p;
  v_11 = (short)-7305;
  v_9 = (short)-32035;
  v_7 = (signed char)62;
  v = (unsigned int)p;
  result = -6213905920.f;
  if ((int)(- p_19) != (int)v_11) {
    v_9 = (short)(- ((double)p_19 / ((-9022680064. + p) + 942.)));
    v_11 = (short)30379;
    v_15 = ! v;
  }
  else {
    v_7 = (signed char)(! (! v_9));
    v = (unsigned int)((int)p_19 / ((int)v_7 + 150));
    v_17 = (unsigned long)(! (54228L + (long)v_7)) - 815UL;
  }
  while ((unsigned int)((int)((signed char)(- (- p))) + (int)p_4) > v) {
    v_13 = (int)v_9 / 167;
    result = (float)((unsigned long)((v_15 + 90U) >> (v_17 % 50066UL & 31UL)) + (unsigned long)(
                     (long)(10 - (int)p_4) & (957141227L >> 15)));
    v_9 = (short)((((int)p_4 >> ((int)p_4 & 7)) / ((int)(! p_4) + 435)) / (
                  -64 * (249 >> ((int)p_4 & 7)) + 387));
    v = (unsigned int)(((int)v_11 << ((int)v_7 & 15)) * ((int)v_13 - (int)p_4) + (int)v_13);
  }
  while_0_break: ;
  return result;
}


