//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 869542901
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p[2][3][2], signed char p_4, short p_7,
              unsigned int p_9[4][4][5], long long p_11)
{
  short v_15;
  long long v_13;
  unsigned short v;
  long long result;
  v_15 = (short)p[0][2][1];
  v_13 = p_11 * (long long)(1008843618U / ((p[0][2][1] * 4294967254U) * (
                                           p_9[1][2][4] - 96U) + 832U));
  result = (long long)v_15;
  v = (unsigned short)(- ((unsigned long long)((unsigned int)(~ p_7) - 
                                               (unsigned int)p_7 % (p_9[2][2][3] + 228U)) % (
                          (18446744073709544799ULL * (unsigned long long)result) % (unsigned long long)(
                          p_11 % (v_13 + 143LL) + 604LL) + 335ULL)));
  result = -1LL * (long long)((p[0][1][1] * (unsigned int)p_4 ^ 568U) + (unsigned int)(
                              (int)v * (int)(~ p_4)));
  return result;
}


