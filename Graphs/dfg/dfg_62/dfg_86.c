#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 540402699
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, unsigned long p_5, unsigned short p_11,
              unsigned long long p_15[5][3])
{
  long long v_13;
  unsigned short v_9;
  long long v_7;
  double v;
  long long result;
  v_13 = 648664786LL;
  v_7 = 105655212LL;
  v = (double)(194 >> (p_15[4][2] & 7ULL));
  v_9 = (unsigned short)(~ ((((long long)p_5 + 60633LL) & (long long)p_11) ^ 
                            0LL / ((-22262LL + v_13) + 309LL)));
  result = (long long)((int)(! p) + (int)(63.901758045 - v) * ((int)((signed char)v) * 24)) ^ (
           - ((long long)p_5 * v_7) - (long long)((p_5 + (unsigned long)v_9) & (unsigned long)(
                                                  -623486978L - (long)p)));
  return result;
}


