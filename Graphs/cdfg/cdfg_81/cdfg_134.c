#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 235701852
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p[1][3], int p_11, unsigned long long p_13,
                   double p_15, signed char p_19)
{
  signed char v_29;
  char v_27;
  unsigned long v_25;
  unsigned long v_23;
  unsigned short v_21;
  unsigned int v_17;
  unsigned int v_9;
  char v_6;
  unsigned char v_4;
  long long v;
  unsigned short result;
  v_29 = (signed char)84;
  v_27 = (char)p_13;
  v_25 = 55993UL;
  v_17 = (unsigned int)p_15;
  v_9 = 4294928996U;
  v_6 = (char)p_13;
  v = -743015303LL;
  v_21 = (unsigned short)(1477164949.8 / ((double)((unsigned int)p_11 - (
                                                   v_17 - (unsigned int)p_19)) + 372.));
  if (0UL <= (unsigned long)v_29) {
    v_4 = (unsigned char)((double)((unsigned long long)(v * (long long)p_11) / (
                                   ! p_13 + 11ULL)) + (p_15 * (double)v_17) * (
                                                      (double)p_19 - -5862037137.89));
    v = (p[0][0] - (long long)v_9 / (p[0][0] + 71LL)) - p[0][0] % (long long)(
                                                        p_11 + 143);
    result = (unsigned short)(((v * 16LL) * (long long)((unsigned long)v_4 - 3695291208UL)) * (long long)v_6);
  }
  else {
    v_4 = (unsigned char)((-752LL ^ p[0][2]) * (long long)(108 * (int)v_21));
    v_23 = (unsigned long)(178 * - p_11);
    result = (unsigned short)((double)((unsigned long)(~ v_4) + ((unsigned long)v_21 - v_23)) + - (
                              p_15 - (double)p_11));
  }
  return result;
}


