#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 171152780
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, unsigned int p_4, float p_11, double p_17,
                   float p_19)
{
  unsigned int v_23;
  signed char v_21;
  unsigned long long v_15;
  unsigned short v_13;
  unsigned short v_9;
  signed char v_7;
  char v;
  unsigned short result;
  v_23 = (unsigned int)p;
  v_15 = 18446744073709492902ULL;
  v_13 = (unsigned short)p_11;
  v_7 = (signed char)-39;
  result = (unsigned short)2830;
  if (p_19 == (float)((unsigned long long)(- (-8023 * (int)((short)-189821984.f))) / (
                      ! v_15 * (unsigned long long)v_23 + 258ULL))) {
    v_21 = (signed char)((unsigned int)(p_17 - (double)p) / (p_4 + 335U) | 222U);
    v_15 = (unsigned long long)(((float)(p_4 * (unsigned int)v_21) * - p) * -70.f);
    v = (char)(! ((int)(p_19 / (p_11 + 599.f)) / (((int)result ^ (int)((unsigned short)p_19)) + 294)));
  }
  else {
    v = (char)(- -3.33902981193e+38f);
    result = (unsigned short)(- p_17);
    v_13 = (unsigned short)(- p);
  }
  if (v_15 == (unsigned long long)(((unsigned int)((int)((unsigned short)-629.440673828f) % (
                                                   (int)v_13 + 272)) % (
                                    p_4 / ((unsigned int)p_11 + 888U) + 1014U)) * (unsigned int)(
                                   (int)(- p_17) + ((int)result & (int)v)))) 
    result = (unsigned short)(9702.f * (p / -19257.f));
  else {
    v_9 = (unsigned short)((unsigned long long)p_4 + 18446744073709551155ULL);
    v = (char)((float)(~ ((int)v_7 % ((int)v_9 + 174))) / ((p_11 / -630042624.f) / (
                                                           (float)v_13 + 945.f) + 565.f));
    result = (unsigned short)(- p_4 * (unsigned int)v);
  }
  return result;
}


