#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1064549358
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, int p_9[2][4], unsigned int p_11,
                   unsigned short p_15)
{
  signed char v_13;
  unsigned char v_7;
  unsigned int v_5;
  long long v;
  unsigned short result;
  v_7 = (unsigned char)157;
  v_13 = (signed char)((int)p_15 | 219);
  v_5 = ! ((unsigned int)p_9[1][3] + (! p_11 + (unsigned int)((int)((signed char)1.06706760904e+38f) - (int)v_13)));
  v = (long long)((float)((unsigned int)v_7 * ~ (! v_5)) / 2.67232895691e+38f);
  result = (unsigned short)((long long)p % (- (! v << ((v + (long long)v_5) & 63LL)) + 687LL));
  return result;
}


