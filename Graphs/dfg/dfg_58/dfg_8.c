#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 815172201
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned short p_4, float p_6, long long p_8,
                unsigned int p_11)
{
  unsigned long long v_19;
  short v_17;
  unsigned long long v_15;
  float v_13;
  unsigned short v;
  signed char result;
  v_19 = (unsigned long long)p_4;
  v_15 = 18446744072960145570ULL;
  v_13 = -887.789001465f;
  result = (signed char)-53;
  v_17 = (short)((unsigned long long)p_4 / (((unsigned long long)(-3007 * (int)result) ^ (
                                             v_19 - (unsigned long long)p_8)) * (unsigned long long)p + 549ULL));
  v = (unsigned short)(~ (((unsigned long long)(v_13 / ((float)p_8 + 998.f)) + ~ v_15) % (unsigned long long)(
                          ~ (43 - (int)v_17) + 308)));
  result = (signed char)(((long long)((int)p_4 - (int)((unsigned short)p_6)) * ! p_8 + (long long)v) % (long long)(
                         ! (p_11 - 4294967182U) + 72U));
  result = (signed char)((unsigned int)(((int)result >> ((int)((signed char)-2.54936035832e+38f) & 7)) - -60) & p);
  return result;
}


