#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 720242657
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p[1][2][5], float p_5, int p_7,
                   char p_9, int p_15)
{
  long long v_17;
  int v_13;
  int v_11;
  short v;
  unsigned short result;
  v_17 = (long long)p_5;
  v_13 = p_15;
  v_11 = 31123;
  v = (short)32468;
  while (((int)((float)p[0][0][1] + p_5) + p_7) + -1 < (int)(! p_9) + v_11) {
    v_11 = v_13 * -904076078;
    v_17 = (long long)(- (-105564728.f * (float)p_9)) + ! (v_17 + (long long)v_11);
    v_17 = (long long)(~ ((unsigned long)p_9 ^ 17103UL)) % (~ v_17 + 852LL);
    v_11 = (int)(- (- p_5) * (float)((long long)(p_7 + (int)v) + (long long)p_15 / (
                                                                 v_17 + 814LL)));
  }
  while_0_break: ;
  result = (unsigned short)v;
  return result;
}


