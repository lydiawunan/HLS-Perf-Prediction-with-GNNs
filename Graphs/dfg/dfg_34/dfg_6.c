#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 711612404
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p[5][3][1], long long p_7, short p_13, double p_17,
           signed char p_19)
{
  short v_21;
  float v_15;
  float v_11;
  int v_9;
  unsigned char v_4;
  unsigned char v;
  double result;
  v_21 = (short)-28275;
  v_15 = 674.239685059f;
  v = (unsigned char)p_7;
  v_11 = (float)((- (300188169LL - (long long)p_17) + (long long)(((unsigned long)p_13 - 3749676409UL) - (unsigned long)(- p_19))) * (long long)(
                 ((int)v_21 / ((int)(- p_13) + 714)) % ((int)(- v_21) + 940)));
  v_9 = (int)(((float)p_13 + - (p[4][2][0] + v_15)) - 9212042240.f);
  v_4 = (unsigned char)((int)((char)(1127123.f * (- v_11 - -7760926720.f))) - -1);
  result = (double)((long long)(((int)v % ((int)v_4 + 761)) / (19248 * (int)((short)p[0][1][0]) + 809)) % (
                    52LL * (p_7 - (long long)v_4) + 887LL) - (long long)v_9);
  return result;
}


