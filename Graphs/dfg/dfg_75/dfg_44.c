#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 566232457
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, float p_11, unsigned short p_15, float p_17, char p_19)
{
  signed char v_13;
  signed char v_9;
  unsigned long v_7;
  unsigned long long v_5;
  short v;
  int result;
  v_9 = (signed char)p_19;
  v_7 = (unsigned long)p_11;
  v_13 = (signed char)(21007ULL | (18446744073709547546ULL >> ((int)p_15 * (int)((unsigned short)p_17) & 63)) / (unsigned long long)(
                                  ((int)p_19 * (int)p_19) % ((int)p_11 + 230) + 668));
  v = (short)(! v_13);
  v_5 = (unsigned long long)(32.f + - ((float)(v_7 + (unsigned long)v_9) / (
                                       p_11 * (float)v_9 + 323.f)));
  result = (int)(((float)p / (((float)v / -5331386368.f + 28502.f) + 601.f)) / (
                 (float)(~ (0ULL / (! v_5 + 514ULL))) + 914.f));
  return result;
}


