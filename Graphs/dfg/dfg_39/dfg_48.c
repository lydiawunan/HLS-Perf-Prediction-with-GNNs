#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071858101
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p)
{
  short v_9;
  char v_7;
  unsigned int v_5;
  unsigned short v;
  unsigned long long result;
  v_9 = (short)13615;
  v_7 = (char)p;
  v_5 = (unsigned int)(-45 * (int)(! v_7));
  v = (unsigned short)(~ v_9);
  result = (unsigned long long)((int)p >> ((((unsigned int)v + 4294967294U % (
                                                               v_5 + 906U)) - (unsigned int)v_7) & 7U));
  result = - (! (18446744073709551526ULL * result) & 2906ULL);
  return result;
}


