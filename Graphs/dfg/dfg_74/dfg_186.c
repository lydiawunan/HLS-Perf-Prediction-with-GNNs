#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 382862295
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, long long p_11[3][5])
{
  double v_9;
  float v_6;
  signed char v_4;
  char v;
  unsigned int result;
  v_9 = (double)p_11[2][4];
  v_6 = (float)(char)77;
  v = ! p;
  v_4 = (signed char)((long long)(- ((-11450 & (int)v_6) - (int)p)) - 
                      (long long)(- v_9) % (~ (- p_11[2][3]) + 561LL));
  result = (unsigned int)((int)((short)((double)v - 876.300680416 * (double)v_4)) % -28985);
  return result;
}


