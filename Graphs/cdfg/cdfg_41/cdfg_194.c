#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 997687679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p[3][4], unsigned int p_9, unsigned int p_11,
                       char p_13[4][1], long p_15)
{
  unsigned short v_25;
  unsigned long long v_23;
  int v_21;
  unsigned int v_19;
  unsigned int v_17;
  signed char v_6;
  double v_4;
  short v;
  unsigned long long result;
  v_25 = (unsigned short)p[0][0];
  v_23 = (unsigned long long)p_15;
  v_21 = 1029956573;
  v_19 = p_9;
  v_17 = 538853909U;
  v_6 = (signed char)p_11;
  v_4 = -997.226166507;
  v = (short)-4444;
  while ((unsigned long)p_11 > ((unsigned long)(45136 - (int)p_13[1][0]) / (
                                (unsigned long)v_19 / 4294905128UL + 712UL)) * (unsigned long)(~ p_9)) {
    v_17 = v_21 | -40878;
    v_4 = (double)(! (~ ((int)((unsigned short)3446091776.f) - (int)v_25)));
    v_6 = (signed char)v_25;
    v_19 = (unsigned int)(((v_23 | v_23) / ((unsigned long long)(- v_4) + 12ULL)) / (unsigned long long)(
                          p_9 + 951U));
  }
  while_0_break: ;
  if ((250UL / (((unsigned long)p_9 ^ (unsigned long)p_15) + 238UL)) * (unsigned long)(~ (
      (int)p[0][0] / 47080)) >= (unsigned long)(! ((unsigned int)((int)v ^ (int)p_13[3][0]) + 
                                                   p_9 * v_17))) {
    v = (short)((float)(! v_6) * p[1][0] - (float)(! (61 << 4)));
    v = (short)((double)(! (- v)) * v_4);
    result = (unsigned long long)v;
  }
  else {
    v_6 = (signed char)p_13[2][0];
    v_6 = (signed char)((int)p[0][0] - ((int)((char)181.17437461) * -21 - (
                                        132 + (int)v_6)));
    result = (unsigned long long)((4294915216UL * (unsigned long)((unsigned int)v_6 & p_9)) / (unsigned long)(
                                  (p_11 >> (((long long)p_11 ^ 664023306LL) & 31LL)) + 256U));
  }
  return result;
}


