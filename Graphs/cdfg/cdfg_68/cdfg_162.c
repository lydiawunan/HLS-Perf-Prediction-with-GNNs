#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 816935162
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, long long p_11, unsigned char p_15, int p_17,
        unsigned short p_19)
{
  char v_13;
  long long v_9;
  unsigned long long v_7;
  long v_5;
  unsigned long long v;
  int result;
  v_5 = 32266L;
  v = 18446744073223813527ULL;
  result = (int)p;
  if (v_5 == v_5) {
    v_7 = (unsigned long long)1.83774506723e-08f;
    v_5 = (long)v_7;
    v = (unsigned long long)(- p + (long long)(~ v_5));
  }
  else {
    v_13 = (char)(v - (unsigned long long)(~ ((int)p_15 % (p_17 + 603))));
    v_9 = p_11 * (long long)(~ (result + (int)v_13));
    v = (unsigned long long)(! (- p) ^ - v_9);
  }
  result = (int)v;
  return result;
}


