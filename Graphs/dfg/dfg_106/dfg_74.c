#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 341358873
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, long p_11)
{
  short v_13;
  double v_9;
  unsigned long long v_7;
  int v_5;
  long v;
  float result;
  v_13 = (short)p_11;
  v_9 = -1.85504371646e+38;
  v_7 = (unsigned long long)p;
  v_9 = (double)(- ((unsigned int)((v_9 / -39646.) / 4294943618.) * (
                    (p + 3938230171U) * (unsigned int)(~ v_13))));
  v_5 = (int)((~ (~ v_7) >> (((unsigned int)v_9 % (p + 607U)) * (unsigned int)8263680000.f & 63U)) / (unsigned long long)(
              ((62L % (p_11 + 364L) - (long)(- v_13)) + (long)v_13) + 732L));
  v = (long)(! v_5);
  result = (float)(! (v - (long)(-605540654.567 + (1.84994442504e+38 - (double)p))));
  return result;
}


