#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 309393281
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, double p_5, short p_11[5][4][4], unsigned long long p_13,
         unsigned int p_15[4])
{
  short v_25;
  char v_23;
  unsigned int v_21;
  signed char v_19;
  double v_17;
  unsigned int v_9;
  float v_7;
  unsigned char v;
  char result;
  v_21 = 423733165U;
  v_19 = (signed char)51;
  v_9 = (unsigned int)p;
  v_7 = -295.874481201f;
  v = (unsigned char)p;
  result = (char)-10;
  while (4013388556UL == (unsigned long)(62260 % (((int)((signed char)p_5) + 95) + 415) - (
                                         (int)-1.84467440737e+19f >> (
                                         (int)result % 118 & 31)))) {
    v_25 = v_21 + 53155U;
    v_23 = (char)((unsigned long long)p_5 - (unsigned long long)((unsigned int)v_25 % (
                                                                 v_9 + 499U)) / (
                                            p_13 + 67ULL));
    v_9 = (unsigned int)(45081ULL % (((unsigned long long)p | p_13) + 339ULL) ^ 
                         (unsigned long long)v_19 % ((18446744073233969113ULL ^ (unsigned long long)v_23) + 498ULL));
    result = (char)p_13;
  }
  while_0_break: ;
  while ((long)((int)(! (~ v)) % 17) >= - (((long)p_5 / 432815522L) * (long)v)) {
    v_17 = v_7 - -18.f;
    result = (char)((((unsigned long long)p_11[3][3][0] % (p_13 + 520ULL)) % (unsigned long long)(
                     (int)v + 438)) % ((unsigned long long)(((double)p_15[3] / (
                                                             v_17 + 459.)) / (double)(
                                                            ((float)v_9 - 1.70790281415e+38f) + 643.f)) + 276ULL));
    v_7 = (float)v_9;
    v = (unsigned char)((unsigned int)v_7 - v_9);
  }
  while_0_break_0: ;
  return result;
}


