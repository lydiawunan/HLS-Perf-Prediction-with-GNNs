#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 322044247
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, unsigned long long p_9, float p_13[4][4][1],
           unsigned short p_17, long p_19)
{
  int v_15;
  short v_11;
  short v_7;
  unsigned char v_4;
  long long v;
  double result;
  v_15 = (int)p_19;
  v_7 = (short)26612;
  v_4 = (unsigned char)104;
  if ((unsigned long)((int)(! (~ v_4)) % 13261) < 0) {
    v_4 = (unsigned char)((unsigned long long)(~ p / (unsigned int)((int)v_4 + 445)) + (
                          (unsigned long long)v_7 - (unsigned long long)v_4 * p_9));
    v = (long long)(- ((int)v_4) / 423);
    v = v;
  }
  else {
    v_11 = (short)p_17;
    v_7 = (short)(p_13[2][0][0] * (float)v_15);
    v = (long long)(((int)v_7 * 63589 + (int)(- v_11)) - -603135320);
  }
  result = (double)v;
  return result;
}


