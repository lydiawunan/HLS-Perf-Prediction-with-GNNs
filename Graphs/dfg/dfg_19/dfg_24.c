#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 412391235
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p[3][4], unsigned long p_4, unsigned long long p_7,
                  unsigned int p_9, unsigned long long p_11)
{
  unsigned short v;
  unsigned char result;
  result = (unsigned char)(- (p_11 / (! (- p_11) + 711ULL)));
  v = (unsigned short)p_11;
  result = (unsigned char)((unsigned long long)(- (- (p[1][1] >> (p_4 & 31UL)))) / (
                           ((unsigned long long)v + p_7) * (unsigned long long)(
                           (3284256563UL + (unsigned long)p_9) - (unsigned long)(
                           (int)result ^ 6790)) + 475ULL));
  return result;
}


