//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 363224049
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, unsigned char p_9)
{
  double v_11;
  unsigned char v_7;
  long long v_4;
  signed char v;
  float result;
  v_11 = 5323611473.51;
  v_7 = (unsigned char)-995.609945223;
  v = (signed char)(- v_11);
  v_4 = (long long)(~ (~ ((int)-1.5593468955e+38 * p) / ((int)(~ p_9) + 215)));
  result = (float)((long long)(! (! v)) + (v_4 * (long long)p + (long long)v_7));
  return result;
}


