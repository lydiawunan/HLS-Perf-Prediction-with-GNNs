#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 777000057
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p[1], float p_5[3][3][2], unsigned short p_7,
                 float p_11, float p_13)
{
  long long v_9;
  short v;
  unsigned int result;
  v_9 = -385206942LL;
  v = (short)(- (- ((p_5[0][1][0] + p_11) + p_13 * 50472.f)));
  result = (unsigned int)((long long)v % (v_9 + 236LL) + v_9);
  v = (short)((long long)((int)((p_5[1][1][1] - 4490.f) * (float)(56646U - result)) - 
                          (int)(- p_7) / ((int)(~ v) + 343)) * -377666553LL);
  result = (unsigned int)((double)((int)v & (int)((unsigned short)-4558849214.63) * (int)p[0]) + -3.68325694033e-39);
  return result;
}


