#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 174157403
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p[4][1][3], unsigned short p_5, signed char p_9,
         int p_13, double p_15)
{
  unsigned long v_17;
  unsigned long long v_11;
  unsigned long long v_7;
  unsigned int v;
  char result;
  v_17 = (unsigned long)p_5;
  v_11 = 18446744073384809924ULL;
  v_7 = 271020231ULL;
  v_7 = (~ v_11 / ((unsigned long long)((double)(v_7 / (unsigned long long)(
                                                 p_13 + 651)) / (p_15 / 60799. + 165.)) + 119ULL)) % (unsigned long long)(
        v_17 + 45UL);
  result = (char)(((unsigned long long)(778693681UL / (unsigned long)(
                                        (int)(- p_5) + 123)) - (18446744073709527996ULL / (
                                                                v_7 + 432ULL) & 807ULL)) / (unsigned long long)(
                  -5800 % ((int)p_9 + 110) + 670));
  v = (unsigned int)(~ ((0ULL / (! p[2][0][1] + 32ULL)) / (unsigned long long)(
                        (int)result + 258)));
  result = (char)v;
  return result;
}


