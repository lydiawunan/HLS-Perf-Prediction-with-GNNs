#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 789991786
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, signed char p_4[5], signed char p_11)
{
  unsigned char v_9;
  long v_7;
  unsigned char v;
  int result;
  v_9 = (unsigned char)p_4[4];
  v_7 = (long)p;
  v = (unsigned char)(134366067ULL - (unsigned long long)((unsigned long)(
                                                          v_7 / (long)(
                                                          (int)v_9 + 1012)) / (
                                                          ((unsigned long)p_11 ^ 55859UL) + 905UL)));
  if ((int)v == (int)((unsigned char)(- (-8243183950.94 / ((double)(- p_4[0]) + 733.))))) {
    result = (int)(! 0UL);
    result = ! (- (result % ((int)p + 942)));
  }
  else result = (int)(- p);
  return result;
}


