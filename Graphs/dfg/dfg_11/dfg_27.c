#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 906083845
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, signed char p_5, unsigned long long p_7,
                int p_11, unsigned short p_15)
{
  unsigned int v_13;
  unsigned long v_9;
  signed char v;
  signed char result;
  v_13 = 176U;
  v_9 = (unsigned long)(44261LL - (long long)(! (- (v_13 % (unsigned int)(
                                                    (int)p_15 + 565)))));
  v = (signed char)(- (671742UL * (25114UL / (v_9 + 9UL))) * (unsigned long)p_11);
  result = (signed char)((((int)p / ((int)p + 254) ^ ((int)v + (int)p_5)) * -63) % (
                         (int)((double)p_7 - 4.02953749034e+52) + 865));
  return result;
}


