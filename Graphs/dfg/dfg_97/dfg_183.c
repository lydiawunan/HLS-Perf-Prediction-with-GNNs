#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1045307495
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, char p_5, unsigned char p_9, signed char p_11,
                  unsigned long p_17)
{
  unsigned long long v_15;
  unsigned char v_13;
  short v_7;
  int v;
  unsigned char result;
  v_15 = (unsigned long long)p;
  v_13 = (unsigned char)p_17;
  v_7 = (short)((unsigned long long)(- p_9) % (((unsigned long long)(! (- p_11)) + (
                                                (unsigned long long)(- v_13) ^ v_15)) + 927ULL));
  v = (int)(-795646423LL & (long long)((int)p_5 * (6175 * (int)(~ v_7))));
  result = (unsigned char)((long)v - - p);
  return result;
}


