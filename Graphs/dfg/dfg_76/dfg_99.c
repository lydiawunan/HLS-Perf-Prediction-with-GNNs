#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 231593743
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, int p_4, unsigned short p_7, short p_15,
                       float p_17[2][4])
{
  int v_21;
  float v_19;
  short v_13;
  double v_11;
  signed char v_9;
  unsigned long long v;
  unsigned long long result;
  v_21 = (int)p_7;
  v_19 = -8091444736.f;
  v_13 = (short)p_7;
  v_11 = -1.33434972998e+38;
  result = (unsigned long long)p_7;
  v_11 = (double)v_19 / (- ((double)((float)v_21 / 51.7921447754f) / (
                            v_11 + 4.)) + 809.);
  v = (unsigned long long)((float)((int)v_13 - (int)((short)(- ((float)p_15 - p_17[1][1])))) - p_17[0][2]);
  v_9 = (signed char)(- ((double)v - ((double)(result >> (v & 63ULL)) - (
                                      v_11 + (double)p_7))));
  result = ((unsigned long long)((double)(p % (long)(p_4 + 876)) + 1.35446767052e+38) - (
            (v + (unsigned long long)p_7) + 101875ULL)) % 467ULL;
  return result;
}


