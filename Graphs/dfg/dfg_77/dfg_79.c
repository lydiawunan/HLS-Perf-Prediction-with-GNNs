#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 611738563
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, long p_7, unsigned long p_9[4][5][5], float p_13,
                  unsigned char p_15)
{
  unsigned long long v_11;
  unsigned long long v_5;
  int v;
  unsigned char result;
  v_11 = 458993213ULL;
  v = (int)(((unsigned long long)p_9[3][4][3] - - v_11) % (unsigned long long)(
            - ((int)((unsigned char)(61967.f - p_13)) << ((int)p_15 & 7)) + 639));
  v_5 = 21650ULL;
  result = (unsigned char)(! (18446744073465582816ULL / (~ v_5 + 1024ULL)) - (unsigned long long)p_7);
  result = (unsigned char)(- ((int)(! result) / ((v - p) + 777) + -20));
  return result;
}


