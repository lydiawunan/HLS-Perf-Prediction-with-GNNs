#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 583529411
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, unsigned long long p_7, unsigned int p_11,
                 unsigned char p_15, float p_19)
{
  signed char v_25;
  unsigned short v_23;
  long long v_21;
  short v_17;
  short v_13;
  unsigned short v_9;
  unsigned long long v_5;
  int v;
  unsigned int result;
  v_25 = (signed char)107;
  v_21 = -976479869LL;
  v_17 = (short)14002;
  v_13 = (short)13245;
  v_9 = (unsigned short)p_15;
  v_23 = (unsigned short)((unsigned long long)((p_11 - 11575U) - (unsigned int)(
                                               (int)v_25 / ((int)((signed char)p_19) + 948))) & (
                          (unsigned long long)((int)p_15 * (int)p) ^ (
                          p_7 << 24)));
  if (v_21 >= (long long)(~ ((unsigned int)((int)v_13 * (int)v_23) % (
                             (p_11 + 340961113U) + 753U)))) {
    v = (int)((float)(! (~ v_13)) + ((float)(p_11 * (unsigned int)p_15) + (
                                     (float)v_17 - p_19)));
    v_5 = (unsigned long long)p_11;
    result = (unsigned int)((unsigned long long)(-24 / ((v >> ((int)p & 31)) + 731)) * (
                            (v_5 / (p_7 + 287ULL)) / (unsigned long long)(
                            (int)v_9 + 737)));
  }
  else result = (unsigned int)p;
  return result;
}


