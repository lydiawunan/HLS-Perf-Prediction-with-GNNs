//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 894466297
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, char p_9, float p_13[5][3][4], long long p_21,
           short p_23)
{
  unsigned short v_19;
  long v_17;
  unsigned int v_15;
  long v_11;
  long v_6;
  long v_4;
  unsigned long v;
  double result;
  v_19 = (unsigned short)p_9;
  v_17 = 47235L;
  v_15 = 3608943654U;
  v_4 = -29754L;
  result = 2.06427249125e+38;
  v_11 = (long)((long long)v_15 - ((long long)(v_17 / ((long)result + 500L)) * (
                                   (long long)v_19 / (p_21 + 150LL)) - (long long)p_23));
  v_6 = (long)((int)p ^ (int)p_9 / ((int)((char)((double)((long)p_9 % (
                                                          v_11 + 354L)) - (
                                                 p - (double)p_13[0][1][2]))) + 87));
  v = (unsigned long)((v_4 - 83L) % ((long)((-3.32076832386e+38 * (double)(
                                             (float)v_6 / 538592896.f)) / -6.75382545969e+18) + 413L));
  result = (double)(- (v >> 27));
  return result;
}


