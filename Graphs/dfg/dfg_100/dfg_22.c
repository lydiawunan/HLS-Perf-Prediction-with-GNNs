#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 947726674
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned long p_7, long p_9, char p_11)
{
  signed char v_15;
  long long v_13;
  unsigned long v_4;
  long long v;
  unsigned long long result;
  v_15 = (signed char)-117;
  v = 530809473LL;
  result = (unsigned long long)p_11;
  v_4 = (unsigned long)((unsigned long long)((-494951671LL & v * -30195LL) + (long long)v_15) / (
                        result * result + 220ULL));
  v_13 = (long long)v_4;
  v = (long long)((int)p_11 / 16080 - (int)4.14511909306e+37f) | ((v >> 33U) / (
                                                                  v_13 + 478LL) | 54068LL);
  result = (unsigned long long)(((long long)(((float)v + -285606080.f) + (float)(~ v_4)) % (
                                 ((v ^ (long long)p) >> (((unsigned long)2.30795851215e+38 ^ p_7) & 63UL)) + 617LL)) / (long long)(
                                p_9 + 613L));
  return result;
}


