#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 93220434
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, unsigned short p_5, char p_13)
{
  unsigned long v_11;
  double v_9;
  unsigned short v_7;
  unsigned int v;
  unsigned short result;
  v_9 = (double)p;
  v_7 = p_5;
  v = (unsigned int)p;
  v_11 = ~ (4294907610UL + (unsigned long)((int)(v_9 + 39.) | 58490));
  v_11 = ((unsigned long)(p - (int)p_5) - ~ v_11) / (unsigned long)(! (
                                                                    (unsigned int)-1.43582919689e+38f - v) + 140U) - - (
         ! v_11 / (unsigned long)((int)p_13 + 968));
  v = (unsigned int)((unsigned long long)(- (p * (int)(! p_5))) + ((485129077ULL % (unsigned long long)(
                                                                    (int)v_7 + 591)) % 18446744073709520904ULL) % (unsigned long long)(
                                                                  - (
                                                                  (unsigned long)v_9 * v_11) + 633UL));
  result = (unsigned short)v;
  return result;
}


