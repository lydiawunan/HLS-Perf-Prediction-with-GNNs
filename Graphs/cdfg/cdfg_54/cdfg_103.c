#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 7020549
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p[3], long long p_4, int p_11, signed char p_13, int p_17)
{
  float v_23;
  unsigned char v_21;
  int v_19;
  short v_15;
  double v_9;
  signed char v_7;
  short v;
  char result;
  v_23 = 313.994873047f;
  v_21 = (unsigned char)21;
  v_15 = (short)5887;
  v_7 = (signed char)p[1];
  v = (short)22616;
  result = (char)p_11;
  while ((unsigned long long)(! v) >= - ((unsigned long long)p_17 + 18446744073709490803ULL)) {
    v_23 = (int)v_23 - (int)v_21 * 17;
    v = (short)(! p_4);
    v_7 = (signed char)(- v);
    v = (short)(- (6 | (103 ^ (int)((unsigned char)769.834838867f))));
  }
  while_0_break: ;
  while (- (3891458462. + - p[2]) <= (double)(((long long)result * ! p_4) % (long long)(
                                              - (-760 | (int)((short)p[1])) + 631))) {
    v_19 = (int)v_7 / (((int)v - 10594) + 272);
    v_9 = (double)((p_17 * (int)p_13 + (16187 >> (p_4 & 15LL))) + - v_19);
    v_7 = (signed char)((int)(~ (! v_15)) * (int)(! (- p_13)));
    result = (char)((- v_9 / ((-4250536485.06 - v_9) + 383.)) / ((double)(- (
                                                                 p_11 << (
                                                                 (int)p_13 & 31))) + 471.));
  }
  while_0_break_0: ;
  return result;
}


