#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 683224131
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p)
{
  signed char v_11;
  short v_9;
  unsigned long long v_7;
  short v_4;
  int v;
  long result;
  v_7 = 18446744073709513325ULL;
  v_4 = (short)-19921;
  v = 55154;
  result = 24371L;
  v_9 = (short)result;
  v_11 = (signed char)(! v_7 - (~ ((unsigned long long)result / 289422963ULL) - 99ULL));
  v = (int)((unsigned long)((int)v_9 - (int)((signed char)641628288.f) / (
                                       (int)v_11 + 517)) / (((p % 199148245UL) / (
                                                             p / (unsigned long)(
                                                             (int)v_9 + 596) + 965UL) ^ (unsigned long)(
                                                             ~ v / ((
                                                                    28081 & (int)((unsigned short)2.83550453139e+38)) + 783))) + 694UL));
  result = (long)(! ((unsigned long long)((407041381L / (long)(v + 508)) % (long)(
                                          (int)(- v_4) + 170)) + (unsigned long long)(~ p) / (
                                                                 v_7 + 598ULL)));
  return result;
}


