#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 316716427
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, char p_5, float p_7)
{
  long long v_11;
  float v_9;
  long v;
  short result;
  v_11 = -232241108LL;
  v_9 = 5854726656.f;
  if ((long long)(- v_9) < v_11) v = (long)((float)p / (p_7 + 514.f));
  else {
    v = -158174977L;
    result = (short)(209.641937256f + (float)v);
    v = (long)(~ (- ((int)result % -95)));
  }
  result = (short)((unsigned long)p * ((unsigned long)(v >> ((int)p_5 & 31)) ^ (unsigned long)p));
  return result;
}


