#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 517335690
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p)
{
  int v_13;
  signed char v_10;
  unsigned long long v_8;
  unsigned short v_6;
  unsigned short v_4;
  unsigned long v;
  unsigned int result;
  v_13 = (int)p;
  v_8 = 29044ULL;
  v = 404001512UL;
  v_6 = (unsigned short)(- v_13 + v_13);
  v_4 = (unsigned short)65530;
  v_10 = (signed char)(! ((int)(- ((float)p + -95.0090026855f)) * ((int)p / (
                                                                   (int)p + 389) & (int)p)));
  result = (unsigned int)((unsigned long long)(v % (unsigned long)(((
                                                                    (int)v_4 - (int)v_6) ^ 27) + 41)) * ~ (
                          (232029763ULL / (v_8 + 557ULL)) % (unsigned long long)(
                          ((int)v_10 - (int)p) + 2)));
  return result;
}


