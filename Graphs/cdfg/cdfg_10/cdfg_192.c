#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 560553152
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p[3][2][3], char p_7[3][2][5], unsigned int p_9,
                   signed char p_11[4][2][4], double p_13)
{
  float v_19;
  signed char v_17;
  long v_15;
  unsigned long v_4;
  long long v;
  unsigned short result;
  v_19 = (float)p_11[1][1][1];
  v_17 = p_11[3][1][0];
  v_4 = (unsigned long)p_13;
  v = (long long)p_11[3][0][3];
  v_15 = (long)((unsigned long long)((int)(- p_7[1][0][1]) / ((int)((char)-290264809472.f) + 861)) * (
                ((unsigned long long)v_17 / 18446744072796127968ULL) / (unsigned long long)(
                ((long long)v_19 + v) + 654LL)));
  if ((0LL - (v + (long long)v_4)) - (long long)((unsigned int)((int)p[2][0][1] & (int)p_7[0][1][1]) * (
                                                 p_9 - (unsigned int)p_11[3][1][2])) != (long long)(
      (long)p_13 + v_15)) result = (unsigned short)(- (~ -242230223LL));
  else result = (unsigned short)59683;
  return result;
}


