#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 229035720
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p[1], double p_7, signed char p_9, short p_13,
              float p_15[4])
{
  unsigned long long v_23;
  unsigned long long v_21;
  unsigned long long v_19;
  long v_17;
  int v_11;
  long v_4;
  long v;
  long long result;
  v_23 = 18446744073709522034ULL;
  v_21 = 62117ULL;
  v_19 = 18446744073358137570ULL;
  v_17 = -203058923L;
  v = 49417L;
  v_4 = (long)(p_15[3] * ((float)(((unsigned long long)v_17 * v_19) * ~ v_21) / (
                          p_15[0] * (float)(v_23 / 18446744072787071590ULL) + 588.f)));
  v_11 = (int)(- (- (- ((float)p_13 + p_15[1]))));
  v = (long)(((unsigned long long)(- v_4 % (long)((int)p[0] + 410)) - 
              (unsigned long long)(v + (long)p_7) / ((unsigned long long)p_9 % 706363837ULL + 78ULL)) + (unsigned long long)(
             - (- v_11) + -12817));
  result = (long long)(- (1448637184.f * (float)(- (~ v))));
  return result;
}


