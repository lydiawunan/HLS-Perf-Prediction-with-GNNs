#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 535053713
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, long p_9, unsigned int p_15, int p_17,
              unsigned long p_21)
{
  float v_19;
  signed char v_13;
  unsigned long long v_11;
  signed char v_7;
  double v_4;
  int v;
  long long result;
  v_19 = (float)p_21;
  v_13 = (signed char)-71;
  v_11 = (unsigned long long)p_17;
  v_7 = (signed char)p_9;
  v = 803688760;
  if (- ((unsigned long)(! p) + 4207511852UL) > ((unsigned long)(v_19 * (float)p_15) / (
                                                 p_21 * 828831554UL + 776UL)) * (unsigned long)(! (~ v_7))) {
    v_7 = (signed char)(((18446744073709532187ULL - (unsigned long long)v_13) + (unsigned long long)(
                         (unsigned long)v_13 + 18543UL)) - 59075ULL);
    v_4 = (double)((unsigned long long)(~ v) % (((unsigned long long)(
                                                 (long)v_7 - p_9) + v_11) + 485ULL));
    v = (int)(4086947213UL / (unsigned long)(! ((unsigned int)v_4 + p) + 999U));
  }
  else {
    v_13 = (signed char)24;
    v = (int)(((p_15 - 73U) | (unsigned int)(- v_13)) % (unsigned int)(
              p_17 + 809));
  }
  result = (long long)v;
  return result;
}


