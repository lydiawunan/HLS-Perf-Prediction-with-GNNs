#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1000395227
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, float p_5, unsigned long p_7)
{
  long long v_13;
  unsigned long v_11;
  long v_9;
  long v;
  short result;
  v_13 = 285130030LL;
  v_11 = 494225311UL;
  v_9 = (long)p;
  v = (long)p_5;
  while ((unsigned long)(! v) <= - v_11) {
    v_9 = (long)p;
    result = (short)(~ (! v_13) & (long long)(~ p_7));
    v = 23596L / ((v * -26907L - (long)((double)result / 1.28809193447e+38)) + 262L);
  }
  while_0_break: ;
  if ((45UL + ~ p_7) % 55094UL != (unsigned long)(~ (! (515L ^ v_9)))) {
    v = -1892002817L;
    result = (short)(-475L - ((v >> (p & 31ULL)) - ((long)p_5 + 117362774L)));
  }
  else result = (short)(-4163986544U);
  return result;
}


