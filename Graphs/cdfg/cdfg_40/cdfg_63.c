#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 93353196
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, short p_5, signed char p_7, unsigned long p_9,
              unsigned short p_11)
{
  float v_15;
  short v_13;
  double v;
  long long result;
  v_15 = 684419968.f;
  v_13 = (short)p;
  v = 1194172688.26;
  v_13 = (short)(0 % (((int)v_13 - (int)((short)v_15)) * (int)p_7 + 880));
  if (p_9 >= (unsigned long)(((double)p_5 / (p + 456.)) * 25744. + (double)(
                             (unsigned long long)((int)p_7 / ((int)v_13 + 895)) + 18446744073709526903ULL))) {
    v = (double)(~ ((p_9 + (unsigned long)p_11) / ((unsigned long)v + 503UL)));
    result = (long long)(- (((int)p_7 + (int)p_5) + (int)p_7));
    result = ((result % ((long long)p + 150LL)) % (long long)(56 % ((int)((unsigned char)v) + 764) + 327)) * (long long)p_5;
  }
  else result = (long long)p_5;
  return result;
}


