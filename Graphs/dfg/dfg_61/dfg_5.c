#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 545689643
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, long long p_4, unsigned short p_6, int p_8,
              unsigned short p_17[2][3][1])
{
  unsigned long long v_19;
  short v_15;
  short v_13;
  float v_11;
  unsigned short v;
  long long result;
  v_19 = (unsigned long long)p_4;
  v_15 = (short)-19333;
  v_11 = -2.96121354796e+38f;
  v_13 = (short)(! (! -38803L));
  v = (unsigned short)p_4;
  v = (unsigned short)((unsigned long long)(! ((long long)((int)v * (int)v_15) - 
                                               -12567LL / (long long)(
                                               p + 430))) - - ((unsigned long long)(
                                                               (int)p_17[1][1][0] * p) + 
                                                               (unsigned long long)p_6 % (
                                                               v_19 + 147ULL)));
  result = (long long)(((unsigned long long)(-297845059LL | (long long)p) / (
                        (unsigned long long)p_4 % 18446744073456810321ULL + 926ULL) | (unsigned long long)(- (
                        -29113 * (int)p_6))) * (unsigned long long)(p_8 + 
                                                                    (int)v / (
                                                                    (
                                                                    (int)((short)v_11) & (int)v_13) + 860)));
  return result;
}


