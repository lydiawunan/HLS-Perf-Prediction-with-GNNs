#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 687653238
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p[1][2][5])
{
  unsigned short v_15;
  int v_13;
  signed char v_11;
  float v_9;
  signed char v_7;
  long long v_5;
  short v;
  unsigned char result;
  v_15 = (unsigned short)p[0][1][3];
  v_13 = (int)p[0][1][3];
  v_11 = (signed char)37;
  v_9 = (float)p[0][1][4];
  v_7 = (signed char)p[0][1][0];
  v_5 = 1031958109LL;
  v = (short)-26549;
  result = (unsigned char)p[0][1][1];
  if ((- v_5 % (long long)(((int)((unsigned short)p[0][0][2]) - (int)v_15) + 664) | (long long)(
       ((double)v_9 + p[0][1][3]) * (double)((int)((short)v_9) << 7))) <= (long long)(
      (double)v_11 * ((double)v / (p[0][1][2] + 1002.)) - (double)((long)(
                                                                   27 + (int)((signed char)564.23614502f)) + 
                                                                   282743615L * (long)p[0][0][1]))) {
    v = (short)(~ ((long long)v_11 * ((long long)p[0][0][1] * -769790528LL)));
    v_11 = (signed char)v_13;
    v_13 = 1130;
  }
  else {
    v_15 = (unsigned short)v;
    v_9 = (float)(! (! v));
    v_13 = ! (-1114616824 + (int)v_7);
  }
  while (p[0][1][2] < - p[0][0][1] * (double)result) {
    v_9 = (float)(((long long)(v_13 - (int)p[0][1][0]) + v_5 / ((long long)p[0][1][4] + 301LL)) + (long long)(
                  (int)((unsigned short)(- v_9)) / ((int)(! v_15) + 643)));
    v_7 = (signed char)((unsigned int)((int)v % ((int)(! v_11) + 609)) / (
                        ((unsigned int)result % 1832U) * (unsigned int)(
                        (int)result / ((int)((unsigned char)5.25335719555e+37) + 317)) + 614U));
    result = (unsigned char)((float)v_7 - - v_9);
  }
  while_0_break: ;
  return result;
}


