#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 222490141
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned short p_9[2][1],
                unsigned long long p_13, int p_15)
{
  short v_17;
  double v_11;
  int v_7;
  int v_5;
  unsigned char v;
  signed char result;
  v_17 = (short)-23423;
  v_5 = -708714442;
  v = (unsigned char)204;
  v_7 = (int)(! (! p));
  v_11 = (double)(~ (! (- p_15)) / (65027 % ((-49 / ((int)v_17 + 703)) % 422 + 566) + 520));
  v = (unsigned char)((unsigned long long)v_11 - (unsigned long long)v / (
                                                 ((unsigned long long)(- v_7) + 
                                                  p_13 * 3274232808ULL) + 517ULL));
  result = (signed char)((~ (p * (unsigned long long)v) << (18446744073441982574ULL / (
                                                            ! p + 439ULL) & 63ULL)) * (unsigned long long)(! (
                         (v_5 % (v_7 + 177)) % ((int)p_9[0][0] + 141))));
  return result;
}


