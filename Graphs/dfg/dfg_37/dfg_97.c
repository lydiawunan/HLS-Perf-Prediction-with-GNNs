#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 428695373
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, float p_7, double p_11, signed char p_13)
{
  unsigned char v_15;
  unsigned long long v_9;
  signed char v_5;
  unsigned long v;
  unsigned long result;
  v_15 = (unsigned char)p_13;
  v_9 = (unsigned long long)p_13;
  v = (unsigned long)(! ((unsigned int)((int)p_13 >> ((302413922U ^ (unsigned int)v_15) & 7U)) / 4294940462U));
  result = (unsigned long)(~ (- ((long)p_11 * 51895708L)));
  v_5 = (signed char)(! p);
  result = (unsigned long)((unsigned long long)(32942UL / (~ v + 912UL) | (unsigned long)(
                                                (float)(p % (unsigned long)(
                                                        (int)v_5 + 234)) * p_7)) / (
                           ! (~ ((unsigned long long)result * v_9)) + 239ULL));
  return result;
}


