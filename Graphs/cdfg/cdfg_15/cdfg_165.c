#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 440453552
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p[2][2][4], double p_5, unsigned long p_7[1][2],
        unsigned char p_11, unsigned long long p_15)
{
  long long v_21;
  float v_19;
  short v_17;
  short v_13;
  int v_9;
  signed char v;
  int result;
  v_21 = 844345343LL;
  v_19 = 473.24911499f;
  v_13 = (short)26407;
  v_9 = -791029089;
  v_9 = v_9;
  if ((unsigned long long)((unsigned long)v_9 - 18303UL) * ((unsigned long long)(! p_11) | p_15) == (unsigned long long)p[1][0][2]) {
    v_9 = (int)((unsigned long long)((long)(- p_11) + -1L) * ((unsigned long long)(
                                                              (float)v_13 - 1.6059820833e+38f) * ! p_15));
    v = (signed char)(- ((p_5 + (double)p_7[0][1]) + (double)(~ v_9)));
    result = (int)p[1][0][2] - (int)v;
  }
  else {
    v_17 = (short)(- (- (v_19 * (float)p_11)));
    v_19 = (float)((long long)(((double)p_11 - p_5) * 0.) % (19519LL % (
                                                             v_21 / -9563LL + 180LL) + 602LL));
    result = (int)((unsigned long)((int)(! v_17) % ((int)((short)(p_5 * (double)v_19)) + 519)) - (
                   ((unsigned long)p_11 & p_7[0][0]) + (39871UL - p_7[0][0])));
  }
  return result;
}


