#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 260048562
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, unsigned long long p_9, unsigned short p_11)
{
  signed char v_17;
  unsigned int v_15;
  unsigned char v_13;
  unsigned long v_7;
  int v_5;
  unsigned char v;
  unsigned int result;
  v_17 = p;
  v_15 = 41091U;
  v_13 = (unsigned char)p;
  v_7 = ~ ((unsigned long)((long)v_13) & (unsigned long)(! v_15 - (unsigned int)v_17));
  v = (unsigned char)(! ((long)(- ((int)p_11 - 201)) / -27195L));
  v_5 = (int)(- (- (- p)));
  result = (unsigned int)((unsigned long long)((int)(- v) * ((int)p % (
                                                             v_5 + 854)) - 74) * (
                          (unsigned long long)v_7 + (unsigned long long)(
                                                    (int)p >> 7) * ((unsigned long long)-611.326844285 / (
                                                                    p_9 + 86ULL))));
  return result;
}


