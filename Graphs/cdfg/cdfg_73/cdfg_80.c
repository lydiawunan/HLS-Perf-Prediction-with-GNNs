#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 887251149
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p[2][4], char p_9, unsigned long p_11,
         unsigned short p_13[5][4], signed char p_15)
{
  unsigned long v_19;
  unsigned char v_17;
  unsigned long v_6;
  char v_4;
  char v;
  long result;
  v_17 = (unsigned char)p_15;
  v_19 = (unsigned long)(! p_9);
  if (v_19 > (unsigned long)p_9) {
    v = (char)(- (short)-18942);
    result = (long)((unsigned long long)v % ((18446744072752620115ULL - (unsigned long long)-3.15813318104e+37f) + 771ULL));
  }
  else {
    v_4 = (char)(~ (((int)p_13[4][2] % ((int)p_15 + 842)) * (int)(7588821499.1 + (double)v_17)));
    v_6 = (unsigned long)(0 / ((int)(- p_9) + 130)) & p_11;
    result = (long)((unsigned long)v_4 - (! v_6 & (unsigned long)p[1][2]));
  }
  return result;
}


