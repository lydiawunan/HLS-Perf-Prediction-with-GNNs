#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 538693839
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, short p_5, unsigned short p_7, double p_9,
                  unsigned int p_17)
{
  unsigned int v_15;
  unsigned long long v_13;
  float v_11;
  unsigned char v;
  unsigned char result;
  v_15 = (unsigned int)p;
  v_13 = 5118877ULL;
  result = (unsigned char)124;
  v_11 = (float)(- ((((unsigned int)result + v_15) / (p_17 * (unsigned int)p_7 + 462U)) / 103U));
  v = (unsigned char)246;
  v = (unsigned char)((p_9 * (double)v_11 + (double)p) + (double)(- (- (
                      (unsigned long long)v & v_13))));
  result = (unsigned char)((int)v * (((int)p - (int)p_5) / -25099) + (int)p_7);
  return result;
}


