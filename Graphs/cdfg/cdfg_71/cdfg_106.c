#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 198301939
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned long long p_13)
{
  double v_11;
  float v_9;
  long long v_7;
  unsigned char v_4;
  unsigned int v;
  double result;
  v_11 = 1.97668588293e+38;
  v_9 = (float)p;
  v_7 = (long long)p;
  v_4 = (unsigned char)55;
  if ((unsigned long long)((int)(- (169. + v_11)) * (((int)((signed char)v_9) - (int)p) % (
                                                     (int)((signed char)v_9) % (
                                                     (int)p + 750) + 5))) < p_13) {
    v_4 = (unsigned char)p;
    v = 6U;
    result = (double)(~ ((int)p - (int)p % ((int)p + 898)));
  }
  else {
    result = (double)(108 + (int)((char)(- v_9)));
    v_9 = (float)889207702;
    v = (unsigned int)p;
  }
  result = (double)((long long)((int)((double)v / (result + 952.)) - (
                                (int)v_4 - (int)p)) * ((long long)((int)v_4 / 642844114) / (
                                                       (v_7 >> ((long long)v_9 & 63LL)) + 529LL)));
  return result;
}


