#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 591228450
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, unsigned int p_11, double p_13[1][4], long p_15)
{
  int v_9;
  unsigned int v_7;
  float v_5;
  unsigned char v;
  double result;
  v_9 = (int)p;
  v = (unsigned char)p_15;
  v_5 = (float)(-4294952711UL);
  v_7 = (unsigned int)p_15;
  v = (unsigned char)((unsigned long)(~ (v_9 * (59102 * (int)((unsigned short)-1.03701749838e+36f)))) % (
                      ((unsigned long)((p_11 + 122U) + (unsigned int)(
                                       44477 * (int)((unsigned short)p_13[0][1]))) - (unsigned long)(
                       p_15 * (long)v + 574622972L)) + 909UL));
  result = (double)((unsigned long)v * ((- p - (unsigned long)v_5) % (unsigned long)(
                                        ((unsigned int)(! v) + ~ v_7) + 937U)));
  return result;
}


