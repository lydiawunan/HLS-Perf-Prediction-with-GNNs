#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 638850463
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, short p_4[3][5], char p_6, unsigned char p_9,
         unsigned long p_11[3])
{
  long long v_13;
  short v;
  long result;
  v_13 = 7463LL;
  v = (short)((-38153918268LL % (v_13 + 43LL)) * (long long)p_11[1]);
  if ((unsigned long)((int)(~ v) % ((int)p_9 + 345)) > 50254UL % (! (
                                                                  35938UL / (
                                                                  p_11[1] + 415UL)) + 953UL)) 
    result = (long)p;
  else result = (long)(! p_4[2][3]);
  return result;
}


