#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 912508818
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, unsigned long long p_7,
          signed char p_9[2][1], unsigned long long p_11, long p_13)
{
  long long v_21;
  double v_19;
  unsigned int v_17;
  short v_15;
  signed char v_4;
  double v;
  short result;
  v_21 = -986065429LL;
  v_19 = -671.721259698;
  v_17 = (unsigned int)p;
  v_15 = (short)-19639;
  v_4 = (signed char)p;
  v = (double)p_9[1][0];
  result = (short)14234;
  while ((long)((double)((unsigned int)v_15 + (unsigned int)p_9[1][0] * v_17) + 
                (double)((long)v_19 % (p_13 + 982L)) * v) == (-36642L | (long)result)) {
    v_4 = (signed char)(((int)(~ p_9[1][0]) & (int)((signed char)(v * 1.84467440728e+19))) | 75);
    v_17 = (unsigned int)((v * (double)(v_21 & (long long)v_15)) * (double)(! p));
    result = (short)((unsigned int)p_9[0][0] & 44482U);
  }
  while_0_break: ;
  result = (short)((32315U | (unsigned int)((int)((signed char)v) % (
                                            (int)v_4 + 895))) | 24844U);
  return result;
}


