#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 973847969
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, char p_9[2][2][4])
{
  unsigned long long v_15;
  int v_13;
  char v_11;
  char v_7;
  unsigned long long v_5;
  unsigned char v;
  double result;
  v_15 = (unsigned long long)p;
  v_13 = (int)p_9[1][0][0];
  v_11 = (char)108;
  v_7 = (char)102;
  v_5 = (unsigned long long)p;
  v = (unsigned char)p;
  result = (double)p;
  while (v_5 == (unsigned long long)(- (v_13 | (int)p) ^ ((int)(- p_9[1][1][3]) - (
                                                          (int)p ^ (int)p_9[1][1][2])))) {
    v = (unsigned char)v_7;
    v_13 = (int)(- v_15 + (unsigned long long)(~ ((int)p_9[1][1][1] / (
                                                  (int)((char)result) + 343))));
    v_5 = (unsigned long long)((double)((int)(- v_7) - (int)v / ((int)p + 974)) * - (
                               -11135. + result));
  }
  while_0_break: ;
  while (! ((int)((unsigned char)-4132280064.f) * (int)(- v)) <= - (- (
         4146 | (int)p))) {
    result = v_5 * 18446744072684953179ULL;
    v_7 = (char)((unsigned long long)(! ((int)p_9[0][1][2] / ((int)v_11 + 958))) * (
                 766277937ULL << ((int)v_7 % 206 & 63)));
    v_5 = (unsigned long long)(- v_7);
    v = (unsigned char)48;
  }
  while_0_break_0: ;
  return result;
}


