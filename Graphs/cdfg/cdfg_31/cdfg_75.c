#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 543885715
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned char p_7[1], signed char p_9[2],
                 float p_11, unsigned long p_19)
{
  signed char v_23;
  short v_21;
  double v_17;
  unsigned int v_15;
  float v_13;
  unsigned char v_5;
  unsigned long long v;
  unsigned int result;
  v_23 = (signed char)p_19;
  v_21 = (short)15261;
  v_17 = (double)p;
  v_15 = 316159713U;
  v_13 = 1.4154180954e+38f;
  v_5 = (unsigned char)155;
  v = (unsigned long long)p_11;
  while (- (- v_17) - (double)(- p_19 & (unsigned long)((int)v_5 / ((int)v_21 + 47))) < (double)(- (
         122.f / (p_11 + 452.f)))) {
    v = (unsigned long long)(p_11 * ((29570.f - v_13) - (p_11 - -471.993255615f)));
    v_23 = v_23;
    v_21 = (short)(~ (! 3497858343UL));
  }
  while_0_break: ;
  if ((unsigned int)p_11 == (unsigned int)(~ ((int)((unsigned char)v_13) - (int)p_7[0])) / (
                            ! ((unsigned int)p_7[0] / (v_15 + 144U)) + 361U)) 
    result = (unsigned int)((float)p * 3973292544.f);
  else {
    result = (unsigned int)p;
    v_5 = (unsigned char)(! (p * p - ~ p));
    result = (unsigned int)((unsigned long long)((unsigned int)-3.01227465206e+14 / (
                                                 (result | 18712125U) + 886U)) - 
                            702128647ULL % (v / (unsigned long long)(
                                            (int)v_5 + 187) + 158ULL));
  }
  return result;
}


