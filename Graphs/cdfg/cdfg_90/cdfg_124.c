#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 136951758
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, unsigned int p_7, short p_9,
                   unsigned char p_11, short p_17)
{
  unsigned char v_19;
  short v_15;
  long long v_13;
  unsigned long long v_5;
  unsigned long long v;
  unsigned short result;
  v_19 = (unsigned char)203;
  v_15 = (short)32304;
  v_13 = -60392LL;
  v_5 = (unsigned long long)p_17;
  result = (unsigned short)41726;
  v = (unsigned long long)(((int)v_19 * (int)p_11 + (int)(~ p_11)) / (
                           (int)v_15 + 679));
  while (((18446744073709551524ULL - p) << (- v & 63ULL)) / (v_5 / (unsigned long long)(
                                                             (p_7 - (unsigned int)p_9) + 255U) + 129ULL) == (unsigned long long)(
         (int)(~ p_11) / -27558)) {
    v_5 = (long long)v_15 & v_13 / 27148LL;
    v_13 = (long long)(((unsigned long long)((int)result ^ (int)p_17) + 
                        v_5 / (v_5 + 25ULL)) * (178812366298987911ULL / (unsigned long long)(
                                                p_7 + 450U)));
    v_5 = (unsigned long long)((double)(- (! p)) * -2.07702621645e+35);
    v_5 = ! p - ~ (- v_5);
  }
  while_0_break: ;
  return result;
}


