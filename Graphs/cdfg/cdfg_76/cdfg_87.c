#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 555420620
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, double p_4[5][3])
{
  int v_13;
  char v_11;
  unsigned long long v_9;
  unsigned long long v_7;
  unsigned long long v;
  char result;
  v_13 = 550748310;
  v_7 = (unsigned long long)p_4[2][0];
  v = (unsigned long long)p_4[0][1];
  result = (char)p_4[2][2];
  v = 46ULL ^ v % (unsigned long long)((unsigned long)v_13 / 62021UL + 290UL);
  while (-59871LL >= (long long)result) {
    v_11 = v_7 - v % 4294954779ULL;
    v_9 = (unsigned long long)v_11;
    v_7 = 0ULL;
    result = (char)102;
  }
  while_0_break: ;
  return result;
}


