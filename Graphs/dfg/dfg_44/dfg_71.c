#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 880189244
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, signed char p_11, unsigned long long p_17)
{
  unsigned short v_15;
  unsigned char v_13;
  double v_9;
  short v_7;
  short v_5;
  signed char v;
  long long result;
  v_15 = (unsigned short)22187;
  v_13 = (unsigned char)147;
  v_9 = 250.518540973;
  v_5 = (short)28301;
  v = (signed char)-99;
  result = (long long)((unsigned long long)(((int)v / ((int)p_11 + 153)) / (
                                            (int)p + 272) - ((int)p_11 % (
                                                             (int)v_5 + 316) | 
                                                             (int)v_13 / (
                                                             (int)v_15 + 126))) / (
                       (18446744073709501410ULL + ~ (p_17 - 18446744073709539849ULL)) + 882ULL));
  v = (signed char)v_9;
  v_7 = (short)result;
  result = (long long)(~ ((unsigned long)p % 4294959592UL) / (unsigned long)(
                       (int)(! v) * (int)(- v_5) + 740) ^ (unsigned long)(- (- (
                       (double)v_7 + 289.34632545))));
  return result;
}


