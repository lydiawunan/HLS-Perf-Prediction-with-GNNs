#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 345216088
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p[3][2][1], unsigned long long p_11, char p_13)
{
  unsigned long long v_17;
  float v_15;
  int v_8;
  double v_6;
  unsigned short v_4;
  short v;
  unsigned long long result;
  v_17 = (unsigned long long)p_13;
  v_8 = (int)p_13;
  v_4 = (unsigned short)p_13;
  result = 18446744072641359287ULL;
  v = (short)(- p[0][1][0]);
  v_15 = 2498840320.f * (float)(~ ((unsigned long long)v_8 ^ p_11) * v_17);
  v_6 = (double)(18446744073709551490ULL / (! (18ULL - p_11) + 264ULL) & 
                 (unsigned long long)((int)p_13 - (int)((char)v_15)) * (
                 (result >> 10) + 3817251672ULL));
  result = (unsigned long long)((int)(~ v) * ((int)v_4 - (int)v_6 / (
                                                         (v_8 - (int)p[0][1][0]) + 415)));
  return result;
}


