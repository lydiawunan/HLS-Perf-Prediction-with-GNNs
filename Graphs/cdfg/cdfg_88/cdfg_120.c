#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 394595642
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, unsigned long p_4,
                       unsigned int p_6, long p_8[5][1][3],
                       unsigned short p_10)
{
  double v_13;
  signed char v;
  unsigned long long result;
  v_13 = (double)p;
  v = (signed char)((double)((unsigned long)(- p_10) | p_4) - v_13);
  if ((unsigned long)(- (~ p_6)) <= (unsigned long)((long)-4292415642.63 / (
                                                    (p_8[0][0][2] + (long)(
                                                     (int)p_10 * (int)v)) + 761L))) 
    result = 743379054ULL;
  else result = 60734ULL;
  return result;
}


