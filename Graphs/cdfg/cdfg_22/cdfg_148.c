#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 239377912
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, short p_5, long p_7, int p_9[1][3],
              float p_11)
{
  unsigned long long v_17;
  unsigned long long v_15;
  unsigned long long v_13;
  unsigned long long v;
  long long result;
  v_17 = (unsigned long long)p_7;
  v_15 = 18446744073709537773ULL;
  v_13 = 18446744073709521639ULL;
  if ((unsigned long long)((long)((float)(~ v_13) - -9.25534820557f) + (
                           38862L - (p_7 & 98L))) >= (unsigned long long)p + - (
                                                     v_15 ^ v_17)) v = (unsigned long long)p;
  else {
    result = (long long)(-(signed char)86);
    v = (unsigned long long)(! result);
  }
  result = (long long)(! (18446744073709540548ULL % (~ v + 1023ULL)));
  return result;
}


