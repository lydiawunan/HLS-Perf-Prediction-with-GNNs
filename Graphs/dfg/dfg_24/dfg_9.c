#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 972319001
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, short p_4, double p_13, int p_15[3])
{
  int v_17;
  float v_11;
  unsigned long v_9;
  float v_7;
  short v;
  double result;
  v_17 = (int)p_13;
  v_11 = -4.44739779444e+36f;
  v = (short)-19210;
  v_7 = (float)(- (- ((v_17 - p_15[0]) * -103)));
  v_9 = (unsigned long)p_15[1];
  v_9 = v_9;
  result = (double)((unsigned int)(p * (int)(! p_4)) / (((unsigned int)(
                                                         (int)v * (int)((short)v_7)) - 46836U) + 569U) << (
                    (((long)((float)v_9 * v_11) + (long)-6400244830.07 * -114290385L) + (long)p_13) & 31L));
  return result;
}


