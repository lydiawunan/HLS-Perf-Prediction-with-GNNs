#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 276413387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned long long p_7[2], unsigned long p_9[3],
         unsigned short p_11)
{
  unsigned long long v_5;
  char v;
  char result;
  v_5 = (unsigned long long)p_11;
  v = (char)(((unsigned long long)(95 % (p + 105)) / (18446744073456297612ULL % (
                                                      v_5 + 738ULL) + 790ULL) + - p_7[0]) % (unsigned long long)(
             ! p_9[2] + 912UL));
  result = v;
  return result;
}


