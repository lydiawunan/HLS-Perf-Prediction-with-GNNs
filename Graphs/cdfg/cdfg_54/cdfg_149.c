#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 906325225
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, long long p_4, unsigned char p_7[3][1][2],
         unsigned char p_9, unsigned short p_13)
{
  long v_25;
  double v_23;
  unsigned long long v_21;
  unsigned long v_19;
  long v_17;
  long v_15;
  unsigned int v_11;
  float v;
  long result;
  v_25 = -60781L;
  v_23 = 5892800474.19;
  v_21 = (unsigned long long)p_9;
  v_19 = 4132460137UL;
  v = (float)p_9;
  if (92303661L != v_25) {
    v = (float)((((int)p + (int)p_9) + (int)(~ p_9)) * ((int)p_13 / 314));
    result = (long)(((int)p_13 + (int)p_7[1][0][0]) % ((int)p_13 + 879) | (int)p_13);
    v_11 = (unsigned int)(! (126L - result));
  }
  else {
    v_17 = (long)((v_21 / (unsigned long long)((int)p_7[1][0][0] / -8587 + 813)) / 18446744073709551185ULL);
    v_15 = (long)((double)((int)p_9 / ((int)((unsigned char)(- v)) + 215)) / (
                  (- v_23 + -1901527040.) + 932.));
    v_11 = (unsigned int)((unsigned long long)((long)(- p) - v_15 % (
                                                             v_17 + 28L)) % (
                          ((unsigned long long)(v_19 % 4027759079UL) - (
                           (unsigned long long)p_7[0][0][0] - v_21)) + 511ULL));
  }
  if (((long long)v % (p_4 + 697LL)) % 968LL == (long long)(((unsigned int)(
                                                             (int)p_7[2][0][0] - (int)p_9) % (
                                                             v_11 + 709U)) * 4294967175U)) 
    result = (long)p;
  else {
    result = (long)(-390LL + ~ (~ p_4));
    result = result;
  }
  return result;
}


