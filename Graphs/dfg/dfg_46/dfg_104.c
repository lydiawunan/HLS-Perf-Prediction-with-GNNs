#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 124300374
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned long long p_11, unsigned long p_15,
                  int p_17, char p_19)
{
  short v_13;
  signed char v_9;
  char v_6;
  char v_4;
  unsigned int v;
  unsigned char result;
  v_13 = (short)p_15;
  v_9 = (signed char)p_19;
  v = 4294955052U;
  v_6 = (char)(- (! (808449982ULL * (unsigned long long)p)) >> (! p_11 & 63ULL));
  v_4 = (char)(! (- (125 - p_17) % (((p_17 >> 6) + (int)(! p_19)) + 331)));
  result = (unsigned char)((unsigned long long)(~ (v << ((int)v_4 & 31)) + (unsigned int)(~ (
                                                (int)v_4 + (int)v_6))) * (
                           (unsigned long long)(~ (-2 - p)) / ((((unsigned long long)v_9 ^ p_11) + (unsigned long long)(
                                                                (unsigned long)v_13 * p_15)) + 231ULL)));
  result = result;
  return result;
}


