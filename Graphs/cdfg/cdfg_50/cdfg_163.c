#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704257086
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned short p_9, double p_17,
                unsigned long long p_19, unsigned long p_21)
{
  char v_23;
  unsigned long long v_15;
  unsigned short v_13;
  float v_11;
  signed char v_6;
  unsigned char v_4;
  long long v;
  signed char result;
  v_23 = (char)p_17;
  v_15 = 18446744073351553847ULL;
  v_6 = (signed char)60;
  v_4 = (unsigned char)p_17;
  v = (long long)p_19;
  result = (signed char)-15;
  if ((unsigned long)(! (((int)v_23 - 107) - (int)v_4 % -29295)) != p_21) {
    v_15 = (p - (unsigned long long)(3229456013UL * p_21)) * (p_19 * p_19 | (unsigned long long)(
                                                              -690345433 ^ (int)v_23));
    v_11 = (float)((double)(v / (long long)((6687 + (int)p_9) + 576)) - 
                   (p_17 / ((double)p_19 + 1015.)) / ((double)(33919ULL / (
                                                               p_19 + 148ULL)) + 964.));
    v_4 = (unsigned char)(21572ULL / ((((unsigned long long)v | v_15) + 18446744073233998116ULL) + 908ULL));
  }
  else {
    result = (signed char)v_15;
    v_6 = (signed char)(! (! p_19));
    v_11 = (float)(- (p_19 % (unsigned long long)(p_21 + 584UL)) * 38731ULL);
  }
  while ((unsigned long long)(~ (v * 6188LL)) % ((unsigned long long)(
                                                 (int)v_4 / ((int)v_6 + 840)) % (
                                                 (p >> ((int)p_9 & 63)) + 531ULL) + 472ULL) == (unsigned long long)(- (- (
         (int)v_6 | (int)((signed char)v_11))))) {
    v_13 = v_15 - 18446744073709489885ULL;
    v_15 = (unsigned long long)(- 2.89173080028e+38);
    v_6 = (signed char)v_4;
    v_11 = (float)(27ULL | (unsigned long long)((int)((unsigned short)9185205142.58) * (int)v_13) / (
                           v_15 * (unsigned long long)result + 793ULL));
  }
  while_0_break: ;
  return result;
}


