#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 337256061
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p)
{
  signed char v_9;
  unsigned long long v_6;
  float v_4;
  unsigned long long v;
  signed char result;
  v_9 = p;
  v_4 = (float)p;
  v = (unsigned long long)p;
  v_6 = (unsigned long long)((float)(145ULL / (- v + 1ULL)) - ((234376160.f - 
                                                                v_4 / (
                                                                (float)v_9 + 577.f)) + -84.f));
  v = (unsigned long long)(- p);
  v_4 = (float)(- v_6);
  result = (signed char)(- (- (- v) * (unsigned long long)(- v_4)));
  return result;
}


