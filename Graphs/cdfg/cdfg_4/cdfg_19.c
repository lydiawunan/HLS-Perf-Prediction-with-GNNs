#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 674524353
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p)
{
  int v_11;
  unsigned long v_9;
  char v_7;
  unsigned int v_5;
  unsigned short v;
  unsigned char result;
  v_11 = (int)p;
  v_9 = 4833UL;
  v_7 = (char)-70;
  v_5 = (unsigned int)p;
  v = (unsigned short)p;
  result = (unsigned char)131;
  v_11 = ! (((int)v_7 % (v_11 + 264)) % 505);
  while ((unsigned long long)((int)v / ((int)v + 708)) - (unsigned long long)(~ p) % 1808842853908ULL != (unsigned long long)(- (
         (84U % (v_5 + 949U)) * (unsigned int)v_7))) {
    result = v_9 - 3711750891UL;
    v_5 = (unsigned int)(v_11 ^ 111);
    v_9 = (unsigned long)((long)(~ (~ v_11)) % (27135L % (! p + 365L) + 406L));
    v = (unsigned short)((unsigned long)(~ ((int)v_7 * 158)) + 4088818796UL);
  }
  while_0_break: ;
  return result;
}


