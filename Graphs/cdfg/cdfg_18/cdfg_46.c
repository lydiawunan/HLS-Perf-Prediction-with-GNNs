#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 757007533
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned long long p_9, unsigned long p_11[2][2],
           int p_13)
{
  char v_17;
  unsigned short v_15;
  float v_7;
  signed char v_4;
  unsigned long v;
  double result;
  v_17 = (char)125;
  v_15 = (unsigned short)p_13;
  v_7 = 2.23104862765e+38f;
  v = 3271063297UL;
  if ((unsigned long long)(~ p_11[0][1]) != (unsigned long long)(((int)((char)2.94768188298e+38) - (int)v_17) << (
                                                                 4950 / (
                                                                 (int)p + 589) & 31)) * (
                                            (unsigned long long)v_15 % (
                                            p_9 % ((unsigned long long)v_7 + 26ULL) + 296ULL))) {
    v = (unsigned long)(((double)(! v) - -8387.08529278) * 1.);
    result = (double)p_9;
    v_4 = (signed char)((int)p << ((int)((signed char)(- (v_7 - (float)p))) & 7));
  }
  else {
    v = (unsigned long)((long long)(- (p_13 + (int)v_15)));
    result = (double)610437386ULL;
    v_4 = (signed char)(p_11[0][0] * (v * 389UL) + 686816735UL);
  }
  result = (double)((long long)((int)((char)(result / ((double)v + 311.)))) & (
                    40945LL & (long long)(20606 - (int)v_4)));
  return result;
}


