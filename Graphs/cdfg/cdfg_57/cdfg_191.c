#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 794299826
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, double p_5[5][2], unsigned short p_7, float p_11)
{
  unsigned long long v_15;
  char v_13;
  signed char v_9;
  short v;
  char result;
  v_13 = (char)72;
  v_9 = (signed char)p_5[4][1];
  v = p;
  v_15 = (unsigned long long)((int)(~ v));
  if ((float)((unsigned long)p_7 % (! ((unsigned long)v_9 % 1035685117UL) + 515UL)) == 
      (p_11 * (float)v_13) / ((float)v_15 + 381.f)) result = (char)2.0581763277e+38;
  else {
    v = (short)26570;
    result = (char)((unsigned long long)(474 - (int)v) ^ ((unsigned long long)(
                                                          (int)p | 13781) - (
                                                          139026056ULL + (unsigned long long)p_5[0][0])));
  }
  return result;
}


