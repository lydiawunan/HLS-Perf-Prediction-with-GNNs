#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1017251884
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, double p_7, long long p_9, short p_13[2][2][4],
          long long p_15)
{
  long v_17;
  unsigned char v_11;
  signed char v_5;
  unsigned int v;
  short result;
  v_17 = 59693L;
  if ((long long)(42587U << (! p_15 & 31LL)) * ((long long)(~ v_17) - -37963LL) >= (long long)(- (
      1.36578501241e+38 - ((double)p - p_7)))) {
    v_5 = (signed char)p_9;
    v = (unsigned int)((int)((unsigned short)(- (- p_7))) + 54706);
  }
  else {
    v_11 = (unsigned char)(~ (char)-117);
    v_5 = (signed char)((int)v_11 / ((int)p_13[0][1][3] + 325));
    v = (unsigned int)((int)v_5 - -65);
  }
  result = (short)(((unsigned int)p - 90U * v) % (unsigned int)(~ (197 & (int)v_5) + 459));
  return result;
}


