#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 823431124
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, double p_7[5][4], int p_13,
              unsigned short p_15)
{
  unsigned long long v_19;
  short v_17;
  unsigned char v_11;
  char v_9;
  char v_4;
  signed char v;
  long long result;
  v_19 = (unsigned long long)p_13;
  v_17 = (short)p_7[4][1];
  v_11 = (unsigned char)p_15;
  v_9 = (char)p_13;
  result = -417382531LL;
  v = (signed char)(~ result % 553LL & 1540017408LL);
  v_4 = (char)(((int)v_11 >> ((int)(- p_15) & 7)) / 122 >> ((unsigned long long)(! (
                                                            -819552285 - (int)v_17)) % (
                                                            (unsigned long long)p_7[0][1] % (
                                                            (v_19 >> (
                                                             p & 63ULL)) + 539ULL) + 861ULL) & 31ULL));
  v = (signed char)((- p_7[3][3] * 3984888. - (double)(! (p_13 * (int)p_15))) / (
                    (double)v + 860.));
  result = (long long)((int)(-919.030273438f / ((float)((unsigned long long)v + (
                                                        (unsigned long long)v_4 + p)) + 178.f)) - 
                       (811699652 + (int)(p_7[1][0] / ((double)v_9 + 464.))) / (
                       (int)v_11 + 748));
  return result;
}


