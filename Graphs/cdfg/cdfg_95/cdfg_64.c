#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 796332933
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, unsigned short p_7[1], long long p_9, unsigned long p_21,
          unsigned short p_23)
{
  unsigned long v_29;
  long long v_27;
  int v_25;
  long v_19;
  unsigned short v_17;
  int v_15;
  float v_13;
  long v_11;
  signed char v_5;
  float v;
  short result;
  v_29 = 784835542UL;
  v_27 = (long long)p;
  v_25 = -209523214;
  v_19 = 407181082L;
  v_17 = p_7[0];
  v_15 = 2513;
  v_13 = -1.2326241972e+38f;
  v_5 = (signed char)p;
  result = (short)p;
  if ((double)((int)(((float)v_15 * -994.205993652f) * 0.f) + ! ((int)v_5 + (int)((signed char)v_13))) != - (
      (double)((long long)p_7[0] - v_27) * 2.83230565506e+37)) {
    v_19 = (64L / (! v_19 + 853L)) / (long)(((int)result << (v_27 & 15LL)) / (
                                            ! v_15 + 1020) + 995);
    v_19 = ((long)(-5021 + (int)result) % (! v_19 + 305L)) * (long)((int)(- v_13) + ! v_15);
    v_13 = (float)((long long)((6984 - v_25) % (v_15 + 87)) * p_9);
  }
  else {
    v_15 = (int)((long long)(~ v_15 | (int)p_7[0]) * ((long long)(211UL - v_29) - 
                                                      (long long)p % -14947LL));
    v_19 = (long)(! ((int)p_23 / ((int)result * (int)p + 1010)));
    v_17 = (unsigned short)(-376347678);
  }
  if ((unsigned long)-2.39165174694e+38 > (unsigned long)(! (~ v_19)) + 
                                          ! p_21 % (unsigned long)(v_15 * (int)p_23 + 492)) {
    v_5 = (signed char)(- (-2.03338502535e+38 / ((double)(34846LL ^ p_9) + 706.)));
    v = (float)(((int)p ^ 36 % ((int)v_5 + 176)) * (int)(- (~ p_7[0])));
    result = (short)v;
  }
  else {
    v_15 = (int)v_17;
    v_11 = (long)((int)((char)(v_13 - (float)(~ v_15))) & (int)p);
    result = (short)(! v_11);
  }
  return result;
}


