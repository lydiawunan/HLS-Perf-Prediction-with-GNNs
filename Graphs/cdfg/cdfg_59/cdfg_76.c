#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 155797440
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, short p_5, long p_9, double p_11, signed char p_13)
{
  unsigned short v_19;
  unsigned int v_17;
  short v_15;
  short v_7;
  double v;
  long result;
  v_19 = (unsigned short)p_5;
  v_17 = (unsigned int)p_11;
  v_15 = (short)-26060;
  v = (double)p;
  if ((unsigned long)(- ((long)p_13 % (p_9 + 1004L))) * (unsigned long)(~ (
      (unsigned int)v_15 - v_17)) < (unsigned long)(! (v_17 / (unsigned int)(
                                                       (int)p_13 + 575) + (unsigned int)v_19))) 
    result = (long)(-53857689600.f - p);
  else {
    v_7 = (short)(47084 * (int)((unsigned short)p_11));
    result = (long)(- (v - (double)p_5) * (double)(((unsigned long long)v_7 / 18446744073539569423ULL) / (unsigned long long)(
                                                   p_9 + 353L)));
    result = (long)(~ (! (5389032ULL - (unsigned long long)result)));
  }
  result = ~ (result | ~ result);
  return result;
}


