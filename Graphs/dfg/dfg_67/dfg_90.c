#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071483690
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, int p_7[4][5], long p_9, long long p_15,
                   unsigned long long p_17)
{
  float v_13;
  short v_11;
  double v_5;
  long v;
  unsigned short result;
  v_13 = 1658394112.f;
  v_11 = (short)p;
  v_5 = (double)-583.378723145f;
  result = (unsigned short)((double)(((long)(v_5 * (double)p_7[0][1]) - - p_9) + (long)(
                                     -26443 / ((int)v_11 + 677))) * (
                            (double)(- v_13 * (float)(8934LL % (p_15 + 889LL))) * (
                            -2632537019.72 / ((double)(! p_17) + 598.))));
  v = (long)(! p + 4294967209UL);
  result = (unsigned short)(! ((long long)(13710UL % ((unsigned long)result % (
                                                      p + 593UL) + 840UL)) * (
                               (long long)v % 99982077LL)));
  return result;
}


