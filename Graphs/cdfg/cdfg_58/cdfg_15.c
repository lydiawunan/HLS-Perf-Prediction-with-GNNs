#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1064216839
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, long p_7, signed char p_13, unsigned int p_17,
         signed char p_23)
{
  unsigned short v_25;
  int v_21;
  int v_19;
  unsigned short v_15;
  short v_11;
  int v_9;
  long long v_5;
  double v;
  long result;
  v_25 = (unsigned short)p_7;
  v_21 = (int)p;
  v_19 = -58486;
  v = -930.468811016;
  if ((unsigned long)((long)(~ (-115 * (int)((char)306.256828314))) / (
                      - (! p_7) + 119L)) > (unsigned long)(~ ((unsigned int)1.65398144267e+38 / (
                                                              p_17 + 434U)) + (unsigned int)(
                                                           (double)((float)v_25 / 8428967936.f) * - v))) {
    v_15 = (unsigned short)(- v_21);
    v_11 = (short)v_19;
    v_9 = (int)(~ ((unsigned int)v_15 - p_17) | (unsigned int)((int)(- v_11) * -590));
  }
  else {
    v_9 = (int)p_23;
    result = (long)(- (1.79338100118e+38 - v) * 0.);
    v_11 = (short)result;
  }
  if ((long)p_13 == ! ((long)(32386 % ((int)p_13 + 560)) % ((p_7 - (long)v_9) + 719L))) {
    v = (double)193086926LL;
    result = (long)(- ((p - 285777583ULL) + (unsigned long long)(-23050398 | (int)v)));
  }
  else {
    v_5 = (long long)(~ (~ v_9) + ~ ((int)v_11 * 18012));
    v = (double)(! ((unsigned long long)(~ p_7) - 792855516ULL));
    result = (long)((long long)(- v) - ! (~ v_5));
  }
  return result;
}


