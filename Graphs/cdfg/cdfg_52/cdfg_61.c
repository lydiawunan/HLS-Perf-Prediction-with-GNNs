#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 706484098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p[1][4], unsigned short p_4, long long p_9,
                  short p_11, unsigned int p_13)
{
  int v_21;
  double v_19;
  double v_17;
  unsigned char v_15;
  char v_7;
  signed char v;
  unsigned long result;
  v_21 = (int)p[0][0];
  v_19 = 4173358596.56;
  v_17 = (double)p_4;
  v_15 = (unsigned char)109;
  v_7 = (char)108;
  result = 3548759782UL;
  if ((unsigned long)(3.21480735478e+38f * (float)result - 98.f) + (unsigned long)(
                                                                   (int)p_11 + (int)p[0][3]) % (
                                                                   result * (unsigned long)p_13 + 196UL) == 29281UL) {
    result = (93UL / (result + 999UL)) / (unsigned long)((int)v_7 + 199) | (unsigned long)(
             (double)v_15 + (double)p_13 * v_17);
    v = (signed char)((unsigned int)((int)v_7 * 49976) / ((p_13 | (unsigned int)v_7) + 876U) - (unsigned int)p_11);
    v_7 = (char)((((unsigned long long)v ^ 60925ULL) - 103ULL) / (unsigned long long)(
                 ! ((long long)p[0][0] - p_9) + 604LL));
  }
  else {
    v = (signed char)(((double)((unsigned int)p[0][0] % (p_13 + 972U)) + - v_19) + (double)(
                      (unsigned int)(79 / ((int)p_11 + 487)) * (p_13 + (unsigned int)v_21)));
    v_7 = (char)5.34584293882e-39f;
    result = (unsigned long)(- p_13);
  }
  if ((long long)(((int)p_4 % ((int)v + 712)) / (((int)v_7 << ((int)((char)2.1775683276e+38) & 7)) + 1000)) + (
      (long long)result - p_9) < (long long)((unsigned int)p_11 - ~ (
                                             p_13 + (unsigned int)v))) 
    result = 4294962071UL;
  else result = (unsigned long)(((int)(~ p[0][3]) / 61863) * (int)p_4);
  return result;
}


