#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 676931062
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, char p_7, int p_9, long p_15[2][4][1])
{
  short v_19;
  int v_17;
  unsigned short v_13;
  int v_11;
  unsigned short v_4;
  float v;
  float result;
  v_19 = (short)p_15[1][0][0];
  v_17 = -32360;
  v_13 = (unsigned short)p_7;
  v_11 = 22812;
  v_4 = (unsigned short)p_9;
  result = (float)(char)-93;
  v_19 = (short)(((int)((short)((double)(result - 109.f) + (5687894519.17 + (double)v_11))) & (int)v_19) & (int)p_7);
  v = (float)(((0 - (long)(108 + (int)v_13)) | p_15[1][0][0]) * (long)(
              ((int)-1.99846925038e+38 >> (-123 * v_17 & 31)) & ! ((int)v_19 / (
                                                                   (int)((short)result) + 173))));
  result = (float)((long long)(~ (- ((int)((unsigned short)v) - (int)v_4))) - (
                   - (p ^ (long long)p_7) << (((int)(4838786109.33 - (double)p_9) - (
                                               v_11 - 4859)) & 63)));
  return result;
}


