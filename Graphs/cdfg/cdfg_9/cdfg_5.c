#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 794684205
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, signed char p_4, signed char p_9,
          unsigned int p_11[4][4][3], int p_15[1][1][3])
{
  float v_17;
  long v_13;
  unsigned long long v_7;
  char v;
  short result;
  v_17 = (float)p_4;
  v_13 = (long)p_15[0][0][2];
  if ((float)p_15[0][0][2] >= v_17) {
    v_7 = (unsigned long long)(- ((long)(p_15[0][0][2] * (int)p_4) - v_13));
    v = (char)(! (v_7 - v_7) + (unsigned long long)(((unsigned long)p_11[3][2][1] % (unsigned long)(
                                                     v_13 + 948L)) / (unsigned long)(
                                                    ~ p_15[0][0][1] + 734)));
    v_7 = (unsigned long long)p_9;
  }
  else {
    v_13 = (long)(- (- (-513.719848633f - (float)p_4)));
    v_7 = (unsigned long long)((unsigned long)p_11[2][0][2] / (unsigned long)(
                               v_13 + 168L));
    v = (char)p_9;
  }
  result = (short)((unsigned long long)((-87 * (int)p) % ((int)(! p_4) + 237)) / (
                   ((unsigned long long)v - v_7 % (unsigned long long)(
                                            (int)v + 780)) + 350ULL));
  return result;
}


