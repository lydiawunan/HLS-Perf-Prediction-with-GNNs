#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 830932913
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, float p_7, long p_13, char p_15)
{
  char v_17;
  short v_11;
  unsigned short v_9;
  long long v_4;
  long v;
  signed char result;
  v_17 = (char)p_13;
  v_11 = (short)p;
  v_9 = (unsigned short)58531;
  v_4 = -699074014LL;
  v = (long)p_7;
  result = (signed char)103;
  v_17 = (char)(~ (! (-24226LL / (long long)(v + 60L))) & (((v_4 | v_4) - (long long)v_17) & (long long)(! (
                                                           26908L * v))));
  v_4 = v_4;
  v = (long)(((unsigned long long)(p_13 ^ (long)(-627 << ((int)v_11 & 15))) ^ (
              (18446744073654702021ULL ^ (unsigned long long)v_4) + (unsigned long long)(
              (int)v_11 / ((int)((short)p_7) + 49)))) - (unsigned long long)(
             ! ((int)p_15 >> 6) * (199 * (int)result + ((int)p_15 - (int)v_17))));
  result = (signed char)((((long long)v % (v_4 + 844LL)) * (long long)(
                          (int)p - -114) ^ ! ((long long)p + v_4)) + (long long)(
                         (unsigned long)(p_7 + -44.f) * 3741886369UL + (unsigned long)(
                         (int)v_9 | (int)v_11)));
  return result;
}


