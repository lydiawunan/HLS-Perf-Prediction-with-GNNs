#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 608927120
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p[5], char p_4, double p_7, float p_9,
                  unsigned int p_13)
{
  signed char v_15;
  unsigned short v_11;
  float v;
  unsigned char result;
  v_11 = (unsigned short)p[2];
  v = p_9;
  v_15 = (signed char)(~ (! ((unsigned int)p_9 - p_13) % ((unsigned int)p_7 + 898U)));
  v = (float)(((unsigned int)((int)(v / (p_9 + 152.f)) - (-61630259 - (int)v_11)) + ! (
               p_13 + (unsigned int)v_15)) * (unsigned int)(- (~ (- v_15))));
  result = (unsigned char)p_7;
  result = (unsigned char)((float)((int)(~ (! result)) - (int)p[0] % (
                                                         (int)p_4 + 566)) * v);
  return result;
}


