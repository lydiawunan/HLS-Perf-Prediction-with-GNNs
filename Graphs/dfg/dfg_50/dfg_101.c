#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 882944933
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned long long p_5)
{
  long long v_11;
  signed char v_9;
  float v_7;
  double v;
  unsigned short result;
  v_11 = (long long)p;
  v_9 = (signed char)-70;
  v = -2.86837923091e+38;
  v_7 = (float)(~ ((long long)(0 % ((int)((signed char)v) + 633)) + (
                                                                    -26333LL / (long long)(
                                                                    (int)v_9 + 157)) / (
                                                                    553131473LL / (
                                                                    v_11 + 764LL) + 263LL)));
  v = (double)(v_7 / 756002880.f);
  result = (unsigned short)(! (! ((unsigned long long)(v * (double)p) + 
                                  p_5 * 437735350ULL)));
  result = (unsigned short)(26870UL - (unsigned long)result);
  return result;
}


