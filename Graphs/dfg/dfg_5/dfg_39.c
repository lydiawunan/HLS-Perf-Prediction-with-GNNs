//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1037473574
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p)
{
  double v_13;
  long long v_11;
  float v_9;
  float v_6;
  unsigned long v_4;
  float v;
  unsigned long long result;
  v_13 = -3.29752782272e+38;
  v_11 = p;
  v_6 = -1.94741738351e+38f;
  v = (float)p;
  v_9 = (float)(~ p);
  v_11 = (long long)(! (46659 % ((int)((unsigned short)v_13) + 817))) / (
         (1820LL ^ ! v_11) + 703LL) + 31LL;
  v_4 = (unsigned long)((0 ^ (unsigned long long)((long long)((long)v_6 + -22736L) / (
                                                  p / 2795LL + 325LL))) * (unsigned long long)(
                        (long long)v_9 ^ ~ (~ v_11)));
  result = (unsigned long long)(v / ((float)v_4 + 913.f));
  return result;
}


