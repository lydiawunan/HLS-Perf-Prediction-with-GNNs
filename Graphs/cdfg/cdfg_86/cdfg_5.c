#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 618142218
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p[4][2][4], float p_9, int p_15,
                  signed char p_17[5][3], unsigned long long p_21)
{
  unsigned long v_25;
  long long v_23;
  unsigned short v_19;
  long long v_13;
  long long v_11;
  long v_7;
  long v_4;
  float v;
  unsigned long result;
  v_25 = (unsigned long)p_15;
  v_23 = (long long)p_21;
  v_19 = (unsigned short)61483;
  v_13 = -576298634LL;
  v_11 = (long long)p_21;
  v = -777.918701172f;
  result = (unsigned long)p[3][1][2];
  if ((unsigned long long)v_25 < ~ ((unsigned long long)(7627820032.f - p_9) + 
                                    (unsigned long long)result % 955137783ULL)) {
    result = (unsigned long)((unsigned long long)(4294967170U + (unsigned int)v / (
                                                                p[2][0][0] + 907U)) * (
                             (unsigned long long)(~ v_13) % (((unsigned long long)v_13 - p_21) + 920ULL)));
    v_7 = (long)(v_11 / (v_13 + 915LL) + (long long)(- p_15 - ((int)p_17[3][0] + (int)v_19)));
    v = (float)((unsigned long)p[2][1][3] + (unsigned long)v_7) + - (
        p_9 * 744062464.f);
  }
  else {
    result = (unsigned long)(((double)(- p_15) - -12693.7839665) - - (
                             (double)v_23 / 2.97264393011e+37));
    v_11 = (long long)p_15;
    v = (float)(p_21 % (p_21 / (unsigned long long)(v_11 + 410LL) + 325ULL) - (unsigned long long)(! p_15));
  }
  while (0UL - ~ (4294954557UL / (result + 311UL)) != - (~ result + (unsigned long)-114.034661826 * result)) {
    v_4 = v * -4126.f;
    v_7 = 28203L;
    v = (float)((((unsigned long)v_4 & (unsigned long)p[2][0][0]) - (unsigned long)p[1][0][3]) * (unsigned long)v_7);
    result %= 4294914587UL;
  }
  while_0_break: ;
  return result;
}


