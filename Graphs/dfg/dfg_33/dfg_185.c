#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 972379327
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, unsigned long long p_7[2],
                   unsigned short p_9, signed char p_11,
                   unsigned long long p_15)
{
  unsigned long long v_19;
  float v_17;
  long v_13;
  unsigned char v_5;
  unsigned int v;
  unsigned short result;
  v_19 = 18446744073026870449ULL;
  v_17 = (float)p_15;
  v_13 = (long)p_7[0];
  v = (unsigned int)(((unsigned long long)v_13 - ~ (! p_15)) - ((unsigned long long)(- v_17) * (
                                                                42177ULL % (
                                                                v_19 + 231ULL)) & (unsigned long long)(
                                                                147 | (int)((unsigned char)-6940193211.43))));
  result = (unsigned short)65431;
  v_5 = (unsigned char)((unsigned long long)v * (((p_7[0] + (unsigned long long)p_9) - (unsigned long long)(
                                                  (int)p_9 % -186034571)) * (unsigned long long)(
                                                 (int)result ^ (int)(~ p_11))));
  result = (unsigned short)((int)((unsigned char)(-2578895106.53 * (double)(
                                                  ~ p / ((v & 335983771U) + 614U)))) + (int)(~ v_5));
  return result;
}


