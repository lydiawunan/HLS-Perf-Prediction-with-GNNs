#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 156836010
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned int p_4, char p_9, float p_11,
           unsigned int p_13)
{
  unsigned long long v_7;
  unsigned long long v;
  double result;
  v_7 = (unsigned long long)p_13;
  v = (v_7 % (unsigned long long)((int)p_9 + 617) + (unsigned long long)(! p_4)) - (unsigned long long)(~ (
      (int)((unsigned char)2771125433.94) | 206));
  v_7 = (unsigned long long)((unsigned long)((int)p_9 & (int)((char)(
                                             ((double)v + -436.092157075) - (double)(- p_11)))) / (
                             ~ ((unsigned long)((long)1.04450393542e+38f * -288759831L) % (unsigned long)(
                                (p_13 - p_4) + 76U)) + 846UL));
  v = v_7;
  result = (double)((unsigned long long)(42389 - (int)(-1.79270508665e+40 / (
                                                       (double)(p + (unsigned long long)p_4) + 529.))) | v);
  return result;
}


