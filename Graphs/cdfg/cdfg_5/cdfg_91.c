#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 42932461
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p)
{
  unsigned char v_13;
  short v_11;
  long long v_9;
  long long v_7;
  unsigned long long v_5;
  int v;
  int result;
  v_13 = (unsigned char)p;
  v_11 = (short)p;
  v_9 = (long long)p;
  v_7 = (long long)p;
  v_5 = 41716ULL;
  v = 127805744;
  result = 302793563;
  if (((p + (unsigned long long)result) * (p / 4007675762ULL)) * ((p - 18446744073709551517ULL) + (
                                                                  v_5 - 905592580ULL)) != v_5) {
    v = -153691115;
    v_11 = (short)((unsigned long long)v_11 * ((18446744073709551551ULL | p) - 193ULL));
    v_13 = (unsigned char)(- (~ p) / (~ (v_5 ^ (unsigned long long)v_13) + 51ULL));
  }
  else {
    v_11 = (short)((((long long)v_13 * v_7) % 31144LL) / 28LL);
    result = (int)(! p);
    v_7 = (long long)(~ (~ p));
  }
  while (- (- p * 18446744073709522987ULL) != (unsigned long long)v) {
    v = v_9 * (v_7 % 43LL);
    v_9 = (long long)(- p * (p / (p + 954ULL)) & ((unsigned long long)(
                                                  (int)v_13 + v) | (unsigned long long)v % (
                                                                   p + 229ULL)));
    result = (int)(40ULL / (p % 54044ULL + 985ULL) >> (((int)(- v_11) ^ 19) & 63));
    v = (int)((unsigned long long)(54399 + (int)v_11) * - v_5 + 18446744073709524476ULL);
  }
  while_0_break: ;
  return result;
}


