#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 536756772
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, signed char p_5, signed char p_7,
                       unsigned int p_13)
{
  unsigned char v_21;
  long long v_19;
  unsigned long long v_17;
  long long v_15;
  double v_11;
  char v_9;
  long v;
  unsigned long long result;
  v_21 = (unsigned char)p_13;
  v_19 = -670455922LL;
  v_17 = (unsigned long long)p;
  v_11 = (double)p;
  v = (long)p;
  if ((unsigned long long)(~ (~ (! v_21))) < (unsigned long long)((unsigned int)(~ p_5) + p_13) / (
                                             (unsigned long long)(- v_11) / (
                                             v_17 + 517ULL) + 590ULL)) {
    result = (unsigned long long)2.77973160757e+38;
    v = (long)(((result | result) / (unsigned long long)(p + 145LL)) * (unsigned long long)p);
  }
  else {
    v_15 = (long long)((((unsigned long long)p_13 / (v_17 + 847ULL)) / (unsigned long long)(
                        (v_19 + 94LL) + 959LL)) * (unsigned long long)(~ (
                       p + 90525697LL)));
    v_9 = (char)((long long)(- ((int)((unsigned char)v_11) % 191)) - 
                 (long long)p_13 * (-45LL + v_15));
    result = (unsigned long long)(((int)p_5 % ((int)p_7 + 253) - -283) - (int)v_9);
  }
  result = - (- (result / (unsigned long long)(v + 115L)));
  return result;
}


