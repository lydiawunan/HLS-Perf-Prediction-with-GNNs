#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 610200568
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, unsigned short p_4,
                   unsigned int p_9, float p_11)
{
  long v_13;
  unsigned long long v_7;
  char v;
  unsigned short result;
  v_7 = 383653634ULL;
  v = (char)p_4;
  result = (unsigned short)61960;
  v_13 = (long)(~ (804295460ULL | p) * ~ ((59661997ULL - v_7) << 1UL));
  v_7 = (unsigned long long)(((- p_11 - 949723776.f) * 4294921472.f) * (float)(
                             - ((unsigned long long)v_13 * 18446744073663739435ULL) / (unsigned long long)(
                             (int)(- result) + 186)));
  result = (unsigned short)(3294681430ULL + (unsigned long long)((long)v - -330010403L) / (
                                            ~ v_7 % (unsigned long long)(
                                            p_9 + 632U) + 63ULL));
  result = (unsigned short)(~ (((unsigned long long)((int)result % 35362) * p) * (unsigned long long)(
                               0 - (int)p_4)));
  return result;
}


