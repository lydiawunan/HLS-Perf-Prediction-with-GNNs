#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 369321394
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned short p_5,
                unsigned long p_7[2][1][5])
{
  unsigned int v_9;
  int v;
  signed char result;
  v_9 = (unsigned int)p_7[1][0][0];
  v = (int)(- ((unsigned long)p_5 * (p_7[0][0][1] >> (117U / (v_9 + 152U) & 31U))));
  result = (signed char)(- 58.9004666017);
  result = (signed char)(((unsigned long)result + - (4294944713UL - p)) ^ (unsigned long)(
                         - (~ v) - (int)p_5));
  result = result;
  return result;
}


