#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 734669029
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, float p_9, double p_13)
{
  unsigned long v_11;
  short v_7;
  unsigned char v_4;
  unsigned long v;
  unsigned long result;
  v_7 = (short)p;
  v_4 = (unsigned char)74;
  v = (unsigned long)p;
  v_11 = (unsigned long)p + v;
  v = - (((unsigned long)(- v_7) / (v * (unsigned long)p_9 + 658UL)) / (
         (unsigned long)((double)(v_11 + 336UL) * p_13) + 572UL));
  result = (unsigned long)((int)(- p) + ((int)(- v_4) ^ 255));
  result = ((unsigned long)-4.14821139993e+37f * (4294967183UL / ((result + v) + 180UL))) / (unsigned long)(
           ~ ((int)v_4 % 178) + 709);
  return result;
}


