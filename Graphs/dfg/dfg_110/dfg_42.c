#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 659677778
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, int p_5, float p_9, unsigned short p_11)
{
  unsigned short v_13;
  int v_7;
  unsigned short v;
  char result;
  v_7 = -25922;
  v_13 = (unsigned short)62143;
  v = (unsigned short)(4294909227ULL - ! (~ ((unsigned long long)v_13 - 18446744073313707178ULL)));
  result = (char)(- ((unsigned long long)(((unsigned long)v + p) - (unsigned long)(
                                          p_5 + v_7)) + (unsigned long long)(
                                                        (unsigned long)p_9 - p) % (
                                                        18446744073709491767ULL / (unsigned long long)(
                                                        (int)p_11 + 865) + 542ULL)));
  result = - (~ result);
  return result;
}


