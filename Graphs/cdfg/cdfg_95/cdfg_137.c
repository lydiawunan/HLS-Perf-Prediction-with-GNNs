#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 343147210
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p)
{
  short v_11;
  unsigned char v_8;
  double v_6;
  char v_4;
  char v;
  long result;
  v_11 = (short)p;
  v_8 = (unsigned char)p;
  v_6 = (double)p;
  v = (char)-120;
  result = 6333L;
  v_4 = (char)((double)v_8 / (- (v_6 + 14360.) + 752.));
  while (9 < (int)v) {
    result = (long)(-4216. - - ((double)v_4 * v_6));
    v_8 = (unsigned char)(~ (- (! p)));
    v = (char)((long)(! ((int)v_8 % 57)) / (! (p % (long)((int)v_11 + 36)) + 268L));
  }
  while_0_break: ;
  return result;
}


