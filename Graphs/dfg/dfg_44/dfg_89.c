#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 335792504
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, unsigned char p_11, unsigned int p_13)
{
  int v_9;
  unsigned char v_7;
  long long v_5;
  float v;
  unsigned int result;
  v_9 = -35349;
  v_5 = (long long)p_11;
  v_7 = (unsigned char)187;
  v = (float)((long long)(~ (0 / (unsigned long)((-50 << ((int)v_7 & 7)) + 673))) * (
              (long long)(~ (v_9 * (int)p_11)) % ((v_5 ^ (long long)(- p_13)) + 849LL)));
  result = (unsigned int)(! v_5);
  result = ! ((124U / (result % ((unsigned int)v + 322U) + 83U)) / (unsigned int)(
              (int)p + 348));
  return result;
}


