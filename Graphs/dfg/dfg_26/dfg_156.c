#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 397774974
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, double p_9)
{
  short v_6;
  signed char v_4;
  char v;
  long result;
  v_6 = (short)731;
  v_4 = (signed char)-74;
  v = (char)-94;
  result = (long)p_9;
  result = result;
  v = (char)(~ ((unsigned int)((int)v * (int)v_4) + 4294097614U) * (unsigned int)(
             ((double)v_6 + 2.34002290647e+38) - ((double)(result & (long)p) - p_9)));
  v = ~ v;
  result = (long)v;
  return result;
}


