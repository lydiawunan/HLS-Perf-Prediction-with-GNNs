#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 160806880
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned long p_4, unsigned long p_7,
                char p_9, double p_15[4][2][2])
{
  float v_13;
  unsigned long v_11;
  unsigned long v;
  signed char result;
  v_13 = (float)p_9;
  result = (signed char)-32;
  v_11 = p_7 / 145UL;
  v = (p_7 + (unsigned long)p_9) * (unsigned long)(! result);
  v = (~ (v * 358497801UL) ^ ((unsigned long)(! p_9) - (v_11 + v_11))) / (
      (unsigned long)((double)v_13 + p_15[1][0][0]) + 758UL);
  result = (signed char)((unsigned long)(! p) + ((unsigned long)(8589962783.34 - (double)p_4) / (
                                                 ~ v + 55UL)) % (p_7 % 578UL + 482UL));
  return result;
}


