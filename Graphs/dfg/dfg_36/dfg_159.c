#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 537285816
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, unsigned char p_9, unsigned long p_11,
        unsigned long p_13, unsigned char p_17)
{
  float v_15;
  unsigned long long v_7;
  signed char v_5;
  short v;
  int result;
  v_15 = -733.804138184f;
  v_5 = (signed char)((long long)(! ((p_11 - p_13) % (unsigned long)(
                                     (int)p * -2790 + 139))) * ((long long)(
                                                                (v_15 - 45.f) - (float)(~ p_17)) + -8131LL));
  v_7 = (unsigned long long)(-1.77891764948e+38 - (double)((unsigned long)(! (~ p_9)) - ! (~ p_11)));
  v = (short)((unsigned long long)(- v_5) * v_7);
  result = (int)(- ((double)(~ ((int)p % ((int)v + 217))) / 1.84467440736e+19));
  return result;
}


