#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 915055187
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, unsigned long long p_5, long long p_7,
                  long long p_9)
{
  int v_21;
  unsigned char v_19;
  short v_17;
  unsigned char v_15;
  unsigned long v_13;
  long long v_11;
  unsigned long long v;
  unsigned char result;
  v_21 = 34956;
  v_19 = (unsigned char)p_5;
  v_17 = (short)p_9;
  v_15 = (unsigned char)194;
  v_13 = (unsigned long)p_7;
  v_11 = (~ (-48016LL / (p_9 + 504LL)) / (long long)((0 ^ (v_13 + (unsigned long)v_15)) + 547UL)) % (long long)(
         - (((int)v_17 + 19726) + (int)v_19 / (v_21 + 407)) + 632);
  v = (unsigned long long)(- v_11 - 102LL);
  result = (unsigned char)(~ (p_7 / (4294924861LL / (- p_9 + 417LL) + 588LL)));
  result = (unsigned char)(! (((unsigned long long)p - ((unsigned long long)result | v)) >> (
                              p_5 & 63ULL)));
  return result;
}


