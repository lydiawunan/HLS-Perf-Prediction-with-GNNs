#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 404632950
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, short p_9, unsigned int p_11[5])
{
  int v_15;
  long v_13;
  unsigned int v_7;
  char v_4;
  unsigned char v;
  unsigned long result;
  v_15 = (int)p_9;
  v_4 = (char)p;
  v_13 = (long)v_15;
  v_7 = (unsigned int)(! (unsigned char)174);
  v = (unsigned char)((unsigned long)(p_11[0] & (unsigned int)p_9) * (unsigned long)v_13);
  result = (unsigned long)((double)(~ (((unsigned long long)v / 18446744073603916864ULL) * (unsigned long long)v_4)) / (
                           (-819.607217574 - (double)(p % (v_7 + 80U) & (
                                                      (unsigned int)p_9 ^ p_11[2]))) + 189.));
  return result;
}


