#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704024812
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned char p_4, unsigned char p_6, char p_8[1][3],
           float p_10)
{
  float v_21;
  short v_19;
  signed char v_17;
  unsigned long long v_15;
  unsigned long long v_13;
  long long v;
  double result;
  v_21 = (float)p_4;
  v = 127880004LL;
  if (-3449453344.46 - (double)v_21 < -23179.) {
    v_17 = (signed char)((long long)((int)p_8[0][1] / ((int)((char)p_10) + 477) & 87) * - (
                         6541900288LL % (p + 594LL)));
    v_15 = (unsigned long long)((long long)p_6 | - (53102LL / (long long)(
                                                    (int)v_17 + 296)));
    v_13 = v_15;
  }
  else {
    v_19 = (short)23191;
    v_13 = (unsigned long long)v_21;
    v = (long long)v_19;
  }
  if (0LL != p >> ((unsigned long long)(v + (long long)p_8[0][1]) / (
                   v_13 + 995ULL) & 63ULL)) {
    result = (double)p;
    result = (double)((long long)(8.96388473801e+33 / (- result + 958.)) + 
                      p % -827910930LL);
  }
  else result = (double)((int)(~ p_4) ^ (int)p_6);
  return result;
}


