#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 124696103
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, unsigned int p_5, long long p_7,
                  unsigned long p_9, float p_11)
{
  unsigned int v;
  unsigned long result;
  v = (unsigned int)(- (- ((float)(! p_9) - (p_11 + (float)p_7))));
  result = (unsigned long)((unsigned long long)((unsigned int)(- (p - 222.f)) - 
                                                (v / (p_5 + 274U)) / (
                                                - p_5 + 882U)) % (! (- (
                                                                  (unsigned long long)p_7 * 521999817ULL)) + 604ULL));
  return result;
}


