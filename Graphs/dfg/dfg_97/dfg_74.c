#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071360106
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, char p_5)
{
  int v_17;
  long v_15;
  short v_13;
  double v_11;
  unsigned long long v_9;
  long v_7;
  signed char v;
  signed char result;
  v_17 = -12855;
  v_15 = (long)p_5;
  v_13 = (short)28596;
  v_11 = -7881391213.34;
  v_9 = 18446744073696950477ULL;
  v_7 = (long)((-8.29054275247e+37 + (double)p_5) * (v_11 * (double)v_13)) / (
        v_15 + 1024L) - (long)(v_17 % 1536011);
  result = (signed char)((unsigned long long)v_7 / (v_9 + 572ULL));
  v = (signed char)(- ((int)result % ((int)p_5 + 479)));
  result = (signed char)(! (~ (22405 * (int)v - (int)(! p))));
  return result;
}


