#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 286421252
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, unsigned long p_5, unsigned int p_15[3], unsigned long p_17,
         unsigned long p_21)
{
  float v_23;
  float v_19;
  float v_13;
  float v_11;
  signed char v_9;
  double v_7;
  float v;
  char result;
  v_23 = (float)p_15[1];
  v_13 = 2.82169511161e+38f;
  v_11 = (float)p_5;
  v_9 = (signed char)p_5;
  v_7 = -2.60593985438e+38;
  v = 672.74395752f;
  result = (char)p_21;
  if ((v_13 - (float)p) + (float)(- (p_17 / (unsigned long)((int)v_9 + 594))) != (float)p) {
    v_7 = (double)p_21;
    v_19 = (float)((unsigned long long)((float)(~ p_17) / 2084049024.f) * (
                   18446744073709534008ULL * (unsigned long long)(p_15[1] - p_15[2])));
    v_13 = (float)((p_17 % (p_5 + 563UL)) * (unsigned long)(312.318847656f * v_19)) / (
           (float)(1050741215UL % (p_17 + 647UL)) * v + 376.f);
  }
  else {
    v_23 = v_23;
    v = (float)(! ((p_21 ^ p_21) % ((unsigned long)v_7 + 723UL)));
    v = - (- v / (-543.679504395f / (v_23 + 477.f) + 349.f));
  }
  if ((unsigned long)(p_15[1] * (unsigned int)(91 - (int)((char)(1482742788.03 * (double)p)))) < 
      (unsigned long)((v_13 + v_11) / ((float)(10517UL ^ (unsigned long)p) + 500.f)) - ~ p_17) 
    result = (char)p;
  else {
    v_9 = (signed char)(v_7 - (double)(v_11 + (float)((int)result % (
                                                      (int)((char)v_13) + 502))));
    v = (float)(((double)(- v) * - v_7) * (double)(! (- v_9)));
    result = (char)((double)v / ((double)p_5 / (v_7 * v_7 + 256.) + 123.));
  }
  return result;
}


