#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 705976578
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, char p_13)
{
  unsigned long long v_11;
  unsigned char v_8;
  char v_6;
  unsigned long v_4;
  unsigned int v;
  unsigned long long result;
  v_11 = p;
  v_8 = (unsigned char)108;
  v_6 = (char)((unsigned long long)((float)v_8 - (3885053440.f - (float)(
                                                  (unsigned long long)-802.838500977f % (
                                                  p + 230ULL)))) + ~ (
                                                                   v_11 * (unsigned long long)p_13) * (
                                                                   (unsigned long long)v_8 % (
                                                                   v_11 + 1002ULL) - 18446744073709551517ULL));
  v_4 = (unsigned long)v_6;
  v = (unsigned int)v_4;
  result = (unsigned long long)v;
  return result;
}


