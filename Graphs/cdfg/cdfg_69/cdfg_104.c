#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 541029255
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, unsigned long long p_5, float p_9,
                signed char p_11, unsigned char p_15)
{
  double v_13;
  int v_7;
  float v;
  signed char result;
  v_13 = (double)p_5;
  if ((unsigned long long)((int)p_11 | (1 ^ (int)(v_13 * v_13))) < (unsigned long long)p_15 - ! p_5) {
    v = (float)(-3857107990LL);
    result = (signed char)((unsigned long long)((long long)((int)((short)v) ^ 27343) - (
                                                p - p)) * (4294961737ULL & 
                                                           p_5 / 23295ULL));
  }
  else {
    v_7 = (int)p_9;
    result = (signed char)(v_7 | -786263848);
  }
  return result;
}


