#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 751440648
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, unsigned short p_7, unsigned char p_13,
                   signed char p_15, unsigned long long p_17)
{
  short v_11;
  unsigned long long v_9;
  unsigned int v_5;
  long long v;
  unsigned short result;
  v_9 = (unsigned long long)p_13;
  v_11 = (short)p_17;
  v_5 = (unsigned int)(~ ((unsigned long long)(((unsigned long)v_11 / 4294924344UL) / 30UL) / (
                          3406877722ULL / (unsigned long long)(((int)p_13 << (
                                                                (int)p_15 & 7)) + 401) + 553ULL)));
  v = (long long)(- ((unsigned long long)(3855923200.f * (float)(v_5 - (unsigned int)p_7)) / (
                     ~ (58648ULL % (v_9 + 331ULL)) + 843ULL)));
  result = (unsigned short)(! (! ((long long)(- p) % ((18654LL + v) + 571LL))));
  return result;
}


