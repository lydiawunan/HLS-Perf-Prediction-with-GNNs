#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 93499773
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, unsigned char p_7, signed char p_11[1][4])
{
  unsigned char v_13;
  char v_9;
  float v_5;
  int v;
  long result;
  v_13 = (unsigned char)112;
  v_9 = (char)p_7;
  result = (long)p_11[0][2];
  v = (int)((long)(! ((int)v_9 ^ (int)p_11[0][0])) + ~ ((long)v_13 * result));
  if (~ (~ (! result)) <= (long)((int)(- (~ p_7)) % -1801468035)) {
    v_5 = (float)(~ (~ (v % 18)));
    v = (int)(! p % ((long long)v / ((p - (long long)v_5) + 1018LL) + 927LL));
    result = (long)((unsigned long)(- (- v)) % 25137UL);
  }
  else result = (long)p_7;
  return result;
}


