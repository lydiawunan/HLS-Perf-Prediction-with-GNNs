#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 168994813
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, signed char p_7, unsigned long long p_15,
                  unsigned short p_17, long long p_19)
{
  char v_21;
  char v_13;
  unsigned long long v_11;
  float v_9;
  char v_5;
  signed char v;
  unsigned long result;
  v_21 = (char)p_15;
  v_13 = (char)p_17;
  v_11 = 1049245475ULL;
  v_5 = (char)106;
  v = (signed char)p_19;
  result = (unsigned long)v_21;
  v_9 = (float)(- ((unsigned long long)(~ result) % ((unsigned long long)p_19 * v_11 + 91ULL)) * ! (
                - p_15 / 18446744073269699852ULL));
  v = (signed char)(((unsigned long long)((long long)(-24624267 % ((int)v + 23)) / -1955LL) + ! (- p_15)) / (
                    (unsigned long long)(- (v_9 / -1077.f - (float)((int)p_17 ^ (int)p_7))) + 342ULL));
  result = ((unsigned long)p * ! result) * ((result ^ (unsigned long)v) + (unsigned long)(- v_5)) + (unsigned long)(
           ((int)(- p_7) ^ (int)((unsigned char)v_9) % 9) % (((int)((char)(
                                                              -32.8470687866f - (float)v_11)) + (int)v_13) + 882));
  return result;
}


