#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 279509561
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p[1], unsigned long long p_5, short p_7,
                  double p_11, unsigned int p_13)
{
  float v_17;
  unsigned short v_15;
  signed char v_9;
  int v;
  unsigned char result;
  v_15 = (unsigned short)23762;
  v_9 = (signed char)p_5;
  result = (unsigned char)232;
  v_17 = (float)((unsigned long long)(! ((unsigned int)p_7 / (p_13 + 280U)) + (
                                      (unsigned int)p_11 % (p_13 + 329U) + (unsigned int)(
                                      (int)p_7 | (int)v_9))) + p_5);
  v_9 = (signed char)((((unsigned long)(~ p_7) | (unsigned long)p_11 / 4294953935UL) / (unsigned long)(
                       - p_13 + 57U)) % (unsigned long)((int)(~ (- v_15)) % (
                                                        ((int)result + (int)((unsigned char)v_17)) % 743 + 322) + 401));
  v = (int)((((unsigned long long)((int)p[0] ^ 47975) + p_5 * (unsigned long long)result) << (
             (int)(~ (~ p_7)) & 63)) / ((unsigned long long)(- p_7) / (
                                        (unsigned long long)(24300L + (long)v_9) * (
                                        18446744073709551585ULL & p_5) + 511ULL) + 317ULL));
  result = (unsigned char)v;
  return result;
}


