#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 422361728
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p)
{
  long long v_11;
  double v_9;
  unsigned char v_7;
  unsigned long v_5;
  signed char v;
  unsigned long long result;
  v_11 = p;
  v_9 = (double)p;
  v_7 = (unsigned char)p;
  v = (signed char)p;
  result = 18446744072720308090ULL;
  v_5 = (unsigned long)((unsigned long long)1.09694795911e+38f * ((unsigned long long)p - 18446744072704491210ULL) | (unsigned long long)(
                        (long long)v | 45295LL));
  while (((long long)v - (315148223LL + p)) * (long long)(v_5 | (unsigned long)(- v_7)) > (long long)1.19760900722e+38) {
    result = v_11 % 3580124506LL;
    v_7 = v_7;
    v_11 = (long long)v_9;
    v = (signed char)((long long)1.84467440737e+19 % (v_11 / 20LL + 375LL));
  }
  while_0_break: ;
  return result;
}


