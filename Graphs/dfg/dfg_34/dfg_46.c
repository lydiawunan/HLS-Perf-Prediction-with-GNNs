#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 280161094
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, long long p_9)
{
  char v_11;
  unsigned char v_7;
  unsigned char v_4;
  float v;
  char result;
  v_11 = (char)p_9;
  v_7 = (unsigned char)113;
  result = (char)p;
  v = (float)((long long)v_7 & 840LL / ((6036LL | p_9) + 962LL));
  v_4 = (unsigned char)p_9;
  v = (float)(((long long)((int)result % ((int)result + 88)) % ((long long)v_7 * p_9 + 830LL) ^ (long long)(
               1.08935965749e+18 - (double)((float)p - v))) | (long long)v_11);
  result = (char)(- (((long long)v / 44521LL) % (long long)((long)v_4 % (
                                                            p + 42L) + 864L) + 41LL));
  return result;
}


