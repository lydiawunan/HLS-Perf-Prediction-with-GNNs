#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 608447530
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, int p_7, unsigned int p_9,
                unsigned int p_11, float p_15)
{
  double v_19;
  unsigned long long v_17;
  unsigned short v_13;
  long long v_4;
  double v;
  signed char result;
  v_19 = (double)p_7;
  v_17 = 18446744073153896930ULL;
  v_13 = (unsigned short)p_7;
  v = (double)p_7;
  result = (signed char)-1;
  result = (signed char)(- (v + (double)(- p_15)) / (- ((double)(~ result) / (
                                                        - v_19 + 772.)) + 950.));
  v_4 = (long long)(- v_17);
  v = (double)(((unsigned long)(! (- p_9)) * - ((unsigned long)p_11 * 992130505UL)) % (unsigned long)(
               (int)v_13 * (42986 + (int)((unsigned short)(14276.f / (
                                                           p_15 + 278.f)))) + 1023));
  result = (signed char)(((long long)v / ((v_4 << ((int)p & 63)) + 671LL) & (long long)p_7) - (long long)(~ result));
  return result;
}


