#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 168450781
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p)
{
  char v_10;
  long v_8;
  unsigned char v_6;
  short v_4;
  short v;
  int result;
  v_8 = (long)p;
  v_6 = (unsigned char)169;
  v_4 = (short)p;
  result = (int)p;
  v_10 = (char)(~ 6425LL);
  v_4 = (short)((unsigned long long)((long long)(31 / ((int)v_4 + 253)) - (
                                     0LL - ! p)) % ((57906ULL & ((unsigned long long)v_6 + 
                                                                 34505ULL / (unsigned long long)(
                                                                 p + 441LL))) + 267ULL));
  v = (short)(! 0L);
  result = (int)((unsigned long long)v - ((unsigned long long)(51618L - (long)2.03629897428e+38) / (
                                          (15938ULL - (unsigned long long)v_4) + 405ULL) ^ (unsigned long long)v_6));
  return result;
}


