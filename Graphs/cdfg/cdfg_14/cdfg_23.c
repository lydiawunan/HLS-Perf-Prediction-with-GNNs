#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 345362381
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned int p_4[4][3][4], short p_7, signed char p_11,
         unsigned long long p_13)
{
  float v_9;
  int v;
  char result;
  v = -989870912;
  v_9 = (float)((int)p_7 / (v + 526));
  if ((unsigned long long)((unsigned long)(! ((int)p_7 | (int)((short)v_9))) ^ 3613282735UL) < - (
      (unsigned long long)((int)p_11 + 50745) * p_13)) result = (char)(
                                                       ((unsigned int)(
                                                        (int)((unsigned char)p) * 152) + - p_4[2][1][3]) + 4294938835U);
  else {
    v = 103;
    result = (char)v;
  }
  return result;
}


