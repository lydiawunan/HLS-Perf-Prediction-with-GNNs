#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 674773289
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, short p_7[4][4], signed char p_9, int p_11)
{
  double v_5;
  signed char v;
  signed char result;
  v_5 = -1296604417.53;
  v = (signed char)77;
  result = (signed char)(((18446744073618108897ULL / (unsigned long long)(
                           (int)v + 541) - (unsigned long long)v) - (unsigned long long)(
                          ! p | (unsigned int)p_9)) & (unsigned long long)p_11);
  result = (signed char)((int)result / ((int)p_7[0][2] + 646));
  v = (signed char)(~ (short)27150);
  result = (signed char)(((unsigned int)(-3219 ^ (int)((short)199825027587.)) & (
                          p / (unsigned int)((int)result + 748) + (unsigned int)v)) % (
                         (unsigned int)v_5 + 801U));
  return result;
}


