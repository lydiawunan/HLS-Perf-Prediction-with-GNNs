#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 546481691
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned char p_5, unsigned char p_9,
                char p_15)
{
  unsigned short v_13;
  float v_11;
  unsigned short v_7;
  unsigned short v;
  signed char result;
  v_7 = (unsigned short)47990;
  v_13 = (unsigned short)((int)p * (int)(~ p_15));
  v_11 = (float)18446744073709500788ULL;
  v = (unsigned short)(~ (((int)v_7 % ((int)p_5 + 890) + ((int)p_9 - (int)((unsigned char)v_11))) * (int)(! v_13)));
  result = (signed char)((! (76 % ((int)v + 374)) - (int)p) + (int)p_5);
  return result;
}


