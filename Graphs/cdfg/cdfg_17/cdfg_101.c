#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 157376564
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned long p_4, unsigned long long p_7,
              char p_15, unsigned short p_17)
{
  short v_23;
  int v_21;
  unsigned char v_19;
  char v_13;
  long long v_11;
  unsigned long long v_9;
  int v;
  long long result;
  v_23 = (short)-16333;
  v_21 = (int)p_4;
  v_19 = (unsigned char)p_7;
  v_11 = -16795LL;
  result = 700834161LL;
  v = (int)((unsigned long long)((long long)v_21 - result) & (p_7 + (unsigned long long)v_23) / (unsigned long long)(
                                                             p_4 / (p + 665UL) + 178UL));
  if (((p_7 + (unsigned long long)((unsigned long)p_15 - 50298UL)) & 291287817ULL) != (unsigned long long)(
      (unsigned long)((int)p_17 - (int)(- p_15)) * (2114UL / ((unsigned long)v_19 % (
                                                              p_4 + 645UL) + 739UL)))) 
    result = (long long)p;
  else {
    v_13 = (char)((double)(p_7 / (p_7 + 904ULL) - 47686ULL) * ((double)(~ p) * (
                                                               (double)p - -3413867955.98)));
    v_9 = (unsigned long long)(result * (v_11 * -41470LL + (long long)v_13));
    result = (long long)((unsigned long long)(- p_4 + (unsigned long)v) * (
                         (18446744072877634133ULL % (p_7 + 225ULL)) * (
                         v_9 & 4276273802ULL)));
  }
  return result;
}


