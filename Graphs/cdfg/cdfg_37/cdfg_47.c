#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 999688878
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p[5][4], unsigned int p_7, unsigned long long p_13)
{
  long long v_19;
  char v_17;
  float v_15;
  unsigned short v_11;
  unsigned long long v_9;
  int v_5;
  unsigned int v;
  unsigned long result;
  v_19 = 106356471LL;
  v_5 = p[3][2];
  v = 4294931325U;
  result = 3738386495UL;
  v_15 = (float)(! (! (result - (unsigned long)p[1][0])));
  while (- ((unsigned long)v ^ ! result) < (unsigned long)p[2][0]) {
    v_17 = v_5 - (int)-1.50212496264e+38;
    v_9 = (unsigned long long)(- ((long long)(v_15 / ((float)v_17 + 557.f)) * ~ v_19));
    v_11 = (unsigned short)((unsigned long long)(~ (- p_7)) / ((unsigned long long)(
                                                               p_7 * (unsigned int)2.20343213426e+38) % (
                                                               56081ULL * p_13 + 602ULL) + 259ULL));
    v = (unsigned int)(- (650231874ULL << (p_7 & 63U)) - ((v_9 + (unsigned long long)v_11) + (unsigned long long)(~ p[0][1])));
  }
  while_0_break: ;
  return result;
}


