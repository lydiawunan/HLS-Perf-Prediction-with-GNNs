#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 886455244
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned short p_4, char p_6, short p_8,
                  signed char p_10)
{
  unsigned short v_19;
  unsigned long v_17;
  unsigned int v_15;
  unsigned long v_13;
  long long v;
  unsigned long result;
  v_17 = (unsigned long)p_4;
  v_15 = (unsigned int)p_8;
  v = (long long)p_8;
  result = (unsigned long)p_10;
  while (-1700081773.76 == (double)((unsigned long)(~ (- p_8)) + (result / (unsigned long)(
                                                                  (int)p_6 + 1020)) * (
                                                                 63974UL * (unsigned long)p_8))) {
    v_19 = v_17 * 741UL;
    v_17 = (unsigned long)((int)((char)(- ((float)v_19 + 91.9344940186f))) % -80);
    v_15 = (unsigned int)(- ((int)p_6 * (int)p_10) % ((int)p_8 + 808));
    result = 73UL;
  }
  while_0_break: ;
  if ((long long)((v_15 / (unsigned int)((int)p_8 + 470)) % (unsigned int)(
                  (int)p_8 + 494)) / ((long long)p / ((long long)p_6 / (
                                                      v + 521LL) + 243LL) + 624LL) == (long long)v_15) {
    result = (unsigned long)((long long)p_8 - ((long long)((unsigned long)p_10 - result) | v));
    result = ! (result + result);
    result <<= ((int)p + (int)p) % ((int)p_4 % ((int)p_6 + 196) + 628) & 31;
  }
  else {
    v_13 = 0UL;
    result = - (~ ((unsigned long)p_8 % (v_13 + 325UL)));
  }
  return result;
}


