#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 635812018
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, unsigned char p_5[4], signed char p_11,
                   unsigned long p_15)
{
  double v_19;
  char v_17;
  long v_13;
  unsigned char v_9;
  long v_7;
  long long v;
  unsigned short result;
  v_19 = (double)p;
  v_17 = (char)73;
  v_13 = 161201856L;
  v = 59191LL;
  v_9 = (unsigned char)(- (- (- (- v_19))));
  v_7 = (long)((- ((double)v + -1.79396327133e+38) * (double)(~ v + -52LL)) * (double)(
               ((unsigned long long)v_13 + 25563652967ULL) % (unsigned long long)(
               ((p_15 + (unsigned long)p_11) & (unsigned long)((int)v_9 % (
                                                               (int)v_17 + 244))) + 677UL)));
  v = (long long)(((long)(~ ((int)p | (int)p_5[1])) * ~ (! v_7)) % (long)(
                  (int)(~ (! v_9)) / (~ ((int)p_11 % 11008) + 522) + 814));
  result = (unsigned short)v;
  return result;
}


