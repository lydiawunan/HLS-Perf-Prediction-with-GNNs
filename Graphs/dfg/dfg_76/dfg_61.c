#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 481123308
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p[3][2][5])
{
  short v_17;
  unsigned short v_15;
  signed char v_13;
  unsigned int v_11;
  long v_9;
  float v_7;
  int v_5;
  unsigned int v;
  unsigned long result;
  v_17 = (short)-26517;
  v_15 = (unsigned short)p[1][1][4];
  v_13 = (signed char)55;
  v_11 = p[0][1][2];
  v_9 = -57832L;
  v_7 = (float)p[0][1][3];
  v_5 = (int)p[1][0][4];
  result = (unsigned long)p[0][1][0];
  v_9 = (long)((unsigned long)(! (! (! p[0][0][1]))) - ((780456935UL + (unsigned long)(~ p[2][1][4])) + (unsigned long)(
                                                        -109L - v_9)));
  v = (unsigned int)((unsigned long)(p[2][1][4] * v_11 + p[0][1][0] * p[1][0][4]) + 
                     ((unsigned long)v_13 % (result + 141UL) | (unsigned long)v_15) / (unsigned long)(
                     ! (161 + (int)v_17) + 562));
  result = (unsigned long)(! ((((unsigned int)-1.12473567523e+38 - p[0][1][4]) / 49257U) / 115U));
  result = (unsigned long)((! (p[1][1][0] - v) + (unsigned int)(! (v_5 % (
                                                                   (int)v_7 + 293)))) + (unsigned int)(
                           ((float)((unsigned long long)result * 18446744073475412121ULL) + - v_7) - (float)(
                           (unsigned long)(- v_9) - 4294916327UL)));
  return result;
}


