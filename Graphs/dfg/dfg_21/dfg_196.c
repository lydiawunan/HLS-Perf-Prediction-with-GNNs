#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 26993816
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, unsigned char p_13)
{
  unsigned short v_11;
  long long v_9;
  long v_7;
  int v_5;
  long v;
  double result;
  v_11 = (unsigned short)59617;
  v_9 = (long long)p;
  v = -447849126L;
  v_5 = (int)p_13;
  v_7 = -64479L;
  v_7 = (long)(18446744073709551544ULL * ((17032ULL % ((18446744073643267028ULL >> (
                                                        p & 63L)) + 722ULL)) / (unsigned long long)(
                                          39731LL % (((long long)v_7 - v_9) + 423LL) + 326LL)));
  result = (double)((0ULL - ((unsigned long long)(v % -86L) | 965928021ULL)) * (unsigned long long)(
                    (long long)((long)v_5 - v_7) + (v_9 * 889906711LL) * (long long)v_11));
  return result;
}


