#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 688184734
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned short p_5)
{
  unsigned long v_9;
  float v_7;
  char v;
  short result;
  v_9 = 25873UL;
  v = (char)p;
  v = (char)(1055353364L * (long)((int)v * 35463));
  v = (char)(4294967182UL * ((unsigned long)v / (v_9 + 669UL)));
  v_7 = (float)(2 * (int)v);
  result = (short)((int)(-2265212672.f * (float)((long)v & - p)) / ((
                                                                    ~ (
                                                                    (int)p_5 / (
                                                                    (int)((unsigned short)v_7) + 199)) - 1) + 299));
  return result;
}


