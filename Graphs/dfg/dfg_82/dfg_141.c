#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 140624552
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, signed char p_7, unsigned int p_15)
{
  unsigned int v_17;
  long v_13;
  long v_11;
  unsigned char v_9;
  unsigned long long v_4;
  char v;
  unsigned long long result;
  v_17 = 27839U;
  v_13 = (long)p_7;
  v_11 = -772613940L;
  v_4 = (unsigned long long)p;
  v = (char)((unsigned long long)((unsigned long)(- (25159L * v_13)) % (unsigned long)(
                                  4294967259U / (~ v_17 + 661U) + 8U)) * - (
             255936544ULL * ! v_4));
  v_9 = (unsigned char)(! (141 - (int)p));
  v = (char)((unsigned long)(~ ((int)p_7 * ((int)v_9 + (int)p))) % ((
                                                                    (unsigned long)(
                                                                    v_11 % (
                                                                    v_13 + 82L)) - (unsigned long)(
                                                                    p_15 << (
                                                                    (int)v & 31))) / (unsigned long)(
                                                                    v_13 + 41L) + 204UL));
  result = (63ULL - (unsigned long long)v * ! v_4) << (! (-3400306LL % (
                                                          (10757LL << (
                                                           (int)p & 63)) + 231LL)) & 63LL);
  return result;
}


