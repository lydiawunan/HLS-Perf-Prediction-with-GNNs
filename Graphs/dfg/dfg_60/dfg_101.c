#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 316471773
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned long p_15)
{
  unsigned long v_13;
  long long v_11;
  unsigned short v_9;
  unsigned long long v_6;
  signed char v_4;
  float v;
  unsigned long result;
  v_13 = p_15;
  v_11 = (long long)p_15;
  v_9 = (unsigned short)58813;
  v = 2.41779120676e+38f;
  v_6 = (unsigned long long)(((long long)v % ((((long long)v_9 + v_11) - -178565941LL) + 609LL)) * (long long)(
                             (v_13 + - p_15) % (unsigned long)((int)(- (- p)) + 368)));
  v = - ((float)(~ v_6) + 4843299840.f) - - ((float)p / (v + 324.f) - -13104.f);
  v_4 = (signed char)22;
  result = (unsigned long)(- (- (v * (float)v_4)) / 594.f);
  return result;
}


