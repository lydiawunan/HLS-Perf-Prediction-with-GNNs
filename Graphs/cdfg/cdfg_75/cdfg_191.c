#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 765206671
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p[3], signed char p_5, short p_9, long p_11[5][3])
{
  short v_15;
  char v_13;
  long long v_7;
  float v;
  unsigned long long result;
  v_15 = (short)-26515;
  v_13 = (char)-16;
  v_7 = -709807667LL;
  v = -5367706624.f;
  result = (unsigned long long)p_5;
  while (-446.790374756f < (float)((unsigned long long)(! ((int)p_5 % 9109)) * (
                                   4069249408ULL - result))) {
    v = (float)((long long)((p_11[3][2] / (long)((int)p[1] + 385)) * (
                            p_11[4][2] % (long)((int)v_13 + 575))) / (
                v_7 / (long long)((int)v_15 % ((int)v_13 + 669) + 71) + 290LL));
    result /= (unsigned long long)(! ((int)p_9 % ((int)p[1] + 66)) + 770);
    result = (unsigned long long)((-2728443823.69 - (double)(result * (unsigned long long)v_7)) / (
                                  (double)result + 358.));
  }
  while_0_break: ;
  result = (unsigned long long)(((int)((unsigned short)v) % 17584) % (
                                (int)p[0] % 21 + 708) + (int)-2.37768924592e+38);
  return result;
}


