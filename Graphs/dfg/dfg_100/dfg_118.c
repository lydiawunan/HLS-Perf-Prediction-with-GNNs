#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 948861130
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned long p_7, float p_9)
{
  signed char v_4;
  unsigned short v;
  unsigned char result;
  v = (unsigned short)50785;
  v = (unsigned short)((int)((unsigned short)(838.38029922 + (double)(
                                              -42519.f * (1.84467440737e+19f + p_9)))) + (int)v);
  v = (unsigned short)(~ ((long long)p_7 - ((long long)(! v) ^ -83859156232LL)));
  v_4 = (signed char)((int)p / 67358689);
  result = (unsigned char)(- ((double)((int)v % -101) * ((double)((int)v_4 - 23145) / 9311550881.68)));
  return result;
}


