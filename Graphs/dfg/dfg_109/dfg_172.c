#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 911767210
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, short p_9, long p_11, unsigned int p_15[4], float p_17)
{
  double v_19;
  int v_13;
  int v_7;
  short v_4;
  unsigned long v;
  float result;
  v_19 = (double)p;
  v_13 = 136531731;
  v_7 = 430216829;
  v_4 = (short)p_15[2];
  v = 79023070UL;
  v_7 = (int)((unsigned int)(0 % ((((int)p_17 + -60669) - (-18 + (int)p_9)) + 742)) / (
              4294967251U / ((unsigned int)(- v_19) * (p_15[2] % (unsigned int)(
                                                       v_7 + 711)) + 597U) + 337U));
  result = (float)((unsigned long)(! ((int)v_4 + v_7) % (~ (544329436 / (
                                                            (int)p_9 + 464)) + 501)) + (
                   (unsigned long)(- (! p_9)) + (unsigned long)(p * p_11) * (unsigned long)(
                                                (unsigned int)v_13 / (
                                                p_15[0] + 360U))));
  v_4 = (short)((p << (p & 31L)) / ((long)-7175065600.f + 106L));
  result = (float)(! (((unsigned long)result % (v + 788UL)) % (unsigned long)(
                      (int)v_4 % ((int)v_4 + 48) + 711) - 19918UL % (
                                                          (v - 71UL) + 326UL)));
  return result;
}


