#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 324091107
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, unsigned char p_15, unsigned char p_17,
          double p_19)
{
  short v_12;
  char v_10;
  unsigned int v_8;
  unsigned long v_6;
  int v_4;
  unsigned char v;
  float result;
  v_12 = (short)p_17;
  v_10 = (char)p_19;
  v_8 = 3235931204U;
  v_6 = (unsigned long)p;
  v_4 = 290491802;
  result = (float)((4294939880UL << (-93723378 % ((int)p_15 + 385) & 31)) + (unsigned long)(
                   (double)(~ p_17) - p_19));
  v_6 = (unsigned long)((unsigned long long)v_8 / (((unsigned long long)(
                                                    - v_6 | (unsigned long)v_10) - ! (
                                                    (unsigned long long)v_12 - p)) + 765ULL));
  v = (unsigned char)(- ((int)((result - 23900.f) + 0.f) / (((v_4 << 24UL) >> (
                                                             38795UL % (
                                                             v_6 + 730UL) & 31UL)) + 994)));
  result = 0.918378591537f - (float)(~ (! ((int)((unsigned char)result) % (
                                           (int)v + 400))));
  return result;
}


