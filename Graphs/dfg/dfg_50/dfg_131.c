#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 241041670
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, char p_7, signed char p_9, long p_11[5], long p_13)
{
  unsigned int v_19;
  float v_17;
  char v_15;
  unsigned short v_5;
  signed char v;
  double result;
  v_19 = (unsigned int)p;
  v_17 = 6216058880.f;
  v_15 = (char)(- (- (v_17 - (float)v_19) - 1.84467440737e+19f));
  v_5 = (unsigned short)((long)(~ p_9) % 185L);
  v = (signed char)(- ((int)v_5 / ((int)(- p_7) + 906)));
  result = (double)(! (- ((p / 52767LL) % ((long long)v % (p + 984LL) + 273LL))));
  return result;
}


