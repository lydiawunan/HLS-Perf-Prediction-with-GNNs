#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 545365142
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, long p_13, int p_17[5][2], int p_19)
{
  unsigned int v_15;
  short v_10;
  unsigned int v_8;
  float v_6;
  long v_4;
  unsigned short v;
  long long result;
  v_15 = 4245279067U;
  v_10 = (short)p_19;
  v_8 = 44726U;
  v_6 = (float)p_17[4][1];
  v_4 = -2983L;
  v = (unsigned short)p_13;
  result = 898755215LL;
  if ((unsigned long)p_13 <= (unsigned long)v_15) {
    v_4 = (long)((float)(52732LL + (result + (long long)v_4)) - - (p - (float)p_13));
    v = (unsigned short)(- v_10);
    v_6 = (float)(v_8 + 18497U);
  }
  else {
    v_15 = (unsigned int)(- ((long)p ^ p_13 * (long)p_19));
    v_8 = (unsigned int)((long long)(v_15 % (unsigned int)(~ p_17[2][0] + 643)) % (
                         (long long)(4294961593UL + (unsigned long)v) * -8243LL + 468LL));
    v_8 = (unsigned int)(((unsigned long)((unsigned int)p + v_8) * (unsigned long)(
                          (long)p >> (p_13 & 31L))) / ((unsigned long)-953944023.925 + 42UL));
  }
  result = (long long)((unsigned int)(2.06367367329e+38 / ((double)v + 254.) + (double)(
                                      (unsigned long)v_4 - 862059564UL)) ^ 
                       (unsigned int)(~ v) % ((unsigned int)v_6 % (v_8 + 90U) + 364U));
  return result;
}


