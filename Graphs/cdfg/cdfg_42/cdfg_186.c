#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 203137015
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, unsigned short p_7, long p_9,
                   unsigned int p_17[3])
{
  char v_15;
  unsigned long v_13;
  unsigned int v_11;
  short v_5;
  long long v;
  unsigned short result;
  v_15 = (char)92;
  v_13 = 17920UL;
  v_11 = (unsigned int)p_7;
  v_5 = (short)-5235;
  v = (long long)p_9;
  while ((long)9114945862.15 != ((long)p_7 - (-190719261L & p_9)) >> (
                                v_11 & 31U)) {
    v_15 = (unsigned long)v_15 % ((v_13 & 3481030437UL) + 68UL);
    v_13 = - ((unsigned long)1.93117867791e+38f / (1054115249UL % (unsigned long)(
                                                   p_17[1] + 574U) + 425UL));
    v = (long long)v_5;
    v_11 = (unsigned int)((int)p_7 / 925);
  }
  while_0_break: ;
  if (((36138LL ^ v) ^ (long long)(~ p)) < (long long)v_5) result = (unsigned short)(! (~ (unsigned char)62));
  else result = (unsigned short)(- -25283LL);
  return result;
}


