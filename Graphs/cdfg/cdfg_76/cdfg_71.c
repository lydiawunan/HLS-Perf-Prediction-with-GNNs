#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 897888445
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, unsigned long p_4, signed char p_7)
{
  unsigned short v_11;
  long long v_9;
  char v;
  signed char result;
  v_11 = (unsigned short)p_7;
  v = (char)p_4;
  v_9 = (long long)-3378731616.43;
  if ((long long)(4294902329UL / (p_4 + 915UL)) % ((long long)((int)v % (
                                                               (int)p_7 + 971)) * v_9 + 597LL) >= (long long)v_11) 
    result = (signed char)(7973LL - p);
  else result = (signed char)(~ p);
  return result;
}


