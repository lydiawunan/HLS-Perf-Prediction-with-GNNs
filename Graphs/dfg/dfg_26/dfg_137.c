#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 872530178
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, unsigned short p_7, char p_11)
{
  float v_9;
  float v_5;
  unsigned char v;
  long long result;
  result = -64416LL;
  v_9 = (float)p_11;
  v = (unsigned char)((int)p & ((121 - (int)p) / ((int)p_7 + 140)) * (int)(- v_9));
  v_5 = (float)(4294937247UL - ((unsigned long)p + 2UL));
  result = (long long)v - result * (long long)((unsigned int)p % 602014088U - (unsigned int)(
                                               (int)p % ((int)((char)v_5) + 173)));
  return result;
}


