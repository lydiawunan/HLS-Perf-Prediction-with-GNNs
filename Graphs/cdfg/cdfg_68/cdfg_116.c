#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 820617723
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned int p_7, signed char p_9, long p_11,
                  unsigned long long p_13)
{
  unsigned char v_23;
  unsigned long v_21;
  double v_19;
  float v_17;
  unsigned short v_15;
  short v_4;
  unsigned int v;
  unsigned long result;
  v_23 = (unsigned char)87;
  v_21 = (unsigned long)p_9;
  v_19 = (double)p_9;
  v_17 = -653.508850098f;
  v_15 = (unsigned short)46814;
  v_4 = (short)p_13;
  v = p_7;
  result = (unsigned long)p_13;
  while (7600060189ULL < (unsigned long long)result) {
    v_15 = (double)v_21 - -8271696412.37;
    v_19 = (double)(((unsigned long long)p_9 / (p_13 + 273ULL)) % ((unsigned long long)(
                                                                   (float)p_13 * v_17) + 15ULL) + 18446744073709551572ULL);
    v_4 = (short)(! v_23);
    result = (unsigned long)p_7;
  }
  while_0_break: ;
  while ((double)(result + (unsigned long)(- (v & (unsigned int)v_4))) <= 
         (p / ((double)p_7 + 64.)) / ((double)(v % (unsigned int)((int)p_9 + 747)) + 265.) - (double)(
         -391.755249023f * (float)((unsigned long long)p_11 | p_13))) {
    v_15 = (int)v_17 % ((int)v_15 % ((int)((unsigned short)-1709942400.f) + 627) + 139);
    v_17 = (float)v_19;
    v_4 = (short)((int)p_9 - (int)p_9);
    result = (unsigned long)p_11;
  }
  while_0_break_0: ;
  return result;
}


