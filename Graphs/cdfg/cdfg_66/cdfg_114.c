#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 883023666
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p[4][3], long long p_4, float p_6, int p_13,
              unsigned int p_15)
{
  long long v_11;
  signed char v_9;
  short v;
  long long result;
  v_11 = -481781569LL;
  v_9 = (signed char)p_13;
  v = (short)p_6;
  result = p_4;
  v = (short)(~ ((int)(! v) / (p_13 + 517)));
  while ((8530740736LL & (((long long)p[0][0] - p_4) - 4294945040LL)) != (long long)(- (
         (p_6 + (float)v) * (float)v_9))) {
    v = v_11 - 590980865LL;
    v_11 = (- p_4 | (long long)((unsigned long)p_13 * 22209UL)) | (long long)(
           (unsigned int)(- v) + ~ p_15);
    result = (long long)p[2][0];
    v = (short)(! ((long long)((float)p_4 * p_6) / (p_4 + 662LL)));
  }
  while_0_break: ;
  return result;
}


