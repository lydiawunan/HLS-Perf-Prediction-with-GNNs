#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 177373193
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, short p_13, signed char p_15, int p_19,
                   unsigned long p_23)
{
  unsigned long v_21;
  unsigned long long v_17;
  unsigned long long v_11;
  int v_9;
  long v_6;
  unsigned long long v_4;
  int v;
  unsigned short result;
  v_21 = 13440UL;
  v_17 = (unsigned long long)p;
  v_9 = (int)p_15;
  v_6 = 981252117L;
  v = -463521552;
  result = (unsigned short)p_19;
  v_11 = (unsigned long long)(- ((unsigned long)(~ v + (int)(~ result)) / (
                                 ((unsigned long)v_6 % (p_23 + 953UL)) % (unsigned long)(
                                 p_19 + 143) + 93UL)));
  v_4 = ((unsigned long long)(! (! p)) & v_17 / (unsigned long long)(
                                         ((unsigned long)v ^ v_21) + 909UL)) * (unsigned long long)v_21;
  v_6 = (long)((((unsigned long long)((double)v + 5.24379993327) + (18446744073548158926ULL + v_17)) & (unsigned long long)(- (
                (unsigned long)v_6 % 230685705UL))) % (unsigned long long)(
               p_19 + 792));
  result = (unsigned short)((((unsigned long long)((unsigned long)v & 4294930148UL) + (
                              v_4 - (unsigned long long)v_6)) * (unsigned long long)(
                             (unsigned int)(! p) | ((unsigned int)v_9 & 3575U))) * (
                            (unsigned long long)v_6 - (v_11 + (unsigned long long)p_13) / (unsigned long long)(
                                                      (int)p_15 % (v_9 + 25) + 342)));
  return result;
}


