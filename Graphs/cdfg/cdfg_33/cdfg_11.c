#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 379250539
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, int p_5, double p_15, float p_17)
{
  unsigned char v_13;
  signed char v_11;
  unsigned short v_9;
  unsigned int v_7;
  long long v;
  long result;
  v_11 = (signed char)121;
  v_9 = (unsigned short)p_15;
  v_7 = (unsigned int)p_17;
  v = (long long)p;
  result = (long)p;
  v_13 = (unsigned char)p_17;
  while (! v * (long long)(- p) - (long long)(! (! p_5)) > (long long)(- (! v_7))) {
    v_11 = (double)v_13 - ((double)v_11 + (double)v_9 / 355.068338724);
    v_13 = (unsigned char)(~ (~ ((unsigned int)p_15 * 513979578U)));
    v_7 = (unsigned int)((long)p_5 / (20049L / (long)(p_5 % ((int)p_15 + 486) + 900) + 653L));
    v = (long long)(- (-(unsigned short)33750));
  }
  while_0_break: ;
  return result;
}


