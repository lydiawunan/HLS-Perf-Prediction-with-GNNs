#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 341930261
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, signed char p_7[2][5][4],
                       unsigned short p_9, long long p_11[3][3][4])
{
  unsigned char v_19;
  char v_17;
  unsigned long long v_15;
  short v_13;
  short v_5;
  float v;
  unsigned long long result;
  v_17 = (char)p_9;
  v_15 = 43444ULL;
  v_13 = (short)p_9;
  v_5 = (short)p_11[2][1][3];
  v = -2.51583860585e+38f;
  result = 18446744072984621457ULL;
  while ((unsigned long long)((long long)(! p_9) / (45LL / (p_11[2][1][2] + 510LL) + 470LL)) * (
         (unsigned long long)p % ((unsigned long long)v_13 / (result + 678ULL) + 572ULL)) < (unsigned long long)(
         (long long)((int)p % ((int)p + 256) - -855795891) - ((long long)v_13 ^ 23778LL))) {
    v_17 = (unsigned long long)v_17 % (v_15 % 55418ULL + 802ULL);
    v = (float)p_9;
    v_19 = (unsigned char)((int)(- p_9) / (((int)p_9 + 29) + 440));
    v_13 = (short)v_19;
  }
  while_0_break: ;
  result = (unsigned long long)((int)(- (- v)) - (105 + (int)p) / ((int)(! v_5) + 420));
  return result;
}


