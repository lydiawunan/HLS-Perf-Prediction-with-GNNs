#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 248544437
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, long long p_15)
{
  char v_12;
  unsigned short v_10;
  float v_8;
  short v_6;
  float v_4;
  unsigned int v;
  long long result;
  v_10 = (unsigned short)394;
  v_8 = -959437120.f;
  v_6 = (short)p_15;
  v_4 = (float)p_15;
  v_12 = (char)p_15;
  v = (unsigned int)((long)(-14936 - (((int)v_10 << ((int)v_12 & 15)) - (int)p)) + (
                     (long)(((int)p + (int)p) | 24724) | 524453877L));
  result = (long long)(((v + (unsigned int)v_4) * 4103390613U ^ (unsigned int)v_6) ^ (unsigned int)(~ (~ (
                       (int)((unsigned short)v_8) / ((int)v_10 + 853)))));
  return result;
}


