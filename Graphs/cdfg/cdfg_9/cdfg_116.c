#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 548436836
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, double p_4[4], short p_6, long long p_9[2][1],
                long long p_13)
{
  long v_11;
  signed char v;
  signed char result;
  v = (signed char)p;
  v_11 = (long)(! (-22704LL / (! p_13 + 495LL)));
  if (((unsigned long long)v - 18446744073709493109ULL) / (unsigned long long)(
      82LL % ((3285276436LL + p_9[1][0]) + 215LL) + 581LL) < (unsigned long long)(
      (((long long)v_11 * p_13) / (long long)((int)(~ p) + 692)) / ((long long)(- (
                                                                    -1.21770119667f + (float)p_13)) + 489LL))) 
    result = (signed char)(- (~ (~ 4294961729UL)));
  else result = (signed char)(- (((double)p / (p_4[1] + 450.)) * (double)p_6));
  return result;
}


