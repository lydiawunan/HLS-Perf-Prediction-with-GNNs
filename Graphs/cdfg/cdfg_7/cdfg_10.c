#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 215960048
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p[3][3][4], char p_4, double p_7, long p_13,
                  signed char p_17)
{
  short v_27;
  long long v_25;
  unsigned int v_23;
  unsigned short v_21;
  int v_19;
  unsigned long long v_15;
  long v_11;
  long v_9;
  unsigned long long v;
  unsigned long result;
  v_27 = (short)p_17;
  v_25 = 54296LL;
  v_23 = 34580U;
  v_21 = (unsigned short)p_13;
  v_19 = (int)p_13;
  v_15 = 56405ULL;
  v_11 = (long)p_4;
  v_9 = (long)p_17;
  v = (unsigned long long)p_13;
  result = (unsigned long)p_17;
  while ((unsigned long long)((89 + (int)p_4) / 240) + v_15 == (unsigned long long)(~ v_21)) {
    v_19 = (int)v_27 >> ((v_25 | 44018LL) & 15LL);
    v_15 = (unsigned long long)(- (v_23 - (unsigned int)(~ p_17)));
    v = (unsigned long long)7851868210.29;
    v_21 = (unsigned short)(((unsigned long long)(p_13 + p_13) - v * 28898ULL) - (unsigned long long)(
                            4294943360UL / (unsigned long)(v_9 + 858L) ^ 2223992064UL));
  }
  while_0_break: ;
  while (- ((double)(v - (unsigned long long)-4633368576.f) / (p_7 * (double)v_9 + 36.)) >= (double)(
         (unsigned long long)(v_11 >> (result & 31UL)) % ((unsigned long long)p_13 * v_15 + 405ULL) & (unsigned long long)(
         p_13 ^ (long)((int)p_17 * v_19)))) {
    v = (int)v_21 ^ -30155;
    v_9 = (long)((unsigned long)((unsigned int)((int)p_4 % ((int)p_4 + 594)) / (
                                 ((unsigned int)p[0][2][1] - v_23) + 36U)) * (unsigned long)(
                 (long)(! p[2][2][0]) * v_9));
    result = (unsigned long)(- v);
    v_19 = (int)((long long)((long)p[2][2][3] + ! p_13) % ((((long long)p_13 - 40212LL) >> 54U) + 588LL));
  }
  while_0_break_0: ;
  return result;
}


