#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 925532653
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p[2][4], unsigned long long p_13[2][3])
{
  long v_23;
  unsigned short v_21;
  float v_19;
  double v_17;
  unsigned long v_15;
  int v_11;
  unsigned long v_9;
  float v_6;
  unsigned long v_4;
  long long v;
  double result;
  v_23 = (long)p[0][1];
  v_21 = (unsigned short)p_13[0][0];
  v_19 = (float)p_13[1][2];
  v_17 = -571.775563603;
  v_15 = 4294946172UL;
  v_11 = p[0][1];
  v_9 = 597613127UL;
  v_6 = -6326658048.f;
  v = (long long)p[1][3];
  while (- ((int)(1042686886. * v_17) % 26751) > (int)((float)v_11 * -2303718.f)) {
    v_6 = v_19 + -13.f;
    v_15 = (unsigned long)(! ((long long)v_23 * -1049883115LL) + (long long)(! (
                           (unsigned long)v_23 | v_9)));
    v = (long long)((((unsigned long long)v_23 ^ p_13[1][2]) + 107ULL) % (unsigned long long)(
                    ! p[0][1] + 624));
    v_11 = (int)(-56007735L + (long)(- (p[1][3] + (int)v_21)));
  }
  while_0_break: ;
  if (~ p_13[1][2] <= (unsigned long long)(~ (! v_15 ^ 245870976UL))) {
    v_4 = (unsigned long)(! (34443LL | v) / (long long)(! (p[1][2] ^ p[0][1]) + 995));
    v = (long long)(- ((float)v_4 / (- v_6 + 107.f)));
    result = (double)(~ (702103053ULL | (unsigned long long)(~ v)));
  }
  else {
    v_9 = (unsigned long)(~ -646564943L);
    v_11 = 799630742;
    result = (double)(v_9 + (unsigned long)(! (- v_11)));
  }
  return result;
}


