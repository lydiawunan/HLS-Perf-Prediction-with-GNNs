#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 188637309
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, int p_5[4])
{
  long v_9;
  unsigned int v_7;
  float v;
  unsigned char result;
  v_9 = 993038489L;
  v_7 = (unsigned int)(96184710UL / (unsigned long)(! (~ p_5[3]) + 442));
  v = (float)v_7;
  result = (unsigned char)((long long)((unsigned int)(p_5[1] >> 8UL) * v_7) * (long long)(! (! (
                           40522UL % (unsigned long)(v_9 + 430L)))));
  result = (unsigned char)(- (! ((unsigned long long)result % 42235ULL) * (unsigned long long)(
                              (-21206 - (int)((short)v)) * ! p)));
  return result;
}


