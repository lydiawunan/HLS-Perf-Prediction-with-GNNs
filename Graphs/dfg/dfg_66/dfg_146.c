#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 839173506
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned long long p_7[2][4][4], long p_11)
{
  unsigned short v_9;
  unsigned short v_5;
  unsigned int v;
  unsigned long result;
  v_9 = (unsigned short)64189;
  v_5 = (unsigned short)p;
  v = (unsigned int)(0LL / (long long)((int)v_5 + 214));
  v_5 = (unsigned short)((long)((int)v_9 >> 11U) % ((long)(- p) * (p_11 + -3221L) + 296L));
  v = (unsigned int)(11073ULL + ! ((unsigned long long)((unsigned long)v / 23159501UL) & (
                                   p_7[1][1][3] - (unsigned long long)v)));
  result = (unsigned long)((v >> (((v - (unsigned int)p) + 56U) & 31U)) * (unsigned int)(! (~ v_5)));
  return result;
}


