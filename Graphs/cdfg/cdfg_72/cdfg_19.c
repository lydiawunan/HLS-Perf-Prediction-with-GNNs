#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 483625993
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, float p_13, unsigned char p_17[5][4],
           unsigned long long p_19[3], char p_21[4][1][5])
{
  unsigned short v_23;
  float v_15;
  char v_11;
  short v_9;
  unsigned long long v_7;
  char v_5;
  signed char v;
  double result;
  v_23 = (unsigned short)10809;
  v_15 = -2.60109733721e+38f;
  v_11 = (char)106;
  v_9 = (short)2599;
  v_7 = (unsigned long long)p;
  v = (signed char)p_19[1];
  if (((unsigned long long)p_17[3][3] / (v_7 + 239ULL) - ((unsigned long long)v_11 | p_19[2])) * (unsigned long long)(
      (int)(~ p_17[1][1]) % (((int)((signed char)v_15) + (int)v) + 823)) >= (
      (unsigned long long)((int)v_23 / ((int)(~ p_17[0][1]) + 657)) | (
      (18446744073709530693ULL + p_19[0]) >> ((int)v_23 & 63)))) {
    v_5 = (char)((int)p_21[1][0][0] - (int)v_11);
    v_15 = (float)(! ((int)v * (int)p_17[2][1]) * (((int)p_21[1][0][2] >> 1) / (
                                                   (int)p + 190)));
    v_7 = (unsigned long long)(! (~ p)) * p_19[2];
  }
  else {
    v = (signed char)(~ (unsigned char)209);
    v_5 = (char)(((int)v_9 / ((int)(! v_23) + 449)) / ((int)v_23 + 754));
    v_7 = (unsigned long long)((float)((long)(- p_21[3][0][4]) / ((-444619707L - (long)v_5) + 43L)) * (
                               v_15 - (float)p_17[3][2]));
  }
  if (- (- v_15 + (float)((int)v - (int)p_17[3][2])) > (float)(- (p_19[2] % 940285651ULL - 50714ULL))) {
    v_5 = (char)((long long)v_5 % (((long long)v_11 - 855786167LL) + 459LL) | (long long)(
                 (unsigned long)(~ p) % (60172UL * (unsigned long)p + 104UL)));
    v = (signed char)(((unsigned long long)v_5 % (v_7 + 687ULL)) * 17263ULL << (
                      (unsigned long long)(- ((double)v_9 * -1.29287218894e+38)) & 63ULL));
    result = (double)(- (24024 - (int)p % ((int)v + 803)));
  }
  else result = (double)(- (p_13 - (float)p) - -14843.f);
  return result;
}


