#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 145434567
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, double p_5)
{
  unsigned char v_9;
  unsigned short v_7;
  float v;
  unsigned long result;
  result = 3814322327UL;
  v_9 = (unsigned char)(-5065204736.f / ((float)((- result / 4294967244UL) / (unsigned long)(
                                                 ! (- p) + 933L)) + 578.f));
  v = (float)v_9;
  v_7 = (unsigned short)((double)v_9 - p_5);
  result = (unsigned long)((16.f / (v * (float)p + 867.f) - (float)(p * (long)p_5)) - (float)(
                           0 - (long)v_7));
  return result;
}


