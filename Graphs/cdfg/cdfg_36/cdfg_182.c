#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 582566516
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, int p_4, long p_13[4][3], unsigned long p_15,
              unsigned char p_17[4])
{
  char v_25;
  unsigned short v_23;
  long long v_21;
  unsigned short v_19;
  signed char v_11;
  double v_9;
  int v_7;
  unsigned short v;
  long long result;
  v_25 = (char)p;
  v_23 = (unsigned short)43754;
  v_21 = (long long)p_15;
  v_19 = (unsigned short)47626;
  v_11 = (signed char)p_4;
  v_9 = (double)p_13[0][1];
  v_7 = (int)p_13[1][2];
  v = (unsigned short)p_15;
  result = -65452LL;
  while (((long long)(! v_19) + 203091729LL) / (long long)(- (4294926392UL >> (
                                                              (unsigned long)v_9 & 31UL)) + 601UL) <= (long long)((unsigned long)(
         (p_4 - (int)v_11) << (! v_21 & 31LL)))) {
    v_21 = (int)v_25 % (((int)v_23 - 40) + 661);
    v = (unsigned short)result;
    result = (long long)(p_13[0][2] << ((p_4 & (int)(~ p_17[2])) & 31));
    v_11 = (signed char)(- (- ((float)p_17[2] + p)));
  }
  while_0_break: ;
  while (~ ((int)p - ! p_4) < -1) {
    v_9 = (int)v_9 % ((v_7 - -80) + 989);
    result = (long long)(-48 / ((int)p_17[1] * (int)((unsigned char)(
                                (float)p_17[0] / (p + 568.f))) + 964));
    v = (unsigned short)(- p_13[3][0]);
    v_7 = (int)((unsigned long)(~ (p_4 / ((int)v_11 + 929))) / (((unsigned long)(
                                                                 p_13[2][2] + 31L) ^ ! p_15) + 361UL));
  }
  while_0_break_0: ;
  return result;
}


