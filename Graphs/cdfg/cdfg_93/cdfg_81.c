#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 237490854
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p[3][3][1], signed char p_11, unsigned long p_15)
{
  short v_17;
  int v_13;
  int v_9;
  float v_7;
  signed char v_4;
  unsigned short v;
  double result;
  v_17 = (short)p_11;
  v_13 = 57717;
  v_9 = (int)p_11;
  v_4 = (signed char)22;
  if ((unsigned long)(((int)(~ v_4) / ((int)v_17 + 775)) / 50) <= ! (
      4197423040UL + (unsigned long)(~ v_9))) {
    v = (unsigned short)(! ((v_9 - (int)p_11) - 51865));
    v_7 = (float)v_9;
    v_4 = (signed char)(~ (2668U % (unsigned int)((int)p[2][2][0] + 503)) | (unsigned int)(
                        ((int)v | (int)p[2][1][0]) / 94));
  }
  else {
    v = (unsigned short)23420;
    v_13 = (int)((unsigned long long)((v_13 + (int)v) >> (~ v_13 & 31)) * 538448ULL);
    v_7 = (float)((long long)v_13 & ! (-367044136LL * (long long)p_11));
  }
  result = (double)((51983 % ((int)v + 170) >> ((-22938L << ((int)v_4 & 31)) & 31L)) % (
                    (int)(- ((float)p[0][2][0] - v_7)) + 461));
  return result;
}


