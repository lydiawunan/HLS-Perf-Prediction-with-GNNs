#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 390517941
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned long long p_7[2][3],
                 unsigned short p_11)
{
  long v_9;
  double v_4;
  float v;
  unsigned int result;
  v = (float)p;
  result = 4294943443U;
  if ((long long)result <= -1LL) {
    result = 25277U;
    v = (float)(! (~ result + 49089U));
  }
  else {
    v_9 = (long)(0 % (long long)((int)(~ p_11) + 768));
    v_4 = (double)((float)p_7[1][0] * - ((float)v_9 / (v + 290.f)));
    v = (float)((int)(-128. - v_4) * ((int)p + 2051));
  }
  result = (unsigned int)v;
  return result;
}


