#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 898522077
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, long long p_5, char p_7, short p_11[1][3][5],
                  long long p_13[3][3])
{
  int v_9;
  signed char v;
  unsigned char result;
  result = (unsigned char)((int)p_7 * -85);
  v_9 = (int)(! p_13[1][2]);
  v = (signed char)(((((int)((unsigned char)-6338173440.f) | (int)result) - (int)(- p_7)) - v_9) ^ (int)p_11[0][1][4]);
  result = (unsigned char)((long long)(- ((unsigned long)(p + (int)v) * 4294948390UL)) / (
                           p_5 + 922LL));
  return result;
}


