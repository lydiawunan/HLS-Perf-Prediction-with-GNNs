#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 554007335
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p)
{
  unsigned int v_14;
  signed char v_12;
  long long v_10;
  unsigned char v_8;
  int v_6;
  short v_4;
  unsigned long long v;
  unsigned long long result;
  v_14 = 4097169208U;
  v_12 = (signed char)p;
  v_10 = 17998LL;
  v_8 = (unsigned char)127;
  v_6 = -8238;
  v_4 = (short)(p + (int)-8.36500277192e+36);
  v = (unsigned long long)(! ((long long)(v_6 / ((int)v_8 + 462)) * (
                              v_10 / (long long)((int)v_12 + 145)) & (long long)(- (
                              v_14 + (unsigned int)p))));
  v_4 = (short)(! (~ (18446744073709517426ULL + (unsigned long long)v_4)) % (
                - (! (v >> 42UL)) + 253ULL));
  result = (unsigned long long)((3957942646UL << (- v & 31ULL)) * (unsigned long)(
                                - ((int)v_4 - 2487) ^ -115));
  return result;
}


