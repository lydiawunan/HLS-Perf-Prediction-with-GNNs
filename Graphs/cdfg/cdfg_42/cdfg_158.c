#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 725135389
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, signed char p_5, unsigned char p_7,
                 char p_9, unsigned char p_19)
{
  float v_17;
  unsigned short v_15;
  double v_13;
  char v_11;
  unsigned long long v;
  unsigned int result;
  v_17 = (float)p_7;
  v_15 = (unsigned short)55943;
  v_11 = (char)-41;
  v = 18446744073162698379ULL;
  result = (unsigned int)p_7;
  v_13 = (double)(~ ((unsigned int)v_17 - result));
  while ((-3.26589393306e+38 * (double)v + (double)((int)p - (int)p_5)) * (double)(
         3LL + ((long long)p_7 - 55064LL)) <= (double)((unsigned long)p_9 + 
                                                       (unsigned long)v_11 % 4294902262UL)) {
    result = v_17 + (float)((int)v_15 & (int)((unsigned short)(v_13 + 4294934179.)));
    v_15 = (unsigned short)(29974 - ((int)p_19 & (int)p_5));
    v_17 = (float)-1072947L;
    v = (unsigned long long)p_9;
  }
  while_0_break: ;
  return result;
}


