#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 238701713
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p[3], unsigned short p_9[5][5][4])
{
  unsigned char v_11;
  long long v_6;
  long v_4;
  short v;
  float result;
  v_11 = (unsigned char)72;
  v_6 = -35110LL;
  v_4 = -1050L;
  v = (short)6249;
  v = (short)(- ((float)(~ (p[0] + (unsigned long long)v_11)) - (-477.664489746f + (float)(
                                                                 (int)v * 47939))));
  result = (float)(- ((4294939117ULL * p[0]) % (((873928007ULL ^ (unsigned long long)v_6) - (unsigned long long)(- p_9[4][3][2])) + 514ULL)));
  v_4 = (long)((unsigned long long)(~ (- ((long long)v_4 - v_6))) ^ (
               - ((unsigned long long)result + p[1]) | p[1]));
  result = (float)(20905UL + (unsigned long)(23084.f * (-187.284484863f / (
                                                        (float)((long)v ^ v_4) + 676.f))));
  return result;
}


