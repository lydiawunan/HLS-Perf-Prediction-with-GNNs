#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 762673639
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, float p_7[2][4][2], int p_15,
                  unsigned long long p_17)
{
  double v_13;
  short v_11;
  float v_9;
  long v_4;
  signed char v;
  unsigned char result;
  v_11 = (short)p;
  v_4 = (long)p_7[1][0][1];
  v = (signed char)7;
  result = (unsigned char)p;
  v_9 = (float)p_17;
  v_13 = 204. / (- (980.929991887 - (-262.727304168 + (double)p_7[1][3][0])) + 704.);
  v_4 = (long)((((long long)(69 & (int)((unsigned char)p)) + 31215LL) >> (
                ((int)((char)p) % 24) / ((8 + (int)((unsigned char)v_13)) + 355) & 63)) + (long long)(- (
               (long)(- p_15) | ((long)p_15 & v_4))));
  result = (unsigned char)(((long long)(((int)v << (v_4 & 7L)) / ((int)(
                                                                  p / (
                                                                  p + 571.f)) + 153)) / (
                            ((-6830LL - (long long)-2.4137013275e+38) - (long long)p_7[0][0][1]) + 581LL)) % (long long)(
                           (int)result * (int)((unsigned char)(- (v_9 * (float)v_11))) + 778));
  return result;
}


