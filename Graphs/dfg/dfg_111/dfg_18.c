#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 949821201
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned short p_9, int p_15)
{
  int v_13;
  long v_11;
  long long v_6;
  int v_4;
  long long v;
  unsigned long result;
  v_13 = -747410527;
  v_11 = 33834L;
  result = 577734275UL;
  v_4 = 8779;
  v_6 = (long long)(! ((unsigned long)p / (result + 477UL) - (unsigned long)(- p_9))) % (
        (-31858LL % (long long)(v_11 + 338L)) / (long long)(v_13 * p_15 + 165) + 712LL);
  v = ! (! ((long long)(- v_4) - (156LL + v_6)));
  result = (unsigned long)v;
  return result;
}


