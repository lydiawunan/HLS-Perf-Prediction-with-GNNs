#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 520004591
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p[3][5], signed char p_11, unsigned long long p_13,
                  signed char p_17, unsigned int p_19[2][2])
{
  long long v_27;
  unsigned int v_25;
  unsigned int v_23;
  int v_21;
  float v_15;
  unsigned long long v_9;
  unsigned short v_7;
  float v_5;
  unsigned char v;
  unsigned char result;
  v_27 = (long long)p[2][0];
  v_25 = (unsigned int)p_11;
  v_23 = (unsigned int)p[0][4];
  v_21 = (int)p_11;
  v_15 = (float)p[0][0];
  v_9 = (unsigned long long)p_17;
  v_5 = -864.460876465f;
  v = (unsigned char)p_13;
  while (p_13 > (unsigned long long)((unsigned int)(~ (! v_21)) - ~ (
                                     (unsigned int)p_17 + v_23))) {
    v_23 = v_27 + 13458LL;
    result = (unsigned char)(! (71U % ((unsigned int)v / (v_25 + 903U) + 666U)));
    v_25 = (unsigned int)(- ((int)((unsigned char)(v_15 + (float)v_9)) - (int)(~ result)));
    v_21 = (int)p_17;
  }
  while_0_break: ;
  if ((double)((float)p_13 / (v_15 * (float)((unsigned int)p_17 / (p_19[0][0] + 1007U)) + 307.f)) < - (
      (3.17990260348e+38 + (double)v_15) - -4656.)) {
    v_7 = (unsigned short)(- ((unsigned long long)((int)p_11 + (int)((signed char)v_5)) + p_13));
    v = (unsigned char)p_11;
    result = (unsigned char)((unsigned long long)((int)v / ((int)p[1][0] * (int)((short)v_5) + 839)) / (
                             ((unsigned long long)((int)v_7 / ((int)v_7 + 761)) & v_9) + 286ULL));
  }
  else result = (unsigned char)38;
  return result;
}


