#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 250740272
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p)
{
  long long v_9;
  float v_7;
  long long v_4;
  unsigned short v;
  float result;
  v_9 = 23100182LL;
  v_7 = (float)p;
  v_4 = (long long)p;
  v = (unsigned short)p;
  result = -6335671808.f;
  while ((float)(~ v_4 / (long long)((int)p + 455)) * ((float)((unsigned long long)v * 18446744073709492912ULL) / (
                                                       result + 664.f)) <= 
         (float)(- p) / (v_7 + 342.f) + - (v_7 * (float)v)) {
    v_7 = v_9 + -295603170LL;
    v_7 = - v_7;
    result = (float)(-587145582U);
    v_7 = - (- ((float)v_4 * v_7));
  }
  while_0_break: ;
  result = (float)(! (- v));
  return result;
}


