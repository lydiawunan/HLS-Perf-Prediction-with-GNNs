#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 958749870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned short p_17[2][1],
                   unsigned long p_19[5][5][2])
{
  signed char v_15;
  float v_13;
  short v_11;
  unsigned long long v_9;
  unsigned short v_7;
  double v_5;
  unsigned long long v;
  unsigned short result;
  v_15 = (signed char)p_17[0][0];
  v = (unsigned long long)p_17[1][0];
  result = (unsigned short)19157;
  v_13 = (float)p_19[0][1][0];
  if ((unsigned long long)p_17[0][0] != (233ULL * ((unsigned long long)result * 18446744073709488202ULL)) % (unsigned long long)(
                                        (int)(! p) + 540)) {
    v_5 = (double)(((int)p % 3857 - (int)(~ p)) + (int)result);
    v_7 = (unsigned short)(0 % ((int)((short)-5673849104.26) + 440) - (
                           (int)(! result) - (int)p));
    result = (unsigned short)((unsigned long long)p - v / ((unsigned long long)(
                                                           v_5 + (double)v_7) + 153ULL));
  }
  else {
    v_11 = (short)v_15;
    v_9 = (unsigned long long)(((108 << 2) / ((int)(- v_11) + 423)) / (
                               (int)((double)v_13 - -3.36177156274e+38) + 736));
    result = (unsigned short)(- ((v_9 * 60ULL) * (unsigned long long)(
                                 9806 >> ((int)p & 15))));
  }
  return result;
}


