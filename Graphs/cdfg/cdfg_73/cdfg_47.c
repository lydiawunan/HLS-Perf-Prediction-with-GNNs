#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 707238512
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, char p_4, unsigned char p_13, unsigned long long p_15,
        float p_17)
{
  unsigned long long v_11;
  long long v_9;
  long long v_7;
  unsigned int v;
  int result;
  v_11 = 717919092ULL;
  v_7 = -19373LL;
  v = (unsigned int)p;
  result = (int)p_4;
  if (~ (- p_15 / (unsigned long long)(((long)p_17 - 368540888L) + 648L)) <= 
      (unsigned long long)(result << ((int)p_4 & 31)) / (! p_15 + 85ULL) + (
      38437ULL ^ (unsigned long long)p_13)) {
    v_9 = (long long)v_11;
    result = (int)((unsigned int)(3014 / ((int)((short)((double)p_4 / 5819638841.88)) + 102)) - (
                   (v >> (v_7 & 31LL)) >> (v_9 % (v_7 + 217LL) & 31LL)));
    result = ! result;
  }
  else result = (int)(- p_13);
  result = (int)(- ((double)result + p / (p + 604.)));
  return result;
}


