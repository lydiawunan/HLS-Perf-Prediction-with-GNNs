#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 667162162
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, int p_5, short p_7[4][2])
{
  float v_11;
  unsigned char v_9;
  char v;
  unsigned long result;
  v_11 = -1.23826706779e+38f;
  v_9 = (unsigned char)37;
  v = (char)35;
  result = (unsigned long)(104 * ((int)(- (-3018174763.89 + (double)v_9)) - ! (
                                  (int)((unsigned char)v_11) / ((int)v_9 + 620))));
  v = (char)(! ((unsigned long long)v / 18446744073709511632ULL));
  v = (char)((~ result - (unsigned long)v) * 4294967204UL + (unsigned long)(~ (
             p_5 + (p_5 & (int)p_7[0][1]))));
  result = (unsigned long)(-534.749266596 / ((double)(((unsigned long)(
                                                       46952 | (int)v) ^ (
                                                       4189017682UL - p)) + (
                                                      p & 23603UL)) + 1019.));
  return result;
}


