#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 643988616
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, float p_9, unsigned long long p_11,
         unsigned long p_15[5][1])
{
  unsigned long v_13;
  unsigned int v_7;
  short v_4;
  long long v;
  long result;
  v_13 = 3321449419UL;
  result = 823703920L;
  if (- ((unsigned long long)(! result) - (p_11 - (unsigned long long)v_13)) != (unsigned long long)p_15[0][0]) {
    v_4 = (short)(~ (18446744073709551507ULL - 156ULL / (p + 1008ULL)));
    v = (long long)((unsigned long long)v_4 % (3804549536ULL * (p / 62492ULL) + 245ULL));
  }
  else {
    v_7 = (unsigned int)p_9;
    v = (long long)(- (! (v_7 + 3988616456U)));
  }
  result = (long)v;
  return result;
}


