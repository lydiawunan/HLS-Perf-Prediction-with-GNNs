#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 790259935
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, long long p_9)
{
  unsigned long v_7;
  char v_4;
  double v;
  short result;
  v = (double)(unsigned short)37048;
  v_4 = (char)p_9;
  v_7 = (unsigned long)3033228508.59;
  result = (short)((unsigned long long)((v / 771.) * (double)(~ v_4) - (double)p) / (
                   - ((unsigned long long)(! v_7) + 19233ULL) + 78ULL));
  return result;
}


