#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 984379417
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned char p_7, char p_9,
                 unsigned int p_13, unsigned short p_17)
{
  long v_15;
  short v_11;
  unsigned int v_5;
  unsigned long long v;
  unsigned int result;
  v_15 = 57352L;
  v_11 = (short)22988;
  v_5 = (unsigned int)(- (-9237148672.f / ((float)(! ((unsigned long)p_7 * 44181UL)) + 199.f)));
  v = (unsigned long long)((long long)((17610U % (v_5 + 241U)) / 4294935366U + (unsigned int)(! (
                                       (int)p_9 + 1772))) | (700466087LL / (long long)(
                                                             (int)(~ v_11) + 811)) / (long long)(
                                                            ((unsigned long)(
                                                             (unsigned int)-3.36996393459e+38f - p_13) - (unsigned long)(
                                                             v_15 + (long)p_17)) + 586UL));
  v_5 = (unsigned int)(~ p_7);
  result = (unsigned int)(! (106ULL * v | 18446744073709551592ULL) | (unsigned long long)(~ (
                          (3785798309UL + p) * (unsigned long)(9065U * v_5))));
  return result;
}


