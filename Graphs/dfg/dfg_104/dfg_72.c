#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 61695235
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p)
{
  signed char v_13;
  char v_11;
  double v_9;
  unsigned long v_7;
  char v_4;
  unsigned long long v;
  unsigned char result;
  v_13 = (signed char)97;
  v_11 = (char)p;
  v_9 = (double)p;
  result = (unsigned char)76;
  v = (unsigned long long)(- ((long long)(~ v_11) + (18194LL + (long long)p)) % (long long)(
                           (int)v_13 + 411));
  v_7 = (unsigned long)((int)result << 1);
  v_4 = (char)(p * (v_7 + (unsigned long)(24352. - (162. - v_9))));
  result = (unsigned char)(~ (18446744073709530586ULL - ! (v % (unsigned long long)(
                                                           (int)v_4 + 710))));
  return result;
}


