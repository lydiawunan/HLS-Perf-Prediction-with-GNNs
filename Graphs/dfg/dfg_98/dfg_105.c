#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 743668425
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p[5])
{
  unsigned int v_11;
  int v_9;
  short v_6;
  unsigned long v_4;
  unsigned char v;
  unsigned int result;
  v_11 = (unsigned int)p[4];
  v_9 = -55953;
  result = 3715U;
  v_4 = (unsigned long)((84LL % ((long long)v_9 * (60353LL / (long long)(
                                                   v_11 + 650U)) + 989LL)) % (long long)(
                        ((int)p[3] + -114) + 800));
  v = (unsigned char)(- p[3]);
  v_6 = (short)((unsigned long long)((unsigned int)(34312 * (int)v) * ! result) % (
                ! ((unsigned long long)p[2] % 18446744073709487993ULL) + 22ULL) - (unsigned long long)v_4);
  result = (unsigned int)(! ((unsigned long)v & v_4 / (unsigned long)(
                                                ((long)v_6 ^ 629112139L) + 371L)));
  return result;
}


