#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 889558201
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned char p_4, unsigned int p_7, long p_9,
          long long p_17)
{
  unsigned int v_21;
  int v_19;
  float v_15;
  double v_13;
  unsigned short v_11;
  double v;
  float result;
  v_21 = 346013541U;
  v_19 = (int)p_9;
  v_15 = 1.12110765554e+38f;
  v_13 = 3.09158871036e+38;
  v_11 = (unsigned short)p_17;
  v = -371.413703111;
  result = 957.324951172f;
  while (97LL != (271487509LL ^ -682952791LL % (long long)((71 + (int)((unsigned char)v)) + 249))) {
    v_13 = (unsigned long)v_19 - 34724UL;
    v_19 = (int)p_4;
    result = (float)((unsigned long)(~ (p_9 - (long)7360703604.04)) | (unsigned long)(! (
                     (unsigned int)p_4 - v_21)));
    v = (double)(0 / (unsigned long long)(((p_9 - (long)p_4) & (long)(
                                           32143 << (v_19 & 15))) + 694L));
  }
  while_0_break: ;
  while (87 >> (- p & 7LL) != (int)((double)((int)p_4 - 90) - (- v + (double)(
                                                               (unsigned long)p_7 / (unsigned long)(
                                                               p_9 + 494L))))) {
    v_15 = (float)((double)((unsigned long long)(- result) % 58332ULL) * (
                   - v_13 * (double)(796541248.f * v_15)));
    v = (double)(! (p_9 / 1053123951L) - (long)v_11);
    v = - ((double)p_17 * v) - (double)(- (1.84467440737e+19f - result));
  }
  while_0_break_0: ;
  return result;
}


