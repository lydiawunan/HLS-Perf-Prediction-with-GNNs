#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 449322867
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p)
{
  unsigned char v_9;
  long long v_7;
  double v_5;
  unsigned long v;
  short result;
  v_9 = (unsigned char)p;
  v_7 = (long long)v_9;
  v_5 = (double)(v_7 / 786LL);
  v = (unsigned long)99.7980405782;
  result = (short)((long long)((3481362024UL / (unsigned long)((int)p + 202)) % 4294967267UL) ^ 
                   (long long)v % (((395558037LL + (long long)v_5) - (long long)(
                                    v + (unsigned long)5245690089.11)) + 878LL));
  return result;
}


