#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 993407422
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p[4], int p_11)
{
  int v_17;
  signed char v_15;
  float v_13;
  int v_8;
  long long v_6;
  short v_4;
  signed char v;
  long long result;
  v_17 = 505833957;
  v_15 = (signed char)84;
  v_13 = 745.767456055f;
  v_8 = -31800;
  v_6 = (long long)p[0];
  v_4 = (short)p_11;
  if ((p_11 & (int)(((double)v_6 - -6142234163.16) / (double)(-35.f * v_13 + 211.f))) < ~ (
      ((int)v_15 - 144) % ((v_17 + 47) + 412))) {
    v_6 = (long long)(! (688138114ULL + 774957256ULL * (unsigned long long)p[1]));
    v_4 = - (- v_4);
    v = (signed char)((int)(~ v_4) >> (~ v_6 & 15LL));
  }
  else v = (signed char)6;
  result = (long long)(-5948 * (int)v);
  return result;
}


