#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 970828811
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned char p_11)
{
  int v_9;
  long long v_7;
  int v_5;
  unsigned long long v;
  unsigned long long result;
  v_9 = (int)p;
  v_5 = (int)p_11;
  result = (unsigned long long)p;
  v = 18446744073709551588ULL;
  while (8ULL % (((unsigned long long)p % (v + 377ULL) - (unsigned long long)v_5) + 600ULL) <= 10ULL) {
    v_7 = v_9 / 46932;
    v_7 = (long long)((unsigned int)(! p) + 4294921664U * (unsigned int)p) % (
          49LL % (((long long)p_11 - v_7) + 934LL) + 683LL);
    v_9 = (int)(! p) / (v_5 + 461);
    v_5 = (int)(! v_7);
  }
  while_0_break: ;
  return result;
}


