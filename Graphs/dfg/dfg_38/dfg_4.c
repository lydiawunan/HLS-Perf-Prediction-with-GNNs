#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 625756890
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, long p_7, float p_9, unsigned int p_11,
         short p_15[2][2])
{
  long long v_13;
  float v_4;
  unsigned int v;
  char result;
  v = 4294957668U;
  v_13 = (long long)(- (~ (- (! p_15[1][1]))));
  result = (char)(- (- (~ (64 >> (p_11 & 7U)))));
  v_4 = (float)((52678LL % (long long)(((unsigned int)p_9 << (p_11 & 31U)) + 142U)) % (
                ! ((long long)p_11 * v_13) + 327LL) - (long long)result);
  result = (char)((unsigned long)v * ((unsigned long)(- v_4) % (((unsigned long)p | (unsigned long)p_7) + 164UL)));
  return result;
}


