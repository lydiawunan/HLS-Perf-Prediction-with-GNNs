#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 400203108
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, long long p_11, int p_13)
{
  int v_9;
  long v_7;
  short v_4;
  short v;
  unsigned long long result;
  v_9 = -15779;
  v = (short)p;
  v_7 = 19L;
  v_4 = (short)((long long)((long)v * (-1002606175L / (14713L * v_7 + 118L))) * (
                ((long long)(-20939 >> (v_9 & 15)) | ((long long)p - p_11)) + (long long)p_13));
  result = (unsigned long long)(~ ((int)(! v) - 41 * (int)v_4) - (int)p);
  result = result;
  return result;
}


