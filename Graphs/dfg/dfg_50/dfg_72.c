#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 614892338
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p[3], unsigned long long p_7, long p_13)
{
  char v_15;
  char v_11;
  unsigned long long v_9;
  unsigned long v_4;
  unsigned long long v;
  signed char result;
  v_15 = (char)p_7;
  v_11 = (char)p_7;
  v = p_7;
  v_9 = (unsigned long long)(((long long)((int)p[2] - (int)((unsigned short)-539.215270996f)) / -1099488390LL - (long long)v_15) / (long long)(
                             (int)((unsigned short)-592.12038291) % (
                             (int)(! p[0]) + 272) + 311));
  v_4 = (unsigned long)((((v - 48223ULL) - (unsigned long long)(~ v_11)) - (unsigned long long)(
                         (p_13 & -78L) % (long)((int)(- p[1]) + 450))) << (
                        v_9 & 63ULL));
  v = ! (v * (unsigned long long)p[2]) * ~ (p_7 / (v_9 + 316ULL)) | 1ULL;
  result = (signed char)(! (! v) - (unsigned long long)(v_4 / (unsigned long)(
                                                        ((long)p[0] * 38965L - 149L) + 808L)));
  return result;
}


