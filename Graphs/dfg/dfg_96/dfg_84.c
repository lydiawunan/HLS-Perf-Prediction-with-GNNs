#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 984317396
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, float p_13, unsigned long p_15[4][4],
           unsigned long p_17[4][4][3], signed char p_19)
{
  unsigned long long v_11;
  unsigned long long v_8;
  unsigned short v_6;
  unsigned char v_4;
  int v;
  double result;
  v_11 = (unsigned long long)p_17[2][1][2];
  v_6 = (unsigned short)60607;
  v_4 = (unsigned char)p_15[2][0];
  v_8 = (unsigned long long)(p_17[0][0][0] % (unsigned long)((int)p_19 + 52));
  result = (double)(~ (! ((unsigned long long)((int)v_4 - (int)p) * v_11)));
  v = (int)(((unsigned long long)((int)((unsigned short)result) % ((int)v_6 + 540)) / (
             ! v_8 + 142ULL) - (unsigned long long)p) / (unsigned long long)(
            (unsigned long)((float)(! v_11) + -49.f / (p_13 + 685.f)) / (
            (((unsigned long)result << (p_15[0][1] & 31UL)) >> 29) + 473UL) + 974UL));
  result = (double)((long long)(~ (v / 7) % -657) % (! ((long long)((int)v_4 + 21479) / -882924647LL) + 394LL));
  return result;
}


