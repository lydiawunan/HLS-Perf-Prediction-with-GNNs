#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 609759992
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, long long p_11)
{
  long long v_9;
  unsigned short v_7;
  unsigned long v_4;
  signed char v;
  unsigned int result;
  v_9 = p_11;
  v_7 = (unsigned short)p_11;
  v = (signed char)p;
  if (~ (~ p) >> ((253LL - (21LL - v_9)) & 31LL) <= 21L) v = (signed char)0;
  else {
    v_4 = (unsigned long)(((long long)(p + (long)v_7) * ! p_11) / (long long)(
                          ! p + 567L));
    v = (signed char)((long long)(p % (long)((int)v_7 + 623) - p) * ! (
                      (long long)v / (v_9 + 798LL)));
    v = (signed char)((unsigned long)(3444134068U | (unsigned int)v) + (
                      (v_4 & (unsigned long)p) >> ((unsigned long)v % 3726951777UL & 31UL)));
  }
  result = (unsigned int)(~ v);
  return result;
}


