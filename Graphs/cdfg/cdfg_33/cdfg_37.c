#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 916851739
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, float p_5, char p_11[3][3][3],
                  long long p_13, short p_15)
{
  double v_25;
  int v_23;
  long long v_21;
  float v_19;
  unsigned long long v_17;
  unsigned char v_9;
  float v_7;
  unsigned int v;
  unsigned long result;
  v_25 = (double)p_11[1][2][2];
  v_21 = 733051148LL;
  v_19 = 1.31456087269e+38f;
  v_17 = (unsigned long long)p_11[2][0][2];
  v_9 = (unsigned char)59;
  v = (unsigned int)p_5;
  result = (unsigned long)p_15;
  if (v_17 <= (unsigned long long)(-1 << ((~ v & 256U) & 7U))) {
    result = (unsigned long)v_19;
    v = (unsigned int)((unsigned long long)(- (-50637.f + p_5)) - ((unsigned long long)result / (
                                                                   v_17 + 247ULL) & (unsigned long long)p_11[2][1][1]));
    v_7 = (float)((double)p_11[1][1][2] - (double)p_5 * -5901663363.09);
  }
  else {
    v_23 = (int)v_21;
    v = (unsigned int)((unsigned long long)(((long long)p_15 - v_21) % (long long)(
                                            ((unsigned long)v_23 + p) + 858UL)) / (
                       ((unsigned long long)v_25 + 18021ULL) + 254ULL));
    v_7 = (float)((4294967281UL ^ result % (unsigned long)((int)p_11[0][2][2] + 895)) + (unsigned long)(~ (
                  (int)p_15 + 17734)));
  }
  while (-3.31909959686e+38 * ((double)(p - (unsigned long)v) - 2.69346287414e+38) <= (double)(- (
         - p_5 - (float)(49439UL + result)))) {
    v = (int)v_9 * ((int)((signed char)v_7) * 74);
    v_9 = (unsigned char)p_15;
    v_7 = (float)(((unsigned long)((int)p_15 - (int)p_15) - p) - (unsigned long)p_11[1][1][1]);
    result = (unsigned long)((long long)(- ((unsigned long)p_11[1][2][1] + p)) * (
                             ! p_13 % (- p_13 + 637LL)));
  }
  while_0_break: ;
  return result;
}


