#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 948872853
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p[3][5], long p_9, float p_11, double p_17[2][1][2],
           signed char p_19)
{
  unsigned char v_21;
  long v_15;
  unsigned int v_13;
  float v_7;
  unsigned int v_4;
  int v;
  double result;
  v_21 = (unsigned char)p_17[1][0][1];
  v_15 = -18059L;
  v_13 = (unsigned int)p[2][3];
  v_7 = 641.348876953f;
  v_4 = (unsigned int)p_11;
  v = (int)p_19;
  result = (double)p[0][2];
  if ((long long)(p_17[0][0][0] - (double)(p_11 * (float)(29341LL % (long long)(
                                                          (int)p[2][2] + 66)))) != 
      ((long long)(! v_13) | (185583537LL - (long long)v_13)) / (long long)(
      ((unsigned int)(v ^ (int)p_11) | (824681740U | (unsigned int)p_19)) + 831U)) {
    v = (int)((- p_17[0][0][0] * (double)v_7) / (((double)((int)v_21 + (int)p[2][4]) + - p_17[0][0][0]) + 283.));
    v_7 = - ((float)(v_4 / 4294935105U) * (p_11 + (float)p[0][2]));
    v_13 = 4294967261U;
  }
  else {
    v_4 = (unsigned int)(- (- ((double)p[1][2] * result)));
    v_7 = (float)((int)(~ (! p_19)) + -866718704);
    v_15 = (long)v_21;
  }
  while ((float)(((unsigned int)v + v_4) + (unsigned int)p[1][0]) + - (
         v_7 / 236347312.f) <= v_7 * (float)((unsigned long)(63L * p_9) * (
                                             78052306UL | (unsigned long)p_11))) {
    v_4 = (unsigned long)v_15 * ((unsigned long)v_13 + 32034UL);
    v_15 = (long)(((int)p_19 / ((int)((signed char)4.27974713623e+37f) + 870) - (int)(! p_19)) >> (
                  (int)((float)(-100 + (int)((signed char)result)) / (
                        (-1.46306928428e+38f + v_7) + 196.f)) & 31));
    v_13 = (unsigned int)((unsigned long)((806586478U * v_4) * (unsigned int)(
                                          1.33486067905e+38 - (double)p_19)) - (unsigned long)(
                          (long)v + p_9));
    v = (int)((long long)((210 >> (v_13 & 7U)) * ~ v) / (((long long)v_15 / -35138LL ^ (long long)(
                                                          (int)((signed char)p_17[1][0][1]) % (
                                                          (int)p_19 + 938))) + 430LL));
  }
  while_0_break: ;
  return result;
}


