#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 449418542
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, short p_4, unsigned long long p_6[4],
                   int p_8[4][1][1], long long p_13)
{
  char v_19;
  float v_17;
  long long v_15;
  long long v_11;
  long long v;
  unsigned short result;
  v_19 = (char)p_4;
  v_17 = 5.85724855855e+37f;
  v_15 = (long long)p_8[1][0][0];
  if (p_13 / (long long)((int)((char)((float)v_15 * v_17)) * (int)(! v_19) + 420) >= (long long)(- (
      863589185. / ((double)p_6[1] * 267.306938097 + 642.)))) result = (unsigned short)(
                                                              3.18364931432e+38 * - (
                                                              6979861539.73 * (double)p_8[3][0][0]));
  else {
    v_11 = (long long)(- (- -1999886041.85));
    v = v_11;
    result = (unsigned short)(v + -5274LL);
  }
  if ((unsigned long long)(! ((long long)(~ result) % -45413LL)) < (unsigned long long)(! (
                                                                   46323 * (int)p_4)) / (
                                                                   (18446744073709518370ULL + - p_6[3]) + 220ULL)) 
    result = (unsigned short)53369;
  else result = (unsigned short)p;
  return result;
}


