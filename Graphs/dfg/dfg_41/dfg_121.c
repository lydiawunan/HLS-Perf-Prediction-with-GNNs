#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 715673798
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, float p_4, short p_6, float p_9[5], int p_15)
{
  unsigned long long v_17;
  long v_13;
  double v_11;
  char v;
  long result;
  v_17 = (unsigned long long)p_6;
  v = (char)p_15;
  result = (long)p_6;
  v_13 = (long)((unsigned long long)(! ((long)((int)p_4 + p_15) + result)) - (
                (unsigned long long)(~ p) - - ((unsigned long long)p + v_17)));
  v_11 = (double)4294958777UL;
  result = (long)((unsigned long long)((3346226680UL / (unsigned long)(
                                        (int)p + 1021) | (unsigned long)p_6) % (
                                       (unsigned long)((double)((float)v / (
                                                                p_9[3] + 342.f)) / (
                                                       v_11 + 312.)) + 635UL)) % (
                  ((unsigned long long)v_13 - 32611ULL) + 190ULL));
  result = (long)((double)(- ((float)(-597272207L % (long)((int)p + 94)) * - p_4)) + - (- (
                  (double)result * 535.743191213)));
  return result;
}


