#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 583238908
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, unsigned int p_7, unsigned int p_17)
{
  unsigned int v_15;
  unsigned long v_13;
  unsigned int v_11;
  unsigned long long v_9;
  unsigned short v_5;
  short v;
  char result;
  v_13 = (unsigned long)p_17;
  v_5 = (unsigned short)55540;
  v = (short)p_7;
  v_11 = p_17;
  v_15 = 3975851180U;
  v_9 = (unsigned long long)(! (p + 33892LL) - (long long)(v_13 | (unsigned long)(
                                                           (v_15 << 19ULL) + 
                                                           p_17 * v_11)));
  result = (char)((unsigned long long)(((long long)v % (p + 531LL)) * (long long)(
                                       (float)((unsigned long long)v_5 - 423704547ULL) + 3370106880.f)) * (
                  17936ULL + ((unsigned long long)p_7 + (v_9 ^ (unsigned long long)v_11))));
  return result;
}


