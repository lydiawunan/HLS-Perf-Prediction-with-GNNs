#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 849111011
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p)
{
  unsigned long v_12;
  float v_10;
  short v_8;
  unsigned long long v_6;
  int v_4;
  char v;
  unsigned short result;
  v_12 = 3815084674UL;
  v_10 = (float)p;
  v_8 = (short)5332;
  v = (char)-85;
  result = (unsigned short)p;
  v = (char)((- (v_12 * (unsigned long)v) + (unsigned long)(-90 * ((int)((char)v_10) / (
                                                                   (int)p + 752)))) / 19397UL);
  v_6 = (unsigned long long)(- (- (-496.682292549 + (double)result) + (double)v_10));
  v_4 = (int)v_8;
  result = (unsigned short)((unsigned long long)(((int)v / ((int)v + 63)) % 40218) * (
                            (unsigned long long)(- v_4) + (v_6 + 18446744073709534678ULL)) - (unsigned long long)1.96195302306e+38);
  return result;
}


