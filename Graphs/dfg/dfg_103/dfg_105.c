#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 176671903
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, int p_7, long p_9, long p_11,
                  unsigned long p_13)
{
  unsigned long v_17;
  unsigned long v_15;
  long v_4;
  unsigned long v;
  unsigned long result;
  v_17 = (unsigned long)p_7;
  v_4 = 677887011L;
  v = 3577534647UL;
  result = 63397UL;
  v_15 = (unsigned long)(- ((double)(~ p) * - (381.369285224 * (double)p_11)));
  v = ! (result + (unsigned long)(- p_9)) - ((694088005UL % (unsigned long)(
                                              p_11 + 55L)) / ((unsigned long)v_4 / (
                                                              p_13 + 218UL) + 905UL)) * (
                                            v_15 % (v_17 + 691UL) & v * 4289243005UL);
  v = - ((unsigned long)(-7244295168.f / ((float)p_7 + 66.f)) + 1018265640UL % (unsigned long)(
                                                                p_9 + 132L)) / (
      v * (unsigned long)(~ ((long)p_7 | 322045117L)) + 262UL);
  result = ~ (! (v & 7205UL) ^ 4294962392UL / (unsigned long)((v_4 - (long)p) + 320L));
  return result;
}


