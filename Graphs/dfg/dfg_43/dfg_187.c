#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 538231659
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, long long p_5[1][2], int p_7[2][1][3], unsigned int p_17)
{
  char v_21;
  long long v_19;
  unsigned int v_15;
  int v_13;
  short v_11;
  unsigned char v_9;
  double v;
  int result;
  v_21 = (char)52;
  v_19 = p_5[0][1];
  v_15 = 36609U;
  v_13 = (int)p;
  v_9 = (unsigned char)p_5[0][0];
  v_11 = (short)p_5[0][1];
  result = ! ((int)v_9 + (int)((unsigned char)-4214633728.f)) % (! ((int)v_11 * v_13) + 684) >> (
           ((long long)(- (v_15 - p_17)) + v_19 * (long long)(- v_21)) & 31LL);
  v = (double)(~ (~ (~ (p_5[0][0] - (long long)p_7[0][0][0]))));
  result = (int)(- (-75. / (((double)result / (v + 30.)) * (double)(- p) + 155.)));
  return result;
}


