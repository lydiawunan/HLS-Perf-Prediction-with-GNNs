#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1027636622
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, float p_7, unsigned short p_9, unsigned char p_11,
              float p_19)
{
  unsigned long long v_25;
  double v_23;
  unsigned short v_21;
  unsigned short v_17;
  long long v_15;
  unsigned short v_13;
  signed char v_4;
  short v;
  long long result;
  v_23 = (double)p_9;
  v_21 = (unsigned short)p;
  v_17 = (unsigned short)61003;
  v_15 = -656578655LL;
  v_13 = (unsigned short)36718;
  result = (long long)p_19;
  while (18446744073709515439ULL < (unsigned long long)((long long)p_9 % (
                                                        ((long long)(
                                                         31093 * (int)p_9) - ! result) + 215LL))) {
    v_25 = (int)((unsigned short)v_23) % 51062;
    v_4 = (signed char)((long long)(160 / ((int)(~ v_17) + 516)) * - (
                        result * v_15));
    v_23 = (double)((unsigned long long)v_4 - (v_25 + (unsigned long long)v_21) / (unsigned long long)(
                                              - p + 52));
    result = (long long)(- (- p_7) * (float)result);
  }
  while_0_break: ;
  if (~ ((long long)(~ v_13) % (- v_15 + 618LL)) >= (long long)((float)v_17 / (
                                                                (- p_19 + (float)(
                                                                 (int)v_21 << 15)) + 988.f))) {
    v = (short)(~ (! ((int)p_9 & (int)p_11)));
    v_4 = (signed char)p_7;
    result = (long long)(! ((int)(- v) % ((int)v_4 * p + 536)));
  }
  else result = (long long)(! (-598908246L ^ (long)(32915 % ((int)p_9 + 349))));
  return result;
}


