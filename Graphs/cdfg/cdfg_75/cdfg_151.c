#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 597644954
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, unsigned long long p_9, float p_17)
{
  int v_21;
  unsigned long long v_19;
  long v_15;
  long v_13;
  double v_11;
  unsigned char v_7;
  double v_5;
  long v;
  float result;
  v_21 = -166528848;
  v_19 = 614791849ULL;
  v_15 = -364625636L;
  v_13 = (long)p;
  v_11 = 1.23852345488e+38;
  v_7 = (unsigned char)23;
  v_5 = 8244589283.;
  v = (long)p_17;
  while (((2147. - v_5) + (double)((unsigned long long)v_7 / (p_9 + 292ULL))) - (
         - v_11 - -3.11740602957e+38) < (double)((unsigned long long)(
                                                 - v_13 / (v_15 + 800L)) % (
                                                 (((unsigned long long)p_17 - v_19) + 50023ULL) + 413ULL))) {
    v_13 = v_21 % 43648;
    v_15 = (long)(v_19 - 4430949ULL);
    v_5 = (double)p_9;
    v_11 = (double)(! (- (4294953218ULL * p_9)));
  }
  while_0_break: ;
  result = (float)(v + (long)(- (p * 444338912.f)));
  return result;
}


