#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 676444303
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, double p_11)
{
  unsigned int v_19;
  char v_17;
  long long v_15;
  unsigned char v_13;
  long long v_9;
  signed char v_7;
  int v_5;
  unsigned char v;
  float result;
  v_19 = 4294909006U;
  v_17 = (char)p;
  v_15 = -3938LL;
  v_13 = (unsigned char)p;
  v_9 = 48255LL;
  v_7 = (signed char)124;
  v_5 = (int)p;
  v = (unsigned char)p;
  result = -619694528.f;
  if ((long long)v_17 > v_9) {
    v_9 = - (v_15 - (long long)p / 1019531314LL);
    v_13 = (unsigned char)(! (short)-23745);
    v_7 = (signed char)(((unsigned long long)v_13 % 51538ULL + (unsigned long long)(
                         356.570080826 + p_11)) / (unsigned long long)(
                        ((int)p_11 | ((int)((unsigned short)p_11) + 4179)) + 31));
  }
  else {
    v_9 = (long long)((double)v_19 - (double)(~ v_7) * 5.2041285789e+37);
    v_5 = (int)(- 2716236392.86);
    result = (float)(~ (- ((int)v_17 * (int)v_13)));
  }
  while ((int)(- (((double)result + p) + (double)(result - (float)v))) >= - (
         ((int)result | v_5) / 6)) {
    v_9 %= (long long)((int)v_7 * 55 + 335);
    result = (float)(((p - p) * p_11) / (p_11 + 243.));
    v = (unsigned char)(p * 98.);
    v_5 = (int)(- (- 3.99524017543e-06));
  }
  while_0_break: ;
  return result;
}


