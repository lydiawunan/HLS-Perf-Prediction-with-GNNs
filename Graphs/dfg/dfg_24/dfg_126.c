#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 232301331
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, unsigned int p_11, unsigned int p_15)
{
  unsigned short v_17;
  unsigned long long v_13;
  long v_9;
  long v_7;
  unsigned short v_5;
  float v;
  unsigned long long result;
  v_17 = (unsigned short)p_11;
  v_13 = (unsigned long long)p_11;
  v_5 = (unsigned short)7679;
  v_9 = (long)((((unsigned long long)p_11 * v_13 + (unsigned long long)(~ p_15)) + 645ULL) * (
               (unsigned long long)((43975U * p_11) % 36U) ^ 18446744072717565287ULL / (unsigned long long)(
                                                             (int)(- v_17) + 971)));
  v_7 = (long)(- ((float)(~ (p_11 / 4294916643U)) * -238.92868042f));
  v = (float)(- (- ((long)v_5 * v_7) * - (v_9 ^ 77L)));
  result = (unsigned long long)((long long)((unsigned int)p - 1036597190U) % 29565LL - (long long)v);
  return result;
}


