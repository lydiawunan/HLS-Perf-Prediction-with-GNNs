#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 22686027
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, unsigned long p_7, float p_9, long p_13,
                   int p_17)
{
  int v_21;
  signed char v_19;
  unsigned long v_15;
  long long v_11;
  signed char v_4;
  int v;
  unsigned short result;
  v_21 = 34028;
  v_19 = (signed char)p_9;
  v_15 = (unsigned long)p_17;
  v = (int)((unsigned int)((float)(- ((int)v_19 + (int)p)) - - p_9 / (
                                                             (float)(
                                                             p_13 / (long)(
                                                             v_21 + 167)) + 406.f)) / (
            (unsigned int)p_9 / 4294961511U + 509U));
  v_11 = (long long)((((p_7 & v_15) + (unsigned long)(- p_17)) / (unsigned long)(
                      ~ ((int)p / ((int)p + 588)) + 553)) * (((unsigned long)p_17 - p_7) % (
                                                             p_7 % ((unsigned long)(
                                                                    p_9 / (
                                                                    p_9 + 958.f)) + 872UL) + 341UL)));
  v_4 = (signed char)(((unsigned long long)v + ((unsigned long long)p_7 * 18446744073709496497ULL) / (unsigned long long)(
                                               (long long)p_9 % (v_11 + 931LL) + 128LL)) << (
                      ! p_13 & 63L));
  result = (unsigned short)(~ ((v * (int)v_4) % ((int)((float)((unsigned long)p % (
                                                               p_7 + 254UL)) * (
                                                       p_9 * 677.312866211f)) + 665)));
  return result;
}


