#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 885819344
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, int p_5[5], char p_13, int p_17, int p_19[5][5])
{
  unsigned long v_21;
  signed char v_15;
  unsigned long v_11;
  float v_9;
  unsigned long long v_7;
  double v;
  unsigned short result;
  v_21 = (unsigned long)p_5[2];
  v_15 = (signed char)p_17;
  v_9 = 793142272.f;
  v_7 = (unsigned long long)p_19[3][4];
  if ((unsigned long long)(((int)p_13 + (int)v_15) & p_17 / (p_19[3][3] + 53)) % (
      - (v_7 - (unsigned long long)p) + 901ULL) >= (unsigned long long)(
      (-936544620LL % (long long)(v_21 + 57UL) + 75LL) % (long long)(
      (p_19[4][3] % (p_19[1][4] + 609)) % (p_17 + 1009) + 514))) {
    v_11 = (unsigned long)(- 585.378068275);
    result = (unsigned short)(~ v_11);
    v = (double)(- ((float)p_5[3] + ((float)v_7 + v_9)));
  }
  else {
    v = (double)35656;
    result = (unsigned short)(792.141368419 * ((1.16253014764e+38 * (double)p_13) * 34490.));
  }
  result = (unsigned short)((unsigned long)((long)result * 376056020L) % (
                            ((unsigned long)v - 762469712UL) + 58UL) - (unsigned long)(
                            (int)(! p) + (-18652 + (int)result)));
  return result;
}


