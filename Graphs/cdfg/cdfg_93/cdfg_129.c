#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 986623825
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned long long p_11, short p_13,
                  char p_19[2][4], unsigned int p_21)
{
  unsigned char v_17;
  unsigned int v_15;
  int v_9;
  char v_7;
  unsigned char v_5;
  unsigned int v;
  unsigned long result;
  v_17 = (unsigned char)p_13;
  v_9 = (int)p_21;
  v_7 = p_19[1][3];
  v = (unsigned int)p_13;
  v_15 = (unsigned int)((double)(4597U * p_21) + p);
  if (- ((float)v_15 + 456.522766113f) / ((float)(! v_17) + 617.f) == (float)p_19[1][2]) {
    v_5 = (unsigned char)0;
    result = (unsigned long)410.070983887f;
    result = (unsigned long)(((double)(~ result) + p) / ((double)(((unsigned long)p | 12196UL) - (unsigned long)(
                                                                  v % (unsigned int)(
                                                                  (int)v_5 + 604))) + 551.));
  }
  else result = (unsigned long)p;
  return result;
}


