#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 167076475
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, long p_7)
{
  short v_9;
  float v_4;
  int v;
  unsigned long long result;
  v_4 = (float)p_7;
  v = (int)p_7;
  result = 18446744073323444625ULL;
  v_9 = (short)(- (18446744073709551561ULL | (result - (unsigned long long)(
                                              686201613LL + (long long)p_7))));
  result = (unsigned long long)(- (- ((float)(- v_9) / (v_4 + 156.f))));
  v = (int)(((unsigned long long)((unsigned int)v_9 - 54483U) / (~ result + 902ULL) - (unsigned long long)-2.11508508538e+38) % (
            (825627064ULL / ((unsigned long long)v_4 + 924ULL)) % ((unsigned long long)(
                                                                   937992980LL ^ (long long)v) * ! result + 92ULL) + 97ULL));
  result = (~ (result ^ result) | (unsigned long long)(- (4294906510UL % (unsigned long)(
                                                          v + 636)))) << (
           (long)((int)(- v_4) % ((int)((char)p) * 72 + 642)) / (- (p_7 - (long)v_9) + 51L) & 63L);
  return result;
}


