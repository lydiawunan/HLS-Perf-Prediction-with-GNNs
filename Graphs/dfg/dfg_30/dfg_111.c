#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 740624534
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, float p_5, unsigned char p_7,
                unsigned short p_11, unsigned long long p_13)
{
  unsigned long long v_15;
  unsigned short v_9;
  int v;
  signed char result;
  v_9 = (unsigned short)p_5;
  v = (int)p_5;
  result = (signed char)61;
  v_15 = (unsigned long long)(~ ((int)p_5 - (int)p_7 / ((int)result + 313)) + ! (
                              (int)(~ p_11) % (v + 632)));
  v = (int)(18446744072735362064ULL / (p_13 + 721ULL) & ((unsigned long long)(
                                                         -118LL + p) / (
                                                         (unsigned long long)v_9 / (
                                                         v_15 + 919ULL) + 359ULL) >> (
                                                         ((int)p_7 + (int)p_11) & 63)));
  result = (signed char)(! ((int)v_9 - 111) + (int)(- p_11));
  result = (signed char)((unsigned long long)((((long long)v ^ p) / (
                                               (long long)(- p_5) + 509LL)) % (long long)(
                                              (int)(- (~ result)) + 84)) / (
                         (18446744073321292112ULL + (unsigned long long)p_7) + 822ULL));
  return result;
}


