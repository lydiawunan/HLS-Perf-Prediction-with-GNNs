#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 581406267
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, signed char p_5, double p_13, long p_15[1][1][4])
{
  char v_11;
  char v_9;
  char v_7;
  double v;
  long result;
  v_11 = (char)-68;
  v_9 = (char)-18;
  v = -3.26965909347e+38;
  if ((double)(~ (p * (long)v_11) - p_15[0][0][0]) <= -2.11278890678e+38 / (
                                                      (double)v_11 + 1003.)) {
    v = (double)((long)(39028 & (int)((unsigned short)v)) * ! p) / 1.84467440737e+19;
    v_7 = (char)(528270343UL / (unsigned long)((((long)v_9 - 141822358L) + (long)v) + 731L));
    v = (double)((p + (long)(39 - (int)p_5)) + (long)(6743 * (-17 % (
                                                              (int)v_7 + 242))));
  }
  else {
    v_11 = (char)v;
    result = (long)(! 0);
    v = (double)result;
  }
  result = (long)v;
  return result;
}


