#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 699287848
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, short p_5[5][4], unsigned int p_9, char p_15,
         int p_17)
{
  char v_23;
  unsigned long v_21;
  double v_19;
  unsigned char v_13;
  signed char v_11;
  short v_7;
  unsigned long v;
  char result;
  v_23 = (char)p;
  v_21 = (unsigned long)p;
  v_19 = (double)p_15;
  v_11 = (signed char)p_9;
  v_7 = (short)22782;
  v_13 = (unsigned char)v_23;
  v_7 = (short)((unsigned long)((int)v_11 << (((unsigned int)((int)v_13 * (int)p_15) - (
                                               873U - p_9)) & 7U)) * (
                (unsigned long)((p_17 / ((int)v_7 + 313)) * (int)(v_19 / (
                                                                  v_19 + 237.))) + ! (! v_21)));
  v = (unsigned long)((-19503LL / (long long)(p_9 % 40636U + 298U) - -32560LL) + 36125LL);
  result = (char)(~ (! ((unsigned long)p - v)) * (((unsigned long)((int)p_5[2][0] / -53) - (
                                                   (unsigned long)v_7 - v)) << (
                                                  ! p_9 & 31U)));
  return result;
}


