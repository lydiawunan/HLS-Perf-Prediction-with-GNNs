#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 55699137
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned long p_5, unsigned char p_7,
                  unsigned long p_9, double p_11)
{
  unsigned long v_23;
  float v_21;
  float v_19;
  float v_17;
  unsigned long v_15;
  signed char v_13;
  unsigned long v;
  unsigned long result;
  v_23 = p_5;
  v_21 = (float)p_11;
  v_19 = 54566728.f;
  v_17 = 951.651977539f;
  v_15 = (unsigned long)p_11;
  v_13 = (signed char)-127;
  while ((double)((int)(- v_13) * (int)((signed char)((float)p_9 - v_17))) - - p <= (double)(
         3736565696U - (unsigned int)(p / 300. - (double)((unsigned long long)v_19 * 46075ULL)))) {
    v_13 = (int)v_21 * 248069213;
    v_15 = (unsigned long)((109.f * (v_19 + v_19)) * (float)(~ v_23 - (unsigned long)(
                                                             (long)p_7 - -35725L)));
    v_19 = (float)v_13;
    v_17 = (float)p_7;
  }
  while_0_break: ;
  if (~ ((int)p_7 - -55) < (int)(-272886742. + - p) - ~ ((int)v_13 >> (
                                                         v_15 & 7UL))) 
    result = 21371UL;
  else {
    v = - (- p_5 * 91UL);
    result = (unsigned long)(0LL ^ (long long)(- v));
    result *= (unsigned long)p;
  }
  return result;
}


