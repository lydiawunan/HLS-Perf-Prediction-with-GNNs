#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 82629815
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, double p_4, unsigned long long p_6, float p_8,
           signed char p_10)
{
  signed char v_23;
  char v_21;
  unsigned short v_19;
  char v_17;
  double v_15;
  float v_13;
  signed char v;
  double result;
  v_23 = (signed char)21;
  v_21 = (char)11;
  v_19 = (unsigned short)40204;
  v_15 = (double)p_6;
  v = (signed char)81;
  result = -265.59041727;
  if ((long long)(((-2525. + result) - 21.) / ((double)(~ (~ p_6)) + 751.)) <= 802862262LL) {
    v_15 = (double)(! (! (-18446744073709548065ULL)));
    v_17 = (char)(- ((unsigned long long)v_15 / 18446744073709551509ULL));
    v_13 = (float)((unsigned int)((int)(- v) ^ (int)v_17) ^ (3253307318U + (unsigned int)p) % (unsigned int)(
                                                            (int)(! v_19) + 132));
  }
  else {
    v = (signed char)((int)(- p_10) / ((int)v_23 + 734));
    result = (double)(((114.f + p_8) + (float)p_6) / ((float)(~ (p_6 * p_6)) + 726.f));
    v_13 = (float)((long)v_21 / -48111L);
  }
  while ((double)(! (! p_10)) - (double)((int)v * (int)p) / (result + 840.) >= 60963.) {
    v_17 = v_15 - ((double)v_13 - -429.220612731);
    result = (double)v_17;
    v_15 = (double)((int)(- (! p_10)) * ! ((int)((unsigned char)p_8) + 137));
    v = (signed char)844.7038834;
  }
  while_0_break: ;
  return result;
}


