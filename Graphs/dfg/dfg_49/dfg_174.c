#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 482428072
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, double p_5, signed char p_13)
{
  unsigned int v_11;
  unsigned long v_9;
  unsigned long v_7;
  int v;
  unsigned short result;
  v_7 = 4294958426UL;
  v_11 = (unsigned int)p;
  v = (int)p_13;
  v_9 = (unsigned long)(! (((long long)(~ v_11) & 396344782LL) + (long long)(- (
                           (unsigned long)p + v_7))));
  result = (unsigned short)((long long)(- ((unsigned long)(v * (int)p) * (
                                           (unsigned long)p_5 * v_7))) - (
                            (long long)(6161UL + 15721UL % (v_9 + 666UL)) - (
                            -35511119LL & (long long)(! v))));
  return result;
}


