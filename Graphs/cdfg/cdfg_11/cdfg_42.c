#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 603586308
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, int p_5, unsigned long p_7, float p_9, short p_19)
{
  unsigned char v_21;
  unsigned long v_17;
  unsigned int v_15;
  short v_13;
  long v_11;
  double v;
  char result;
  v_21 = (unsigned char)p;
  v_17 = (unsigned long)p_19;
  v_15 = 990900985U;
  v_11 = -49593L;
  v = (double)p_5;
  result = (char)-94;
  while (p_9 < (float)((unsigned long)(! ((unsigned int)result - 4597U)) + (unsigned long)(
                       ! v_11 - 83215104L))) {
    v_13 = v_17 - (unsigned long)(v_15 % 4294967213U);
    v = (double)((unsigned long)((unsigned int)v_21 | 906975847U) ^ (unsigned long)(! (~ v_11)));
    v_11 = (long)((long long)v_13 * ((long long)(95 % ((int)p_19 + 114)) + ~ p));
    result = (char)(! (-3887901274UL));
  }
  while_0_break: ;
  result = (char)((unsigned long)(- v - (double)(p - (long long)p_5)) * ! (! p_7));
  return result;
}


