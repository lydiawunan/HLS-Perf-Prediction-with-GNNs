#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 862928882
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, char p_7, unsigned int p_11)
{
  int v_9;
  long long v_5;
  long v;
  unsigned char result;
  v_9 = (int)p;
  result = (unsigned char)p_11;
  v = (long)(- (((unsigned int)result / 806317750U) / (unsigned int)(
                ! v_9 + 489)) ^ (unsigned int)p_7);
  v_5 = (long long)p_7;
  result = (unsigned char)(-827411616LL + (long long)((long)(! p) - (
                                                      v ^ 13786L)) % (
                                          v_5 + 655LL));
  return result;
}


