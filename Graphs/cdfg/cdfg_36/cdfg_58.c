#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 675952765
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, char p_17, char p_19)
{
  unsigned long long v_25;
  short v_23;
  float v_21;
  int v_15;
  long v_13;
  double v_11;
  long v_9;
  unsigned long long v_7;
  unsigned int v_5;
  signed char v;
  long result;
  v_25 = 18446744073709487179ULL;
  v_23 = (short)-13753;
  v_21 = (float)p_19;
  v_15 = (int)p;
  v_13 = (long)p;
  v_9 = (long)p_17;
  v_7 = 38537ULL;
  v_5 = 4294919925U;
  v = (signed char)p_19;
  result = (long)p;
  if ((int)2.58172138624e+38 % ((v_15 + (int)p_17) + 473) << (v_5 & 31U) == (int)(~ v)) {
    v_7 = (unsigned long long)((unsigned long)(- p + (float)((unsigned long)p_17 - 3092UL)) * (
                               (unsigned long)(result % (long)((int)p_19 + 672)) / (
                               64488UL / (unsigned long)((int)p_17 + 536) + 319UL)));
    v_9 = ! ((v_13 >> 11) * -27822L);
    v_13 = (long)(((unsigned long long)(v_21 / ((float)p_19 + 767.f)) & v_7) ^ (unsigned long long)(
                  (long)v_23 / (v_9 + 419L) + (long)((int)p_19 % -65)));
  }
  else {
    v_15 = 24466;
    v_13 = (long)v_25;
    v_5 = (unsigned int)(- (- (- p)));
  }
  if ((55085ULL * v_7 - (unsigned long long)(! p_17)) + 18446744073709508907ULL > (unsigned long long)(
      (int)p_19 / 44129078)) {
    v = (signed char)-6;
    result = (long)(- ((-29763 - (int)v) * (int)(63370.f * p)));
  }
  else {
    v_11 = (double)(! (~ v_13) * (long)(~ (v_15 * v_15)));
    v_7 = (unsigned long long)(- (- v_11) - (double)p);
    result = (long)((double)(((unsigned long long)v_5 - v_7) + (unsigned long long)v_9) * 4.75726237093e+46);
  }
  return result;
}


