#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 741597503
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, float p_4, short p_9[4][5][4], unsigned char p_11,
        unsigned long p_13)
{
  float v_27;
  double v_25;
  long long v_23;
  signed char v_21;
  long long v_19;
  long long v_17;
  char v_15;
  unsigned int v_7;
  int v;
  int result;
  v_27 = -284.854431152f;
  v_25 = (double)p_11;
  v_23 = (long long)p_13;
  v_21 = (signed char)p_13;
  v_17 = (long long)p_4;
  v_15 = (char)-91;
  v = (int)p_13;
  while (- v_25 < (double)p_13) {
    v_19 = (long)v_27 * -47349L;
    v = (int)2647749075.87;
    v_23 = ! (((long long)v_15 - v_19) % (long long)((int)(- p_9[1][3][3]) + 1016));
    v_25 = (double)(~ (- -1032186121));
  }
  while_0_break: ;
  if ((long long)v_21 < - (~ (v_23 + (long long)p))) {
    v_7 = 4294967180U;
    result = (int)((unsigned long)v_7 / ((4294966860UL * (unsigned long)p_9[1][4][2] + (unsigned long)(
                                          21781L * (long)p_11)) + 560UL));
    result = (int)((unsigned long long)(((int)p + result) / (((int)p_4 + v) + 305)) + (
                   3041633340ULL & (unsigned long long)((int)-1.34927092731e+38 + result)));
  }
  else {
    v_19 = (long long)(- (p_4 * 51441.f));
    v_15 = (char)v_19;
    result = (int)(((long long)p_13 * -321902746LL + (long long)p_13) % (
                   ((long long)(! p) + (long long)v_15 % (v_17 + 369LL)) + 286LL));
  }
  return result;
}


