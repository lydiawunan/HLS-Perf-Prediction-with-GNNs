#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205089297
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, long long p_5, unsigned int p_7[5][2][3], char p_9,
              int p_11)
{
  unsigned int v_15;
  unsigned long long v_13;
  signed char v;
  long long result;
  v_15 = 420539835U;
  v_13 = (unsigned long long)p_9;
  if (0ULL != (unsigned long long)(((unsigned long)p_11 - 17933UL) | (unsigned long)(
                                   p % -108L)) - ! v_13 / (unsigned long long)(
                                                 v_15 + 694U)) v = (signed char)(
                                                               p_5 * (long long)(
                                                               ! p_7[4][0][2] + 
                                                               p_7[2][1][1] * (unsigned int)-3701573120.f));
  else v = (signed char)p_9;
  result = ! (((long long)p % -228376168LL) % (long long)((int)v % 35 + 149));
  return result;
}


