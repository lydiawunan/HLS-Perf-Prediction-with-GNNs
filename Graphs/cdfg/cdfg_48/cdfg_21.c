#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 799710255
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p[4][3], unsigned long long p_5[1],
                   unsigned long long p_7, unsigned short p_9, float p_13)
{
  double v_11;
  unsigned long v;
  unsigned short result;
  v_11 = 584035415.805;
  v = 1522UL;
  v = (unsigned long)(- ((unsigned long long)(p_13 - (float)v) << (p_5[0] & 63ULL)));
  if ((double)((unsigned long)p_9 * ((unsigned long)-25049336.8444 * (
                                     v % 63758UL))) == v_11) {
    v = (unsigned long)((unsigned long long)(- p[1][1]) * (34395ULL * p_5[0]));
    result = (unsigned short)(~ v);
  }
  else result = (unsigned short)(1ULL % (p_7 + 914ULL));
  return result;
}


