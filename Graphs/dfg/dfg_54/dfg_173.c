#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 10409329
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p)
{
  unsigned char v_6;
  long v_4;
  unsigned short v;
  unsigned long long result;
  v_4 = (long)p;
  v_6 = (unsigned char)(~ p % (p + 593) + p);
  v = (unsigned short)((long)p - (-119L + ((long)v_6 / (v_4 + 598L)) % -416L));
  v_4 = (long)(150 - (int)v_6);
  result = (unsigned long long)(- ((long)v + v_4));
  return result;
}


