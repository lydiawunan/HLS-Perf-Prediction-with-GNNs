#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 610421342
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p[1][1])
{
  char v_11;
  unsigned long long v_9;
  signed char v_7;
  unsigned int v_5;
  short v;
  unsigned long result;
  v_11 = (char)p[0][0];
  v_5 = 3958612578U;
  v = (short)p[0][0];
  result = (unsigned long)p[0][0];
  v_9 = (unsigned long long)(~ (! ((unsigned long)(4276426194U % (unsigned int)(
                                                   (int)v + 923)) % (
                                   - result + 560UL))));
  v_7 = (signed char)v_11;
  v = (short)((unsigned long)p[0][0] % (((unsigned long)(~ v_5) + (unsigned long)v_7 * 138534951UL) * (unsigned long)(
                                        (v_5 | 3355220835U) + (unsigned int)(
                                        (float)v_9 - 9151868928.f)) + 217UL));
  result = (unsigned long)v;
  return result;
}


