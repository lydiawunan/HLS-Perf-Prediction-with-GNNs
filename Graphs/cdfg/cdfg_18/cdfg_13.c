#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 794213441
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, char p_7, unsigned int p_9, char p_17,
                   unsigned long p_23[5][1][5])
{
  double v_21;
  unsigned char v_19;
  short v_15;
  signed char v_13;
  long v_11;
  long long v_4;
  char v;
  unsigned short result;
  v_21 = (double)p_9;
  v_19 = (unsigned char)p_17;
  v_15 = p;
  v_13 = (signed char)p;
  v = (char)41;
  if (- ((double)((int)v_15 % ((int)v_15 + 205)) * ((double)v_19 - v_21)) >= (double)(
      ((unsigned long)(~ v_15) + ~ p_23[3][0][2]) * (unsigned long)(! (- v)))) {
    v_4 = (long long)((int)v_15 + (int)((short)((float)(~ p_17) / 3.18579924974e+38f)));
    v_11 = (long)(~ (- (! v_13)));
    v = (char)(((v_4 | (long long)p) * 5230LL) % (long long)(((unsigned long)(
                                                              822312229L * (long)p_7) + 
                                                              (unsigned long)p_9 * (unsigned long)v_11) + 475UL));
  }
  else v = (char)(~ (p_9 - 9U) * ((unsigned int)(-22908 / ((int)p + 551)) / 38622U));
  result = (unsigned short)v;
  return result;
}


