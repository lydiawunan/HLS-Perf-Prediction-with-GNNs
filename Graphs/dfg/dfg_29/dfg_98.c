#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1072466519
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, long long p_7)
{
  unsigned int v_11;
  unsigned char v_9;
  unsigned short v_5;
  char v;
  unsigned char result;
  v_11 = 263937972U;
  v_9 = (unsigned char)165;
  v = (char)-5;
  result = (unsigned char)p;
  v = (char)(3515158126UL + (unsigned long)((unsigned int)(0 / ((56085537 | (int)v) + 142)) % (
                                            v_11 + 960U)));
  v_5 = (unsigned short)(- (((unsigned long long)v_9 + (62507ULL - (unsigned long long)p)) / (unsigned long long)(
                            (long long)result % (~ p_7 + 1LL) + 155LL)));
  result = (unsigned char)((long long)(29140UL * ~ (p & (unsigned long)v)) / (
                           ! ((long long)(~ v_5) * p_7) + 945LL));
  result = (unsigned char)(- (- ((unsigned int)(! result) / 3262797127U)));
  return result;
}


