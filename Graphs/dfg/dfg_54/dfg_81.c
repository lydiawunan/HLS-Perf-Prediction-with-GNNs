#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 97524613
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, unsigned char p_5, float p_9,
                  unsigned int p_11, long long p_15)
{
  float v_13;
  unsigned long long v_7;
  int v;
  unsigned char result;
  v_13 = (float)(~ 3749644807UL);
  v_7 = (unsigned long long)(1541LL % ((long long)(- (! p_11)) * ((long long)v_13 - (
                                                                  -227621448LL >> (
                                                                  p_15 & 63LL))) + 514LL));
  v = (int)p_9;
  result = (unsigned char)((unsigned long long)((unsigned int)(~ (v + (int)p)) - (
                                                (unsigned int)(~ p_5) ^ 8164U)) & v_7);
  return result;
}


