#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 951797472
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, float p_7, char p_9[4][4][5])
{
  long long v_13;
  long long v_11;
  unsigned short v_5;
  unsigned int v;
  short result;
  v_13 = -319032343LL;
  v_11 = (long long)p_9[2][0][3];
  v_5 = (unsigned short)60538;
  v = 64967U;
  result = (short)p_7;
  v_5 = (unsigned short)((long long)v_5 % ((v_11 & -37LL) + 205LL) + (long long)(
                         ((double)v * 8262290789.51) / ((double)((int)result ^ 62145) + 757.)));
  while ((unsigned long)v >= p) {
    v_11 = (int)v_5 * -119;
    v_5 = (unsigned short)(- v_13);
    result = (short)((unsigned long long)(- p_9[0][0][1]) % ((unsigned long long)(
                                                             v_11 / 49LL) * (
                                                             (unsigned long long)-6.3813033592e+37 % 18446744073206666341ULL) + 786ULL));
    v = (unsigned int)(~ ((long long)p % -964998452LL ^ (long long)(- p_7)));
  }
  while_0_break: ;
  return result;
}


