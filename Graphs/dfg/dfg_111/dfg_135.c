#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 981067628
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, float p_11)
{
  unsigned long v_13;
  double v_9;
  float v_7;
  unsigned int v_5;
  unsigned long long v;
  unsigned int result;
  v_13 = (unsigned long)p;
  v_7 = p_11;
  v_9 = (double)((unsigned long long)(~ ((unsigned long)(-37041.f - p_11) - 
                                         v_13 * 3426749540UL)) - - ((unsigned long long)(
                                                                    p_11 / -2928938240.f) ^ 13978ULL));
  v_5 = (unsigned int)v_9;
  v = (unsigned long long)(! (! (! v_5) % ((unsigned int)(- ((float)v_5 * v_7)) + 445U)));
  result = (unsigned int)(v >> ((! (~ p) + 22ULL) & 63ULL));
  return result;
}


