#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 514868275
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, long p_11, short p_13, unsigned short p_15)
{
  short v_17;
  char v_8;
  unsigned short v_6;
  double v_4;
  unsigned char v;
  double result;
  v_17 = (short)-31783;
  v_8 = (char)p_15;
  v_6 = (unsigned short)p;
  v_4 = (double)p_11;
  result = (double)((long long)(! (! p) * - (108 ^ p)) - ((long long)(
                                                          p_11 / (long)(
                                                          ((int)p_15 - 187) + 333)) - (
                                                          (long long)(~ v_17) + 
                                                          50046LL % (long long)(
                                                          (int)v_6 + 675))));
  v = (unsigned char)p;
  v_4 = (double)(((unsigned long)(69 * (int)((unsigned char)result)) * (
                  3288431126UL << ((int)v_8 & 31)) - (unsigned long)(
                  - p % ((int)((double)p / (v_4 + 670.)) + 453))) | (unsigned long)(
                 ((long)v_6 - (p_11 - (long)p_13)) / 134L));
  result = (double)((unsigned int)(((int)((unsigned char)(- result)) % (
                                    (int)v + 39)) * 26801) / ((712454922U / (unsigned int)(
                                                               (int)((unsigned short)v_4) % (
                                                               (int)v_6 + 164) + 764) + (unsigned int)v) + 608U));
  return result;
}


