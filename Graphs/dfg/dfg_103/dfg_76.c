#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 126641568
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, int p_9, char p_15)
{
  float v_13;
  signed char v_11;
  unsigned long long v_6;
  long v_4;
  unsigned int v;
  short result;
  v_13 = (float)p_9;
  v_11 = (signed char)-67;
  v_4 = 44133L;
  v = 909734129U;
  v_6 = (unsigned long long)((0LL / (-112421956LL * (long long)v_11 + 290LL)) * (long long)(
                             (v_13 - 32137.f) + 750.f) | (long long)(! (- (
                             (int)p_15 - 54585))));
  result = (short)(- ((v_6 - (unsigned long long)(~ p)) | (unsigned long long)(
                      4294921615UL - (unsigned long)(p_9 - (int)-7949917906.55))));
  v = (unsigned int)((long long)((unsigned long)v_4 - (unsigned long)v) % (
                     (40785LL + (long long)result) + 894LL));
  result = (short)((0 / (unsigned long long)(v + 864U)) / (unsigned long long)(
                   v + 484U));
  return result;
}


