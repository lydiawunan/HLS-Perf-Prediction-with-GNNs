#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 930073158
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p[4][2][5], short p_9, float p_17)
{
  char v_23;
  long long v_21;
  unsigned char v_19;
  long v_15;
  char v_13;
  signed char v_11;
  short v_7;
  char v_5;
  unsigned int v;
  char result;
  v_23 = (char)-33;
  v_21 = 65065LL;
  v_19 = (unsigned char)170;
  v_15 = 390988081L;
  v_11 = (signed char)-65;
  v = 20095U;
  v_13 = (char)(- ((long long)(- ((int)v_11 / ((int)v_19 + 997))) ^ v_21 / (long long)(
                                                                    (int)(! v_23) + 358)));
  v_7 = (short)((long)(~ (~ ((int)p_9 / ((int)v_11 + 821)))));
  v_5 = (char)(((unsigned int)(- (-148.554957877 * (double)v)) * (v % (
                                                                  (unsigned int)-318.927642822f + 963U) + (unsigned int)(- v_7))) / 4294941234U);
  result = (char)(- ((unsigned long long)v - ~ (p[1][1][3] - (unsigned long long)v_5)));
  return result;
}


