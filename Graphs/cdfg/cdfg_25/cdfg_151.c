#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 897574595
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, long long p_4[4], double p_6[5][3], long long p_8,
              float p_10)
{
  double v_19;
  unsigned short v_17;
  short v_15;
  unsigned long v_13;
  unsigned long v;
  long long result;
  v_19 = 8.92636791809e+37;
  v_17 = (unsigned short)p_4[2];
  v_13 = 3523540923UL;
  v = 4059998516UL;
  v_15 = (short)(- (-54212. - (double)v_17 / (v_19 + 638.)));
  if ((long long)(! ((int)((signed char)p_10) / -88)) - (p_4[3] + (long long)(
                                                         v * v_13)) < 
      (- p_4[0] % (long long)((-673183830L - (long)v_15) + 604L)) / (long long)(
      (int)(! (~ v_15)) + 606)) result = (long long)((double)(51752 - (int)(! p)) / (
                                                     ((double)p_4[2] + - p_6[3][2]) + 863.));
  else result = p_8;
  return result;
}


