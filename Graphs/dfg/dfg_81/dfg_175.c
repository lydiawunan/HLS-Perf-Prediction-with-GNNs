#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 358937481
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p[4], unsigned long long p_4, unsigned int p_7,
                unsigned int p_9, unsigned char p_11[2][2][2])
{
  unsigned long v_15;
  int v_13;
  unsigned long long v;
  signed char result;
  v_15 = (unsigned long)p_11[0][0][0];
  result = (signed char)p_4;
  v_13 = (int)((unsigned long long)(- (~ (~ v_15))) * ((113ULL / (p_4 + 582ULL) - (unsigned long long)result) * (unsigned long long)(~ (
                                                       p_7 - (unsigned int)p[2]))));
  v = (unsigned long long)(- (p_9 - (unsigned int)(((int)p_11[1][1][1] | v_13) / (
                                                   (int)(! result) + 330))));
  result = (signed char)(p[1] + (float)(- ((unsigned long long)(p[2] * (float)p_4) - (
                                           v ^ (unsigned long long)p_7))));
  return result;
}


