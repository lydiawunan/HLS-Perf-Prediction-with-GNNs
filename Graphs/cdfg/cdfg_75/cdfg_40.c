#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 993227038
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, short p_4, unsigned long long p_7, long p_11,
                  signed char p_13)
{
  long v_17;
  unsigned int v_15;
  unsigned short v_9;
  long v;
  unsigned char result;
  v_17 = -1063716168L;
  v_15 = (unsigned int)p_13;
  v_9 = (unsigned short)p;
  v = (long)p_7;
  result = (unsigned char)48;
  while (((p_7 + 18446744073709551494ULL) * (unsigned long long)(~ v_15) & (unsigned long long)p_11) <= ! (~ (
         p_7 / (unsigned long long)((int)v_9 + 767)))) {
    result = (unsigned char)((int)7076759552.f / (((int)p + -24886) + 486));
    v = (long)(-2.86699767853e+38 / ((double)(212L / ((v_17 & 127L) + 870L)) + 870.));
    v_9 = (unsigned short)p_7;
  }
  while_0_break: ;
  if (! (39359UL * (unsigned long)v) << (p_7 % (unsigned long long)((int)(~ result) + 382) & 31ULL) == (unsigned long)(
      ! ((long)v_9 / (p_11 + 898L)) * (long)p_13)) result = (unsigned char)(
                                                   p * (double)p_4);
  else {
    result = (unsigned char)(4294962470. * p);
    result = result;
  }
  return result;
}


