#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 842629599
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, float p_4, signed char p_9[1][4][4], double p_17)
{
  short v_15;
  unsigned int v_13;
  long long v_11;
  char v_7;
  short v;
  unsigned short result;
  v_15 = (short)p_4;
  v_13 = (unsigned int)p_4;
  v_11 = (long long)p_9[0][1][3];
  v_7 = (char)p;
  v = (short)p_4;
  result = (unsigned short)13201;
  while ((57973 * (22229 * (int)((short)p_4))) * (((int)v % ((int)v_7 + 600)) * (
                                                  130 * (int)v_7)) <= (int)(- (~ p_9[0][1][0]))) {
    v_11 = v_13 + (unsigned int)((double)v_11 + 845692940.474);
    v_13 = (unsigned int)((((int)v_7 - (int)p_9[0][2][2]) * (int)(- v_15)) / (
                          (-56 - (32 + (int)v_15)) + 790));
    result = (unsigned short)((float)p_9[0][2][0] * p_4);
    v = (short)p_17;
  }
  while_0_break: ;
  result = (unsigned short)(4027735149UL % (unsigned long)((int)p + 537) ^ (unsigned long)result);
  return result;
}


