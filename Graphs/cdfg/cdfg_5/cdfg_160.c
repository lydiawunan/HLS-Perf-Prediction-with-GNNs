#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 254361406
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, int p_5, unsigned long long p_7[1][4][5],
          unsigned long long p_11)
{
  unsigned int v_19;
  long long v_17;
  unsigned int v_15;
  double v_13;
  char v_9;
  long long v;
  short result;
  v_17 = 595558636LL;
  v_15 = (unsigned int)p;
  v_13 = (double)p_7[0][2][1];
  v_9 = (char)45;
  v = -174863019LL;
  result = (short)6460;
  while (((unsigned long long)(p_5 * (int)result) + 76ULL * p_7[0][2][4]) - (
         (unsigned long long)(~ v_9) - 434401889ULL * p_11) != (unsigned long long)(! (
         -1020244100LL >> (((int)((short)v_13) ^ 15667) & 63)))) {
    v_17 = (unsigned long long)v_17 % 18446744072914005840ULL;
    v_19 = (unsigned int)(v_13 / ((double)(p_7[0][0][1] | 47616ULL) * (
                                  2.94356001824e+38 / ((double)v_15 + 383.)) + 207.));
    v = (long long)((unsigned long long)v_19 - ((18446744072850497241ULL ^ p_11) << (
                                                ~ p_5 & 63)));
    v_13 = (double)p_5;
  }
  while_0_break: ;
  result = (short)((float)((long long)(! p) * (v + (long long)-2.5517574326e+38)) + 831.049926758f);
  return result;
}


