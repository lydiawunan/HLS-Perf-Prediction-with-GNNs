#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 943959854
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p[3][2][5], unsigned long long p_4[5][1][5], short p_7,
                  unsigned int p_13)
{
  char v_21;
  long long v_19;
  unsigned char v_17;
  unsigned long long v_15;
  long long v_11;
  unsigned int v_9;
  int v;
  unsigned long result;
  v_21 = (char)-5;
  v_19 = 975637580LL;
  v_17 = (unsigned char)217;
  v_15 = 18446744073210914728ULL;
  v_11 = (long long)p[0][0][4];
  v_9 = (unsigned int)p_7;
  v = -52461;
  while ((unsigned int)-9206406144.f * (p_13 * (unsigned int)p_7 >> (
                                        v_15 % (unsigned long long)((int)p_7 + 662) & 31ULL)) != (unsigned int)v_17) {
    v_19 %= 116LL;
    v_9 = (unsigned int)(~ 18446744073709487773ULL);
    v = (int)((unsigned long long)p_7 % ((605940740ULL ^ (unsigned long long)(
                                          v << ((int)v_21 & 31))) + 225ULL));
    v_17 = (unsigned char)((long long)p_7 & ~ ((long long)p_13 % 1257LL));
  }
  while_0_break: ;
  result = (unsigned long)(((unsigned long long)p[2][1][3] - p_4[2][0][1]) * (unsigned long long)(
                           v * (int)p_7) + (unsigned long long)((long long)(
                                                                (unsigned int)p[1][1][0] ^ v_9) + v_11));
  return result;
}


