#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 118934560
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, long long p_7, unsigned short p_11[5],
         long long p_13[2][4][5])
{
  unsigned int v_15;
  int v_9;
  double v_4;
  unsigned long v;
  char result;
  v_15 = 18692U;
  v_4 = (double)p_7;
  v_9 = (int)(14416U + (unsigned int)((v_4 - (double)p_7) / ((double)(- p_11[3]) + 593.)) / (
                       v_15 + 249U));
  v = (unsigned long)(~ (p_7 - p % 65483LL) | (long long)(~ (- p_11[3])) / (
                                              p_13[1][0][0] + 31LL));
  v = (unsigned long)(! (- (-15779LL * p_7) % (long long)((unsigned long)(! v_9) / (
                                                          v * (unsigned long)p_11[0] + 832UL) + 697UL)));
  result = (char)(- ((double)(! v) / (15894. * v_4 + 162.) - (double)p));
  return result;
}


