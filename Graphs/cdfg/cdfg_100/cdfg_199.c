#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 875006464
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, unsigned long long p_7, double p_11,
         unsigned long p_13[4][3], int p_19)
{
  unsigned long v_27;
  double v_25;
  short v_23;
  unsigned int v_21;
  unsigned short v_17;
  unsigned int v_15;
  float v_9;
  unsigned int v_5;
  int v;
  long result;
  v_27 = (unsigned long)p_7;
  v_25 = -2.12405326298e+38;
  v_23 = (short)p_13[2][1];
  v_21 = (unsigned int)p;
  v_17 = (unsigned short)59603;
  v_15 = 52796U;
  v_9 = -296.908569336f;
  v_5 = 11508U;
  v = (int)p_11;
  result = -199238973L;
  if ((int)(- (- v_17)) != (int)v_17) {
    v_17 = (unsigned short)(- result);
    v_17 = (unsigned short)((float)((56117U & v_21) | (unsigned int)(- v_17)) * - (
                            (float)p_13[3][1] + v_9));
    v_23 = (short)-19644;
  }
  else {
    v_25 = (double)p_13[0][0];
    v = (int)(- v_23) % 16403;
    v_27 = (unsigned long)v_5;
  }
  if (- ((double)((unsigned long long)result - 50958ULL) * (p_11 + v_25)) != (double)(
      (p_7 - (unsigned long long)v_21) / (unsigned long long)(! p_19 + 965) + (unsigned long long)(
      (long long)(result - (long)v_17) ^ 60618LL))) {
    v_5 = (unsigned int)((unsigned long long)(~ (v_5 + (unsigned int)v_17)) + - (
                         (unsigned long long)p_19 & p_7));
    v_9 = (float)(44152UL - ! ((unsigned long)v_15 - p_13[0][2]));
    result = (long)((unsigned long long)(p - v) * ((unsigned long long)v_5 / (
                                                   p_7 + 11ULL)) - (unsigned long long)(
                    (unsigned long)((double)v_9 + p_11) * ! p_13[1][1]));
  }
  else {
    v_25 = (double)(~ (- (-832 * p_19)));
    v_21 = (unsigned int)((unsigned long)((int)8588101632.f * ((int)v_23 % (
                                                               (int)((short)v_25) + 950))) + ~ (! v_27));
    result = (long)(((p_7 + 18446744073709551509ULL) + (unsigned long long)v_21) * (unsigned long long)(
                    (long)(14484 + p_19) * result));
  }
  return result;
}


