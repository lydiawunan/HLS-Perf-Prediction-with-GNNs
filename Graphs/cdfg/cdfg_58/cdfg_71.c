#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 526642197
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, long long p_7, unsigned long long p_9[1],
          int p_11, unsigned long p_13)
{
  double v_29;
  char v_27;
  unsigned long long v_25;
  unsigned long long v_23;
  unsigned int v_21;
  unsigned char v_19;
  long long v_17;
  float v_15;
  signed char v_4;
  unsigned long long v;
  float result;
  v_29 = (double)p_9[0];
  v_27 = (char)-85;
  v_25 = (unsigned long long)p;
  v_23 = 830244493ULL;
  v_21 = 18318U;
  v_19 = (unsigned char)62;
  v_17 = 11896LL;
  v_15 = (float)p_11;
  result = -1.56031623808e+38f;
  while ((unsigned long long)(! (p_7 / (long long)((int)v_19 + 221)) * (long long)(
                              41553U - v_21)) >= - (v_23 >> (~ p_9[0] & 63ULL))) {
    v_21 = v_25 * 47150ULL;
    v_23 = v_23;
    v_25 = (unsigned long long)((3261764352. - (v_29 - (double)result)) - (double)(
                                v_21 + 4294910338U));
    v_21 = (unsigned int)(((unsigned long)v_27 % (p + 830UL) + 800UL) >> 23ULL);
  }
  while_0_break: ;
  if ((unsigned int)((float)(4294951871UL / (((unsigned long)p_11 | p_13) + 408UL)) - 
                     - v_15 * (float)(- v_17)) >= 0) {
    v = 57233ULL;
    result = (float)(- (~ (4134344178ULL ^ v)));
  }
  else {
    v_4 = (signed char)((806598592.f / ((float)(p % 232947373UL) + 1015.f)) / (
                        (float)(4294940601UL - 61350UL / (p + 158UL)) + 760.f));
    result = (float)(- v_4);
  }
  return result;
}


