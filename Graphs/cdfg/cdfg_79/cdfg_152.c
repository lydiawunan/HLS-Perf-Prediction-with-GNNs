#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 649066224
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, unsigned long long p_7[5], double p_11[2],
                unsigned int p_13, unsigned long long p_15)
{
  short v_23;
  long long v_21;
  long v_19;
  signed char v_17;
  signed char v_9;
  unsigned short v_5;
  double v;
  signed char result;
  v_23 = (short)10855;
  v_21 = (long long)p;
  v_19 = (long)p_15;
  v_9 = (signed char)-96;
  v_5 = (unsigned short)p;
  v = (double)p;
  result = (signed char)p_7[2];
  if ((unsigned long)(- ((long)((int)((char)p_11[0]) / ((int)p + 826)) * (
                         (long)result % (v_19 + 634L)))) >= ! (5692UL << (
                                                               (unsigned long)v & 31UL)) % (unsigned long)(
                                                            (((int)v_23 + (int)v_5) << (
                                                             (int)v_9 / (
                                                             (int)p + 397) & 31)) + 33)) {
    v_9 = ~ result;
    v_5 = (unsigned short)(~ (((unsigned long long)p_13 * p_15) * (unsigned long long)(- p)));
    v_19 = (long)((unsigned long long)(~ ((int)v_9 - 113)) * ((p_7[4] - (unsigned long long)p_11[1]) - 155ULL));
  }
  else {
    v_23 = (short)v_19;
    v_5 = (unsigned short)v;
    v_19 = (long)(((int)(v * (double)p_15) + (int)v_23 % 98) - ((int)-7413131264.f ^ 12020));
  }
  if ((unsigned long long)((unsigned long)((p_13 + 35U) * p_13) & (unsigned long)v_19 * (unsigned long)(
                                                                  (unsigned int)v_23 + p_13)) > ~ (
      ((unsigned long long)p_13 / (p_7[1] + 289ULL)) % ((unsigned long long)p_11[1] + 575ULL))) {
    v_5 = (unsigned short)(4050665216.f / ((float)(p_15 / 4294940273ULL) + 325.f) + (float)v_5);
    v = (double)(((p_7[2] | (unsigned long long)v_9) + (unsigned long long)(
                  -19224 / ((int)((short)p_11[0]) + 899))) + (unsigned long long)(! p_13));
    result = (signed char)(- (((int)((char)v) + (int)p) * (int)(! v_5)));
  }
  else {
    v_19 = (long)(~ ((long long)p + v_21) / (long long)(((int)p + (int)v_5) + 796));
    v_17 = (signed char)(p_7[1] & (unsigned long long)p_11[1]);
    result = (signed char)((unsigned long long)((double)(-50 * (int)v_17) - (
                                                806.930794337 + (double)v_19)) | - (
                           6453ULL * p_7[2]));
  }
  return result;
}


