#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 462120458
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, long long p_9[3][4])
{
  unsigned char v_7;
  unsigned short v_4;
  unsigned short v;
  long long result;
  v_7 = (unsigned char)p;
  result = - (((long long)(- v_7) - ! p_9[2][3]) | 39926LL);
  v = (unsigned short)result;
  v_4 = (unsigned short)p;
  result = (long long)(! ((unsigned int)v * ((unsigned int)((int)v_4 * -66) + 
                                             p / (unsigned int)((int)v + 520))));
  return result;
}


