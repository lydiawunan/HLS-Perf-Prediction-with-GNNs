#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 803378857
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, long long p_4, int p_6, unsigned long p_8,
           long p_11)
{
  unsigned short v_21;
  unsigned char v_19;
  unsigned int v_17;
  unsigned short v_15;
  double v_13;
  char v;
  double result;
  v_19 = (unsigned char)p_4;
  v_17 = (unsigned int)p;
  v_15 = (unsigned short)30540;
  v_13 = (double)p;
  v = (char)-32;
  result = (double)p_6;
  while ((double)p_4 < v_13) {
    v_21 = (unsigned long long)v_19 - (unsigned long long)v_17 % (((unsigned long long)v_15 ^ 18780ULL) + 216ULL);
    v_17 = 34868U;
    v_19 = (unsigned char)28;
    v_13 = (result / -6.75771034503e+36) * (double)((int)v_21 | p_6) + 30060.;
  }
  while_0_break: ;
  if ((long)(- ((int)v - 43997)) > ! p_11 - 1258L) result = (double)(
                                                   ((long long)(~ p) - 
                                                    -69LL % (p_4 + 422LL)) % (
                                                   (long long)((338.329162598f / (
                                                                (float)p_6 + 363.f)) / (
                                                               (float)(
                                                               4294951139UL / (
                                                               p_8 + 826UL)) + 938.f)) + 35LL));
  else result = (double)574312159L;
  return result;
}


