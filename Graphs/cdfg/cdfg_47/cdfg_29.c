#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 252009473
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, short p_4[2][2][1], unsigned short p_6,
         signed char p_8, float p_10)
{
  long long v_15;
  double v_13;
  unsigned long v;
  long result;
  v_15 = (long long)p_10;
  v_13 = (double)p;
  result = (long)p_6;
  v = (unsigned long)((long long)(~ ((int)p % ((int)((unsigned short)v_13) + 1004))) + 
                      -32LL / (((long long)result + v_15) + 975LL));
  if ((float)(! (~ (- p_6))) < (float)(46454L - (long)p_8) + p_10 / (
                                                             (float)v + 247.f)) 
    result = (long)(! (~ (-15 % ((int)p + 544))));
  else result = (long)p_4[0][1][0];
  return result;
}


