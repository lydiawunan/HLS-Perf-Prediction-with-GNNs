#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 833452387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, char p_9, unsigned long p_11[4], double p_15[5])
{
  unsigned long long v_13;
  unsigned short v_7;
  unsigned char v_5;
  long long v;
  unsigned short result;
  v_13 = 675628709ULL;
  v_5 = (unsigned char)0;
  v_7 = (unsigned short)(- ((unsigned long long)((unsigned long)((int)p / (
                                                                 (int)p_9 + 806)) + p_11[2]) + ~ (- v_13)));
  v = -41940LL;
  result = (unsigned short)(v - ((long long)(! (-49954L & (long)p)) + (
                                 (long long)(! v_5) - v / (long long)(
                                                      (int)v_7 + 242))));
  return result;
}


