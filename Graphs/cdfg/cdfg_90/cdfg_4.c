#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 128529462
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, int p_9, unsigned long p_11, long p_15)
{
  unsigned long v_19;
  long long v_17;
  long v_13;
  long long v_6;
  long v_4;
  char v;
  unsigned char result;
  v_17 = -5324LL;
  v_13 = p_15;
  v_6 = (long long)p;
  v_4 = -937824199L;
  v = (char)75;
  result = (unsigned char)171;
  while (- (v_6 >> ((int)p & 63)) % (long long)(238 * (p_9 / ((int)result + 892)) + 847) >= (long long)(- (
         4294929634UL % (p_11 + 108UL) + (unsigned long)(! v)))) {
    v_19 = (unsigned long)v_13 % 3715987329UL;
    v = (char)(v_19 % (unsigned long)(~ ((long)-2.09892210674e+38 - p_15) + 194L));
    v_13 = (long)((971297076LL - v_17 * 30LL) / ((v_6 * (long long)p_15 - (long long)(
                                                  (long)p_9 + p_15)) + 937LL));
    result = (unsigned char)p_15;
  }
  while_0_break: ;
  result = (unsigned char)((long long)((long)(-12 ^ (int)result) ^ -1032516787L) - (
                           (long long)v + (long long)v_4 * v_6));
  return result;
}


