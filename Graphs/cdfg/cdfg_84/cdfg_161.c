#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 140347791
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p[5], double p_7, unsigned long p_9,
                 signed char p_11, long long p_13)
{
  unsigned long long v_23;
  long v_21;
  float v_19;
  long v_17;
  unsigned char v_15;
  signed char v_5;
  unsigned short v;
  unsigned int result;
  v_23 = 18446744073709535011ULL;
  v_21 = -107616674L;
  v_19 = -255594288.f;
  v_5 = (signed char)p[4];
  result = (unsigned int)p_11;
  if (result < (unsigned int)(199.f + v_19)) {
    v_19 = (float)((unsigned long long)v_21 + ~ (v_23 & (unsigned long long)v_5));
    v_17 = (long)((unsigned long long)p_13 % 631232878ULL ^ (unsigned long long)(
                  (int)(22491.f / (v_19 + 117.f)) + (int)((char)p_7) / 94));
    v_15 = (unsigned char)p_9;
  }
  else {
    v_17 = 14658L;
    v_15 = (unsigned char)p[1];
  }
  if (- (-32342LL + p_13) + ! (~ p_13) != (long long)((-334L / ((long)v_15 * v_17 + 539L)) % 32255L)) {
    result = 3497321936U;
    result = (unsigned int)(3991215365UL - (unsigned long)(802U / (result + 276U) - - result));
  }
  else {
    v = (unsigned short)(0. + p_7);
    v_5 = (signed char)-122;
    result = (unsigned int)(((-5553. / (p[4] + 536.)) / (- p[4] + 460.)) / (
                            (double)(((int)v + (int)((unsigned short)1.51509720062e+38)) * (int)(! v_5)) + 401.));
  }
  return result;
}


