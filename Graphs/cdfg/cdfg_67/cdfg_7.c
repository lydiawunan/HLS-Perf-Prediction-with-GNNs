#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 684121239
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, unsigned int p_5, unsigned int p_11)
{
  long long v_13;
  float v_9;
  long v_7;
  unsigned short v;
  unsigned int result;
  v_13 = 494316723LL;
  if (27955LL > (v_13 | (long long)p)) {
    v_9 = (float)583.090149708;
    v_7 = (long)v_9;
    v = (unsigned short)(- (-6.42614986552e+37f + (float)((unsigned long)p_5 - (unsigned long)v_7)));
  }
  else v = (unsigned short)(p_5 / (~ (~ p_11) + 274U));
  result = - ((unsigned int)(p + (int)v) % (- p_5 + 557U));
  return result;
}


