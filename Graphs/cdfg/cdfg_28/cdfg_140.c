#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 142085171
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, char p_5, unsigned long long p_9, short p_11)
{
  unsigned long long v_13;
  long long v_7;
  double v;
  signed char result;
  v_13 = 413936446ULL;
  v_7 = 41277LL;
  v = (double)(0ULL % (v_13 + 130ULL));
  if ((unsigned long long)(- (- v)) != ((unsigned long long)(p - (unsigned int)p_5) + (
                                        (unsigned long long)v_7 + p_9)) * 19852ULL) 
    result = (signed char)96;
  else result = (signed char)0;
  return result;
}


