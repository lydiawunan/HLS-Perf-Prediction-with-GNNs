#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 578654125
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, signed char p_21)
{
  unsigned long v_19;
  char v_17;
  long v_14;
  long v_12;
  short v_10;
  int v_8;
  long v_6;
  long v_4;
  float v;
  char result;
  v_19 = (unsigned long)p;
  v_17 = (char)-122;
  v_14 = (long)p_21;
  v_12 = 133102784L;
  v_10 = (short)p;
  v_8 = 331326098;
  v_4 = -14799L;
  result = (char)p_21;
  if ((unsigned long)(~ (~ p_21)) / (((unsigned long)(v_14 * (long)p_21) + 415622539UL) + 812UL) <= (unsigned long)(! p_21)) {
    v = (float)(-8.73131049669e-07 / ((double)(- v_14) + 842.) - 4853658395.45);
    v_6 = (long)(! (v_8 - (int)v_10)) * v_12;
    v_4 = -31L;
  }
  else {
    v_6 = (long)p_21;
    v = (float)((((long long)result | 795886120LL) / (long long)(v_19 + 451UL)) % (long long)(
                (int)(! (- p)) + 1015));
    v_4 = (long)((692302233ULL / (unsigned long long)((v_4 << 9ULL) + 216L)) / (unsigned long long)(
                 ! ((int)p * (int)v_17) + 324));
  }
  result = (char)((long)(496617440.f / (v + 629.f) - (float)v_4) & v_6);
  return result;
}


