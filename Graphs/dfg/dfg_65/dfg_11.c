#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1013008444
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, signed char p_7, double p_9,
                  signed char p_13, int p_15)
{
  double v_17;
  double v_11;
  double v_5;
  signed char v;
  unsigned long result;
  v_17 = 6135279544.64;
  result = 76458306UL;
  v_11 = - (- (- (- v_17)));
  v_5 = (double)(! ((unsigned long)(p_15 + (-10957 + (int)v_11)) + ! result / 4294945386UL));
  v = (signed char)((p * 18446744073709507234ULL - ((unsigned long long)result + p)) % (
                    (unsigned long long)(- (v_5 - (double)p)) + 751ULL) + (unsigned long long)(
                    ((int)p_7 ^ ((int)p_9 + -852638557)) % (~ ((int)((signed char)v_11) / (
                                                               (int)p_13 + 891)) + 39)));
  result = (unsigned long)(- v) % (result + 927UL);
  return result;
}


