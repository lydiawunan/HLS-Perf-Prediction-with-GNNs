#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 519235562
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, signed char p_5, char p_7[1][3],
         unsigned long long p_9[3], unsigned short p_11)
{
  unsigned short v_13;
  unsigned char v;
  long result;
  v = (unsigned char)p;
  v_13 = (unsigned short)(- v);
  if ((unsigned long long)((int)v_13 / -62) < (unsigned long long)((unsigned int)(
                                                                   50221 - (int)p_7[0][1]) & 3259957662U) + ! (
                                              18446744073617909264ULL - (unsigned long long)p_11)) {
    v = (unsigned char)p_9[0];
    result = (long)(((unsigned long long)p_7[0][2] - p) * (unsigned long long)p_5 + 10504ULL);
    result = (long)(((p - (unsigned long long)result) / (unsigned long long)(
                     ((int)v + 98) + 262)) % (unsigned long long)((int)p_5 + 118));
  }
  else result = -13L;
  return result;
}


