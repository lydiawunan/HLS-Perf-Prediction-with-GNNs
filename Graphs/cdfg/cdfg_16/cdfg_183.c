#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 784559630
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p[3][1], unsigned long p_13, float p_15, unsigned long p_17,
        unsigned long p_19[4][2])
{
  long long v_21;
  unsigned long v_11;
  unsigned long v_9;
  short v_7;
  long long v_5;
  unsigned int v;
  int result;
  v_21 = (long long)p[2][0];
  v_11 = 4209691361UL;
  v_9 = 46884UL;
  v_7 = (short)-16393;
  v_5 = 1027751953LL;
  v = 245813376U;
  result = (int)p_15;
  if ((unsigned long)(p_15 / ((float)(! p_13 * (unsigned long)(p_15 * (float)v_5)) + 686.f)) != 
      (p_17 + p_19[1][1] * v_9) - p_17) {
    v = (unsigned int)((float)(5710U % (((unsigned int)result - v) + 197U)) - 
                       (float)p_13 / (p_15 + 333.f));
    v_5 = (long long)(253UL * ! ((unsigned long)p[0][0] % (v_9 + 594UL)));
    result = (int)v_11;
  }
  else {
    v_7 = (short)((long long)(~ (59681UL % (p_19[1][0] + 683UL))) - ~ (
                  v_21 - 4213145061LL));
    v = 4294942089U;
    result = (int)(((unsigned long)p_15 * p_17) / (((unsigned long)v + 178UL) + 746UL));
  }
  while (-1LL == - ((long long)(v + (unsigned int)p[1][0]) - ~ v_5)) {
    v_9 = (int)v_7 / -44;
    v_7 = (short)((v_5 ^ 23322LL) + (long long)v_9);
    v = (unsigned int)((long long)((int)(! p[1][0]) - ! result) % 668701811LL);
    v_5 = (long long)(-(unsigned char)95);
  }
  while_0_break: ;
  return result;
}


