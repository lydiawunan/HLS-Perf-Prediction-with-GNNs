#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 37272921
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, int p_7, unsigned int p_15[3][1][2], int p_17, long p_19)
{
  char v_13;
  unsigned long v_11;
  float v_9;
  long long v_5;
  unsigned char v;
  short result;
  v_9 = 5648094720.f;
  v_5 = 1042546080LL;
  v_11 = 54171UL;
  v_13 = (char)(- v_11 % (unsigned long)((- (176 * (int)((unsigned char)v_9)) - -18038) + 806));
  v = (unsigned char)(((unsigned long)((int)((short)(v_9 / ((float)v_11 + 238.f))) % 70) + 
                       (v_11 % ((unsigned long)8606793617.07 + 660UL)) / (unsigned long)(
                       ((unsigned int)v_13 + 305166665U) + 878U)) * (
                      (unsigned long)p_15[1][0][0] / ((unsigned long)(
                                                      p_15[0][0][1] - (unsigned int)p_17) % (unsigned long)(
                                                      p_19 % (long)(p_17 + 50) + 21L) + 690UL)));
  result = (short)((long long)v | - ((long long)(p % 180) * (v_5 % (long long)(
                                                             p_7 + 115))));
  return result;
}


