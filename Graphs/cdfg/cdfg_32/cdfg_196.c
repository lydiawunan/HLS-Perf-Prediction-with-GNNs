#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 341893214
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p[2], unsigned char p_5,
                       unsigned short p_7, long long p_15)
{
  unsigned int v_13;
  long v_11;
  double v_9;
  unsigned char v;
  unsigned long long result;
  v_11 = (long)p[0];
  v_9 = -4635808539.3;
  v = (unsigned char)p_7;
  result = (unsigned long long)p_5;
  while (-900501830L < (long)((int)(~ p[1]) + ((int)p_5 / ((int)p_7 + 503)) * (int)(
                                              v_9 / 2.22496573019e+38))) {
    v_13 = v_11 + 112L;
    v_11 = (long)((unsigned long long)(4294956786LL - ~ p_15) + (unsigned long long)(
                                                                58 + (int)((signed char)3.22559611514e+38)) % (
                                                                (3231595634ULL - result) + 959ULL));
    v = (unsigned char)v_13;
    v_9 = (double)-44833L;
  }
  while_0_break: ;
  result = (unsigned long long)(~ (0 / (965707283 % ((int)v + 223) + 341)));
  return result;
}


