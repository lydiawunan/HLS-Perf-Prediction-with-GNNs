#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 985460542
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[2], int p_11, unsigned short p_15, int p_17,
           unsigned int p_19)
{
  int v_27;
  short v_25;
  unsigned char v_23;
  long long v_21;
  short v_13;
  long long v_9;
  float v_7;
  short v_5;
  double v;
  double result;
  v_23 = (unsigned char)191;
  v_21 = -229590324LL;
  v_9 = (long long)p_11;
  v_7 = (float)p_17;
  v_5 = (short)p_11;
  while ((long long)p_17 != ((long long)(~ (4294967260U & p_19)) & - (
                             229839409LL - v_21))) {
    v_27 = (int)v_23 + -24;
    v_25 = (short)((137.f * ((float)p_11 + v_7)) / ((float)(((long long)v_27 % -15342LL) % 3952191379LL) + 61.f));
    v_5 = v_25;
    v_21 = (long long)((unsigned long long)((int)p[1] % ((int)p[0] + 185)) - 
                       18446713450946094616ULL % (unsigned long long)(
                       ((int)v_5 - -1289) + 188));
  }
  while_0_break: ;
  if ((unsigned long)((int)p_15 + ~ ((int)v_5 % ((int)v_5 + 81))) >= 3805385753UL) {
    v_7 = (float)(! ((unsigned long long)((long long)p[1] - v_9) * 18446744073709544236ULL));
    v = (double)((float)(! v_5) + - ((float)p[1] - v_7));
    result = - (v + (double)p[1]) + 437991661.;
  }
  else {
    v_13 = (short)(- ((int)(~ p[1]) + (int)(~ p[0])));
    result = (double)(- (p_11 % ((int)v_13 / 108 + 857)));
  }
  return result;
}


