//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 401994061
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, unsigned long long p_7, unsigned long p_9[4],
                 long p_11)
{
  long long v_13;
  signed char v_5;
  float v;
  unsigned int result;
  v_13 = (long long)p_7;
  v_5 = (signed char)(- (! ((p_7 + (unsigned long long)p_9[0]) + (unsigned long long)(
                            (long long)p_11 * v_13))));
  v = (float)3997653475U;
  v = (float)(((p / -574722774.) * (double)(123 % ((int)v_5 + 287)) - (double)(
               21293610170ULL - p_7)) * (double)(213 & ((int)((unsigned char)(- v)) ^ 227)));
  result = (unsigned int)(- p - (double)(4294935113UL * ((unsigned long)(
                                                         p + (double)v) + 977063906UL)));
  return result;
}


