#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 747273731
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, long p_5, short p_7, int p_9, unsigned long p_11[5][2])
{
  float v_31;
  signed char v_29;
  char v_27;
  unsigned long v_25;
  long v_23;
  int v_21;
  unsigned long long v_19;
  unsigned long long v_17;
  signed char v_15;
  long long v_13;
  unsigned short v;
  float result;
  v_31 = (float)p_5;
  v_29 = (signed char)111;
  v_27 = (char)p_9;
  v_25 = 380UL;
  v_21 = -835926346;
  v_17 = 20214ULL;
  v_15 = (signed char)-14;
  v_13 = -44528LL;
  if ((long long)((unsigned int)(! (- p_9)) % 47235U) >= (long long)p_5 * (
                                                         v_13 / 42LL) - (long long)(- (
                                                         (unsigned long)v_27 % (
                                                         p_11[4][1] + 851UL)))) {
    v_19 = (unsigned long long)(! (- (190 - v_21)));
    v_13 = (long long)((972081631ULL * (777385400ULL + v_17)) / (v_19 + 738ULL));
    v_15 = (signed char)0;
  }
  else {
    v_15 = (signed char)((float)((int)(~ v_27) / (p_9 / ((int)v_29 + 657) + 533)) - v_31);
    v_23 = (long)(- (! ((unsigned long)p_9 * v_25)));
    v_13 = (long long)v_23;
  }
  if ((((long long)p_11[2][1] + v_13) - 105LL) / ((long long)((float)(
                                                              (int)v_15 / -32121) + 0.113362371922f) + 760LL) <= (long long)(
      (long)8565011456.f * 48528L - ~ (p_5 / (long)(p_9 + 13)))) {
    result = (float)((unsigned long)p_9 | ! p_11[2][0]);
    v = (unsigned short)(- (result + -9738.f) - (float)((878281297L - (long)-4953686034.82) % (
                                                        (p_5 - (long)p_7) + 742L)));
    result = 4294921216.f / (45.f / (((float)v - p) + 943.f) + 918.f);
  }
  else result = (float)(0L / (! (~ p_5) + 587L));
  return result;
}


