#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 707080642
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, short p_4[2][3], unsigned int p_6,
        unsigned long p_8, int p_10)
{
  long v_25;
  unsigned long long v_23;
  unsigned long v_21;
  unsigned long v_19;
  short v_17;
  short v_15;
  unsigned short v_13;
  signed char v;
  int result;
  v_23 = (unsigned long long)p_6;
  v_21 = p_8;
  v_19 = (unsigned long)p_6;
  v_17 = (short)-8691;
  v_15 = (short)22942;
  v = (signed char)p_6;
  while (v_19 < (- (v_21 - (unsigned long)p_6) & 15023UL)) {
    v_23 = (unsigned long long)((-339712321LL % (long long)((int)p + 923)) / 112LL) - 
           (unsigned long long)v_19 / (v_23 / (unsigned long long)(p_6 + 182U) + 793ULL);
    v_25 = (long)(! (~ (p_8 ^ p_8)));
    v_19 = (unsigned long)(((v_23 ^ (unsigned long long)p) + (unsigned long long)-6321179871.78) / (unsigned long long)(
                           ((long)(~ p_10) + (long)p % (v_25 + 491L)) + 597L));
  }
  while_0_break: ;
  if ((unsigned long)((int)p_4[0][2] / ((int)(! v_17) * ! p_10 + 335)) != v_19) {
    result = (int)((unsigned long)((unsigned int)(- p) / (p_6 + 698U)) * ! (
                   171UL % (p_8 + 455UL)));
    result = (int)((double)((int)(- p) << 13) * ((double)(result ^ (int)p_4[1][0]) + -2.56011693143e+38));
    result = ~ ((int)p >> (result & 15)) + result;
  }
  else {
    v_13 = (unsigned short)(- ((unsigned long long)v_15 * 18291ULL) * (unsigned long long)(! (
                            (long)p - -22075L)));
    v_15 = (short)(! ((p_8 + (unsigned long)p_6) * (unsigned long)(~ v_15)));
    result = (p_10 / ((int)v + 311) + -4487) - (-19463 ^ p_10) * ((int)v_13 - (int)v_15);
  }
  return result;
}


