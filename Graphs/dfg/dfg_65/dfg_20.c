#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 147285316
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, double p_5, unsigned int p_7, unsigned short p_9,
           long long p_11)
{
  unsigned long long v_19;
  float v_17;
  unsigned char v_15;
  unsigned short v_13;
  long long v;
  double result;
  v_19 = 18446744073709535203ULL;
  v_17 = (float)p_5;
  v_15 = (unsigned char)(- ((float)(! p) + v_17) / ((float)((unsigned long long)(- (
                                                            (int)p_9 * 25)) / (
                                                            ! v_19 + 993ULL)) + 148.f));
  v_13 = (unsigned short)v_15;
  v = ((long long)p_9 / ((3306304376LL & p_11) + 140LL) - (long long)1.70440856062e+38f) * (long long)(~ (
      21217UL % (unsigned long)((int)v_13 + 197)));
  result = (double)((long long)(~ ((int)p / 44928)) * (v / -6735690752LL + (long long)p_5) + 
                    (long long)(! (! p_7)) * v);
  return result;
}


