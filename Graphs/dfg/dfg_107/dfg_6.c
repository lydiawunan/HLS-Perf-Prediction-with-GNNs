#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 745344558
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, signed char p_4, long p_6, long p_9, signed char p_13)
{
  long long v_21;
  unsigned long v_19;
  long long v_17;
  float v_15;
  double v_11;
  unsigned char v;
  double result;
  v_21 = (long long)p_13;
  v_19 = 3863986037UL;
  v_17 = (long long)p_9;
  v_15 = 9.83147313889e+37f;
  v_11 = 1.05042644241e+38;
  result = -668.159373664;
  v_11 = (double)(1063LL - ((v_17 / 31960LL) * (long long)v_19 ^ (long long)(
                            ~ p_9 % ((long)(v_11 * (double)v_21) + 831L))));
  v = (unsigned char)((int)((short)(- (- (result - (double)v_15)))) * 7586);
  result = (double)(((long)v % (((long)v - p_9) + 644L)) * (long)(- (- v_11)) - (long)p_13);
  result = (double)((4294912551UL & (unsigned long)((int)p - (int)((signed char)result) / (
                                                             (int)p_4 + 382))) / (unsigned long)(
                    ((long)-5.96054180006e+37f >> 11L) / (~ p_6 + 501L) + 793L));
  return result;
}


