#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 567757649
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned long p_7, signed char p_13, short p_15,
                  signed char p_17)
{
  long v_11;
  char v_9;
  long v_5;
  float v;
  unsigned long result;
  v_5 = (long)p_7;
  v_9 = (char)(! ((unsigned long)((long)(! p_17) * (-1008838648L / (long)(
                                                    (int)p_17 + 312))) ^ (
                  (p_7 - 11739UL) - (unsigned long)(- p))));
  v_11 = -837631890L;
  v = (float)((unsigned long long)(-116L % (~ ((long)v_9 % (v_11 + 308L)) + 444L)) / (
              ((unsigned long long)((int)p_13 / ((int)p_15 + 512)) % (
               350350343ULL * (unsigned long long)p_15 + 94ULL) - 3324170865ULL) + 213ULL));
  result = (unsigned long)(- ((double)v - p / ((double)(v_5 << (p_7 & 31UL)) + 996.)));
  return result;
}


