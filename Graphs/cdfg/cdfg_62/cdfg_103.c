#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 394673730
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, unsigned int p_5, unsigned long p_7,
        float p_9[5][4][2], unsigned short p_13[1][5][5])
{
  int v_17;
  long long v_15;
  unsigned long long v_11;
  int v;
  int result;
  v_17 = 4553;
  v_15 = (long long)p_13[0][3][4];
  v_11 = (unsigned long long)p_7;
  result = (int)(26036UL % (unsigned long)(! p_5 + 574U) - (unsigned long)(
                 (int)9344447488.f * v_17));
  if (0 != ((long long)result / (671466244LL / (v_15 + 434LL) + 74LL)) * (long long)(
           -1025345984 - v_17)) {
    result = (int)v_11;
    v = (int)(((unsigned long)(p_5 << (p_7 & 31UL)) - ((unsigned long)result - p)) / (unsigned long)(
              ! result * (int)(- p_9[1][2][1]) + 472));
    result = (int)((unsigned long)v + (unsigned long)(v % (v + 788)) * p);
  }
  else result = (int)(! p_13[0][4][1]);
  return result;
}


