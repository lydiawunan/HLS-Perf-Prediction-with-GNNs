#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1068387744
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p)
{
  int v_15;
  int v_13;
  unsigned long long v_11;
  unsigned int v_9;
  char v_7;
  unsigned int v_5;
  long long v;
  short result;
  v_15 = 392734917;
  v_13 = -901320291;
  v_11 = (unsigned long long)p;
  v_7 = p;
  v_5 = (unsigned int)p;
  v = (long long)p;
  result = (short)p;
  v_9 = (unsigned int)(! (! v % (v / (long long)(v_5 + 121U) + 49LL)));
  while (- ((double)v * ((double)p / 1.05322771106e+38)) > (double)(~ (
                                                                    v_5 / (unsigned int)(
                                                                    (int)v_7 + 702)) / (unsigned int)(
                                                                    (int)v_7 + 21))) {
    v = v_11 * (unsigned long long)((double)v_9 * 446.44049028);
    v_11 = (unsigned long long)(11315U + (unsigned int)(~ ((int)p >> (
                                                           (int)p & 7))));
    v_13 = (int)((long long)(~ (99647272U * (unsigned int)v_13)) - (long long)(
                                                                   (int)p + (int)p) % (
                                                                   (long long)v_7 / -52210LL + 825LL));
    v_5 = (unsigned int)(- (187 & v_13) + ~ (- v_15));
  }
  while_0_break: ;
  return result;
}


