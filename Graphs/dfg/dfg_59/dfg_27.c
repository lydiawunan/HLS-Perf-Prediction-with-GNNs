#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1053831301
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, signed char p_4, int p_6, unsigned long long p_9,
          signed char p_11)
{
  unsigned long long v_17;
  long long v_15;
  char v_13;
  double v;
  float result;
  v_15 = -41503LL;
  v = 2.04757690554e+38;
  v_17 = 1854306901ULL;
  v_13 = (char)(((unsigned long long)(36514316LL / ((3921268992LL | v_15) + 953LL)) * (
                 (unsigned long long)(p_6 & (int)p_11) % (v_17 + 17ULL))) * (unsigned long long)(~ p_11));
  v = (double)p_11 - ((double)(- p) + v / ((double)(! v_13) + 33.));
  result = (float)((unsigned long long)(- ((int)p | (int)p_4) + p_6) / (
                   ((unsigned long long)((int)((short)(- v)) | 6053) - p_9) + 830ULL));
  return result;
}


