#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 383821997
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned short p_7, int p_13)
{
  float v_15;
  float v_11;
  long long v_9;
  unsigned int v_4;
  float v;
  double result;
  v_15 = (float)p;
  v_11 = (float)p_13;
  v_9 = -58055LL;
  result = (double)(((v_9 * 708LL - (long long)(v_11 / ((float)p_13 + 358.f))) - (long long)(
                     0 % ((int)((signed char)v_15) + 816))) / (long long)(
                    (int)p_7 + 243));
  v = (float)(~ ((int)p - (int)p_7));
  v_4 = (unsigned int)((int)((short)(- v)) & -10575);
  result = (double)(((unsigned int)((result * (double)v) * 233.) * v_4) * (unsigned int)-390.944509158);
  return result;
}


