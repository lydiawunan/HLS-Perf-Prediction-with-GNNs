#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113787841
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, unsigned long long p_7, char p_11,
                   unsigned char p_13, int p_15)
{
  signed char v_9;
  unsigned long v_5;
  unsigned char v;
  unsigned short result;
  v = (unsigned char)4;
  v_5 = (unsigned long)(6773 - (~ p_15 - (int)p_11));
  v_9 = (signed char)(((unsigned int)(! (249 | (int)p_11)) - (unsigned int)v % (
                                                             p / ((unsigned int)-1.58899140736e+38f + 528U) + 369U)) / (unsigned int)(
                      (int)(- (~ (- p_13))) + 732));
  v = (unsigned char)((unsigned long long)(p / 3U) % (((unsigned long long)v_5 / (
                                                       (p_7 + 13ULL) + 730ULL)) * (unsigned long long)v_9 + 132ULL));
  result = (unsigned short)v;
  return result;
}


