#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 210745955
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, char p_9[4], unsigned int p_11, long p_13, long p_15)
{
  short v_21;
  float v_19;
  unsigned char v_17;
  long v_7;
  double v_5;
  long long v;
  short result;
  v_21 = (short)-15774;
  v_19 = 1.71785498689e+38f;
  v_7 = 46173L;
  result = (short)30877;
  v_17 = (unsigned char)((long long)(- (- (v_19 * -54064.f))) / ((long long)(~ (
                                                                 (int)v_21 + 48132)) * (
                                                                 (p * -115LL) / (long long)(
                                                                 ~ p_15 + 220L)) + 614LL));
  v_5 = (double)((unsigned long)(! p_13) + ((unsigned long)(v_7 ^ p_15) / (
                                            (4016808966UL ^ (unsigned long)result) + 153UL)) / (unsigned long)(
                                           (3305164073U + p_11) * (unsigned int)(
                                           -24520 + (int)v_17) + 196U));
  v = (long long)(~ ((unsigned int)p_9[1] - (~ p_11 ^ (p_11 - p_11))));
  result = (short)(p * (~ (v % (p + 57LL)) % (((long long)(26759 + (int)((short)v_5)) + 
                                               (long long)v_7 / (p + 847LL)) + 758LL)));
  return result;
}


