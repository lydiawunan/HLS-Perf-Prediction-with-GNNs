#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 98758540
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, float p_9[3], char p_11,
                  unsigned int p_15[2][2][4])
{
  signed char v_13;
  int v_7;
  double v_5;
  char v;
  unsigned long result;
  v_13 = (signed char)-94;
  v_5 = 1.36787316842e+38;
  v_7 = (int)((long long)p_15[1][1][3] + (-40093LL + -38276LL % (long long)(
                                                     (p + p_15[0][1][0]) + 561U)));
  v = (char)(! (! (- p_15[1][0][0]) % ((unsigned int)((double)p_9[2] * -481.442013109 - (double)(
                                                      (unsigned int)v_5 * p_15[0][0][2])) + 663U)));
  v_5 = (double)(((unsigned int)(- v_7) * ! p - (unsigned int)p_9[0]) % (unsigned int)(
                 ((int)(~ (~ p_11)) - (int)v_13) + 439));
  result = (unsigned long)(- ((double)((unsigned int)v / (p + 121U) & 20541U) / (
                              v_5 / 512774155. + 227.)));
  return result;
}


