#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 161089450
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, signed char p_5, short p_9, unsigned char p_11,
        unsigned long long p_13)
{
  short v_15;
  unsigned long long v_7;
  unsigned char v;
  int result;
  v_7 = p_13;
  v_15 = (short)(! (- (((unsigned long long)p_11 * v_7) * (unsigned long long)(
                       (int)p_5 + (int)p_11))));
  result = (int)(- ((double)(-2103 % ((int)p_9 + 340)) + (double)p_13 * 7.9611275131e+37) / (
                 (double)p_5 + 903.));
  v = (unsigned char)((290 + - (75 / (result + 633))) >> ((unsigned long long)(
                                                          ((long long)p_9 * 47299LL) * (long long)(~ p_11)) / (
                                                          (p_13 % (p_13 + 14ULL) >> (
                                                           (long long)v_15 % 1061827060LL & 63LL)) + 109ULL) & 31ULL));
  result = (int)(~ (~ (29130UL - p) ^ (unsigned long)((int)(! v) / ((
                                                                    (int)p_5 << (
                                                                    v_7 & 7ULL)) + 482))));
  return result;
}


