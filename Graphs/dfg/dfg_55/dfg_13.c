#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 699497171
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, short p_5, long long p_7)
{
  long v_15;
  double v_13;
  long v_11;
  long long v_9;
  double v;
  char result;
  v_15 = 708318391L;
  v_13 = 8.86128506569e+37;
  v_11 = (long)p_7;
  v_9 = (long long)((double)(~ (252L + v_11)) - (double)((46985UL % (
                                                          (unsigned long)v_13 + 669UL)) / (unsigned long)(
                                                         (v_15 ^ -122L) + 556L)) / -936912603.096);
  v = 6.29736023741e+37;
  result = (char)(v_9 / -1LL);
  result = (char)((long long)((int)p % ((int)((unsigned char)((double)result - 
                                                              v * (double)p_5)) + 815)) / (
                  ! (p_7 / (long long)((int)result + 616) + ~ v_9) + 204LL));
  return result;
}


