#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 781989529
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, signed char p_7, char p_9, long p_11,
                 char p_17)
{
  double v_15;
  unsigned long v_13;
  char v_5;
  long long v;
  unsigned int result;
  v_15 = (double)p_9;
  v_13 = 4294934945UL;
  v = (long long)((unsigned int)(31340 % ((int)p_9 / ((int)((char)995850566.052) + 881) + 343)) / (
                  (unsigned int)(-13 | (int)((char)(v_15 + (double)p_17))) / (
                  ((unsigned int)p * 4294914874U) % (unsigned int)((int)p_7 + 871) + 694U) + 575U));
  v_5 = (char)((long long)(109 << (((int)p_9 * (int)((char)768.391174316f) >> 31) & 7)) % (
               (418741LL / (((long long)p_11 - v) + 70LL)) % (long long)(
               v_13 + 228UL) + 829LL));
  v = 250068796LL;
  result = (unsigned int)(! (0LL / (~ v + 723LL) + (long long)((4294939434U + (unsigned int)p) + (unsigned int)(
                                                               (int)v_5 % (
                                                               (int)p_7 + 39)))));
  return result;
}


