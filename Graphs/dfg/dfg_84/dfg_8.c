#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 638732539
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p[5])
{
  int v_12;
  signed char v_10;
  int v_8;
  unsigned long long v_6;
  unsigned short v_4;
  signed char v;
  long long result;
  v_10 = (signed char)p[1];
  v_8 = 691028092;
  v_6 = 12140ULL;
  v_4 = (unsigned short)p[0];
  v = (signed char)-75;
  v_12 = (int)((long)v_8 % (((long)((int)(! v_4) * ((int)v_4 / ((int)p[1] + 908))) + (
                             (long)(~ p[4]) | 244523372L)) + 171L));
  v_6 = ! ((unsigned long long)(v_8 % (v_12 + 922)) - (unsigned long long)v_12 / (
                                                      v_6 + 164ULL)) & (unsigned long long)p[0];
  v_8 = 0;
  result = (long long)((unsigned long long)((int)v % (! (-25078 * (int)v_4) + 537)) % (
                       6650899825ULL % ((((unsigned long long)v - v_6) | (unsigned long long)v_8) + 317ULL) + 675ULL));
  return result;
}


