#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 701855219
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, float p_5, unsigned char p_7[1], double p_11)
{
  unsigned long v_15;
  unsigned int v_13;
  long v_9;
  short v;
  double result;
  v_15 = 4294943200UL;
  v_13 = 4294950274U;
  v_9 = (long)p_5;
  v = (short)13904;
  result = -8581722301.9;
  v_9 = (long)((unsigned long)(v_13 * 3267071719U ^ (unsigned int)result) * (
               (unsigned long)((int)((short)6899166483.94) + (int)v) + v_15) ^ (unsigned long)(! (~ (
               590771754L * v_9))));
  result = (double)((-981 + (int)(~ (~ v))) % ((int)(- ((double)v_9 / (
                                                        p_11 + 514.)) - 30752272.) + 992));
  v = (short)-53;
  result = (double)(- ((long long)(~ v) % (- p + 730LL)) % (long long)(
                    (int)(- v) % ((int)((short)(result - (double)(p_5 - (float)p_7[0]))) + 563) + 1015));
  return result;
}


