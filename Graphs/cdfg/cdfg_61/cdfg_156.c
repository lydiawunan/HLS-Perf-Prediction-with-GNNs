#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 789666919
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p)
{
  unsigned char v_11;
  long v_9;
  unsigned long v_7;
  short v_4;
  long v;
  char result;
  v_11 = (unsigned char)100;
  v_9 = 3706L;
  v_7 = 1050644253UL;
  v_4 = (short)-6350;
  v = (long)p;
  result = (char)(- (p % (unsigned long)((int)v_4 + 441) - (p - 205UL)));
  while ((unsigned long)(~ (! ((long)result * v))) <= ((unsigned long)(- v_4) / (
                                                       (p + 3439882257UL) + 304UL)) % (
                                                      ! (v_7 % 4294967295UL) + 37UL)) {
    v_7 = (long)v_11 - (v_9 + 196L);
    v_9 = 123L;
    v_4 = (short)p;
    v_7 -= (4294944545UL + p) / (p + 143UL);
  }
  while_0_break: ;
  return result;
}


