#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 512519186
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p[4], unsigned char p_11[2][4],
                  unsigned char p_13, long long p_15, signed char p_17)
{
  long v_19;
  short v_9;
  signed char v_7;
  unsigned long long v_4;
  unsigned char v;
  unsigned char result;
  v_19 = -34807L;
  v_9 = (short)14560;
  v_7 = (signed char)((unsigned long)p_13 + (p[0] + (unsigned long)v_19));
  v_4 = (unsigned long long)p_17;
  v = (unsigned char)(p_15 / (long long)(p[0] + 945UL) - (long long)(
                      (4294949942U / (4294951488U / (unsigned int)((int)p_13 + 345) + 379U)) / (unsigned int)(
                      ! ((int)v_7 + (int)p_13) + 563)));
  result = (unsigned char)((unsigned long long)(! (0 - (long long)((int)v / 34))) - 
                           ((v_4 + (unsigned long long)p[2]) * (unsigned long long)(
                            (int)v_7 / ((int)v_9 + 700))) / (unsigned long long)(
                           ((long)((int)((unsigned char)1057837626.56) + (int)p_11[1][1]) - (
                            (long)p_13 & -899700334L)) + 251L));
  return result;
}


