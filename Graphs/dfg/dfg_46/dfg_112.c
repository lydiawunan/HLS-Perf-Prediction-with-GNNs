#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 228990855
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p[4][1][5])
{
  int v_13;
  unsigned char v_11;
  unsigned long v_8;
  short v_6;
  unsigned short v_4;
  float v;
  unsigned long long result;
  v_13 = -21281;
  v_11 = (unsigned char)p[1][0][1];
  v_8 = (unsigned long)p[1][0][1];
  v_4 = (unsigned short)p[2][0][2];
  v = (float)p[2][0][3];
  result = (unsigned long long)((long long)(((int)(~ p[3][0][2]) * (int)(- p[0][0][1])) % (
                                            (int)(-1.04701986692e+38f * (float)(
                                                  -781449827 % ((int)v_11 + 187))) + 529)) - (
                                (long long)((float)(v_8 * (unsigned long)v_13) / (
                                            v + 727.f)) & 915245482LL));
  v_6 = (short)8198;
  v = (float)(4294967215UL / (v_8 + 466UL));
  result = (unsigned long long)((248.f / (v + 877.f) + - v) - (float)(~ (! result))) + (
           3729ULL + (unsigned long long)(4096076434U - (unsigned int)(
                                          (int)v_4 & (int)v_6)));
  return result;
}


