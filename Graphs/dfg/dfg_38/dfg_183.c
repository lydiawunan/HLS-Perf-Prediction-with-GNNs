#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 243773509
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned int p_11, long p_13,
                   double p_15[4][2][2])
{
  char v_9;
  signed char v_6;
  unsigned char v_4;
  unsigned char v;
  unsigned short result;
  v_9 = (char)-20;
  v_6 = (signed char)(- (- ((double)((int)v_9 + 40) / ((double)p_13 / (
                                                       p_15[2][1][0] + 753.) + 337.))));
  v_4 = (unsigned char)((unsigned long long)v_9 % ((4680ULL ^ (unsigned long long)p_11 * (
                                                              (unsigned long long)p_13 + 833958706ULL)) + 860ULL));
  v = (unsigned char)p;
  result = (unsigned short)((int)v / ((int)(~ (~ v_4)) / (((int)v_6 + (int)p) % -27596 + 204) + 82));
  return result;
}


