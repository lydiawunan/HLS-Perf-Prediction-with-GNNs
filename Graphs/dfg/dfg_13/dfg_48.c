#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 549545160
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, double p_7, short p_9, unsigned char p_11, short p_15)
{
  unsigned int v_13;
  float v_5;
  char v;
  long long result;
  v_13 = (unsigned int)p_15;
  result = (long long)((unsigned long)(142743447U + (v_13 + (unsigned int)p_15)) / (unsigned long)(
                       ! p + 186L) + (unsigned long)p_9);
  v = (char)(! p_11);
  v_5 = (float)(((long long)((int)((short)(p_7 * -21007.)) * (int)p_9) / (
                 result + 379LL)) * (long long)((unsigned long)(- p_11) * 876417028UL));
  result = (long long)(- (- ((float)((long)v & p) + - v_5)));
  return result;
}


