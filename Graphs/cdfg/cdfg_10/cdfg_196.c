#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 178036841
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, int p_4, char p_6, unsigned char p_8[5][1][3])
{
  float v_21;
  signed char v_19;
  unsigned char v_17;
  long v_15;
  short v_13;
  unsigned int v_11;
  unsigned long v;
  int result;
  v_21 = -203.36177063f;
  v_15 = -765887286L;
  v_11 = (unsigned int)p_8[1][0][1];
  v = (unsigned long)p_4;
  result = (int)p_6;
  v_13 = (short)((! p_4 + p_4 / ((int)v_21 + 779)) | (int)((float)(v_11 * (unsigned int)p) * (
                                                           v_21 / ((float)p_6 + 361.f))));
  while ((long long)(~ (~ (~ result))) > -444835805LL + (long long)((
                                                                    (unsigned long)p_8[0][0][2] + v) + (
                                                                    v >> 31UL))) {
    v_19 = v_15 % (long)((int)v_13 % 12367 + 200);
    v_17 = (unsigned char)(((p_4 + (int)v_19) & (int)p_6 * 103) - (int)(- (
                           (float)p_6 * v_21)));
    v_15 = (long)((unsigned long)((v_11 ^ (unsigned int)p_6) + (unsigned int)(- v_17)) * 4294944205UL);
    result = (int)(- ((float)p * 3264647424.f - 33709.f));
  }
  while_0_break: ;
  return result;
}


