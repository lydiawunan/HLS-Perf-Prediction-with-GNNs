#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 922532738
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned long p_5, float p_9[5],
                  unsigned long long p_11)
{
  unsigned long v_13;
  unsigned char v_7;
  char v;
  unsigned char result;
  v_13 = p_5;
  v_7 = (unsigned char)v_13;
  v = (char)(! (~ ((461588705UL + (unsigned long)v_7) >> ((unsigned long long)p_9[1] % (
                                                          p_11 + 885ULL) & 31ULL))));
  result = (unsigned char)p_5;
  result = (unsigned char)((int)result ^ ((int)v - p));
  return result;
}


