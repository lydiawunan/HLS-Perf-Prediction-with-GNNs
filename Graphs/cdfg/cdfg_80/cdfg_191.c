#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 957905761
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, unsigned short p_4, unsigned int p_7,
                  short p_11[1][5], unsigned long long p_13)
{
  unsigned long long v_9;
  long v;
  unsigned char result;
  v_9 = 954287767ULL;
  result = (unsigned char)p_7;
  v = (long)(((unsigned long long)p_11[0][2] + 18446703111419880264ULL) & (
             p_13 - (p_13 | (unsigned long long)result)));
  if ((unsigned long long)(- ((unsigned long)(- v) / ((unsigned long)v / (unsigned long)(
                                                      p_7 + 1016U) + 624UL))) < - (
      957380962ULL / (v_9 + 380ULL))) result = (unsigned char)p;
  else result = (unsigned char)p_4;
  return result;
}


