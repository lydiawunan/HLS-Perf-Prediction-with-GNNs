#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 169310640
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, long long p_7, unsigned int p_9,
                   char p_11, unsigned char p_13[5])
{
  unsigned long v_15;
  long long v_5;
  unsigned int v;
  unsigned short result;
  v = 4294962208U;
  v_15 = (unsigned long)(~ (- ((496222651LL ^ (long long)p_13[1]) - (long long)(
                               -38332L * (long)p_11))));
  v_5 = (long long)(~ (! (~ ((unsigned long)p_13[2] - v_15))));
  result = (unsigned short)((((48794LL % (v_5 + 737LL)) * (p_7 * -3023779892LL)) * (long long)(
                             p_9 + 4294967174U)) / (long long)((int)p_11 + 435));
  result = (unsigned short)((18446744073100978838ULL - (unsigned long long)p) * (unsigned long long)(~ (- result)) - (unsigned long long)v);
  return result;
}


