#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 36875538
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, unsigned int p_5, unsigned short p_7, char p_9,
         char p_11)
{
  unsigned long v_13;
  long long v;
  char result;
  result = p_11;
  v_13 = (unsigned long)result;
  v = (long long)((unsigned long)(- ((int)(- p_9) | (int)p_11 * (int)p_7)) + v_13);
  v = v;
  result = (char)((double)(p * ((v + (long long)p_5) + (long long)p_7)) / (
                  - (-2797370857.38 / ((double)(- p_9) + 648.)) + 400.));
  return result;
}


