#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 190959678
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned long p_7, short p_9, unsigned int p_15,
           unsigned long p_19)
{
  char v_31;
  int v_29;
  long v_27;
  int v_25;
  unsigned long long v_23;
  float v_21;
  unsigned long v_17;
  long v_13;
  long v_11;
  char v_5;
  unsigned short v;
  double result;
  v_31 = (char)-37;
  v_29 = (int)p_7;
  v_27 = (long)p;
  v_23 = 18446744072808104877ULL;
  v_21 = 32275030.f;
  v_17 = 4294948993UL;
  v_13 = (long)p_9;
  v_5 = (char)p;
  if (- (4087803799UL | (unsigned long)((long)p * v_27)) > p_19 % (unsigned long)(
                                                           (! v_29 - (int)(! v_31)) + 589)) {
    v = (unsigned short)((unsigned long long)(((unsigned long)v_5 - p_19) * (
                                              p_19 - (unsigned long)v_13)) / (
                         ~ v_23 + 671ULL));
    result = (double)(2.67642884319e+38f / (((float)(p_15 / 150U) + (
                                             (float)v - v_21)) + 582.f));
    v_5 = (char)-43;
  }
  else {
    v_25 = (int)p_15;
    v_5 = (char)(p_7 % (unsigned long)((v_13 / 232596248L >> (p_7 * 697UL & 31UL)) + 302L));
    result = (double)((long long)(! v_13) | -34159LL * (long long)(~ v_25));
  }
  if (0UL / (- (v_17 / (p_19 + 604UL)) + 277UL) < (p_19 ^ p_19) % (unsigned long)(
                                                  (int)(! p) / (5069 / (
                                                                (int)p + 65) + 227) + 545)) {
    result = (double)((long long)(p_7 & (unsigned long)p) / ((288437072LL + (long long)p_9) + 849LL)) * (
             (double)(- v_5) * -1.88394821154e+38);
    v = (unsigned short)v_5;
    result = (double)((long)(- ((int)p / ((int)v + 774))) / (((long)(
                                                              (int)((char)result) | 117) - 37842L) + 168L));
  }
  else {
    v_13 = (long)(- p_15);
    v_11 = (long)(p_7 << (((long long)(~ p_7) + 211681074LL) & 31LL));
    result = (double)((unsigned long long)(((long)p * v_11) * v_13) % 18446744073278442858ULL);
  }
  return result;
}


