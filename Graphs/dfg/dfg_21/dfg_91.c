#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 428783516
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, unsigned long p_5,
              unsigned long long p_9, double p_15[4][3][5])
{
  long long v_13;
  char v_11;
  short v_7;
  unsigned char v;
  long long result;
  v_11 = (char)49;
  v_7 = (short)p_9;
  v = (unsigned char)167;
  v_13 = (long long)((unsigned long long)((double)(-236475789L & (long)(- v)) * - (
                                          -9631447040. - p_15[0][2][1])) | (
                     (unsigned long long)(4023102515UL | (unsigned long)(
                                          (long)v / 5535L)) & - ((unsigned long long)v_11 - p)));
  v_7 = (short)(~ (~ ((long long)((int)v_11 + (int)v_7) / (v_13 + 997LL))));
  v = (unsigned char)((unsigned long long)((unsigned long)(-0.000127017076011f + (float)(
                                                           p - (unsigned long long)v)) % (
                                           (4294905635UL - (unsigned long)(
                                            (int)v * (int)v)) + 802UL)) - - (
                      ((unsigned long long)p_5 / 18446744073709522812ULL) / (
                      (unsigned long long)v_7 * p_9 + 790ULL)));
  result = (long long)(! (- v));
  return result;
}


