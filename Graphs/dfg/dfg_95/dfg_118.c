#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 463715194
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, int p_4, unsigned char p_6, long p_9, float p_13)
{
  unsigned short v_15;
  unsigned int v_11;
  int v;
  unsigned short result;
  v_15 = (unsigned short)40128;
  v = 14626;
  result = (unsigned short)7167;
  v_11 = (unsigned int)((unsigned long long)(! ((long)p_4 + p_9) - (long)(
                                             (int)(- result) / (- p + 853))) + 
                        (unsigned long long)v_15 / 18446744073709551615ULL);
  v = (int)(- ((float)((unsigned long)(v_11 + (unsigned int)p_6) | (unsigned long)v % 30374UL) * p_13));
  result = (unsigned short)(-15L + (long)(- p / (p_4 * (int)p_6 + 878)) / (
                                   ((long)v & 8L / (p_9 + 69L)) + 402L));
  return result;
}


