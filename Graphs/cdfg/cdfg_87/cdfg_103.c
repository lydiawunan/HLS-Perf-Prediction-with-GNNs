#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 314262983
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, long p_4, unsigned long long p_7, long p_11,
                double p_13[5][1][5])
{
  unsigned long long v_9;
  double v;
  signed char result;
  v_9 = 18446744073310406816ULL;
  result = (signed char)80;
  v = (double)((unsigned long long)(! (! p)) + v_9 * 11896ULL);
  while (- ((long long)result * p) / (long long)((int)((signed char)(
                                                 -472.258056641f + (float)p_4)) % 25 + 661) <= (long long)result) {
    v_9 = (int)v - 216735678;
    v_9 = (unsigned long long)((double)(52321LL * (295920030LL * p)) * (
                               (double)(v_9 * (unsigned long long)p_11) / (
                               p_13[3][0][1] * p_13[2][0][0] + 895.)));
    v = (double)(18446744073198297862ULL % ((18446744073709506758ULL * v_9 + (unsigned long long)-3.19902146829e+38) + 725ULL));
    result = (signed char)(! (p_7 * (unsigned long long)(-28678LL / (long long)(
                                                         p_4 + 248L))));
  }
  while_0_break: ;
  return result;
}


