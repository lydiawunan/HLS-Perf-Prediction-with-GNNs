#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 145508803
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, unsigned short p_4, long p_6[4][1][5],
        unsigned long long p_8, unsigned long p_10)
{
  long v;
  int result;
  v = 793676396L;
  result = (int)(p_8 >> ((-51658L / (v + 728L) & (long)(-28583 + (int)p_4)) & 63L));
  if (18446744072245780151ULL % ((unsigned long long)(- (-221.901763916f * (float)result)) + 795ULL) < (unsigned long long)(~ p_6[1][0][2])) 
    result = -22938;
  else result = -93;
  return result;
}


