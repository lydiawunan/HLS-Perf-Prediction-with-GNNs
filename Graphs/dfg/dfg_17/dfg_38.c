#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 475425612
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, char p_7, unsigned short p_11[5][1][2],
         unsigned long p_13)
{
  double v_19;
  long v_17;
  double v_15;
  float v_9;
  unsigned long v_5;
  unsigned char v;
  long result;
  v_19 = (double)p;
  v_17 = (long)p_13;
  v = (unsigned char)p_13;
  v_15 = (double)-10750;
  v_5 = 0UL;
  v_9 = (float)(((unsigned long long)v_5 / 18446744020363490929ULL - (unsigned long long)(
                 (unsigned long)(~ p_11[1][0][0]) / 4294964492UL)) ^ (unsigned long long)p_13);
  result = (long)(- ((float)((unsigned long)((unsigned int)v * p) ^ (unsigned long)p * v_5) / (
                     ((float)((int)p_7 * 51857) + v_9 * -339.291931152f) + 290.f)));
  return result;
}


