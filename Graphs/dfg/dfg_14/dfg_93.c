#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 3349947
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, signed char p_9, float p_11,
                 unsigned short p_13)
{
  unsigned short v_7;
  unsigned int v_5;
  int v;
  unsigned int result;
  result = 28985U;
  v_5 = (unsigned int)p_13;
  v_7 = (unsigned short)(~ (~ (-3522355605UL)));
  v = (int)((unsigned long long)p_9 * (18446744073277054173ULL % (unsigned long long)(
                                       ((unsigned int)p_11 + p) + 381U)) - (unsigned long long)result);
  result = (((unsigned int)v - p) - (unsigned int)(228 | (int)((unsigned char)582.273986816f))) / (
           ! (! v_5) + 289U) >> ((int)v_7 & 31);
  return result;
}


