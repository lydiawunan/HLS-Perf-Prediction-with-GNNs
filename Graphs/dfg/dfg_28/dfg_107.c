#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 401203844
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, int p_9, int p_13)
{
  unsigned long long v_17;
  double v_15;
  unsigned short v_11;
  unsigned long v_7;
  unsigned long v_5;
  unsigned short v;
  double result;
  v_17 = 20935ULL;
  v_15 = (double)p;
  v_11 = (unsigned short)22557;
  v_7 = (unsigned long)p;
  v = (unsigned short)60770;
  result = (double)(- ((unsigned long long)(- ((int)v >> ((int)((unsigned short)v_15) & 15))) / (
                       ~ (~ v_17) + 984ULL)));
  v_7 = ((~ v_7 & (unsigned long)p) - (unsigned long)(p_9 % ((int)v_11 + 22)) / (
                                      (3591956652UL + (unsigned long)p) + 494UL)) % (unsigned long)(
        ~ ((long)(- p_13) + -221072117L) + 465L);
  v_5 = (unsigned long)((long long)(((int)v + 32129 % ((int)v + 54)) << (
                                    ((unsigned long)p + v_7) * 236UL & 31UL)) + 
                        ! ((long long)v - -125574961LL) % (long long)(
                        (p % (long)(p_9 + 941)) * (long)(~ p_9) + 119L));
  result = (double)(3962877830UL % ((unsigned long)((double)((int)v % (
                                                             (int)((unsigned short)result) + 566)) - - result) / (
                                    ((unsigned long)p + v_5) % (- v_7 + 345UL) + 729UL) + 1022UL));
  return result;
}


