#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 939690135
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, signed char p_7[1][2], unsigned char p_9,
                  signed char p_11)
{
  long long v_5;
  double v;
  unsigned long result;
  v_5 = (long long)(! (~ (- (- p_11))));
  v = (double)(164805503LL - (- v_5 / (long long)(- p + 868UL)) * (long long)(
                             ((int)p_7[0][0] * (int)((signed char)872.158996582f)) / (
                             (int)p_9 + 418)));
  result = ~ (! (p * (unsigned long)v)) + 319221062UL;
  return result;
}


