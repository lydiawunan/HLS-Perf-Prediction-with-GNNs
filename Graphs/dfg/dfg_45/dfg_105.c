#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 373087579
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned short p_7, double p_9, unsigned char p_13,
                unsigned long long p_15[4][3])
{
  int v_19;
  double v_17;
  double v_11;
  unsigned long v_4;
  unsigned char v;
  signed char result;
  v_19 = (int)p_13;
  v_17 = p_9;
  v_11 = 906.719716893;
  result = (signed char)v_19;
  v_4 = (unsigned long)((((double)((int)p_7 + (int)result) + -48432. * p_9) - (double)(
                         (unsigned long long)(v_11 - (double)p_13) - 
                         (unsigned long long)v_11 / (p_15[2][1] + 611ULL))) / (
                        - (v_17 / -266659848.) + 268.));
  v = (unsigned char)p;
  result = (signed char)((unsigned long long)(4294967255UL - ((unsigned long)v & 
                                                              v_4 % 4294967174UL)) / (
                         4294944279ULL * ((unsigned long long)v * 15ULL) + 187ULL));
  return result;
}


