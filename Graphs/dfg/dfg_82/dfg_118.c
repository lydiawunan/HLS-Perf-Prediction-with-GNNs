#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 906030697
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, int p_5, long long p_7)
{
  float v;
  unsigned char result;
  v = (float)p_5;
  result = (unsigned char)v;
  result = (unsigned char)((int)((unsigned char)((float)(~ p_7) * v)) / (
                           (int)result + 188));
  v = (float)((unsigned long)(! ((int)((char)(v + v)) * -26)) * (4294942847UL % (unsigned long)(
                                                                 (int)(! (- result)) + 380)));
  result = (unsigned char)(p / ((long long)(- (v + (float)(- p_5))) + 137LL));
  return result;
}


