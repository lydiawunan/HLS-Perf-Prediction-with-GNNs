#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 895860293
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned long p_13[1][4][2],
           unsigned char p_19)
{
  unsigned long long v_21;
  long v_17;
  char v_15;
  unsigned long v_11;
  long v_9;
  unsigned long v_7;
  unsigned char v_4;
  short v;
  double result;
  v_17 = -45655L;
  v_15 = (char)p;
  v_11 = 3372313498UL;
  v_9 = (long)p_19;
  v_7 = p_13[0][2][1];
  v_4 = (unsigned char)187;
  v = (short)-19185;
  result = (double)p_19;
  if ((0ULL ^ ((unsigned long long)(p_13[0][1][1] % 4294967292UL) + (
               p + (unsigned long long)v_4))) >= (unsigned long long)p_19) {
    v_21 = (unsigned long long)(((long)((int)p_19 ^ -22) * ~ v_17) % (long)(
                                ((int)(~ v_4) - -99 * (int)v_15) + 924));
    v_7 = (unsigned long)(((18446744073709551585ULL + p) | (834548626ULL + (unsigned long long)v)) % (
                          ((p - (unsigned long long)v_17) + (unsigned long long)p_19 * v_21) + 933ULL));
    v_9 = (long)((unsigned long long)((p_13[0][1][0] - p_13[0][3][1]) + (
                                      4294924907UL - p_13[0][0][1])) % (
                 (2640ULL + p) + 789ULL));
  }
  else {
    result = result;
    v_21 = (unsigned long long)((double)(! p_13[0][0][0]) + result);
    v_4 = (unsigned char)(23426ULL | (19469970ULL / (v_21 + 914ULL) | (unsigned long long)(
                                      v_7 * (unsigned long)result)));
  }
  while ((unsigned long long)(-63461 & (int)v % 13) % (((unsigned long long)v_4 & p) * (unsigned long long)(
                                                       (double)v + -8997740455.1) + 788ULL) != (unsigned long long)(- (~ v_7))) {
    result = v_11 * 24UL;
    v_11 = 3638975340UL;
    v = (short)v_9;
    v_4 = (unsigned char)(p_13[0][0][0] * 4294967196UL - (unsigned long)v_15);
  }
  while_0_break: ;
  return result;
}


