#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1045872786
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, signed char p_7[3][4][5], long long p_13,
                  unsigned short p_15, long long p_17)
{
  short v_25;
  char v_23;
  unsigned int v_21;
  double v_19;
  short v_11;
  long long v_9;
  float v_5;
  unsigned int v;
  unsigned long result;
  v_25 = (short)p_7[2][3][0];
  v_23 = (char)100;
  v_21 = (unsigned int)p_7[1][1][1];
  if ((long long)p_15 * ((long long)v_21 | ((long long)v_23 - p_17)) >= (long long)v_25) {
    v_11 = (short)p_15;
    v_9 = ~ ((long long)(20106 << 5) * ((long long)v_11 - p_13));
    v_5 = (float)((long long)(! p_7[2][3][2]) % (145497540LL % (-30550LL % (
                                                                v_9 + 811LL) + 462LL) + 215LL));
  }
  else {
    v_19 = (double)-344493449;
    v_5 = (float)((double)p_17 * - (- v_19));
  }
  if (- ((float)p * v_5) * (float)(- ((long long)7.08512079e+37f / 871782115LL)) > -5609848320.f) 
    result = 127UL;
  else {
    v = (unsigned int)(4138 >> 22);
    result = (unsigned long)v;
  }
  return result;
}


