#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 606582135
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, double p_13, int p_21[1][3])
{
  unsigned long v_23;
  unsigned long long v_19;
  double v_17;
  char v_15;
  long v_11;
  char v_9;
  unsigned long long v_6;
  unsigned long long v_4;
  float v;
  long long result;
  v_23 = 1009620087UL;
  v_19 = (unsigned long long)p_21[0][0];
  v_17 = (double)p_21[0][2];
  v_15 = (char)-42;
  v_6 = (unsigned long long)p_13;
  v = 432.519134521f;
  result = (long long)p_21[0][1];
  if (((unsigned long long)p_13 % (v_19 + 735ULL) + (unsigned long long)(
       (long)p_21[0][1] | -3998L)) + (unsigned long long)(! (4219123920UL - v_23)) != (unsigned long long)p_21[0][2]) {
    v = (float)(signed char)-25;
    v_4 = (unsigned long long)((9791. - (double)v / (p + 481.)) / 26.6106506145);
    v = (float)(- (44124716. + p_13) / 240.);
  }
  else {
    v_4 = (unsigned long long)(((unsigned int)v - 1003158934U) - (unsigned int)(- p)) + 4294959987ULL;
    v_6 = (unsigned long long)(((2268. * p) / 705.) / ((266555615. * p_13 + -30707.) + 81.));
    v = (float)((double)v * ((double)((float)v_15 + 1.32124940291e+36f) * - v_17));
  }
  if (4045390024UL <= (unsigned long)(v + (float)((int)((unsigned char)(
                                                  35048.f - v)) % 12))) {
    v_4 = 18446744073709519618ULL - v_6;
    result = (long long)(- (- ((float)v_4 * 188.826858521f)));
    result = (long long)(97 + (int)((signed char)(- ((float)result - v))));
  }
  else {
    v_11 = (long)((long long)(p + -430.533900369) + result);
    v_9 = (char)(- (18446744073709541029ULL * (v_4 + (unsigned long long)v_11)));
    result = (long long)(- (1.84467440737e+19 / (p + 282.) - (double)v_9));
  }
  return result;
}


