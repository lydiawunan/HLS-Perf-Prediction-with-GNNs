#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704259533
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p)
{
  long v_17;
  long v_15;
  float v_13;
  signed char v_11;
  float v_9;
  unsigned char v_7;
  unsigned char v_5;
  short v;
  unsigned long long result;
  v_17 = (long)p;
  v_15 = (long)p;
  v_13 = -5.94247422958e+37f;
  v_11 = (signed char)-8;
  v_9 = (float)p;
  v_7 = (unsigned char)214;
  v_15 = (long)(((float)(v_17 - v_15) / (-3459300096.f * (float)p + 83.f) - -0.f) + -5.f);
  v = (short)((long long)(~ (- ((int)v_7 | (int)((unsigned char)v_9)))) * (
              (p / (long long)(((int)v_11 - -7353) + 65)) / (long long)(
              - ((long)v_13 % (v_15 + 509L)) + 340L)));
  v_5 = (unsigned char)86;
  result = (unsigned long long)(~ (p - p) & (long long)(! (- ((int)v * (int)v_5))));
  return result;
}


