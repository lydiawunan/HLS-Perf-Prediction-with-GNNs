#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 16748938
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, short p_7, char p_9, float p_11, int p_15[4][5])
{
  unsigned short v_19;
  long long v_17;
  signed char v_13;
  float v_4;
  long v;
  unsigned long long result;
  v_19 = (unsigned short)p;
  v_17 = (long long)p_7;
  v = (long)p_9;
  v_4 = (float)(~ (~ 43017797712920ULL));
  v_13 = (signed char)(~ (((long long)v * v_17) / (long long)((long)p_15[2][3] % (
                                                              v + 556L) + 591L)) * (long long)(
                       ((int)p_9 & (int)v_19) / 152));
  result = (unsigned long long)(((int)v_4 * (-128 / (p * (int)p_7 + 359))) / (
                                ((int)p_9 + (((int)((signed char)p_11) + (int)v_13) + p_15[3][3])) + 744));
  result = 0ULL - (result & (unsigned long long)(! (-542067432L * v)));
  return result;
}


