#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 981547396
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p)
{
  unsigned int v_12;
  int v_10;
  float v_8;
  short v_6;
  unsigned long long v_4;
  signed char v;
  short result;
  v_12 = 45475U;
  v_10 = 37093;
  v_8 = 8522499072.f;
  v = (signed char)115;
  v_6 = (short)5341;
  v_4 = (unsigned long long)((unsigned long)(52U - ~ ((unsigned int)v_10 + v_12)) / (
                             (3855157953UL + (unsigned long)((int)p / (
                                                             (int)p + 496))) / (unsigned long)(
                             ((int)p % 17463 + (int)p) + 399) + 695UL));
  result = (short)((float)(((unsigned long long)v / (v_4 + 892ULL)) * (unsigned long long)(
                           -15793 & (int)(~ v_6))) * v_8);
  return result;
}


