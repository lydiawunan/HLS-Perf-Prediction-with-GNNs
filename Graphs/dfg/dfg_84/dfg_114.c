#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 609849854
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned long long p_5[2],
                unsigned short p_9, long p_11)
{
  long v_7;
  short v;
  signed char result;
  v_7 = (long)p_9;
  v = (short)((unsigned long long)(85L - ~ (- p_11)) + (unsigned long long)(
                                                       ~ v_7 | (long)p_9) / (
                                                       ! (- p) + 64ULL));
  result = (signed char)((unsigned long long)(4294928465UL & (unsigned long)(- v)) / (
                         ((4650ULL - p) / ((p_5[1] - (unsigned long long)v_7) + 622ULL) >> (
                          - ((int)v + (int)p_9) & 63)) + 485ULL));
  return result;
}


