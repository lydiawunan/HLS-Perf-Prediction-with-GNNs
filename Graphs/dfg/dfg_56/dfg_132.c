#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 187064689
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, short p_7)
{
  long v_17;
  signed char v_15;
  double v_13;
  char v_11;
  char v_9;
  unsigned int v_5;
  unsigned long long v;
  signed char result;
  v_17 = (long)p;
  v_15 = (signed char)72;
  v_13 = (double)p_7;
  v_11 = (char)p;
  v_9 = (char)-26;
  v_15 = (signed char)(v_17 & (long)v_15);
  v_5 = ! ((unsigned int)(2373102206.58 - v_13) + (unsigned int)((int)((signed char)-843.256164551f) / (
                                                                 (int)v_15 + 460)) / (
                                                  ~ p + 557U));
  v = (unsigned long long)(! ((((int)p_7 % ((int)v_9 + 98)) % 50689) / (
                              ! ((int)p_7 / ((int)v_11 + 287)) + 108)));
  result = (signed char)(- ((v / (unsigned long long)(p + 46U) & (unsigned long long)(
                             4266185937U / (v_5 + 756U))) - 125ULL));
  return result;
}


