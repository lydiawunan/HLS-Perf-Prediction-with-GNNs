#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 372922122
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, float p_5[4][5], short p_7, int p_9,
          unsigned long long p_15[4][2][2])
{
  unsigned long v_23;
  long long v_21;
  short v_19;
  int v_17;
  unsigned long long v_13;
  signed char v_11;
  char v;
  short result;
  v_21 = 8033LL;
  v_19 = (short)7041;
  v_17 = 8605;
  v_11 = (signed char)p_5[0][1];
  v_23 = (unsigned long)-8.16889410712e+37f;
  if ((long long)v_17 > ~ (967559406LL / (v_21 + 754LL)) - (long long)v_23) {
    v = (char)(((float)p * p_5[1][1] + (float)((int)p_7 + p_9)) + (float)(
               (unsigned int)(-7056 >> ((int)v_11 & 15)) % 560U));
    v = (char)((int)(- v) * 5616);
    result = (short)(- ((unsigned long long)(3515680217UL * (unsigned long)v) + (
                        p - 18446744073709508047ULL)));
  }
  else {
    v_11 = (signed char)(((int)(- p_7) << (226 / (v_17 + 543) & 15)) - (int)v_19);
    v_13 = (unsigned long long)(- ((-14493 - (int)v_11) & p_9));
    result = (short)((((unsigned long long)p_5[1][2] - v_13) | p_15[1][0][0]) & (unsigned long long)(- (
                     (int)((char)p_5[0][1]) / -22)));
  }
  return result;
}


