#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 878818916
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned long long p_9)
{
  char v_7;
  signed char v_5;
  float v;
  signed char result;
  v_7 = (char)p_9;
  v_5 = (signed char)v_7;
  v = (float)(p + ((unsigned int)v_5 / (p + 3U)) % (unsigned int)(! (
                                                                  (int)((signed char)865.477172852f) + 126) + 249));
  result = (signed char)(- (- (- v)));
  return result;
}


