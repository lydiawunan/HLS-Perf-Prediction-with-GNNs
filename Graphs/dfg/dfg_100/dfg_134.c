#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 65398655
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, long p_5, float p_7, double p_9,
                  long long p_11)
{
  unsigned short v;
  unsigned long result;
  v = (unsigned short)((long long)p_7 + ((long long)(- p_9) * - p_11) % 4294926382LL);
  result = (unsigned long)((long long)(~ v) ^ ((long long)p | 587667464LL % (long long)(
                                                              (int)v + 751)) / (
                                              (long long)(9074650112.f + (float)(
                                                          (long)v / (
                                                          p_5 + 729L))) + 210LL));
  return result;
}


