#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 437791045
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p[2][2], unsigned char p_5[2], char p_7,
                 unsigned long long p_9, char p_13[2])
{
  signed char v_19;
  unsigned short v_17;
  unsigned short v_15;
  signed char v_11;
  short v;
  unsigned int result;
  v_19 = (signed char)-92;
  v_17 = (unsigned short)p_9;
  v_15 = (unsigned short)28597;
  v_11 = (signed char)-88;
  v = (short)-22149;
  result = 420207209U;
  v = (short)((42749 * p[0][1] + (int)v_15 % ((int)v + 764)) % (! ((int)v_17 / (
                                                                   (int)v_17 + 391)) + 130) - (
              ((int)6735371776.f - (int)v_15 * (int)v_17) | ~ ((int)p_13[0] * (int)v_17)));
  v_17 = (unsigned short)(-18446744073239225565ULL);
  v_11 = (signed char)(((unsigned long long)((98 % ((int)p_13[1] + 168)) % (
                                             (int)v_15 / 27412 + 776)) | p_9) * (unsigned long long)(
                       - (~ result) / (unsigned int)((11492 % ((int)v_17 + 448)) / (
                                                     (int)v_11 % ((int)v_19 + 740) + 218) + 635)));
  result = (unsigned int)((unsigned long long)(((int)v - p[0][1]) / (
                                               (int)v * 47971 + 654) | (int)(- p_5[1])) % (
                          - ((unsigned long long)p_7 / (p_9 + 264ULL)) / (unsigned long long)(
                          (123U - (unsigned int)v_11) + 638U) + 761ULL));
  return result;
}


