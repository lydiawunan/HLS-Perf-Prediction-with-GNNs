#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 378319083
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p)
{
  short v_15;
  short v_13;
  int v_10;
  unsigned int v_8;
  unsigned char v_6;
  long v_4;
  unsigned char v;
  char result;
  v_15 = (short)5686;
  v_13 = (short)p;
  v_10 = (int)p;
  v_8 = 3570973719U;
  v_6 = (unsigned char)131;
  v_4 = (long)p;
  v = (unsigned char)132;
  while ((~ p + p) >> (~ ((long long)v_13 / (p + 640LL)) & 63LL) >= (long long)(- (
         46526 << (2 % ((int)v_13 + 763) & 15)))) {
    v_4 = (long)(- p + (long long)-4.09660914695e+37f);
    v_15 = (short)((long long)(! (17 | (int)v_15)) / (p % (p % 841850676LL + 39LL) + 971LL));
    v_13 = (short)(- (114LL * (p - 203LL)));
  }
  while_0_break: ;
  result = (char)((unsigned long)((long)v - v_4) / (unsigned long)(((unsigned int)v_6 - v_8) + 137U) << (
                  (4294958179UL >> (1030 * v_10 & 31)) & 31UL));
  return result;
}


