#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 615447218
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, long long p_5, long p_7, unsigned char p_9, short p_19)
{
  unsigned long v_17;
  int v_15;
  unsigned char v_13;
  long v_11;
  double v;
  short result;
  v_13 = (unsigned char)82;
  v_11 = -72643937L;
  v = (double)p_5;
  v_17 = (unsigned long)(~ (! p_5 % (long long)((int)v_13 / ((int)p_9 + 888) + 806)));
  v_15 = (int)(! (~ (115UL - v_17)) + (unsigned long)((int)((short)(- (
                                                      15989. + p))) % (
                                                      (int)(! (- p_19)) + 521)));
  result = (short)((long)v_13 * ~ (! (p_7 - (long)v_15)));
  result = (short)((long long)(~ ((unsigned int)result - 536345144U) - (unsigned int)(
                               - p / ((-557888276. - v) + 109.))) * (
                   ((p_5 - (long long)p_7) | (long long)p_9) & (long long)v_11));
  return result;
}


