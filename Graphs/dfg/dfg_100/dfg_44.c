#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 168531742
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, char p_4, long p_15, short p_17, long p_19)
{
  float v_13;
  unsigned char v_11;
  short v_9;
  unsigned int v_7;
  char v;
  unsigned char result;
  v_13 = -2.75816979343e+38f;
  v_11 = (unsigned char)p_19;
  v_9 = (short)p;
  v_7 = 59249U;
  v = (char)(- ((unsigned long)v_7 + (unsigned long)(- (- p_19))));
  v_7 = (unsigned int)((unsigned long)(! ((long)((float)p_15 * v_13) % (
                                          ! p_15 + 405L))) | (unsigned long)(~ (
                       (unsigned int)(706.48270224 * (double)p_17) / 40904177U)));
  result = (unsigned char)(~ ((long long)((int)v >> (v_7 & 7U)) / 622099481LL) - (long long)(
                           ((int)(! v_9) - (int)(- v_11)) / ((int)(- v_13) + 211)));
  result = (unsigned char)((unsigned int)((int)(p - -8.76621444972e+37) + 
                                          (3361 % ((int)result + 116)) * (
                                          (int)p_4 % 2)) / 10917U);
  return result;
}


