#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 839529666
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, long long p_7, short p_9, unsigned long long p_11)
{
  short v_15;
  double v_13;
  long long v_4;
  unsigned long v;
  double result;
  v_15 = p_9;
  v = 21754UL;
  result = (double)p_9;
  v_13 = (double)((31911UL + v) % (unsigned long)((int)(- v_15) + 250));
  v_4 = - (p_7 - (long long)result) * (long long)((int)p_9 << (p_11 & 15ULL)) - - (
        (long long)(22044 + (int)((short)v_13)) - - p_7);
  v = (unsigned long)(- (-64376.f / (- (- p) + 821.f)));
  result = (double)(! ((long long)v - v_4));
  return result;
}


