#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 24958614
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned long long p_5, unsigned short p_9[4],
         double p_13, int p_15)
{
  unsigned int v_11;
  int v_7;
  unsigned short v;
  char result;
  v = (unsigned short)p_15;
  v_11 = (unsigned int)(~ ((unsigned long long)(! (p_15 % ((int)2.28670112571e+38f + 11))) % (
                           ((unsigned long long)p_9[2] * p_5 + (unsigned long long)(
                            3608537442U + (unsigned int)v)) + 741ULL)));
  v_7 = (int)((unsigned long long)(- (! (- p_9[1]))) & - ((unsigned long long)p_15 / (
                                                          256804348ULL * p_5 + 474ULL)));
  v = (unsigned short)(- (v_7 + -52) % ((57341 + - v_7) + 737) - ((int)p_9[0] - (int)((unsigned short)(- (
                                                                  (double)v_11 - p_13)))));
  result = (char)(- ((unsigned long long)(p - 156UL) * ((unsigned long long)(
                                                        483044852 - (int)v) % (
                                                        ((unsigned long long)p - p_5) + 832ULL))));
  return result;
}


