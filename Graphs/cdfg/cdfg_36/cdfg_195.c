#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1031210341
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p)
{
  unsigned long v_11;
  unsigned long v_9;
  unsigned long long v_7;
  unsigned int v_4;
  unsigned long v;
  short result;
  v_11 = 4294902587UL;
  v_7 = 28661ULL;
  v_4 = 3404900809U;
  v = (unsigned long)p;
  result = (short)p;
  v_9 = 35711UL;
  while ((691810008L * (long)result) % ((long)((float)v + 7562122752.f) + 10L) + (long)(
         (float)v_4 * -605.622009277f + (float)((unsigned long long)p * v_7)) != (long)result) {
    v_9 = (long long)v_11 + (long long)v_9 / -1013888597LL;
    v_11 = (unsigned long)(0U / (unsigned int)((int)p + 472));
    result = (short)v_11;
    v_7 = 18446744073049175738ULL;
  }
  while_0_break: ;
  return result;
}


