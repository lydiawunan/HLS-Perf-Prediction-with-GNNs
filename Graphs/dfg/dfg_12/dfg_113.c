#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 513767742
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, long p_5[4], short p_9, unsigned char p_13[2], float p_15)
{
  double v_21;
  long long v_19;
  float v_17;
  unsigned int v_11;
  unsigned int v_7;
  float v;
  short result;
  v_21 = -2295407498.9;
  v_19 = (long long)p_9;
  v_17 = p_15;
  v_11 = 4294943683U;
  result = (short)p_5[2];
  v = (float)((long long)v_21 % 289744640LL);
  v_7 = (unsigned int)((float)((long)(~ ((int)p_9 * (int)p_9)) + ((long)p_13[0] / (
                                                                  p_5[1] + 388L) + (long)(
                                                                  p_15 - 731997376.f))) + (
                       ((float)p_9 * v_17 + (float)v_19) - (float)(- (
                       (int)((short)v) * (int)result))));
  v = (float)(! (~ v_7 * (unsigned int)(~ p_9)) % (v_11 + 776U));
  result = (short)(~ ((long)(! ((int)p / ((int)((short)v) + 581))) + - (
                      53L % (p_5[1] + 88L))));
  return result;
}


