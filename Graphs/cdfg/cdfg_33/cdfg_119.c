#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 174828266
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p[3][4], signed char p_5, int p_11, short p_17[4][2],
           unsigned short p_19[3])
{
  unsigned short v_25;
  int v_23;
  float v_21;
  unsigned long long v_15;
  char v_13;
  short v_9;
  unsigned int v_7;
  int v;
  double result;
  v_25 = (unsigned short)p_17[1][0];
  v_23 = (int)p_17[2][1];
  v_21 = (float)p[0][1];
  v_15 = 10038ULL;
  v_13 = (char)-118;
  v_9 = (short)p_19[2];
  v = (int)p_5;
  result = (double)p_17[1][1];
  while ((unsigned long long)(((int)v_9 / (p_11 + 296) + 92) ^ (int)p_5) == ~ v_15) {
    v_13 = (int)((unsigned char)v_21) + 200;
    result = (double)59627LL;
    v_21 = (float)((unsigned long long)(! v_23 % (((int)p[1][3] & v_23) + 142)) ^ ~ (
                   (unsigned long long)v_25 - v_15));
    v_9 = (short)17688;
  }
  while_0_break: ;
  if (~ (((unsigned long long)p_5 + v_15) & 18446744073709551528ULL) < (unsigned long long)(~ (
      (int)p_17[0][0] % ((int)p_19[1] + 812)))) result = (double)(328468236ULL + 1);
  else {
    v_7 = (unsigned int)(((result + (double)v_9) - (double)(! v)) / (
                         (double)(~ (p_11 & (int)v_13)) + 895.));
    v = (int)((unsigned long long)(((long long)p_5 & -1408LL) / (long long)(
                                   (v_7 | (unsigned int)p[0][1]) + 426U)) / (
              (3659701401ULL - (unsigned long long)(~ p[0][3])) + 918ULL));
    result = (double)(-114 + ((int)p[2][3] / (v + 490)) / ((int)(- p[0][3]) + 103));
  }
  return result;
}


