#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 421802597
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, unsigned long p_5,
                       unsigned int p_11, unsigned char p_13[2][3][5],
                       unsigned char p_17)
{
  unsigned long long v_25;
  short v_23;
  signed char v_21;
  unsigned int v_19;
  float v_15;
  unsigned int v_9;
  long long v_7;
  char v;
  unsigned long long result;
  v_25 = (unsigned long long)p_13[1][1][2];
  v_23 = (short)p_11;
  v_21 = (signed char)10;
  v_19 = 4175085133U;
  v_9 = p_11;
  v = (char)p_5;
  result = 18446744073709537140ULL;
  while (97ULL != result) {
    v_7 = (int)v_23 % -121;
    v = (char)v_25;
    v_19 = ! (v_9 % ((3998096029U | (unsigned int)p_13[1][0][4]) + 286U));
    result = (unsigned long long)(! ((long long)((unsigned int)p_13[0][2][2] * v_19) - (
                                     (long long)p_17 | v_7)));
  }
  while_0_break: ;
  if (4218612238UL / (unsigned long)(((int)v_21 + 250) + 373) - (unsigned long)(
      ~ p_11 - (unsigned int)p_17) <= (unsigned long)p_11) {
    v_7 = (long long)(((p_11 + 49049U) - 4149121093U) - (unsigned int)(- (- p_13[0][1][3])));
    v = (char)(((unsigned long long)(v_7 / 4294903036LL) % (p + 766ULL)) % (unsigned long long)(
               0U % (~ v_9 + 822U) + 537U));
    result = ((unsigned long long)((unsigned long)v / 63273UL) | p) % (
             (unsigned long long)p_5 * p + 785ULL);
  }
  else {
    v_9 = (unsigned int)((unsigned long)(~ (v_19 | (unsigned int)v)) + ! (
                         (unsigned long)p_17 - p_5));
    v_15 = (float)(((unsigned long)p_13[1][1][1] / (p_5 + 679UL) | ! p_5) - (unsigned long)(
                   v_9 + (unsigned int)(11344 / ((int)p_13[0][0][4] + 190))));
    result = (unsigned long long)(v_15 - (float)p_17);
  }
  return result;
}


