#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 302354566
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, signed char p_5[4][2][3], signed char p_7,
                 float p_11[1][5][2], signed char p_13)
{
  int v_15;
  float v_9;
  char v;
  unsigned int result;
  v_15 = 87583832;
  v = (char)(! (! (v_15 - (int)p_13) * (int)p));
  v_9 = (float)((unsigned long long)(p_11[0][3][0] / ((float)(174 + (int)p_13) + 132.f)) * (
                (18446744073180459365ULL - (unsigned long long)((int)p_5[3][0][1] + (int)p)) % 96229506ULL));
  result = (unsigned int)(~ ((int)(- v) % ((int)p_5[0][0][0] * (int)p_7 + 72)) + (int)v_9);
  result = (unsigned int)(~ (~ (23 & (int)p))) % (result + 976U);
  return result;
}


