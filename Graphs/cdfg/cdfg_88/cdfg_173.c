#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 764105906
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, long p_7, unsigned long p_9)
{
  char v_15;
  short v_13;
  int v_11;
  float v_4;
  unsigned long v;
  unsigned long result;
  v_15 = (char)13;
  v_13 = (short)30564;
  v_11 = (int)p_9;
  v_4 = (float)p_7;
  result = 4294910494UL;
  v = (unsigned long)(0 % (unsigned int)(v_11 + 79));
  if (v != (unsigned long)(-53 << (v_11 * (int)v_13 & 7)) + ~ result % (unsigned long)(
                                                            ((long)v_15 + 223764668L) + 282L)) {
    v = (unsigned long)p;
    v = (unsigned long)((float)v + - (- v_4));
    result = v;
  }
  else result = 0UL;
  return result;
}


