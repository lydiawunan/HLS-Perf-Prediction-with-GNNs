#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 566655114
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, unsigned long long p_9, int p_11[3])
{
  unsigned long v_7;
  unsigned char v_5;
  unsigned long v;
  short result;
  v_7 = (unsigned long)p_9;
  v_5 = (unsigned char)p_9;
  v = (unsigned long)(p_11[0] & (int)v_5);
  result = (short)((unsigned long long)(p * p + (unsigned long)((double)v - -1.16804082273e+38)) + (
                   (unsigned long long)(-29792 % ((int)v_5 + 859)) | 
                   (unsigned long long)v_7 / (p_9 + 501ULL)));
  return result;
}


