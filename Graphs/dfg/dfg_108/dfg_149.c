#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 182358338
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, unsigned char p_7[1][3])
{
  double v_11;
  unsigned long long v_9;
  float v_5;
  unsigned int v;
  unsigned int result;
  v_11 = 5081623521.27;
  v_9 = 219ULL % (! (18446744073709498971ULL * (unsigned long long)p + (unsigned long long)(- v_11)) + 282ULL);
  v = (unsigned int)(~ (~ v_9));
  v_5 = (float)(~ ((unsigned long)p_7[0][0] - 4247425671UL));
  result = (~ (v * 46206U) - (unsigned int)p) / ((unsigned int)v_5 + 125U);
  return result;
}


