#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 827599663
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, unsigned int p_7, long p_11, long long p_13,
                  unsigned char p_15)
{
  unsigned int v_17;
  signed char v_9;
  long v_5;
  char v;
  unsigned char result;
  v_17 = 820280000U;
  v_9 = (signed char)p_11;
  result = (unsigned char)218;
  if ((long long)v_9 * ((long long)(969681478L ^ (long)v_9) + - p_13) > (long long)v_17) 
    result = (unsigned char)11;
  else {
    v_5 = (long)(((long long)(- p_7) - (long long)p_11 * p_13) / (long long)(
                 (int)(~ (! p_15)) + 339));
    v = (char)((unsigned long)(- (~ v_5)) % (unsigned long)(~ p_7 % (unsigned int)(
                                                            (int)result / (
                                                            (int)v_9 + 883) + 381) + 821U));
    result = (unsigned char)(! ((unsigned long long)(- p) % ((unsigned long long)v % 18446744073709524194ULL + 187ULL)));
  }
  result = result;
  return result;
}


