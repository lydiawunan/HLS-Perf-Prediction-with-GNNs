#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 593478140
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, long p_4, unsigned short p_6, short p_9[3], long long p_13)
{
  long v_15;
  int v_11;
  signed char v;
  int result;
  v_15 = p_4;
  v_11 = -176984136;
  v_11 = (int)((((long long)9.59336967457e+37 % (! p_13 + 841LL)) / (long long)(
                ((long)v_11 ^ ! p_4) + 582L)) / (((long long)(v_15 % (long)(
                                                              (int)p_6 + 31)) / (
                                                  -148LL * p_13 + 106LL) ^ 518LL) + 449LL));
  v = (signed char)(! ((int)p_9[2] % (v_11 + 559)));
  result = 32633;
  result = (int)(((unsigned long long)((long)p % (((long)result - p_4) + 252L)) | (
                  (unsigned long long)((int)p_6 % (result + 154)) + (
                  (unsigned long long)p_4 - 18446744073709549262ULL))) * (unsigned long long)v);
  return result;
}


