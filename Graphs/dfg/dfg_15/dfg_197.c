#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 871158870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, unsigned long p_9, unsigned long p_11,
        unsigned char p_13[1][5], int p_15[3])
{
  unsigned long long v_6;
  int v_4;
  double v;
  int result;
  v_4 = p_15[2];
  v = 8045490702.17;
  v_6 = (unsigned long long)((((p_11 + (unsigned long)p_13[0][2]) * (unsigned long)p_15[0]) * - p_9) % (
                             - ((unsigned long)((unsigned int)p_15[0] % 9892U) / (
                                (p_11 + (unsigned long)p) + 71UL)) + 771UL));
  v = (double)(((986492317UL - (unsigned long)p % (p_9 + 73UL)) + (unsigned long)v) - (unsigned long)(
               (- v / (-11884. / (v + 9.) + 720.)) * v));
  v = (double)((unsigned long long)((double)((-4354543616.f + (float)v_4) / 147.f) + - (- v)) + ! v_6);
  result = (int)(- v);
  return result;
}


