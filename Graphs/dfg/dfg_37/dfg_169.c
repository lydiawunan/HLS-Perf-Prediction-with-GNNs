#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 123023212
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p[4], float p_9, long p_11)
{
  long long v_6;
  double v_4;
  unsigned short v;
  unsigned short result;
  result = (unsigned short)19112;
  v_6 = (long long)((unsigned long)((-838498176.f * - p_9) / ((float)(~ p_11) + 274.f)) * 51261UL);
  v_4 = (double)3553890408U;
  v = (unsigned short)(~ ((int)p[0] + -63292) % (0 % (((int)result + (
                                                       (int)p[2] & 34036)) + 612) + 11));
  result = (unsigned short)((int)v + ((int)((unsigned short)(v_4 - (double)(~ v_6))) + (int)v));
  return result;
}


