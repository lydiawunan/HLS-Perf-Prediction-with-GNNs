#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 80730351
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p[4], double p_5, float p_7, double p_9, unsigned long p_13)
{
  char v_25;
  char v_23;
  double v_21;
  unsigned int v_19;
  long v_17;
  short v_15;
  long v_11;
  long v;
  long result;
  v_25 = (char)p_7;
  v_23 = (char)p_7;
  v_21 = (double)p_13;
  v_19 = (unsigned int)p_13;
  v_17 = -500092751L;
  v_15 = (short)p_13;
  v_11 = (long)p_5;
  while (! ((long long)v_11 * 595825321LL) != (long long)((p[2] + (p[1] + (float)v_23)) / (
                                                          (float)((int)((short)p_9) * (int)v_15 & (int)(
                                                                  p_9 - p_5)) + 411.f))) {
    v_23 = (int)v_25 + 37966;
    v_25 = (char)p_9;
    v_19 = (unsigned int)(p_9 * (-119. / (v_21 + 507.) + (double)v_25));
    v_15 = (short)((float)(- v_17) * (p_7 * (float)v_17) + (float)((-107 % (
                                                                    (int)((signed char)p_9) + 151)) * (int)(
                                                                   3602797568. - p_9)));
  }
  while_0_break: ;
  if ((double)(- ((p[3] / (p_7 + 202.f)) * (float)((unsigned long long)v_19 % 156922704ULL))) < v_21) {
    result = (long)(- (- (- p_9)));
    v = (long)((p_5 / (double)(- p_7 + 483.f)) / (- ((double)result - -7758553859.92) + 627.));
    result = ~ (-9114L * (long)p[3]) ^ v;
  }
  else {
    v_11 = -95L - ~ ((long)v_15 + v_17);
    v_11 = (long)((7.28610063224e+37 * (double)((float)p_13 / (p_7 + 962.f))) * (double)(
                  (unsigned long)(p_9 / ((double)v_11 + 73.)) % (p_13 % (
                                                                 p_13 + 592UL) + 254UL)));
    result = v_11;
  }
  return result;
}


