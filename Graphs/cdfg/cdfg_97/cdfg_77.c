#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 32511070
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p[4][3])
{
  signed char v_13;
  unsigned long v_11;
  unsigned short v_9;
  unsigned int v_7;
  unsigned short v_5;
  signed char v;
  long long result;
  v_11 = 4294944515UL;
  v_9 = (unsigned short)p[1][2];
  v_7 = (unsigned int)p[2][1];
  v_5 = (unsigned short)1373;
  v = (signed char)p[0][1];
  result = (long long)p[0][2];
  while (v_7 > (unsigned int)((int)p[0][2])) {
    v_5 = v_11 * 4294914586UL;
    v_13 = (signed char)(- -2.4016938278e+38);
    v = (signed char)p[2][2];
    v_7 = (unsigned int)(-2.40121442027e+38 / ((double)v_9 + 51.) - (double)(
                         (4294967290U | v_7) - (unsigned int)((int)v_13 * (int)v)));
  }
  while_0_break: ;
  while (14306U >= (unsigned int)((int)v / 244 - (int)(~ p[0][2])) / (
                   - ((unsigned int)v_5 & 4294962050U) + 577U)) {
    v_9 = (unsigned long)v_7 - 609069210UL;
    v_5 = (unsigned short)result;
    result = - result;
    v = (signed char)((unsigned long)(((int)p[3][0] - (int)v_5) / ((int)(~ v_9) + 47)) * (
                      ((unsigned long)p[1][1] * 47928UL) / (unsigned long)(
                      (int)(~ p[0][0]) + 300)));
  }
  while_0_break_0: ;
  return result;
}


