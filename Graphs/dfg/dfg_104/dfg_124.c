#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 520671182
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, unsigned short p_7, long p_11, unsigned char p_15[3][2][1],
         unsigned long long p_17[3])
{
  double v_19;
  unsigned short v_13;
  unsigned short v_9;
  unsigned char v_4;
  short v;
  long result;
  v_19 = (double)p_17[2];
  v_13 = (unsigned short)54794;
  v_4 = (unsigned char)((long)((double)((int)(~ v_13) + (int)p_15[0][0][0]) * (
                               (double)(p_17[1] - (unsigned long long)p) + 
                               (double)p_17[2] * v_19)) & ! p_11 % (- p + 622L));
  v_9 = (unsigned short)p_11;
  v = (short)(- (((long)v_4 / ((p | (long)p_7) + 598L)) / (long)(- ((int)v_9 + -3) + 854)));
  result = (long)((int)v * (int)v_4);
  return result;
}


