#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 889987177
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p[3][4], unsigned long p_4[2][2][5], 
                 int p_6, short p_8, signed char p_10[5])
{
  long long v_21;
  float v_19;
  char v_17;
  signed char v_15;
  long v_13;
  unsigned int v;
  unsigned int result;
  v_19 = 6.20823160026e+37f;
  v_17 = (char)-118;
  v_15 = (signed char)p_8;
  v_13 = -296527491L;
  v = (unsigned int)p_6;
  result = (unsigned int)p_4[0][1][0];
  v_21 = (long long)(1008078144.f * - (v_19 + (float)p_4[1][0][0]));
  while ((unsigned long long)((((unsigned long)p[2][2] | p_4[1][1][0]) / (unsigned long)(
                               - p_6 + 164)) * (unsigned long)((int)(~ p_8) + (int)(! p_10[1]))) < 
         (unsigned long long)(! (! v)) - (unsigned long long)((long)p_8 - v_13) / 223527273ULL) {
    v_17 = (long long)v_17 ^ 566962275LL;
    v = (unsigned int)p[1][0];
    result = (unsigned int)((long long)(~ ((int)((unsigned char)v_19) ^ 52)) / (
                            ((-106LL + v_21) & (14406LL << ((int)p[2][3] & 63))) + 393LL));
    v_13 = (long)((unsigned long)((unsigned int)(2 - (int)p[2][0]) % (
                                  (unsigned int)v_15 * result + 868U)) % (
                  p_4[1][1][1] + 629UL));
  }
  while_0_break: ;
  return result;
}


