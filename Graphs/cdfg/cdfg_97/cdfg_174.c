#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 721539271
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, char p_4, int p_6, double p_8, double p_10)
{
  long v_19;
  unsigned short v_17;
  long v_15;
  signed char v_13;
  signed char v;
  int result;
  v_19 = (long)p_8;
  v_17 = (unsigned short)p;
  v_15 = (long)p_6;
  v_13 = (signed char)p_6;
  v = (signed char)p_10;
  result = (int)p_10;
  while (((float)v_13 - -973.25592041f) - 406474144.f > (float)(- ((int)(
                                                                   (double)v_15 - p_8) % (
                                                                   (int)p_4 % (
                                                                   (int)((char)p_10) + 601) + 246)))) {
    v_19 += (long)((int)v_17 ^ 10);
    v_15 = (long)(1422536361LL - (long long)v_13);
    v_17 = (unsigned short)p_10;
    v_13 = (signed char)(3530030710U * (unsigned int)(- (-17 / ((int)p_4 + 543))));
  }
  while_0_break: ;
  if (((unsigned long)(result / -88) - 4294944413UL) / (unsigned long)(
      ((int)p_10 + (int)p_4 / ((int)((char)-806.16003418f) + 751)) + 788) == (unsigned long)(
      (double)v - - (- p_10))) result = (int)(417095223UL - ! (p % (unsigned long)(
                                                               (int)p_4 + 629)));
  else {
    result = (int)p_8;
    result = - (p_6 - result) | (int)(- (-178.509796143f - (float)p_4));
  }
  return result;
}


