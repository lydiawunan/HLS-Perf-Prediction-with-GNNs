#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 569075628
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, unsigned long long p_4, long p_6[3][2][1])
{
  signed char v_13;
  signed char v_11;
  unsigned long long v_9;
  long v;
  unsigned long result;
  v_13 = (signed char)-85;
  v_11 = (signed char)46;
  v_9 = (unsigned long long)(- v_13);
  result = (unsigned long)(~ ((int)v_11 + 41864));
  v = (long)(~ p_4);
  result = (unsigned long)(~ ((unsigned long long)(9106UL % (result + 207UL)) / (
                              ((unsigned long long)p - p_4) + 699ULL)) % (
                           (unsigned long long)(! (~ p_6[2][0][0])) * (
                           p_4 / (((unsigned long long)v | v_9) + 676ULL)) + 272ULL));
  return result;
}


