#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 730538610
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, unsigned long long p_5, long long p_7[5][4][4],
          long long p_9)
{
  short v;
  short result;
  v = (short)p_9;
  if (((60678ULL / (unsigned long long)((int)v + 677)) % 18446744073505694509ULL) % (
      36652ULL * - p_5 + 709ULL) <= (unsigned long long)(- p_7[4][2][2])) 
    result = (short)(- -8611746816.f);
  else result = (short)(! p);
  return result;
}


