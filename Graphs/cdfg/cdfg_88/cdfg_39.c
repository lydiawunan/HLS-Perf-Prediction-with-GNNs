#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1001293848
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p)
{
  long long v_16;
  char v_14;
  long long v_12;
  unsigned char v_10;
  float v_8;
  int v_6;
  short v_4;
  unsigned long long v;
  unsigned long result;
  v_14 = (char)-7;
  v_12 = 5849LL;
  v_10 = (unsigned char)177;
  v_8 = -2.61312257504e+38f;
  v_6 = (int)p;
  v_4 = (short)p;
  v = (unsigned long long)p;
  while (-2.55850975329e+38f == - v_8) {
    v_16 = v_12 * (long long)((unsigned long)v_10 * 4194234283UL);
    v_10 = (unsigned char)p;
    v_12 = 774638285LL;
    v_8 = (float)((long long)v_14 - ~ (! v_16));
  }
  while_0_break: ;
  result = (unsigned long)(((60ULL % (v + 789ULL)) / 288530428ULL) % (unsigned long long)(
                           ~ ((int)v_4 + v_6) + 681));
  return result;
}


