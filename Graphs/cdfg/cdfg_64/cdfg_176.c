#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 254497695
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, unsigned int p_4, int p_6, double p_11[3])
{
  unsigned long v_9;
  int v;
  long result;
  v_9 = 785793149UL;
  v = (int)(697955937LL - (long long)((long)(11047. * p_11[1]) << 4L));
  if ((unsigned long)(- p_4 / (unsigned int)(~ p_6 + 471) & (unsigned int)(- (
                      v % -84))) > ~ ((unsigned long)(45812 / (v + 135)) - (
                                      6509UL - v_9))) {
    result = (long)p;
    result = ! ((long)(p * -47) / (result + 842L));
  }
  else result = 0L;
  return result;
}


