#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 705413071
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, signed char p_5[4][3][4], long p_9,
        signed char p_11)
{
  unsigned long v_15;
  long v_13;
  int v_7;
  unsigned short v;
  int result;
  v_15 = 377810563UL;
  v = (unsigned short)64176;
  v = (unsigned short)(v_15 / (unsigned long)(! (27108 ^ (int)(! v)) + 545));
  v_13 = ! (~ p_9);
  v_7 = (int)(~ (! (p_9 + (long)p_11)) + ((-767962018L - v_13) << 13));
  result = (int)(! ((((unsigned long long)v | p) - (unsigned long long)p_5[0][1][2]) / (
                    (p | (unsigned long long)v_7) % (unsigned long long)(
                    (int)p_5[2][0][2] + 840) + 204ULL)));
  return result;
}


