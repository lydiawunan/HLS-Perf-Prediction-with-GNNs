#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 580105615
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p[4][4], int p_7, int p_13, int p_15[2][2])
{
  char v_17;
  short v_11;
  unsigned long long v_9;
  signed char v_5;
  unsigned short v;
  signed char result;
  v_17 = (char)p_7;
  v_11 = (short)p[0][2];
  v_9 = (unsigned long long)6835051266.16;
  v = (unsigned short)(~ (~ ((unsigned long long)(p_15[0][1] | (int)v_17) ^ 18446744073336816151ULL)));
  v_5 = (signed char)((41737ULL ^ ((unsigned long long)p[0][2] - ((unsigned long long)p_7 + v_9))) % (unsigned long long)(
                      ! (((int)v - (int)v_11) / (- p_13 + 516)) + 936));
  result = (signed char)(- (((long)v + 957899493L) * (long)((int)p[1][0] - (int)v_5)) / (long)(
                         (int)(! (- (- v))) + 713));
  return result;
}


