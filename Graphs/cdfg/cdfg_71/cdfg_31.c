#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 7261191
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p[4][4][1], unsigned long p_7, signed char p_9[2],
                unsigned long long p_11[4][3], char p_13)
{
  unsigned char v_17;
  signed char v_15;
  float v_5;
  unsigned char v;
  signed char result;
  v_17 = (unsigned char)205;
  v_15 = (signed char)(((long)v_17 * ((long)p[1][0][0] - -26239L)) % (
                       (long)5497582592.f + 619L));
  if (p[3][0][0] < (int)(~ v_15)) {
    v_5 = (float)(p_11[1][0] + (unsigned long long)p_7);
    v = (unsigned char)(18446744073042783952ULL ^ (((unsigned long long)p[0][1][0] | 670581573ULL) & (unsigned long long)(
                                                   p_7 / (unsigned long)(
                                                   (int)p_9[1] + 103))));
    result = (signed char)((unsigned long)((float)((int)v * p[1][1][0]) * - v_5) + 3537425067UL);
  }
  else result = (signed char)(732875259ULL - (unsigned long long)p_7);
  return result;
}


