#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1019044922
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, double p_4, unsigned long p_7, char p_9)
{
  double v_11;
  long long v;
  signed char result;
  v_11 = -932.636120479;
  result = (signed char)p_9;
  v = (long long)((unsigned long)(-66 ^ (int)result) % (p_7 * (unsigned long)(- (
                                                        (double)p_9 * v_11)) + 639UL));
  result = (signed char)(~ ((unsigned long long)result + 241850906ULL));
  v = (long long)(- ((unsigned long long)(~ ((long long)result * -1012065964LL)) ^ 
                     ((unsigned long long)v * p) % ((unsigned long long)(- p_4) + 34ULL)));
  result = (signed char)(! ((p % (unsigned long long)((int)result + 919) + (unsigned long long)(
                             (int)((unsigned char)p_4) % 181)) % (unsigned long long)(
                            v + 422LL)));
  return result;
}


