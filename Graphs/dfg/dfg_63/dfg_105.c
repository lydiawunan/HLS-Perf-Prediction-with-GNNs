#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 911684621
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, unsigned long long p_9)
{
  unsigned long v_15;
  unsigned char v_13;
  long v_11;
  unsigned char v_6;
  short v_4;
  double v;
  int result;
  v_15 = 200709157UL;
  v_13 = (unsigned char)33;
  v_11 = (long)p;
  v_6 = (unsigned char)92;
  v_4 = (short)((unsigned long long)((unsigned long)(v_11 % (long)((int)v_13 + 152)) - ! v_15) / 674941472ULL + (unsigned long long)(~ (
                28227L * (long)(- v_6))));
  v_4 = (short)((unsigned long long)((unsigned int)v_6 - ~ (3918886117U + p)) * (
                - p_9 >> ((int)v_4 & 63)));
  v = (double)(- (32051U * (unsigned int)v_4));
  result = (int)v;
  return result;
}


