#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 195027770
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, short p_7, unsigned short p_9,
                  unsigned int p_11, double p_21)
{
  signed char v_19;
  long v_17;
  char v_15;
  unsigned long long v_13;
  unsigned long long v_4;
  unsigned int v;
  unsigned char result;
  v_19 = (signed char)p_11;
  v_17 = 63988L;
  v_15 = (char)p_7;
  v_13 = (unsigned long long)p_9;
  v_4 = 18446744073049592566ULL;
  v = 4294903941U;
  result = (unsigned char)p_7;
  while ((unsigned long long)((unsigned int)((int)p - (int)p_7) * ((unsigned int)(~ p_9) - (
                                                                   p_11 | 4294937495U))) < 
         4294923087ULL * (18446744073709551538ULL ^ (v_13 | 27774ULL))) {
    v_17 = (long)v_19 * (v_17 * 29194L);
    v_4 = (unsigned long long)(0U % (816367478U % (unsigned int)(((int)p - 44635) + 558) + 418U));
    v_19 = (signed char)((unsigned int)(109. - p_21 * p_21) - ((unsigned int)v_15 + v) % 739U);
    v_13 = 18446744072850237996ULL - 0 / (unsigned long long)((int)result / (
                                                              (int)v_15 + 941) + 49);
  }
  while_0_break: ;
  result = (unsigned char)(~ (- ((unsigned long long)v % (v_4 + 880ULL))));
  return result;
}


