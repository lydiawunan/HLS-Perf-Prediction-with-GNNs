#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 584938405
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, int p_5)
{
  unsigned long long v_13;
  signed char v_11;
  unsigned long v_9;
  unsigned int v_7;
  unsigned short v;
  float result;
  v_13 = 18446744073709518699ULL;
  v_11 = (signed char)p;
  v_9 = 3977977568UL;
  v_7 = ~ (4294928664U % (unsigned int)((int)(~ v_11) + 256) << (- (v_13 & (unsigned long long)p) & 31ULL));
  v = (unsigned short)(27384UL % ((unsigned long)(v_7 * (unsigned int)p_5 - 5536U) * v_9 + 647UL));
  result = (float)(~ (- ((int)((unsigned short)p) * (int)v) + p_5));
  result = result;
  return result;
}


