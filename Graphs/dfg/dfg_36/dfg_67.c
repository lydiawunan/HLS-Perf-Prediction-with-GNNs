#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 925327430
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, unsigned long long p_7, int p_9, unsigned long p_11,
           unsigned char p_13[4][3])
{
  unsigned long long v_21;
  long long v_19;
  long long v_17;
  short v_15;
  signed char v_4;
  char v;
  double result;
  v_21 = (unsigned long long)p_9;
  v_17 = (long long)p_9;
  v_4 = (signed char)p_9;
  v = (char)-59;
  v_19 = (long long)(p_9 * (int)p);
  v_15 = (short)(((unsigned long long)(1734LL * v_17) | ((unsigned long long)v + p_7)) % (
                 ((unsigned long long)p_11 - ((unsigned long long)v_19 + p_7)) + 157ULL) ^ (
                 (unsigned long long)((long long)p_13[2][2] * (v_19 + (long long)p_11)) & v_21));
  v = (char)v_15;
  result = (double)((unsigned long long)((int)v ^ ((int)v_4 ^ (int)p)) / (
                    (~ ((unsigned long long)p * p_7) | (unsigned long long)(
                     (unsigned long)((long)p_9 + -744804749L) * (p_11 & (unsigned long)p_13[3][0]))) + 726ULL));
  return result;
}


