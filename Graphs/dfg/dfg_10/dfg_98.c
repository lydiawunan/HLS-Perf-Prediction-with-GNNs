#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 597821970
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p[5], int p_9,
                       unsigned short p_11[5][1][4])
{
  unsigned char v_7;
  long v_4;
  int v;
  unsigned long long result;
  v_7 = (unsigned char)164;
  v = (int)p_11[1][0][2];
  result = (unsigned long long)p_11[1][0][1];
  v_4 = 0L;
  v = (int)(((long)(~ v - 23 * (int)v_7) / 344222979L) % (long)((91 / (
                                                                 (int)(~ p[3]) + 283) ^ -82) + 370));
  result = (unsigned long long)((unsigned long)(! ((long)v * v_4) / (long)(
                                                ! (-25534 / ((int)p[2] + 330)) + 6)) / (
                                (4293825133UL - (unsigned long)v_7) + 165UL));
  return result;
}


