#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 625594509
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p[3], char p_5[1][4], unsigned char p_9,
                 signed char p_11, float p_15)
{
  char v_19;
  unsigned int v_17;
  long long v_13;
  unsigned int v_7;
  char v;
  unsigned int result;
  v_19 = (char)p_9;
  v_17 = (unsigned int)p[2];
  result = 3310098380U;
  v_13 = (long long)((unsigned int)(! ((int)p_5[0][0] + 26)) % (~ ((unsigned int)v_19 / (
                                                                   result + 261U)) + 863U) - (unsigned int)(! (! (~ p_9))));
  v_7 = (unsigned int)(~ ((int)(p_15 + 0.f) / ((int)(! p_5[0][1]) % (
                                               (int)((char)(- p_15)) + 525) + 772)));
  v = (char)(~ (51285UL - (unsigned long)((unsigned int)p_11 - v_17)) ^ (unsigned long)p_9);
  result = (unsigned int)((! (p[2] - (int)v) % (! ((int)p_5[0][3] + (int)p_5[0][2]) + 113)) / (
                          (int)((float)((v_7 | 14573U) * (unsigned int)(
                                        (int)p_9 % ((int)p_11 + 825))) - - (
                                (float)v_13 / (p_15 + 709.f))) + 576));
  return result;
}


