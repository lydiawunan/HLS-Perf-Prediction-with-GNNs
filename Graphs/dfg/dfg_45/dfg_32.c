#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 773523678
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p[5][4], unsigned long p_5, signed char p_7, float p_9,
         long long p_11)
{
  char v;
  char result;
  result = (char)(((long long)p_9 | p_11) + (long long)((float)(! p_5 - 105UL) + - (
                                                        5029792256.f - p_9)));
  v = (char)(~ (65 >> (((unsigned long long)p_5 + 37685ULL) & 7ULL)) / (
             (int)p_7 + 344));
  result = (char)((unsigned long long)(277 * ((int)(! result) % ((int)(- v) + 378))) ^ 
                  (unsigned long long)p[3][3] * ((unsigned long long)(~ p[0][1]) / 43220ULL));
  return result;
}


