#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 74944592
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p[3][3], double p_5, short p_7, signed char p_9[2][2][1],
         signed char p_11)
{
  short v_15;
  unsigned short v_13;
  char v;
  char result;
  v_15 = (short)-23112;
  v = (char)(~ ((long long)(((int)p_9[0][0][0] - (int)p_9[0][0][0]) ^ (
                            (int)p_7 + (int)v_15)) - ! p[1][0] * (long long)(
                                                     20026 * (int)p_11)));
  v_13 = (unsigned short)((long)v - 1);
  v = (char)((long)(- (((int)p_7 - (int)v_13) * (int)p_7)) % (- ((long)p_7 % 16690L) + 1005L));
  result = (char)((unsigned long long)((((long long)v - p[1][2]) >> (
                                        (int)((short)p_5) / ((int)p_7 + 373) & 63)) ^ (long long)(
                                       ((int)p_9[0][1][0] % 19) % ((int)p_11 / (
                                                                   (int)((signed char)p_5) + 1020) + 213))) | 
                  ((unsigned long long)p_9[0][0][0] ^ 749727381ULL) / (unsigned long long)(
                  ~ (p[1][1] * -3946LL) + 175LL));
  return result;
}


