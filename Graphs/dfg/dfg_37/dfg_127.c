#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 585686660
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, int p_13)
{
  float v_15;
  float v_11;
  unsigned long v_8;
  long v_6;
  double v_4;
  char v;
  unsigned char result;
  v_15 = (float)p_13;
  v_11 = p;
  v_6 = -4596L;
  v_8 = (unsigned long)(- v_15);
  v_4 = (double)((int)(-1.28358334568e+38f - - (p / (v_11 + 765.f))) / (
                 p_13 + 610));
  v = (char)((unsigned long)v_4 | ~ ((unsigned long)(v_6 - 30446L) * (
                                     3746570978UL / (v_8 + 53UL))));
  result = (unsigned char)v;
  return result;
}


