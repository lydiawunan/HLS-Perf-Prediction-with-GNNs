#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 242396293
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, unsigned char p_4, long p_7[4][1][1],
                  unsigned long long p_11)
{
  long v_17;
  unsigned char v_15;
  char v_13;
  unsigned long long v_9;
  short v;
  unsigned char result;
  v_17 = 197958971L;
  v_15 = (unsigned char)p_11;
  v_9 = 18446744073709490404ULL;
  result = (unsigned char)125;
  v_13 = (char)-32;
  v_15 = (unsigned char)(- ((unsigned long long)p & (- p_11 - (unsigned long long)(
                                                     (long)v_15 + v_17))));
  v = (short)(- ((float)(((unsigned long long)p_7[2][0][0] / (v_9 + 564ULL)) * (
                         p_11 / (unsigned long long)((int)v_13 + 42))) - - (
                 -8558824448.f / ((float)v_15 + 969.f))));
  result = (unsigned char)((long)((int)p - (int)(! (- p_4))) * ! (-123702903L * (long)(
                                                                  (int)v ^ (int)result)));
  return result;
}


