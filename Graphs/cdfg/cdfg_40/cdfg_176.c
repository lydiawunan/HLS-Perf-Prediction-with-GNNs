#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 82204216
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, signed char p_5, unsigned long p_7, long p_9,
          unsigned char p_11)
{
  unsigned long long v_23;
  unsigned long v_21;
  long v_19;
  double v_17;
  unsigned long v_15;
  unsigned short v_13;
  float v;
  short result;
  v_23 = 18446744073684287810ULL;
  v_21 = 842382217UL;
  v_19 = p_9;
  v_17 = (double)p_7;
  v_15 = (unsigned long)p_11;
  v = (float)p_9;
  result = (short)p_5;
  while (- v * (float)((unsigned long)((int)p_5 - (int)((signed char)9209156004.35)) * (
                       p_7 - (unsigned long)p_5)) >= (float)((long)(- p_5) * (
                                                             - p_9 ^ (long)(
                                                             (int)result + -826524783)))) {
    v_19 = v_21 / 26176UL;
    v_15 = (unsigned long)(0ULL ^ ! (747927938ULL * v_23));
    v_21 = (unsigned long)((v + 18.f) * -84.f);
    v = (float)3.05627951535e+37;
  }
  while_0_break: ;
  if ((long long)(((long)v_17 + (v_19 + 16342L)) * (long)((double)p_5 * v_17)) > p) {
    v = (float)(! (! p_7 / (unsigned long)(39L % (p_9 + 904L) + 738L)));
    result = (short)(~ (p % ((long long)v + 953LL)) % (long long)((int)p_5 + 151));
  }
  else {
    v_13 = (unsigned short)(! (- (4294961295UL + v_15)));
    result = (short)-13196;
    result = (short)((long long)(! ((int)p_11 - (int)v_13)) + (long long)(
                                                              (int)result - (int)((short)-7230241571.12)) / (
                                                              (long long)p_5 / (
                                                              p + 31LL) + 793LL));
  }
  return result;
}


