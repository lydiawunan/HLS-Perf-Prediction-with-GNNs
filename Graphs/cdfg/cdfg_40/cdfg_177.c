#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 818609998
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, unsigned long p_5, float p_7)
{
  long long v_9;
  unsigned long long v;
  short result;
  v_9 = -40467LL;
  if (- ((double)p_7 + 6964074050.) + -32022. <= (double)(! v_9)) {
    result = (short)p_5;
    v = (unsigned long long)((int)((unsigned short)(-2.54814684893e+38 / (
                                                    (double)result + 727.))) % 37712) / (
        p + 468ULL);
  }
  else v = (unsigned long long)p_5;
  result = (short)(~ (! (~ v)));
  return result;
}


