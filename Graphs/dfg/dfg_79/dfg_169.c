#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 392419817
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, int p_7, long long p_9)
{
  unsigned long v_15;
  short v_13;
  int v_11;
  unsigned char v_4;
  long v;
  int result;
  v_15 = 316330614UL;
  v_13 = (short)5867;
  v = (long)p_9;
  result = (int)p;
  v_11 = (int)(p + ! (- (v_15 - p)));
  v_4 = (unsigned char)((long long)((unsigned long)result - ((unsigned long)(- v) | ~ p)) + (
                        ((long long)p_7 ^ p_9) * (long long)(-682293257 & v_11) + (long long)(! v_13)));
  v = (long)v_4;
  result = (int)v;
  return result;
}


