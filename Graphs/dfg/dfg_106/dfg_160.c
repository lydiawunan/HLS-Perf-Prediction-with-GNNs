#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 208412286
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned long long p_11[5])
{
  unsigned long long v_9;
  unsigned short v_6;
  char v_4;
  double v;
  signed char result;
  v_6 = (unsigned short)33054;
  v = (double)p_11[3];
  v_4 = (char)-7;
  v_9 = 17597ULL + ! p;
  result = (signed char)(((unsigned long long)((int)((char)(-3.14909142496e+38 + v)) + (int)v_4) * (
                          ((unsigned long long)v_6 * p) % (v_9 + 953ULL))) % (unsigned long long)(
                         (int)(! v_6) + 170));
  return result;
}


