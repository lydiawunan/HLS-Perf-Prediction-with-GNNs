#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113156831
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p[4][1][2], char p_7, unsigned long long p_11,
         unsigned long p_13, unsigned short p_15)
{
  char v_9;
  unsigned int v_5;
  int v;
  long result;
  v_5 = (unsigned int)p_15;
  v = 875923851;
  result = 353452302L;
  v_9 = (char)(((~ p_11 & (unsigned long long)(-2.88495115162e+38 / (
                                               (double)p_15 + 453.))) + (unsigned long long)(! p_7)) % (unsigned long long)(
               (int)(- p_7) + 956));
  result = (long)(((18446744073442939238ULL * (unsigned long long)result) / 39545ULL) * (unsigned long long)p_7 & (
                  (unsigned long long)(235 ^ (int)v_9) * p_11 + (unsigned long long)(
                  (p_13 | 462077564UL) / (unsigned long)((int)p_15 + 257))));
  v = (int)(((unsigned long)(result ^ (long)v) & (unsigned long)((unsigned int)p[1][0][1] | v_5)) / (unsigned long)(
            ~ v + 882) >> 13);
  result = (long)v;
  return result;
}


