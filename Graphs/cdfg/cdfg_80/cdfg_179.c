#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 283861106
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, unsigned short p_11, long p_13, long long p_15,
              unsigned int p_21[3])
{
  unsigned int v_31;
  long long v_29;
  long long v_27;
  float v_25;
  float v_23;
  unsigned short v_19;
  short v_17;
  float v_9;
  long long v_6;
  short v_4;
  float v;
  long long result;
  v_31 = (unsigned int)p;
  v_27 = 61259LL;
  v_25 = 3954126848.f;
  v_19 = (unsigned short)18449;
  v_9 = (float)p_13;
  v_6 = (long long)p_13;
  v_4 = (short)p;
  if (! ((long long)(-32755L * (long)p_11) % (! v_6 + 320LL)) >= 11LL) {
    v_29 = (long long)(18446744073709551575ULL ^ ((unsigned long long)v_31 + 18446744073263384299ULL) % (unsigned long long)(
                                                 ((long)v_19 ^ p_13) + 468L));
    v_4 = (short)(-3.27604177479e+38f * (float)((-753489241LL ^ v_29) + (
                                                p_15 & (long long)v_31)));
    v_19 = (unsigned short)((! p_15 + (long long)2.11478701626e+38f / (
                                      p_15 + 354LL)) - ~ ((long long)p_13 % (
                                                          p_15 + 493LL)));
  }
  else {
    v_27 = 64LL;
    v_9 = (float)(! ((long long)p_21[0] - -154484769LL) ^ (4294907308LL - p_15) / (long long)(
                                                          p_13 + 184L));
    v_25 = (float)(((unsigned long long)p_21[0] / 56087ULL | (unsigned long long)(
                    3606104201UL / (unsigned long)(p_21[1] + 749U))) / (unsigned long long)(
                   ! (-31366LL - v_27) + 118LL));
  }
  if ((long long)p >= v_27) {
    v_6 = (long long)((long)p ^ ((long)(v_9 * (float)p_11) - p_13));
    v = (float)v_6;
    result = (long long)((-141634096586. + (double)(1.84467440737e+19f + v)) / (
                         (double)((unsigned long long)(- v_4) & 20745ULL % (unsigned long long)(
                                                                v_6 + 493LL)) + 940.));
  }
  else {
    v_23 = v_25;
    v_17 = (short)((int)((double)(- v_23) + (double)p_11 / 9748998327.35) | (
                   (int)((unsigned short)(v_25 + (float)p_11)) + (int)p_11));
    result = ((p_15 | (long long)v_17) - (long long)((int)v_19 * 20)) & (long long)p_21[1];
  }
  return result;
}


