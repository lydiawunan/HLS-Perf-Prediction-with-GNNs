#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 706499475
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p[3], int p_7, unsigned char p_9[5], long long p_11,
         signed char p_13)
{
  float v_5;
  unsigned char v;
  char result;
  v = (unsigned char)(((long long)(p_7 / ((int)p_9[4] + 982)) - (29844LL | p_11)) * (long long)(
                      (double)(~ p_13) - p[2]) - (long long)(~ (p_7 & 
                                                                (int)p_9[4] % (
                                                                (int)p_9[3] + 776))));
  v_5 = (float)1043934224;
  result = (char)(- ((float)(-3 % ((int)v / ((int)((unsigned char)p[2]) + 346) + 429)) / (
                     v_5 + 185.f)));
  return result;
}


