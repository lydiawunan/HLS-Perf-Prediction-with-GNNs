#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 434763834
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, long long p_9, long p_11,
                       double p_13)
{
  signed char v_15;
  int v_6;
  unsigned int v_4;
  unsigned long long v;
  unsigned long long result;
  v_15 = (signed char)p;
  v_4 = (unsigned int)v_15;
  v_6 = (int)p_13;
  v = (unsigned long long)(- ((long long)(v_4 * (unsigned int)v_6) % (
                              ((long long)p - p_9) % (long long)(p_11 + 398L) + 206LL)));
  result = v;
  return result;
}


