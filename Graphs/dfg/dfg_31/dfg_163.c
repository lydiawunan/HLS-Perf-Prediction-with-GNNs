#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 246747239
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p[1][1][1], signed char p_9)
{
  unsigned long long v_11;
  unsigned short v_6;
  int v_4;
  unsigned short v;
  unsigned int result;
  v_6 = (unsigned short)25278;
  v_4 = -5351;
  v_11 = (unsigned long long)p_9;
  v = (unsigned short)p[0][0][0];
  v_6 = (unsigned short)(((unsigned long long)(! v_6) - (unsigned long long)(
                                                        p[0][0][0] << (
                                                        (int)p_9 & 31)) % (
                                                        ~ v_11 + 715ULL)) % 695ULL);
  result = (unsigned int)((long)((int)v + (int)v) % (((867408251L - (long)(
                                                       v_4 + (int)v_6)) - 30903L) + 917L));
  return result;
}


