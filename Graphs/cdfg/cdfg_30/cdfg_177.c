#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 417446793
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p[4][2][2], float p_4[5], signed char p_6[5][4][3], int p_8,
          char p_15)
{
  float v_19;
  long v_17;
  unsigned char v_13;
  char v_11;
  short v;
  float result;
  v_19 = (float)p_6[1][0][1];
  v_11 = p_15;
  v = (short)p_8;
  result = (float)p_6[1][2][2];
  if ((unsigned long long)((int)v / ((int)p_6[2][1][0] + 316)) >= 18446744073646628864ULL) {
    v = (short)(! (((int)p_6[0][1][1] - -36309) / (((int)p_15 - -43477) + 697)));
    v_13 = (unsigned char)(-324 % (- ((int)p_15 % (p_8 + 956)) + 305));
    result = (float)v_13;
  }
  else {
    v_17 = (long)(- ((int)p[1][0][1] - ((int)((signed char)v_19) & (int)p_6[4][3][1])));
    v = (short)((long long)((float)(! v_17) + 4294906624.f * result));
    v_11 = (char)(- p[1][0][1]);
  }
  if ((unsigned long long)result == (19064ULL & (unsigned long long)(
                                     p_8 / ((int)v + 964))) * (unsigned long long)(
                                    310529464LL | (long long)v_11)) {
    result = -1.f * - p[3][0][0];
    result = result;
  }
  else result = p_4[4] * (float)p_6[0][1][0];
  return result;
}


