#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 366800443
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p[4][2], long p_5, float p_7, unsigned int p_9,
          int p_13)
{
  double v_11;
  signed char v;
  float result;
  v_11 = 1.0486674143e+38;
  v = (signed char)81;
  if ((unsigned long)((float)(64 << (((long)v & p_5) & 7L)) * (4265970176.f - - p_7)) >= 
      (29216UL + (unsigned long)(! p_9)) >> ((unsigned long)(- v_11 / (double)(
                                                             (float)p_13 / -212.303405762f + 937.f)) & 31UL)) 
    result = (float)32121ULL;
  else result = (float)(! (~ (~ p[3][0])));
  return result;
}


