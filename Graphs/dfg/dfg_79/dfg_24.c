#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 659928140
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, unsigned long long p_4[4][2][5],
                   unsigned long long p_7[3][4][3], short p_9, int p_13[2])
{
  char v_11;
  char v;
  unsigned short result;
  v_11 = (char)79;
  v = (char)((unsigned long long)p_13[0] + 434ULL);
  result = (unsigned short)(- ((unsigned long long)p - p_4[3][0][1]) / (unsigned long long)(
                            (int)v + 871) + ~ (p_7[0][0][0] * (unsigned long long)p_9) * (
                                            (unsigned long long)(! v_11) + 18446744073709512539ULL));
  return result;
}


