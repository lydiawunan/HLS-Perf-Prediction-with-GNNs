#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 416100135
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned long long p_4, long long p_9)
{
  unsigned char v_7;
  unsigned long v;
  char result;
  v_7 = (unsigned char)p_9;
  v = 62637UL;
  v_7 = (unsigned char)((unsigned long long)(! (511908874LL + (long long)(
                                                (unsigned long)v_7 + v))) / (
                        - p_4 * (unsigned long long)(! p_9) + 160ULL));
  result = (char)v_7;
  result = (char)((unsigned long long)(~ ((int)result ^ (int)p)) * p_4 | (unsigned long long)v);
  return result;
}


