#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 647873335
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p[3][4][2], unsigned long p_5[2][1], float p_7,
                 unsigned char p_11[2][5][2], char p_17)
{
  float v_15;
  char v_13;
  long long v_9;
  long long v;
  unsigned int result;
  v_15 = p_7;
  v_13 = (char)p_7;
  v_9 = (long long)(~ ((int)p_11[0][2][0] % ((int)(! v_13) + 625)) + ~ (
                    (int)((char)(- v_15)) | (int)(- p_17)));
  v = ~ 44308LL;
  result = (unsigned int)v_9;
  result = (unsigned int)(! ((unsigned long)(((double)p[2][0][1] / 6341247519.26) * (double)(
                                             (long long)result / (v + 64LL))) * (
                             (unsigned long)1.67009127169e+38 % ((p_5[0][0] ^ (unsigned long)p_7) + 684UL))));
  return result;
}


