#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 838588844
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, char p_7, float p_9)
{
  unsigned char v_15;
  short v_13;
  unsigned int v_11;
  unsigned long long v_4;
  long long v;
  signed char result;
  v_15 = (unsigned char)p_9;
  v_13 = (short)16336;
  v_11 = 892411065U;
  v_4 = (unsigned long long)((((-63059.f / (p_9 + 214.f)) * (float)v_11) * (float)(! (
                              (int)v_13 + (int)p_7))) * (float)v_15);
  v = (long long)p_7;
  v = (long long)(- (~ ((unsigned long long)v * (v_4 % (p + 697ULL)))));
  result = (signed char)v;
  return result;
}


