#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 420443564
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, unsigned char p_5[1][5], unsigned int p_9, long p_11[4][3],
         unsigned short p_13)
{
  double v_7;
  unsigned long long v;
  long result;
  v_7 = (double)(~ (- p_11[2][0] + (long)((int)p_5[0][0] * 51662)) % (
                 ((long)(! p_13) % ((2126L + (long)p_5[0][1]) + 627L)) % -19717L + 670L));
  v = (unsigned long long)((unsigned int)(- v_7) % (p_9 + 308U));
  result = (long)((unsigned long long)p & ((v + (unsigned long long)(
                                            (int)p_5[0][1] * -29656)) + 18446744073036856416ULL));
  return result;
}


