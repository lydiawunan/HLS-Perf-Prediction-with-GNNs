#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 604973863
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, long long p_7, short p_9, unsigned int p_13,
         long long p_17[4][2][1])
{
  unsigned int v_15;
  unsigned short v_11;
  float v_4;
  unsigned short v;
  char result;
  v_15 = 3896962878U;
  v_11 = (unsigned short)p_9;
  v = (unsigned short)38120;
  v_4 = (float)(((long long)(- p_13 / (v_15 + 822U)) - ((long long)p_13 & p_17[2][1][0]) * (long long)(
                                                       (int)p % 247)) % (
                ! (((long long)p_9 - p_7) << ((p_13 + p_13) & 63U)) + 154LL));
  result = (char)(! ((int)((char)(- v_4)) ^ (int)(- p)) * (int)((double)(~ (
                                                                p_7 & (long long)p_9)) / (
                                                                4361628.75208 * (double)(- v_11) + 222.)));
  result = (char)(- (((4056092522UL << 27L) & (unsigned long)result) / (unsigned long)(
                     (int)(~ (~ v)) + 651)));
  result = result;
  return result;
}


