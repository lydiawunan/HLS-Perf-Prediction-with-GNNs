#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 823353026
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned int p_5[4], float p_7, long p_9, char p_13)
{
  signed char v_15;
  unsigned short v_11;
  signed char v;
  long result;
  v_15 = (signed char)-90;
  v_11 = (unsigned short)p_7;
  v = (signed char)((int)p_13 ^ (-499759840 - ((int)v_15 - (int)p)) / 73);
  v = (signed char)(! (- (- ((int)v % ((int)v_11 + 962)))));
  v = (signed char)((long)(! (! p)) % (((long)((double)(! p_5[0]) + -45097366.3854) + (
                                        ((long)p_7 - p_9) >> ((int)v & 31))) + 873L));
  result = (long)(! (~ ((int)v % 111)));
  return result;
}


