#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 577225832
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p[2][1][1], double p_5, signed char p_7[5][5],
        float p_11, long long p_17)
{
  signed char v_21;
  char v_19;
  unsigned long v_15;
  long v_13;
  double v_9;
  unsigned int v;
  int result;
  v_21 = (signed char)65;
  v_19 = (char)p_7[3][1];
  v = 4062U;
  result = -514857332;
  v_15 = (unsigned long)((int)((signed char)(3483329792.f * ((float)v_19 / (
                                                             p_11 + 517.f)))) - (int)v_21);
  v_13 = (long)(! ((unsigned long long)((long long)v_15 - p_17) + 3391679968ULL) * (unsigned long long)(~ result));
  v_9 = (double)(~ v_13);
  result = (int)((float)((int)((double)(p[1][0][0] << (v & 31U)) / (-14. / (
                                                                    p_5 + 621.) + 228.)) + 
                         (int)p_7[4][3] % ((int)((signed char)v_9) + 1015)) - p_11);
  return result;
}


