#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 632097952
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, short p_4, float p_17)
{
  float v_19;
  double v_15;
  short v_13;
  unsigned long long v_11;
  double v_9;
  unsigned long v_7;
  unsigned long v;
  unsigned int result;
  v_19 = (float)p;
  v_13 = (short)p_17;
  v_11 = 276693148ULL;
  v_9 = (double)p_4;
  v_7 = 4048858635UL;
  result = 4294929057U;
  if (p_17 + (float)((long long)(3767. + v_9) / 54012LL) >= (float)((unsigned long long)(
                                                                    v_19 + (float)(
                                                                    (int)v_13 % -897)) % (
                                                                    (
                                                                    (unsigned long long)(! v_7) - (
                                                                    19237ULL & v_11)) + 263ULL))) {
    v = 26056UL;
    v_15 = (double)(~ (! p_4));
    v_11 = (unsigned long long)((unsigned long)(- (! p_4)) % (v_7 * (unsigned long)(
                                                              (int)((char)v_15) / -8) + 807UL));
  }
  else {
    v_11 = (unsigned long long)(~ -206036454LL);
    v = (unsigned long)((double)v_7 + (4292833504. / (v_9 + 613.) - (double)v_7));
    v_9 = 3.30471562283e+38;
  }
  while (! (((int)p / ((int)p_4 + 164)) % ((int)((float)v - 4126417408.f) + 764)) >= 
         211 / ((int)((signed char)-7411586048.f) * -75 + 608) - (int)(
         (double)v_7 - v_9 * (double)p)) {
    v_7 = (unsigned long)p;
    result = (unsigned int)(53UL / (v + 625UL));
    v = (unsigned long)((18446744073709540630ULL % (v_11 + 430ULL) + (unsigned long long)(
                         (int)p_4 % ((int)v_13 + 356))) + (unsigned long long)(- (
                        (int)p & (int)p)));
  }
  while_0_break: ;
  return result;
}


