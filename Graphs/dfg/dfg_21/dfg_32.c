#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 239556253
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, double p_11, unsigned long long p_15[4][2])
{
  int v_13;
  short v_9;
  unsigned int v_6;
  float v_4;
  long long v;
  double result;
  v_13 = (int)p;
  v_4 = (float)p_11;
  v = (long long)p_11;
  result = 168.208064588;
  v_9 = (short)(((double)((unsigned long long)p % 18446744073709536461ULL - (unsigned long long)(! v)) / (
                 (double)((unsigned int)p_11 + 131395265U) * ((double)v_13 * result) + 614.)) * (double)(! (! p_15[2][1])));
  v_6 = (unsigned int)(- v_4);
  v_4 = (float)(v_6 + (unsigned int)((int)p - (int)v_9));
  result = (double)(- (0.f * ((float)(v % (v + 560LL)) + - v_4)));
  return result;
}


