#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 678748731
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p)
{
  unsigned short v_9;
  unsigned long long v_7;
  long long v_5;
  unsigned long long v;
  unsigned long result;
  v = 18446744073709523824ULL;
  v_7 = (unsigned long long)(4177455201UL | (unsigned long)p);
  v_9 = (unsigned short)(29974ULL - (878388181ULL - v_7));
  v_5 = (long long)((p ^ (int)((double)((unsigned int)v_9 * 535224403U) - 3.15829938014e+34)) % (
                    p + 737));
  result = (unsigned long)(18446744073709551615ULL - ((unsigned long long)p / (
                                                      (v + (unsigned long long)v_5) + 583ULL)) % (
                                                     (v_7 + (unsigned long long)(- v_9)) + 864ULL));
  return result;
}


