#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 299277992
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned int p_11)
{
  long v_13;
  long v_8;
  unsigned short v_6;
  short v_4;
  int v;
  unsigned long result;
  v_13 = -60066L;
  v_4 = (short)p;
  v = (int)p;
  v_6 = (unsigned short)v;
  v = (int)(4294902157UL / (unsigned long)((! p - - (! p)) + 887L));
  v_8 = v_13;
  result = (unsigned long)((unsigned long long)((long)v / ((long)((int)v_4 / (
                                                                  (int)v_6 + 883)) * (
                                                           v_8 / (p + 437L)) + 697L)) & 
                           (unsigned long long)((unsigned long)p_11 * 33566UL | 42340UL) % 62558ULL);
  return result;
}


