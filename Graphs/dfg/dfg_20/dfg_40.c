#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1057570585
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p[5][2], char p_9,
                       unsigned char p_11[2][3], double p_15)
{
  double v_13;
  unsigned char v_7;
  int v_4;
  unsigned short v;
  unsigned long long result;
  v_13 = p_15;
  result = 27526ULL;
  v_7 = (unsigned char)(v_13 / (p_15 + 266.));
  v = (unsigned short)(24572 + ~ ((int)(- p_11[1][0]) % ((int)(- v_7) + 411)));
  v_4 = (int)((double)(- result & 20008ULL) * 357646241.44 + (double)(! (
              (3356010271U - (unsigned int)v_7) ^ (unsigned int)((int)p[0][1] >> (
                                                                 (int)p_9 & 7)))));
  result = ~ ((unsigned long long)(897863802UL - (unsigned long)v) / (
              result + 392ULL) << ((unsigned long long)((float)(! v_4) * (
                                                        (float)p[4][0] * 4259178752.f)) & 63ULL));
  return result;
}


