#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1056324669
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, char p_4[2][1], int p_6,
                 short p_9[2][4][1])
{
  char v_15;
  unsigned int v_13;
  float v_11;
  unsigned int v;
  unsigned int result;
  v_15 = (char)91;
  v_13 = (unsigned int)v_15;
  v_11 = (float)(unsigned short)29729;
  v = (unsigned int)(~ ((unsigned long long)(- p_9[1][0][0]) / ((! p ^ (unsigned long long)(
                                                                 (unsigned int)v_11 - v_13)) + 624ULL)));
  result = (unsigned int)(~ (((1ULL & p) - p) ^ (unsigned long long)(
                             (int)p_4[0][0] >> ((p_6 << (v & 31U)) & 7))));
  return result;
}


