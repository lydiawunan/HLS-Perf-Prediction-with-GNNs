#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 291281655
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, signed char p_5, double p_13, double p_15,
                  unsigned long long p_21)
{
  unsigned int v_23;
  long v_19;
  long long v_17;
  float v_11;
  short v_9;
  char v_7;
  char v;
  unsigned long result;
  v_23 = (unsigned int)p_15;
  v_19 = -48263L;
  v_17 = (long long)p_15;
  v_11 = -4081610496.f;
  v_7 = (char)3.16348555681e+38f;
  v_9 = (short)((unsigned long long)(~ ((long long)((int)p_5 + (int)((signed char)p_15)) / (
                                        v_17 + 765LL))) - (((unsigned long long)v_19 + p_21) / (unsigned long long)(
                                                           v_23 + 831U)) / (unsigned long long)(
                                                          ~ (v_23 << (
                                                             v_17 & 31LL)) + 682U));
  v = (char)(((p % -10347LL + (p + (long long)v_7)) * (long long)((long)(
                                                                  66 / (
                                                                  (int)v_9 + 879)) - 47419L)) / (long long)(
             ((((int)p_5 + (int)((signed char)v_11)) + (int)(- p_13)) >> 1LL) + 757));
  result = (unsigned long)(- (141699337LL - ((long long)v + p) / (long long)(
                                            (int)p_5 * 52684 + 669)));
  return result;
}


