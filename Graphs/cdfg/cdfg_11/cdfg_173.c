#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 937668762
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, long p_7, int p_11)
{
  unsigned short v_15;
  float v_13;
  double v_9;
  double v_4;
  unsigned short v;
  long result;
  v_15 = (unsigned short)p_7;
  v_13 = 417.382324219f;
  v_9 = (double)p_7;
  v_4 = (double)p_7;
  result = p_7;
  v = (unsigned short)((float)((int)v_13 * p - (p ^ (int)v_9)) / (- v_13 + 755.f));
  while ((float)((long)((double)v * v_4 - (double)((long)p / (p_7 + 150L))) * (
                 (result % 104L) / (long)(((int)v_9 | p_11) + 243))) > -947147840.f) {
    v_9 = (int)v_15 >> ((int)((unsigned short)(v_13 * 694430784.f)) & 15);
    result = (long)4.87785943674e+13;
    v_13 = (float)p;
    v = v;
  }
  while_0_break: ;
  return result;
}


