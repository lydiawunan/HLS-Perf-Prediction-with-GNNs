#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 735463067
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(void)
{
  signed char v_4;
  unsigned int v;
  signed char result;
  v_4 = (signed char)(- 2.85857775928e+38);
  v = (unsigned int)v_4;
  result = (signed char)-31;
  result = (signed char)(~ ((long long)((unsigned long)(! result) * (
                                        (unsigned long)v % 901507778UL)) ^ 0));
  return result;
}


