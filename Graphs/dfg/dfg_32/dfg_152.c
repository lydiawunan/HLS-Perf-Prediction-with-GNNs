#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 779538700
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, short p_7[2][3][2], signed char p_15, short p_17)
{
  int v_13;
  signed char v_11;
  unsigned long v_9;
  unsigned long v_4;
  unsigned long long v;
  unsigned char result;
  v_13 = (int)p_7[0][2][0];
  v_9 = 148123802UL;
  v_11 = (signed char)83;
  v_4 = ~ v_9 * (unsigned long)v_11 + (unsigned long)((int)(- ((double)v_13 / (
                                                               p + 426.))) % (
                                                      (3577 / ((int)p_15 + 476) - (int)(! p_17)) + 463));
  v = (unsigned long long)(v_4 * (unsigned long)(- (- p)) - (unsigned long)p_7[0][0][1]);
  result = (unsigned char)(28098ULL % (~ (- (v * 393ULL)) + 817ULL));
  return result;
}


