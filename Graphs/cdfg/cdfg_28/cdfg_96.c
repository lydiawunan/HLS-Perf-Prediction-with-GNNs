#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 878694980
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, double p_5[3], double p_7)
{
  unsigned char v_17;
  signed char v_15;
  short v_13;
  float v_11;
  float v_9;
  short v;
  short result;
  v_15 = (signed char)p_5[2];
  v_13 = (short)-25938;
  v_11 = -3599707.5f;
  v_9 = 119.157691956f;
  v = (short)30849;
  result = (short)p;
  while (- ((unsigned long long)p % 18446744073709506707ULL) > (unsigned long long)(
         (unsigned long)(- (p_5[2] / (p_7 + 13.))) % ((1UL + (unsigned long)(
                                                       20043 / ((int)((short)v_9) + 648))) + 588UL))) {
    v_17 = (unsigned char)(- (62.f / ((v_11 + -26.f) + 584.f)));
    result = (short)((int)v_13 & (int)((short)(565.324401855f / ((float)result + 415.f) + (float)(
                                               (int)v_15 % ((int)v_17 + 301)))));
    v_9 = (float)(~ ((int)result ^ (int)((short)((double)p + p_5[0]))));
  }
  while_0_break: ;
  result = (short)(p - (unsigned long)((int)v - -110));
  return result;
}


