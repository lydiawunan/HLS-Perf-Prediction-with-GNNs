#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 484761153
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p)
{
  float v_14;
  float v_12;
  double v_10;
  unsigned short v_8;
  double v_6;
  double v_4;
  float v;
  double result;
  v_14 = 1.58693033425e+37f;
  v_12 = 770.250366211f;
  v_8 = (unsigned short)p;
  v_6 = (double)p;
  result = 1912164512.3;
  v_10 = (double)(- ((unsigned long long)(33044.f + v_14) * 598146735ULL));
  v_4 = - ((double)(((int)((unsigned short)v_14) - (int)v_8) * (p * p)) + - (
           result - (double)p));
  v = (float)(result - ((double)((int)(v_6 + (double)v_8)) - - v_10 / (double)(
                                                             (v_12 - v_14) + 619.f)));
  result = - ((double)(0.f * - v) / (- (v_4 - 3841551185.17) + 825.));
  return result;
}


