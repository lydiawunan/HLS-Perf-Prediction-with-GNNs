#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 830432550
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, signed char p_9, short p_13[4][3], char p_15)
{
  unsigned long v_17;
  unsigned int v_11;
  double v_7;
  double v_5;
  double v;
  unsigned int result;
  v_17 = (unsigned long)p_13[3][1];
  v_5 = (double)p;
  v_11 = (unsigned int)(~ p_13[2][0]);
  v_7 = (double)((unsigned long)(- ((207.569059641 + (double)p_13[0][1]) / (
                                    (double)((int)p_15 % ((int)p_9 + 118)) + 963.))) - ! (
                 v_17 * (unsigned long)(-620196452L & (long)p_13[3][0])));
  v = (double)((unsigned long)p_9 % (4294937707UL / (unsigned long)(~ (- v_11) + 825U) + 318UL));
  result = (unsigned int)((double)(p / (long long)(35 / ((int)((char)(
                                                         v * v_5)) + 230) + 301)) + 
                          - v_7 / 30984.);
  return result;
}


