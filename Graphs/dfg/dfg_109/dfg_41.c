#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 255145105
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, unsigned char p_4, long long p_7[4],
                       char p_13, char p_15)
{
  short v_11;
  double v_9;
  unsigned char v;
  unsigned long long result;
  v_9 = 1.53018702528e+38;
  result = (unsigned long long)p_7[0];
  v = (unsigned char)(12870 & (int)p_15);
  v_11 = (short)(~ ((unsigned long long)(~ p_13) / ((result + 18446744073709551615ULL) + 410ULL)) - (unsigned long long)p_7[3]);
  v = (unsigned char)(((double)(! p_7[0]) * v_9) * (double)((int)(~ v_11) * (int)(! v)) - (double)p_7[3]);
  result = (unsigned long long)((float)(- (- p)) + (float)((unsigned int)p_4 - 
                                                           (unsigned int)v % (
                                                           p + 204U)) / 1.75377797384e+38f);
  return result;
}


