#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 985784591
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p)
{
  unsigned long long v_7;
  unsigned long v_5;
  unsigned int v;
  float result;
  v_7 = 18446744073182430228ULL;
  v_5 = (unsigned long)(v_7 & (unsigned long long)(~ ((44815L / (p + 278L)) * -8585L)));
  result = (float)(- ((unsigned long long)((unsigned long)(! p) * v_5) - (
                      (unsigned long long)p - 52777ULL)));
  v = (unsigned int)(~ (char)49);
  result = (float)(v + (unsigned int)(174 & (int)((unsigned char)result)));
  return result;
}


