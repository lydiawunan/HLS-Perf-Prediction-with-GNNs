#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 238272143
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(void)
{
  short v_10;
  char v_8;
  short v_6;
  float v_4;
  unsigned long long v;
  unsigned long result;
  v_10 = (short)-23369;
  v_8 = (char)46;
  v_6 = (short)-40;
  v_8 = v_8;
  v_4 = (float)(~ ((18446744073275815423ULL + (unsigned long long)((long long)v_6 % 63073LL)) << (
                   ((int)(- v_8) ^ (int)v_10) & 63)));
  v = (unsigned long long)v_4;
  result = (unsigned long)v;
  return result;
}


