#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 83686513
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, short p_7, long p_15[5][3][2])
{
  float v_13;
  unsigned long long v_11;
  short v_9;
  long long v_5;
  int v;
  long long result;
  v_13 = (float)p_7;
  v_11 = 18446744073331570438ULL;
  v_9 = p_7;
  v_5 = -17328LL;
  v = (int)p_7;
  result = (long long)p_15[2][0][1];
  while (18446744072987461083ULL <= ~ ((unsigned long long)((long long)v_9 / -3203LL) % (
                                       (unsigned long long)p * v_11 + 726ULL))) {
    v = v_13 / 17437.f;
    v_5 = 227LL;
    v_9 = (short)((((long long)p - result) - (long long)(24626 * v)) % (long long)(
                  - ((long)p % (p_15[0][0][1] + 950L)) + 794L));
    v_11 = (unsigned long long)((unsigned long)p_7 + 3233802039UL);
  }
  while_0_break: ;
  result = (long long)(v / ((int)(- p) + 939)) - (95LL % (v_5 + 169LL)) * (long long)(
                                                 (int)p % ((int)p_7 + 533));
  return result;
}


