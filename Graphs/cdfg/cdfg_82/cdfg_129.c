#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 680710827
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, unsigned int p_4, unsigned long long p_6,
                   double p_17, double p_21)
{
  unsigned short v_23;
  unsigned long long v_19;
  unsigned long v_15;
  unsigned long v_13;
  short v_11;
  unsigned int v_9;
  unsigned short v;
  unsigned short result;
  v_23 = (unsigned short)p_17;
  v_15 = 62198UL;
  v_13 = (unsigned long)p_17;
  v_11 = (short)p;
  v_9 = (unsigned int)p_21;
  v = (unsigned short)47860;
  result = (unsigned short)p_4;
  while ((unsigned long long)(! p_4) == (((unsigned long long)p_21 % (
                                          p_6 + 590ULL)) % (unsigned long long)(
                                         ~ p_4 + 883U)) % (unsigned long long)(
                                        496471302U * (unsigned int)((float)v_11 - p) + 322U)) {
    v_13 = (unsigned int)v_23 % 18615U;
    v_15 = 3898851677UL;
    v_9 = (unsigned int)(18446744073709512048ULL % (unsigned long long)(
                         - (~ v_15) + 262UL));
    v_11 = (short)(- (p_21 * (double)v_15) * - (p_17 / -428860784.));
  }
  while_0_break: ;
  while ((unsigned long long)((unsigned int)p * p_4) > (p_6 / 4294929689ULL) % 3848438828ULL >> (
                                                       ((unsigned int)(
                                                        129 << ((int)v & 7)) | ~ v_9) & 63U)) {
    v_19 = v_13 * (unsigned long)((int)v_11 * 15);
    v_13 = (unsigned long)(((unsigned long long)p_4 + (unsigned long long)v / (
                                                      v_19 + 616ULL)) / (unsigned long long)(
                           ~ v_15 / 243UL + 809UL));
    v_15 = (unsigned long)(14283ULL & (unsigned long long)((unsigned long)(
                                                           v_9 / (p_4 + 312U)) * (
                                                           4067361888UL << (
                                                           (int)v & 31))));
    v_9 = (unsigned int)((double)p_6 * - (p_17 * (double)v_13));
  }
  while_0_break_0: ;
  return result;
}


