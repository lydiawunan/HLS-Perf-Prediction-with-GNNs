//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 295808782
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, signed char p_11[2][4], double p_13)
{
  signed char v_9;
  float v_7;
  unsigned long long v_5;
  float v;
  double result;
  v_9 = (signed char)p;
  v_7 = (float)((double)p_11[0][1] - - p_13);
  v_5 = (unsigned long long)((- (- v_7) * (float)v_9) * 0.817722022533f);
  v = (float)v_5;
  result = (double)(16880ULL % (((unsigned long long)(- p / (double)(
                                                      - v + 738.f)) << (
                                 v_5 & 63ULL)) + 835ULL));
  return result;
}


