#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 523803149
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, long p_9, unsigned short p_11, float p_13,
           float p_17[2])
{
  unsigned char v_21;
  short v_19;
  char v_15;
  unsigned char v_6;
  int v_4;
  long v;
  double result;
  v_21 = (unsigned char)p_13;
  v_15 = (char)32;
  v_6 = (unsigned char)p_17[1];
  v_4 = 633360398;
  v_19 = (short)((14518LL / ((long long)v_4 / 55531LL + 867LL) & (long long)v_15) ^ (long long)(
                 3981311647U % (((unsigned int)(- p_17[0]) + p) + 622U)));
  v_4 = (int)((unsigned long long)((unsigned long)((long)(- v_19) / (
                                                   (long)v_21 % (p_9 + 356L) + 219L)) & (unsigned long)p) + 18446744073709493321ULL);
  v = (long)(18446744073709490763ULL + (unsigned long long)v_19);
  result = (double)((unsigned long)(v / (long)(~ (v_4 % ((int)v_6 + 861)) + 458)) * (
                    ((unsigned long)p + (unsigned long)(- p_9)) * (unsigned long)(
                    ((int)p_11 / ((int)((unsigned short)p_13) + 404)) / (
                    (int)v_15 / ((int)((char)p_17[0]) + 799) + 614))));
  return result;
}


