#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 634258074
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned short p_13, unsigned long long p_15)
{
  unsigned long long v_21;
  long v_19;
  signed char v_17;
  unsigned char v_11;
  double v_9;
  short v_7;
  long long v_5;
  short v;
  char result;
  v_21 = (unsigned long long)p_13;
  v_19 = 64567L;
  v_17 = (signed char)12;
  v_11 = (unsigned char)141;
  v_9 = 134.623365985;
  v_5 = -41387LL;
  v = (short)p_15;
  result = (char)127;
  while ((long)(~ result) > v_19) {
    v_21 /= (unsigned long long)-7.92874987036e+37f + 459ULL;
    v_17 = (signed char)v;
    v_5 = (long long)(26717UL % (unsigned long)(((int)((short)(v_9 + v_9)) << 2) + 951));
    v_19 = -53618L;
  }
  while_0_break: ;
  while ((long long)(~ ((int)(3.33631886506e+38f - (float)v) + (int)-2.61212554485e+38 % (
                                                               p + 590))) <= (
         (long long)(! (~ p)) & v_5)) {
    v_7 = (unsigned int)v_9 % 4294905201U;
    v_7 = (short)(((long long)p_13 / ((280911424LL >> (p_15 & 63ULL)) + 193LL)) % (long long)(
                  ((int)((short)2.85457593994e+38f) / ((int)v_7 + 255)) / (
                  (int)(- v_17) + 124) + 376));
    result = (char)113;
    v_5 = (long long)(((p % -17690) * (96 | (int)v_11)) * (((int)p_13 | 62) & (
                                                           (int)v_11 & 83)));
  }
  while_0_break_0: ;
  return result;
}


