#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 285010116
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p[2][1][1], unsigned short p_5[3],
                long long p_7, int p_9, unsigned char p_15)
{
  unsigned short v_17;
  long long v_13;
  long v_11;
  long long v;
  signed char result;
  v_13 = (long long)p[1][0][0];
  v_11 = (long)p[0][0][0];
  v = 43690LL;
  result = (signed char)p[0][0][0];
  v_17 = (unsigned short)(! (~ v_13) * (p_7 + ! v));
  while (! (~ p[1][0][0] / ((unsigned long long)-632.23840332f + 566ULL)) == (unsigned long long)(
         ((v * (long long)p_5[0]) / (p_7 / 40LL + 781LL)) / (long long)(
         p_9 + 947))) {
    v_11 = (unsigned long)v_11 + 41713UL;
    result = (signed char)(! -56718LL);
    v_13 = (long long)(~ v_17);
    v = (long long)((((unsigned long long)v_13 - p[0][0][0]) << ((int)p_5[1] & 63)) / (
                    (unsigned long long)((double)p_15 * 9100780820.24) + 724ULL));
  }
  while_0_break: ;
  return result;
}


