#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 655648154
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, unsigned int p_5, unsigned int p_7[5][5],
                unsigned long p_9, char p_11)
{
  unsigned char v_13;
  float v;
  signed char result;
  v_13 = (unsigned char)8493516737.72;
  v = (float)(- ((unsigned int)v_13 % (p_7[0][3] % (unsigned int)((114 + p) + 472) + 817U)));
  result = (signed char)-4;
  result = (signed char)((unsigned int)((int)(~ (~ result)) >> ((p & (int)(- v)) & 7)) / (
                         (- p_5 - ((p_7[2][4] + 98U) << ((p_9 >> ((int)p_11 & 31)) & 31UL))) + 538U));
  return result;
}


