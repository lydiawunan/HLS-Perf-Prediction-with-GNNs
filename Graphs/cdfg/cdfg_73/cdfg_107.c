#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 450947850
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned short p_4, int p_7,
                       unsigned int p_15)
{
  char v_13;
  float v_11;
  char v_9;
  unsigned long v;
  unsigned long long result;
  v_11 = -221.390563965f;
  v_9 = (char)71;
  v = (unsigned long)p_15;
  result = (unsigned long long)p;
  v_13 = (char)((int)p_4 + -124);
  while ((unsigned long long)((((int)p % ((int)((unsigned char)-677196992.f) + 903)) * (int)(~ p_4)) % (
                              (int)3.78398381389e+46 + 981)) > ((unsigned long long)(! v) + 
                                                                18446744073709500600ULL / (unsigned long long)(
                                                                (int)p + 505)) / (unsigned long long)(
                                                               ! ((unsigned int)p_7 / 4294948264U) + 72U)) {
    result = (int)v_9 & (int)((char)2.02993757275e+38);
    v_9 = (char)((unsigned int)v_13 % (p_15 + 922U));
    v = (unsigned long)(- (- (- v_11)));
    v = (unsigned long)(! (result % (unsigned long long)((int)v_9 + 806)) * (unsigned long long)(
                        (unsigned long)((int)v_9 * -18978) / (v % 3835080935UL + 41UL)));
  }
  while_0_break: ;
  return result;
}


