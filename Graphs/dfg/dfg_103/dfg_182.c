#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 962328749
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p)
{
  char v_15;
  unsigned long long v_13;
  long long v_11;
  long v_9;
  unsigned long v_7;
  signed char v_5;
  short v;
  long result;
  v_15 = (char)-37;
  v_11 = -39329LL;
  v_9 = (long)p;
  v_7 = 63313352UL;
  result = (long)p;
  v_13 = (unsigned long long)((long)p % (result + 1L));
  v = (short)((unsigned long long)(v_7 - (unsigned long)(36L / (v_9 + 467L))) + 
              (unsigned long long)(~ v_11) * ((v_13 - 1011209670ULL) + (unsigned long long)(- v_15)));
  v_5 = (signed char)-109;
  result = (long)(3843064096.14 / (double)(p + 224.f) + (double)(((long)v * 282157618L) * (long)(
                                                                 118 / (
                                                                 (int)v_5 + 895)) + (long)(
                                                                 p / (
                                                                 -111.f * p + 408.f))));
  return result;
}


