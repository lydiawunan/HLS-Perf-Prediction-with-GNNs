#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 554988673
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned long long p_7[5],
              unsigned char p_13[3][3][5], unsigned short p_17,
              short p_19[1][3][3])
{
  unsigned long v_21;
  unsigned short v_15;
  int v_11;
  unsigned short v_9;
  int v_5;
  unsigned int v;
  long long result;
  v_21 = 454261520UL;
  v_15 = (unsigned short)p_19[0][2][2];
  v_5 = 223876434;
  v = 1036620586U;
  result = 18368LL;
  if ((unsigned long long)p_17 > (((unsigned long long)result & p_7[2]) * (unsigned long long)(
                                  (int)p_19[0][0][1] - (int)p_19[0][1][0])) % (unsigned long long)(
                                 v_21 + 378UL)) {
    v_9 = (unsigned short)59;
    v = (unsigned int)(~ (v_5 << ((int)v_9 & 31)) - 18389);
    v_5 = (int)p_7[2];
  }
  else {
    v_9 = v_15;
    v_11 = (int)v;
    v_5 = (int)((4210989938U | (unsigned int)((int)v_9 / (v_11 + 152))) * (unsigned int)(~ p_13[1][0][2]));
  }
  result = (long long)((unsigned long)(! (~ v)) * ((p & (unsigned long)v_5) * 4294941076UL));
  return result;
}


