#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 233466638
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, long p_7, signed char p_9,
              signed char p_11[5][4])
{
  long long v_4;
  long long v;
  long long result;
  v = (long long)p_9;
  v_4 = (long long)(! (~ (~ (26083 * (int)p_9))));
  v_4 = ! v / (long long)(((long)((double)v_4 * 5498167787.8) + (35305L + p_7)) + 457L) + (long long)(
        ((int)(- p_9) * (-9569 << 1UL)) * (int)p_11[1][2]);
  result = (long long)((int)(! p) + -20170);
  result = -1LL + - (v % (v_4 + 919LL) & -518LL);
  return result;
}


