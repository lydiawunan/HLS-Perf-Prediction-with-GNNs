#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 661718284
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p[5][5], long long p_4[5][3], float p_7, double p_9,
          short p_11)
{
  unsigned long v_21;
  unsigned long long v_19;
  float v_17;
  short v_15;
  unsigned long long v_13;
  unsigned int v;
  float result;
  v_21 = (unsigned long)p_4[2][0];
  v_17 = (float)p[1][4];
  v_15 = (short)-2128;
  v_13 = (unsigned long long)p_9;
  v = (unsigned int)p[3][2];
  while ((((int)((short)-2.87735937347e+38f) + (int)p_11) - (int)3518851072.f) - (int)(
         p_7 * (float)((unsigned long long)v * v_13)) >= (int)(! v_15)) {
    v_19 = (long)v_17 & -793307567L;
    v_17 = (float)(~ (- (! (unsigned short)27979)));
    v_19 = (((unsigned long long)v_21 + 18446744073078693265ULL) - ~ v_19) * 973ULL;
    v = (unsigned int)p_11;
  }
  while_0_break: ;
  if ((double)(~ v) * - (-4793573482.05 + (double)p_7) <= p_9) result = (float)(
                                                               (int)p[3][0] - -49517);
  else result = (float)p_4[0][1];
  return result;
}


