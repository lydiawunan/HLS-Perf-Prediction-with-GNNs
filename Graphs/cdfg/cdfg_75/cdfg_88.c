#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 431812640
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, unsigned int p_4, unsigned int p_6)
{
  signed char v_11;
  char v_9;
  float v;
  unsigned long long result;
  v_9 = (char)28;
  v = -5550268416.f;
  v_11 = (signed char)91;
  if ((unsigned long)(((float)p_6 * v) / ((float)((long long)v_9 / -750247387LL) + 108.f)) * 15012UL != (unsigned long)(! v_11)) 
    result = 9539ULL * ((unsigned long long)p / 41516ULL);
  else result = (unsigned long long)(! (- p_4));
  return result;
}


