#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 162799134
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p[5][2], unsigned short p_5, long p_9, short p_11,
                unsigned int p_13)
{
  signed char v_23;
  short v_21;
  short v_19;
  unsigned short v_17;
  signed char v_15;
  signed char v_7;
  int v;
  signed char result;
  v_23 = (signed char)p[2][1];
  v_21 = (short)-28166;
  v_19 = (short)p_13;
  v_15 = (signed char)p[2][0];
  v = (int)p_9;
  if (! (- ((int)p_11 ^ (int)v_15)) < (int)p_11) {
    v_15 = (signed char)(- (30301L - ((long)v_23 - p_9)));
    v_19 = (short)(! p[3][0]);
    v_17 = (unsigned short)(! ((int)(! v_15) + (int)p_11));
  }
  else {
    v_17 = (unsigned short)((unsigned long long)v_21 / ((145152540ULL | (unsigned long long)v) + 812ULL));
    v_7 = (signed char)(! (~ v_17));
    v_21 = (short)(10275L % (((long)v + p_9 * (long)v_7) + 464L));
  }
  if ((38 | -9286 % (((int)p_11 + (int)v_15) + 1016)) > ~ ((p[4][0] & (int)v_17) / (
                                                           ((int)v_19 | (int)v_21) + 924))) {
    v_7 = (signed char)(~ ((long)2.83628688555e+38f * (p_9 % (long)((int)p_11 + 820))));
    v = (int)v_7;
    result = (signed char)(~ v % (34204 % (v + 885) + 134) + - (p[0][1] % (
                                                                (int)p_5 + 113)));
  }
  else result = (signed char)(- (4294967282U - p_13));
  return result;
}


