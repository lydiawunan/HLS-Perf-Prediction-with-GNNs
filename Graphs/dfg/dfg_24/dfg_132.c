#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1044850105
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned char p_5, char p_7, short p_9, unsigned char p_13)
{
  int v_17;
  char v_15;
  unsigned long v_11;
  unsigned int v;
  double result;
  v_17 = (int)p;
  v_15 = (char)p_13;
  v = 3888803387U;
  result = -103.064496214;
  v_15 = (char)((int)p_7 - - ((116 / ((int)v_15 + 904)) / ((int)p_5 / (
                                                           v_17 + 801) + 758)));
  v_11 = (unsigned long)(- ((long long)((unsigned int)(! p_13) / (v % (unsigned int)(
                                                                  (int)p_13 + 431) + 169U)) - (
                            (long long)p / 769859168LL + (long long)(
                            454317947UL / (unsigned long)((int)v_15 + 25)))));
  v = (unsigned int)(((unsigned long long)(- (-2415L + (long)p_5)) * (
                      (unsigned long long)result / (18446744073709491364ULL / (unsigned long long)(
                                                    (int)p_7 + 747) + 283ULL))) % (unsigned long long)(
                     (unsigned long)(- (! p_9)) * (~ v_11 / 50UL) + 838UL));
  result = - (- (-6.92115689385e+37 * result) * (double)(- (v + (unsigned int)p)));
  return result;
}


