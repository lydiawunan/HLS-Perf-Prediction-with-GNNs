#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 837192544
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, short p_5, signed char p_13[2][3])
{
  unsigned long v_21;
  double v_19;
  unsigned int v_17;
  float v_15;
  long v_11;
  unsigned short v_9;
  unsigned long v_7;
  unsigned int v;
  short result;
  v_21 = (unsigned long)p_13[1][0];
  v_19 = (double)p;
  v_17 = (unsigned int)p_5;
  v_11 = (long)p_5;
  v_7 = (unsigned long)p_5;
  result = (short)10485;
  v_15 = (float)(46768UL + ((unsigned long)(! v_11 / ((long)(- v_19) + 824L)) | - (
                            (unsigned long)p_5 * v_21)));
  v_9 = (unsigned short)((double)((float)((v_11 - (long)p_13[1][2]) / -81L) + v_15) - (
                         (double)(v_17 + (4294908163U + (unsigned int)result)) + 2.23640220743e+37));
  v = (unsigned int)(v_7 % (unsigned long)((int)v_9 + 368));
  result = (short)(! p / (- (! p) + 32ULL) + (unsigned long long)v * ! (
                                             (unsigned long long)p_5 % (
                                             p + 6ULL)));
  return result;
}


