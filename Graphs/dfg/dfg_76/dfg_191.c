#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 894435438
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p[4][1], long p_5[3], unsigned int p_11,
         unsigned char p_15, signed char p_17)
{
  unsigned short v_13;
  int v_9;
  int v_7;
  unsigned short v;
  char result;
  v_9 = -59081;
  v_7 = 12209;
  result = (char)53;
  v_13 = (unsigned short)((((long)p_15 % 31782L) % -52L + (! p_5[0] | (long)(
                                                           (int)p_17 + v_7))) % (long)(
                          - v_7 / (- ((int)result - (int)p_15) + 484) + 466));
  v = (unsigned short)((long long)(- v_9) - (long long)(- (! p_11)) / (
                                            (-406274639LL - (long long)(! v_13)) + 238LL));
  result = (char)(~ (! p_5[0] % (long)(- v_7 + 788)));
  result = (char)(((long long)((int)(~ v) / (((int)result ^ 64) + 467)) + (
                   p[1][0] - -637309841LL)) + 1053389030LL);
  return result;
}


