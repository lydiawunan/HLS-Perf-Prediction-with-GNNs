#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 391441394
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, unsigned long p_7[2], unsigned short p_19)
{
  float v_17;
  char v_15;
  unsigned short v_13;
  long long v_11;
  unsigned long v_9;
  double v_4;
  long v;
  unsigned short result;
  v_17 = -8335371264.f;
  v_15 = (char)-16;
  v_13 = (unsigned short)p;
  v_4 = 113323238.593;
  v_11 = (long long)(- ((4294926080.f - v_17) + 0.f) + (float)p_19);
  v_9 = (unsigned long)((long long)(p_7[0] | (unsigned long)(~ ((int)v_13 / -12079))) + 
                        ~ v_11 / (long long)((-16198L + (long)(! v_15)) + 765L));
  v = (long)(! (18446744073709533677ULL / (unsigned long long)((p - p) + 160U)));
  result = (unsigned short)((- (778442337ULL * (unsigned long long)v) - (unsigned long long)(
                             - v_4 / 914.)) % (unsigned long long)((17683LL + (long long)(
                                                                    (unsigned long)p % (
                                                                    p_7[1] + 517UL))) % (
                                                                   -519409243LL * (
                                                                   (long long)v_9 | v_11) + 565LL) + 152LL));
  return result;
}


