#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1025670609
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p[5], unsigned long p_13, int p_15, double p_17)
{
  unsigned long v_25;
  unsigned long v_23;
  short v_21;
  float v_19;
  signed char v_11;
  unsigned long v_9;
  signed char v_7;
  unsigned short v_5;
  double v;
  unsigned int result;
  v_25 = 4294948374UL;
  v_23 = 4294932628UL;
  v_21 = (short)p_13;
  v_19 = (float)p[0];
  v_11 = (signed char)-50;
  v_9 = (unsigned long)p[3];
  v_7 = (signed char)p_13;
  v_5 = (unsigned short)p_13;
  while ((unsigned long)((double)(~ p_13) * p_17 - (double)((float)v_9 / (
                                                            v_19 + 959.f))) != (
         49473UL ^ (unsigned long)((unsigned int)v_21))) {
    v_9 = 25515UL;
    v_11 = (signed char)((unsigned long long)((v_23 / (v_25 + 560UL)) / (
                                              (unsigned long)-3.34921766631e+38 + 17UL)) + ! (
                         (unsigned long long)v_19 + 483925570ULL));
    v_19 = (float)29530;
  }
  while_0_break: ;
  if ((unsigned long)((int)v_7 + ((int)p[2] % 122) * -117) != (unsigned long)p[4] * (
                                                              (4294961801UL * v_9) % (unsigned long)(
                                                              ((unsigned int)v_11 - 395056311U) + 528U))) {
    v = (double)58198;
    result = (unsigned int)p[0];
    result = (unsigned int)(((long long)(v / ((double)p[1] + 814.)) & -9444LL) / (long long)(
                            (unsigned long)(result + (unsigned int)v_5) * (
                            81443232UL + (unsigned long)p[2]) + 331UL));
  }
  else result = (unsigned int)(- (! (-(signed char)18)));
  return result;
}


