#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1065514421
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, int p_4, char p_6, signed char p_9,
                 unsigned short p_11)
{
  float v_15;
  unsigned long v_13;
  unsigned long v;
  unsigned int result;
  v_15 = -8661107712.f;
  v_13 = 39216UL;
  v = (unsigned long)((double)(~ v_13) - (double)v_15 / 7638580416.52);
  if ((unsigned long long)p_6 <= (unsigned long long)(v + (unsigned long)(
                                                      (int)p_9 + (int)p_11)) / (
                                 (unsigned long long)p_4 % 41244ULL + 329ULL)) 
    result = (unsigned int)p;
  else result = (unsigned int)p_4;
  return result;
}


