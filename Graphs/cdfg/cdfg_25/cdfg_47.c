#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 693546572
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, char p_11, float p_19, char p_21, float p_25[2])
{
  unsigned long long v_23;
  int v_17;
  long long v_15;
  float v_13;
  unsigned long v_9;
  long v_7;
  float v_5;
  double v;
  int result;
  v_23 = 513210097ULL;
  v_9 = 388637556UL;
  v_7 = (long)p_21;
  v_5 = p_19;
  if ((unsigned long long)v_7 != (~ v_23 ^ (unsigned long long)(p_25[1] * 31395.f))) {
    result = (int)v_9;
    v_15 = (long long)((18446744073709517045ULL + (unsigned long long)p) & (unsigned long long)(
                       (215.f * p_19) / ((float)(v_7 + (long)p_21) + 935.f)));
    v_17 = - (! (result / 116));
  }
  else {
    result = -34745;
    v_17 = 106;
    v_15 = (long long)(! (unsigned char)23);
  }
  if (74ULL % ((10934ULL + (unsigned long long)p_11) + 708ULL) <= (unsigned long long)(
      v_15 * (long long)((v_17 + -15) % ((int)p * -24847 + 518)))) {
    v_7 = -1034995043L;
    v = (double)((float)(! ((int)p % ((int)p + 127))) * (- v_5 - (float)v_7));
    result = (int)(- v);
  }
  else {
    v_13 = (float)(4294939078UL << ((long)(! result) * -46417L & 31L));
    v_9 = (unsigned long)((double)(- ((float)p_11 + v_13)) * (7912362662.94 / (
                                                              (3.15417481657e+38 - (double)v_15) + 794.)));
    result = (int)(- (! v_9));
  }
  return result;
}


