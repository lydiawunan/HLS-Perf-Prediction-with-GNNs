#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 767073890
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, unsigned char p_4, unsigned int p_6,
                       float p_8, signed char p_11[4])
{
  unsigned char v_17;
  unsigned int v_15;
  unsigned short v_13;
  unsigned char v;
  unsigned long long result;
  v_15 = 81332922U;
  v_13 = (unsigned short)p_11[0];
  v = (unsigned char)241;
  result = (unsigned long long)p_11[3];
  while (((unsigned int)(7357455360.f * (float)v_13) + 41700U) * ((unsigned int)(
                                                                  (int)((signed char)p_8) % (
                                                                  (int)p_11[0] + 822)) - ~ p_6) >= 0U) {
    v_17 = v_15 % 49798U;
    v_15 = (unsigned int)(- (18446744073709549233ULL / (result + 103ULL) - (unsigned long long)v_17));
    v_17 = (unsigned char)((unsigned long)((int)(-295626208.f / (p_8 + 215.f)) / (
                                           ((int)((unsigned char)p_8) | 246) + 6)) / (
                           ! (4153767213UL - (unsigned long)v_15) + 307UL));
    v_13 = (unsigned short)p_8;
  }
  while_0_break: ;
  if ((long)(- (45730 << (p_6 & 15U)) / ((int)(- (-295.206573486f * p_8)) + 1005)) == 
      0 % (long)(((int)v * (int)((unsigned char)-3.14603160968e+38)) * (int)(! p_11[0]) + 14)) 
    result = (unsigned long long)p;
  else result = (unsigned long long)(0U / (4294967287U % (4294906705U % (unsigned int)(
                                                          (int)p_4 + 834) + 402U) + 384U));
  return result;
}


