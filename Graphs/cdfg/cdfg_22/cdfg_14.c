#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 725887037
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, short p_7, unsigned long long p_13[3][3][4])
{
  int v_17;
  int v_15;
  long long v_11;
  unsigned char v_9;
  float v_5;
  char v;
  double result;
  v_17 = (int)p;
  v_15 = -59515;
  v_11 = 374171871LL;
  v_9 = (unsigned char)p_13[2][2][1];
  v_5 = 5076917248.f;
  v = (char)-81;
  result = -440.26281692;
  while (3383149916LL >= ((long long)(((int)v_9 / ((int)((unsigned char)result) + 559)) / -22555) & 
                          v_11 / (long long)(((int)v_9 >> (p_13[2][0][2] & 7ULL)) + 263))) {
    v_5 = v_15 % 61971;
    v_11 = (long long)(~ (p_13[2][0][2] - (unsigned long long)v_17) / 9597ULL);
    v = (char)(- ((long long)v_17 * -181151490LL));
    result = (double)((float)((p_13[1][1][2] % 36337ULL) / (unsigned long long)(
                              -10718LL / (long long)((int)p + 627) + 91LL)) / (
                      v_5 + 945.f));
  }
  while_0_break: ;
  result = (double)((int)((char)((double)p - result)) - (int)(~ v)) + 
           ((double)v_5 + result) * 6397.;
  return result;
}


