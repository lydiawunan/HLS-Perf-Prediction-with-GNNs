#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 476787596
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, double p_7, char p_9,
                  unsigned long p_13[2][2][5])
{
  unsigned int v_15;
  signed char v_11;
  short v_4;
  short v;
  unsigned long result;
  v_15 = p;
  v_11 = (signed char)(- (- (- p_7 * 6932439552.)));
  v_4 = (short)(((unsigned long)p_9 + ~ p_13[1][1][0]) % (unsigned long)(
                v_15 + 465U));
  v = (short)(1046012486L * (- ((long)p_9 + -277402065L) / (long)((((int)v_11 | (int)((signed char)5490350711.44)) ^ (
                                                                   -6553 + (int)p_9)) + 627)));
  result = (unsigned long)((double)((int)v >> ((int)((short)2.11545288777e+38f) & 15)) * (
                           4845441059.17 / ((double)v_4 + 848.) + (double)(
                           p + 3U)) - (- p_7 + 1.84467440737e+19));
  return result;
}


