#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 43193922
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, float p_7, unsigned char p_9)
{
  unsigned long v_13;
  long long v_11;
  char v_5;
  int v;
  unsigned int result;
  v_13 = 31130UL;
  v_5 = (char)p;
  v_11 = (long long)v_13;
  v_5 = (char)(~ ((unsigned long long)(153UL / ((unsigned long)v_5 * 4055764122UL + 770UL)) * - (
                  18446744073709538990ULL & (unsigned long long)v_11)));
  v = (int)((long long)((int)(- (- p)) - ((int)v_5 * (int)((char)p_7)) % (
                                         (int)(! p_9) + 654)) + -9964LL);
  result = (unsigned int)(! v);
  return result;
}


