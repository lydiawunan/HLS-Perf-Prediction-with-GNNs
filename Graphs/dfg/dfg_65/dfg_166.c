#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 275649533
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, long long p_11)
{
  unsigned int v_9;
  long v_6;
  signed char v_4;
  short v;
  char result;
  v_9 = 42569U;
  v_4 = (signed char)(~ (! (16433LL - ! p_11)));
  v = (short)18;
  v_6 = (long)v_9;
  result = (char)(((long)(((int)v * 8003) / (87 / ((int)v_4 + 240) + 633)) - 1073504138L) / (
                  (! v_6 - (long)(~ p)) + 189L));
  return result;
}


