#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 231969841
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, long long p_7)
{
  short v_13;
  unsigned int v_11;
  unsigned long v_9;
  unsigned char v_4;
  unsigned int v;
  int result;
  v_13 = (short)23800;
  v_11 = 3752589939U;
  v_9 = 3627512065UL;
  v = (unsigned int)(~ v_13);
  if (v_11 <= 148U) result = 1774;
  else {
    v = (unsigned int)((unsigned long)((unsigned int)(p % 155) ^ ! v) + 14418UL);
    v_4 = (unsigned char)(! ((long long)(p & -25433) - (p_7 - (long long)v_9)));
    result = (int)((unsigned char)(- (337.506286621f * (float)v))) / (
             (int)(- v_4) + 21);
  }
  return result;
}


