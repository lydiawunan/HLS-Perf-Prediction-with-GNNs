#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 534870336
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, long long p_7[3][1][2])
{
  int v_5;
  unsigned char v;
  signed char result;
  v_5 = (int)p_7[0][0][0];
  result = (signed char)((-794897432L * (long)v_5) * 915485376L << 19);
  v = (unsigned char)(~ (! (-107L - p) - (long)(13327 / (30156 / ((int)result + 414) + 202))));
  result = (signed char)v;
  return result;
}


