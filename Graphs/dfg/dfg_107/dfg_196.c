#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 813465820
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p[1][4], double p_9, int p_11,
                 unsigned long p_13[1][4][3])
{
  unsigned char v_7;
  short v_5;
  long v;
  unsigned int result;
  v_7 = (unsigned char)((unsigned long)(~ (6578 + (int)((unsigned short)p_9)) ^ ~ (
                                        p_11 & 61129)) * - (- p_13[0][0][0]));
  v_5 = (short)((int)p[0][3] + (int)v_7);
  v = (long)v_5;
  result = (unsigned int)(((unsigned long long)(! (4294928191UL % (unsigned long)(
                                                   v + 531L))) % 121372125736688841ULL) * (unsigned long long)(
                          (int)p[0][2] * (232874008 + 2711 / ((int)p[0][3] + 365))));
  return result;
}


