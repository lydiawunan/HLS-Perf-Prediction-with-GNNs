#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 77496490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, unsigned short p_9[5][1], char p_13[2][3])
{
  char v_17;
  unsigned long v_15;
  long long v_11;
  unsigned long long v_6;
  unsigned long long v_4;
  unsigned char v;
  char result;
  v_17 = p_13[1][1];
  v_15 = (unsigned long)p;
  v_11 = (long long)v_17;
  if ((long long)(! (- ((int)p_9[2][0] + 28603))) < ! (67LL % (v_11 + 233LL) - (long long)(
                                                       (unsigned long)p_13[0][2] * v_15))) {
    v_4 = (unsigned long long)(~ -3390);
    v = (unsigned char)(~ 0ULL);
    result = (char)v;
  }
  else {
    v_6 = (unsigned long long)(~ (! p));
    result = (char)v_6;
  }
  return result;
}


