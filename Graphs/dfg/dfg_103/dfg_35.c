#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1042381404
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned short p_4[1][2][1], long long p_15,
         signed char p_17, long long p_19)
{
  int v_13;
  unsigned int v_11;
  unsigned int v_9;
  double v_7;
  signed char v;
  char result;
  v_7 = 1.67588272219e+38;
  v = (signed char)-18;
  v_13 = (int)(((! p_15 % (long long)((int)(! p_17) + 410)) / 540LL) % (long long)(
               ~ (3268025819UL - (unsigned long)(- p_17)) + 994UL));
  v_9 = (unsigned int)(~ ((int)p / ((int)v + 1008)));
  v_11 = (unsigned int)(4294965590UL * - (37322UL % ((unsigned long)v_13 * 20205UL + 682UL)));
  result = (char)((unsigned int)(((int)(- p) * 184) / (~ ((int)p_4[0][1][0] + (int)v) + 680)) * (
                  ((unsigned int)(v_7 / (v_7 + 208.)) % (- v_9 + 474U)) / (
                  (v_11 >> (((long long)p_4[0][0][0] & -46274LL) & 31LL)) + 1010U)));
  return result;
}


