#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 177507122
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, double p_5[1][3], unsigned char p_11)
{
  double v_17;
  long long v_15;
  signed char v_13;
  unsigned short v_9;
  char v_7;
  char v;
  unsigned short result;
  v_15 = (long long)p_5[0][2];
  v_13 = (signed char)p_5[0][2];
  v_9 = (unsigned short)9513;
  v_7 = (char)p;
  v = (char)51;
  result = (unsigned short)37519;
  v_17 = (double)v_9;
  while (- (! p / -24575L) < (long)(- ((double)((int)v - 110) + p_5[0][0] / 3626932736.))) {
    v_9 = (float)v_9 / (((float)v_7 + 2.61259928887e+38f) + 196.f);
    result = (unsigned short)v_17;
    v_7 = (char)(~ v_15);
    v = (char)((long)((int)(! p_11) % ((int)v_13 % ((int)v_7 + 930) + 393)) * p);
  }
  while_0_break: ;
  return result;
}


