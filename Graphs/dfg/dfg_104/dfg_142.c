#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 511885084
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, unsigned char p_5, float p_7[3][5],
                float p_13, unsigned char p_15)
{
  long long v_11;
  unsigned long long v_9;
  unsigned int v;
  signed char result;
  v_9 = (unsigned long long)(-34 % ((((int)p_15 - (int)((unsigned char)4.27078078897e+18f)) ^ (int)(- p)) + 935));
  v_11 = (long long)(- ((int)((char)(- p_13)) + -89) ^ -100);
  v = (unsigned int)(113ULL & 248ULL * (v_9 * (unsigned long long)(v_11 & -81LL)));
  result = (signed char)(! ((unsigned int)(~ (- p)) + (v % (unsigned int)(
                                                       (int)p_5 + 98) | (unsigned int)(
                                                       (int)p_5 | (int)((unsigned char)p_7[2][1])))));
  return result;
}


