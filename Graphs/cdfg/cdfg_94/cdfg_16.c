#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 559917596
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, unsigned char p_4, unsigned short p_9,
                 long p_11, unsigned long long p_17[5][1][5])
{
  int v_23;
  unsigned short v_21;
  unsigned char v_19;
  float v_15;
  double v_13;
  unsigned long long v_7;
  unsigned long long v;
  unsigned int result;
  v_23 = (int)p_11;
  v_21 = (unsigned short)52231;
  if ((unsigned long long)9.53487981581e+37 != - ((unsigned long long)p_4 * p - (unsigned long long)(
                                                  p_11 & (long)v_23))) {
    v_19 = (unsigned char)0;
    v_15 = (float)(! (! ((int)v_19 + (int)v_21)));
    v = p_17[2][0][2];
  }
  else {
    v_15 = (float)(! (- p_9));
    v = 18446744073709551509ULL;
  }
  if (3482417254U != (unsigned int)(- (349596640.f * - v_15))) {
    v_7 = (unsigned long long)(~ p_9);
    result = (unsigned int)((p * (unsigned long long)p_4) / (18746ULL / (
                                                             v + 77ULL) + 650ULL));
    result = (unsigned int)(-37236534LL / (long long)(result + 81U));
  }
  else {
    v_13 = (double)(- (char)-44);
    result = (unsigned int)(0. * - v_13);
  }
  return result;
}


