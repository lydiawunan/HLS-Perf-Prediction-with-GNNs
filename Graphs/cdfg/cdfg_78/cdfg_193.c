#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 47934421
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, long long p_4[1], float p_6[3][4], long long p_8,
              int p_11)
{
  unsigned short v_13;
  unsigned int v;
  long long result;
  v_13 = (unsigned short)62437;
  v = (unsigned int)((((int)v_13 * 813739233) % ((int)p_6[0][2] + 609)) % 340);
  if (((long long)(! (842026653UL / ((unsigned long)-687.738769531f + 861UL))) ^ (
       (long long)p_6[1][0] + (p_8 + (long long)v))) < (long long)(5 + - (- p_11))) 
    result = (long long)p;
  else result = ~ (! p_4[0]);
  return result;
}


