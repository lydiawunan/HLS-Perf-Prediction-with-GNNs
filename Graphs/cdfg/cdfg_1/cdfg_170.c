#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 249131746
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, unsigned long p_5, double p_9[3][2], char p_11,
          unsigned long long p_15)
{
  unsigned char v_23;
  unsigned char v_21;
  unsigned char v_19;
  int v_17;
  unsigned long v_13;
  unsigned int v_7;
  long long v;
  float result;
  v_23 = (unsigned char)219;
  v_21 = (unsigned char)168;
  v_19 = (unsigned char)p;
  v_17 = (int)p;
  v_13 = (unsigned long)p_11;
  v_7 = 4171844930U;
  result = 788.998901367f;
  while ((p_15 % (unsigned long long)(p_5 + 875UL) - (unsigned long long)(- v_7)) * (unsigned long long)(
         (double)v_19 + - p_9[0][0]) == (unsigned long long)(1 % (v_17 + 163))) {
    v_17 = (unsigned long long)v_21 + 1021710892ULL;
    v_19 = (unsigned char)(-0.0380210374766 / (double)(((float)v_23 * result) * 35.f + 834.f));
    v_7 = (unsigned int)(562.001708984 + ((p_9[1][1] + (double)p) + (double)(- v_19)));
    v_19 = (unsigned char)235;
  }
  while_0_break: ;
  if ((unsigned long long)v_13 + ((unsigned long long)(~ v_7) - p_15) > (unsigned long long)(
      (unsigned long)((v_17 / 32382) / -127) * ((unsigned long)(212 % (
                                                                (int)v_19 + 639)) / (
                                                (3907660772UL | (unsigned long)p) + 875UL)))) {
    v = (long long)(~ (p * - p));
    result = (float)(! ((long)((float)v * -5152148992.f) / 648851443L));
    result = result;
  }
  else {
    v = (long long)(- (- p_9[0][1]) - - (6.31701703334e+37 - (double)p_11));
    v_7 = (unsigned int)v;
    result = (float)(- ((unsigned long long)(! p_5) & ((unsigned long long)v_7 - 282952223ULL)));
  }
  return result;
}


