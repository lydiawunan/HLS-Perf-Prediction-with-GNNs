#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 525659221
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, signed char p_4, int p_7, unsigned int p_9)
{
  double v;
  unsigned char result;
  v = (double)(1199U / (p_9 + 165U));
  result = (unsigned char)((int)((double)(! p | (unsigned int)(! p_4)) * (
                                 (double)((int)p_4 + 5868) + 971636717. / (
                                                             v + 921.))) % (
                           p_7 + 135));
  return result;
}


