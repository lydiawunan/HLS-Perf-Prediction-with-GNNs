#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 427653964
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned int p_4, unsigned char p_7, short p_9)
{
  long long v;
  char result;
  v = (long long)p_9;
  result = (char)(-10283LL / (- ((long long)(4294926027UL / (unsigned long)(
                                             p_4 + 203U)) / (v / (long long)(
                                                             (int)p_7 + 894) + 888LL)) + 720LL));
  result = (char)(! (! ((4294904094UL | (unsigned long)result) + (unsigned long)(- p))));
  return result;
}


