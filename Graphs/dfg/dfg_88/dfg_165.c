#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 73312840
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, unsigned long p_7, unsigned long p_11,
                       unsigned long long p_13[2][4][1], double p_19)
{
  short v_21;
  unsigned int v_17;
  long long v_15;
  signed char v_9;
  unsigned char v_4;
  char v;
  unsigned long long result;
  v_21 = (short)7450;
  v_17 = 4294928562U;
  v_15 = -21199LL;
  v_9 = (signed char)((unsigned long long)((double)v_15 + (double)((float)v_17 * 2.37826565822e+38f) / (
                                                          p_19 * 34. + 583.)) % (
                      ((3767434919ULL / (p_13[1][3][0] + 70ULL)) % (unsigned long long)(
                       (long)p_19 * p + 405L)) * (p_13[0][1][0] * 819652138ULL + (
                                                  (unsigned long long)v_21 - 16098ULL)) + 890ULL));
  v_4 = (unsigned char)((65535UL & ~ p_7 / (unsigned long)((int)v_9 + 883)) % (
                        (unsigned long)((-760.782592773f - (float)(! p_11)) + (float)(- p_13[1][1][0])) + 183UL));
  v = (char)p;
  result = (unsigned long long)((int)v - (int)(! v_4));
  return result;
}


