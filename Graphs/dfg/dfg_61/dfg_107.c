#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 625968964
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned short p_5, unsigned long long p_7, long p_9,
         unsigned int p_15)
{
  char v_13;
  long v_11;
  double v;
  char result;
  v_11 = (long)p_15;
  v_13 = (char)((unsigned long)p_15 / (((unsigned long)v_11 + (((unsigned long)p_9 | (unsigned long)p_15) + (unsigned long)(
                                                               (unsigned int)p & p_15))) + 725UL));
  v = (double)(! (- (4008036313U % (4294967186U * p_15 + 820U))));
  v_11 = (long)v;
  result = (char)(- ((unsigned long long)((double)p + v) / ((unsigned long long)p_5 % (
                                                            p_7 + 444ULL) + 655ULL)) << (
                  ((p_9 & v_11) * -851150904L) * (long)(- v_13) & 63L));
  return result;
}


