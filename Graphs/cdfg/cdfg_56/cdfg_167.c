#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 399248822
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, float p_7[4][4], unsigned short p_11[4][5],
                  unsigned char p_13, long p_15[4][2])
{
  int v_21;
  long v_19;
  double v_17;
  short v_9;
  char v_4;
  unsigned int v;
  unsigned char result;
  v_19 = (long)p;
  v_17 = 482168619.294;
  v_9 = (short)p;
  v_4 = (char)p_7[0][2];
  v = (unsigned int)p;
  result = (unsigned char)151;
  while ((long)((int)result * ((int)p_11[3][1] + (int)p_13)) * p_15[2][1] == (long)(
         (int)p_13 - 126)) {
    v = (unsigned int)(! (! ((int)v_4 / ((int)p_13 + 976))));
    v_21 = (int)(! (- ((long long)p_13 - -61371LL)));
    result = (unsigned char)((unsigned long)(((long)v_17 - v_19) ^ (long)(
                                             (int)p + (int)p)) * (4294943172UL / (unsigned long)(
                                                                  (v_21 - (int)result) + 912)));
  }
  while_0_break: ;
  result = (unsigned char)((float)(~ v - (unsigned int)((int)v_4 >> (
                                                        (int)p & 7))) / (
                           - (p_7[3][1] * (float)v_9) + 192.f));
  return result;
}


