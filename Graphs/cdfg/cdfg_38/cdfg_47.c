#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 711518294
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, int p_7, unsigned int p_9, signed char p_11,
                unsigned long p_17)
{
  int v_23;
  unsigned short v_21;
  short v_19;
  int v_15;
  long long v_13;
  short v_5;
  unsigned char v;
  signed char result;
  v_23 = (int)p;
  v_21 = (unsigned short)p_11;
  v_19 = (short)-23727;
  v_13 = -401827908LL;
  v_5 = (short)p_9;
  v = (unsigned char)234;
  result = (signed char)44;
  if ((unsigned long long)(- (- p_7 | (int)(-909.028625488f / (p + 48.f)))) <= 
      ((unsigned long long)((int)v % ((int)p_11 + 65)) * ((unsigned long long)p_9 - 18446744073709504196ULL)) % (unsigned long long)(
      (int)v_19 + 68)) {
    v_19 = (short)(((unsigned long)result * p_17 & 177473506UL) << ((int)(! (- v_19)) & 31));
    v_15 = (int)v_21 * (int)v;
    result = (signed char)v_19;
  }
  else {
    v_15 = (int)((long long)((int)((unsigned char)(p - 4294906880.f)) + (int)v) * - (
                 v_13 & (long long)p_17));
    v = (unsigned char)((unsigned long)(-7111075934.71 / ((double)p_9 + 635.)) % (
                        4294943140UL * p_17 + 505UL) + 4294911363UL);
    v_5 = (short)(~ (! (28628 / (v_23 + 1006))));
  }
  while (p == (float)result) {
    v_5 = (int)v_5 * ((int)v * -17931);
    result = (signed char)(v_13 / (long long)(((unsigned long)v_15 | 
                                               p_17 * 54071UL) + 321UL));
    v = (unsigned char)(~ ((unsigned int)p_7 % (p_9 + 45U)) % (unsigned int)(
                        (~ p_7 - (-125 << ((int)p_11 & 7))) + 566));
    result = (signed char)0;
  }
  while_0_break: ;
  return result;
}


