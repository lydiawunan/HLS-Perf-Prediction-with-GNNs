#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 460726495
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, unsigned long p_7)
{
  long v_11;
  unsigned short v_9;
  long v_5;
  unsigned char v;
  unsigned int result;
  v_11 = -486017141L;
  v_9 = (unsigned short)p;
  v_5 = (long)((unsigned long)-4018059285.42 - ((- p_7 & (unsigned long)v_9) ^ 
                                                p_7 * (unsigned long)(- v_11)));
  v = (unsigned char)v_5;
  result = (unsigned int)v;
  result = (unsigned int)(((unsigned long long)((unsigned int)(49925 - (int)p) - 
                                                result / (result + 468U)) % 1066546680ULL) / (unsigned long long)(
                          result + 53U));
  return result;
}


