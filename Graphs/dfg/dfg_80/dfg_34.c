#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 723954598
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p[3][2][4], int p_4, short p_6[5][2], double p_8, int p_10)
{
  unsigned long v_13;
  unsigned long v;
  float result;
  v_13 = 4294904043UL;
  v = (unsigned long)(- (- (- p[0][1][2]))) / ((v_13 - (unsigned long)(! (
                                                18291 | (int)((unsigned short)p_8)))) + 413UL);
  result = (float)((unsigned long)((int)(p_8 * (double)p_10) * (~ p_4 / (
                                                                (int)p[2][1][0] / (
                                                                p_4 + 925) + 619))) * (
                   (unsigned long)(26742 + p_10 / (p_4 + 378)) / (v + 272UL)));
  result = (float)(((unsigned int)((double)result * 1.25818230021e+37) & ~ (
                    4048839386U << (p_4 & 31))) / (unsigned int)((int)p_6[2][1] + 949));
  result = p[2][1][2] * (float)(18446744073709535555ULL / (unsigned long long)(
                                (int)((signed char)result) * -16 + 274)) + - (- (
           p[0][0][2] - result));
  return result;
}


