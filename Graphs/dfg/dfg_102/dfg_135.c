#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 396011955
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, unsigned char p_5, unsigned int p_7, short p_13[4])
{
  unsigned long long v_17;
  unsigned short v_15;
  int v_11;
  unsigned short v_9;
  long long v;
  signed char result;
  v_17 = (unsigned long long)p_13[2];
  v_9 = (unsigned short)p_13[2];
  v_15 = (unsigned short)v_17;
  v_11 = (int)(! v_15);
  v = (long long)((4633UL + (unsigned long)v_11) * (unsigned long)((long)(
                  148 - (int)p_13[2])));
  result = (signed char)(((v * (long long)p + (long long)((int)p_5 % (
                                                          (int)((unsigned char)-1568379136.f) + 472))) / (long long)(
                          p_7 + 161U)) / (long long)(! ((unsigned long)(! v_9) - 3574055172UL) + 89UL));
  return result;
}


