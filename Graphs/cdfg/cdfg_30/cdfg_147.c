#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 403676762
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, unsigned char p_4, char p_6,
         unsigned long long p_8, unsigned long p_11)
{
  unsigned long long v_19;
  unsigned long long v_17;
  int v_15;
  unsigned short v_13;
  int v;
  long result;
  v_15 = (int)p_11;
  v_13 = (unsigned short)p_6;
  v = (int)p_6;
  result = 16867L;
  v_17 = (unsigned long long)6125425930.12;
  while (! (~ p_8) == (unsigned long long)((unsigned long)((int)3636654080.f / (
                                                           v + 488)) % (
                                           p_11 + 814UL)) % ((1044421527ULL * (unsigned long long)p_11) % (unsigned long long)(
                                                             (int)v_13 + 35) + 964ULL)) {
    v_19 = 18446744073709551608ULL;
    v = (int)(- (v_17 / 127ULL) + (unsigned long long)(~ ((int)v_13 - 55)));
    v_13 = (unsigned short)((v_19 / ((unsigned long long)-993.018180592 * v_19 + 791ULL)) * (
                            (58ULL - p_8) / (unsigned long long)((10565 | v_15) + 279)));
  }
  while_0_break: ;
  return result;
}


