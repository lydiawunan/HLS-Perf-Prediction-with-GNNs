#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 648627698
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, double p_5, unsigned char p_7)
{
  unsigned long v;
  unsigned char result;
  v = (unsigned long)(- (~ (unsigned char)166));
  result = (unsigned char)(- (p_5 / ((double)p_7 + 257.)));
  result = (unsigned char)(- ((v % (unsigned long)((int)p + 305)) / 3540433447UL) / (unsigned long)(
                           (int)(- result) + 450));
  result = result;
  return result;
}


