#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 668294687
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p)
{
  unsigned char v_9;
  long v_7;
  char v_5;
  long long v;
  unsigned long long result;
  v_9 = (unsigned char)192;
  v_7 = (long)p;
  v_5 = (char)71;
  v = (long long)p;
  result = (unsigned long long)p;
  v = (long long)((unsigned long long)(~ ((-40402LL & v) >> ((int)v_9 & 63))) ^ (
                  ~ result - (unsigned long long)((-64143L >> 11LL) % (
                                                  (long)((float)p - -7071294464.f) + 366L))));
  v_5 = v_5;
  v = ~ v;
  result = (unsigned long long)(- (! v * (long long)(- p))) % ((((unsigned long long)v_5 + result) + 31411ULL) * (unsigned long long)(~ (
                                                               58912LL + (long long)v_7)) + 989ULL);
  return result;
}


