#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 525197534
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned int p_7[1][3][1],
                unsigned long long p_11[1][1], signed char p_13,
                unsigned long long p_15[3][2])
{
  double v_29;
  long long v_27;
  signed char v_25;
  unsigned char v_23;
  short v_21;
  double v_19;
  unsigned long v_17;
  unsigned int v_9;
  int v_5;
  short v;
  signed char result;
  v_29 = (double)p_15[2][1];
  v_27 = (long long)p_15[1][0];
  v_23 = (unsigned char)p_11[0][0];
  v_21 = (short)p_13;
  v_19 = (double)p;
  v_5 = -793864381;
  if ((unsigned long long)(v_27 % 7613LL) % ((p * 40371ULL) * (unsigned long long)(- p_7[0][0][0]) + 128ULL) > (unsigned long long)(
      (int)(- (- v_23)) >> ((int)((unsigned char)v_29) & 7))) {
    v_21 = (short)((unsigned long long)(4294925469UL + (unsigned long)(~ v_23)) - 
                   p * (unsigned long long)((unsigned int)v_21 + p_7[0][1][0]));
    v_17 = (unsigned long)(- ((unsigned int)((int)v_21 ^ v_5) / (((unsigned int)v_19 + 8586330U) + 640U)));
    v_9 = (unsigned int)(- (- p_15[2][1]) - (unsigned long long)((double)(
                                                                 1.96937988651e+37f / (
                                                                 (float)p_11[0][0] + 405.f)) / (
                                                                 (double)v_17 / (
                                                                 v_19 + 563.) + 665.)));
  }
  else {
    v_25 = (signed char)((p_11[0][0] * p_15[0][1] - (p_15[2][1] - p_15[1][1])) % 52ULL);
    v_5 = (int)(- (! ((unsigned long long)v_25 - p)));
    v_9 = (unsigned int)(! (~ (signed char)-121));
  }
  if ((float)(v_5 << (p_7[0][1][0] * v_9 & 31U)) + ((float)(! p_11[0][0]) + -3.26424430842e+38f) >= (float)(
      ((unsigned long long)p_13 % (p_15[2][0] + 463ULL)) / 131ULL + 10001ULL)) 
    result = (signed char)66;
  else {
    v = (short)-201.125996855;
    result = (signed char)(2.30971679284e+38f / ((float)(p % (unsigned long long)(
                                                         (int)v + 1010)) + 607.f) - -1040317760.f);
  }
  return result;
}


