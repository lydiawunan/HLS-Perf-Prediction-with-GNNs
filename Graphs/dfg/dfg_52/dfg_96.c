#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 436077929
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned char p_7, short p_13)
{
  unsigned char v_19;
  unsigned long v_17;
  unsigned long v_15;
  long v_11;
  double v_9;
  double v_5;
  unsigned long v;
  short result;
  v_19 = p_7;
  v_17 = (unsigned long)p;
  v_15 = (unsigned long)p;
  v_11 = 899960526L;
  v_9 = (double)p_7;
  v = (unsigned long)p;
  v_11 = (long)((18446744073709539455ULL - (unsigned long long)((unsigned long)(- p) * (
                                                                v % 4294947781UL))) + (unsigned long long)(
                0 / ((unsigned int)((-410.747043866 + (double)v_11) * (double)(
                                    (int)v_19 * 91)) + 836U)));
  v_5 = (double)(- (((unsigned long)p_13 % (v_15 + 316UL)) % (v_17 * (unsigned long)v_19 + 831UL)) - v_15);
  v = (unsigned long)p_7;
  result = (short)(((unsigned long)(p | (long)((double)v - v_5)) % (unsigned long)(
                    (unsigned int)p_7 % (60544U % ((unsigned int)v_9 + 650U) + 565U) + 852U)) % (unsigned long)(
                   ! v_11 / -209L + 787L));
  return result;
}


