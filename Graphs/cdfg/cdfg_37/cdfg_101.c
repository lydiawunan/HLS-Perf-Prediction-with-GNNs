#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 575940562
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, double p_11, unsigned long long p_17[5][2], signed char p_19,
         unsigned long p_21)
{
  signed char v_15;
  char v_13;
  int v_9;
  int v_7;
  signed char v_5;
  unsigned long v;
  long result;
  v_15 = (signed char)127;
  v_13 = (char)-38;
  v_9 = -21135;
  v_5 = (signed char)p_17[0][1];
  v = (unsigned long)p_17[4][0];
  result = (long)p;
  if (- (p_17[1][0] % (unsigned long long)(p_21 + 331UL)) - (unsigned long long)(
      ~ result - (long)p) > (unsigned long long)(~ (((int)p_19 + (int)v_15) + (int)v_15))) {
    v_7 = (int)((unsigned long long)((unsigned long)p ^ v) * ((unsigned long long)v_15 ^ p_17[2][1]) | (unsigned long long)p_11);
    result = (long)(12120UL & (unsigned long)(- v_13) * (v - (unsigned long)v_7));
    v_9 = -112017008;
  }
  else {
    v = (unsigned long)(0ULL % (((unsigned long long)(32035UL / (unsigned long)(
                                                      (int)p_19 + 1003)) + (
                                 p_17[1][1] >> (v_9 & 63))) + 627ULL));
    v_7 = (int)((unsigned long long)((unsigned long)(p - (int)p_19) * p_21) | 
                ((unsigned long long)p / (p_17[2][1] + 498ULL)) / (unsigned long long)(
                p_21 + 706UL));
    v_5 = (signed char)(- (0. / (p_11 / (p_11 + 97.) + 808.)));
  }
  while ((unsigned long)p == - (! (! v))) {
    result = (long)v_9 - ((long)v_7 + ((long)v_5 - 517091320L));
    v_5 = (signed char)(- p_11);
    v = (unsigned long)result % (59011UL / (unsigned long)(p + 920) + 502UL) | 5214UL;
    v = ! ((unsigned long)p / 4294931708UL) - v;
  }
  while_0_break: ;
  return result;
}


