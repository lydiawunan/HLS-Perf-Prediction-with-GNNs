#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 419672696
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, long long p_11, short p_17, long p_19[2][2])
{
  long v_21;
  unsigned long long v_15;
  unsigned char v_13;
  signed char v_8;
  unsigned char v_6;
  char v_4;
  int v;
  char result;
  v_21 = (long)p_17;
  v_15 = 24543ULL;
  v_8 = (signed char)-45;
  v = -49649;
  v_4 = (char)((! (~ v_15) >> (((long)p_17 % (p_19[1][0] + 485L) ^ (long)2308294131.18) & 63L)) + (unsigned long long)v_21);
  v_13 = (unsigned char)147;
  v_6 = (unsigned char)((long long)(! (- ((int)v_8 + (int)v_8))) | - (
                        -663765130LL * (long long)(~ v)));
  result = (char)((long long)(v + (230 - (int)v_4)) / ((((long long)(
                                                         (int)v_6 / (
                                                         (int)v_8 + 207)) - (
                                                         (long long)p + p_11)) ^ (long long)(! (! v_13))) + 912LL));
  return result;
}


