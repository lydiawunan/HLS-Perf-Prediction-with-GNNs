#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 576701368
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p[1][3][3], unsigned long long p_4,
                       unsigned long long p_6, char p_9[1][4][3], float p_13)
{
  unsigned long v_19;
  unsigned int v_17;
  long long v_15;
  int v_11;
  unsigned int v;
  unsigned long long result;
  v_19 = (unsigned long)p_13;
  v_17 = (unsigned int)p_4;
  v_11 = (int)p_6;
  v = 630901502U;
  v_15 = (long long)p[0][2][2];
  v_11 = (int)((unsigned long)(((p_13 + (float)p_4) - (float)((long long)p_9[0][2][1] / (
                                                              v_15 + 329LL))) - (
                               (float)(- v_17) - (799.895263672f + (float)p_9[0][2][2]))) % (
               ((unsigned long)(! p_9[0][3][0]) % (v_19 * (unsigned long)v_11 + 709UL) + 
                ~ v_19 / (unsigned long)(v + 899U)) + 251UL));
  result = (58369ULL + p_6) % ((18446744073638580868ULL + (unsigned long long)(
                                (v + (unsigned int)p_9[0][2][0]) % (unsigned int)(
                                v_11 + 544))) + 116ULL);
  result = (unsigned long long)(! p[0][0][2]) % (2ULL % (~ p_4 / (((unsigned long long)p[0][0][0] + result) + 143ULL) + 333ULL) + 670ULL);
  return result;
}


