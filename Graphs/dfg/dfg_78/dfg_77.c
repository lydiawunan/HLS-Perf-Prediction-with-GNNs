#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 487276528
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, float p_4, unsigned int p_6, short p_8,
                  unsigned int p_11)
{
  int v_13;
  unsigned long v;
  unsigned long result;
  v_13 = (int)p_11;
  v_13 = v_13;
  v_13 = (int)(- (! ((long long)v_13)));
  v = (unsigned long)v_13;
  result = (unsigned long)((unsigned int)(- (- ((float)p * p_4))) * (
                           ((p_6 + p_6) - (unsigned int)(~ p_8)) >> (
                           ~ v / (unsigned long)((585181250U + p_11) + 654U) & 31UL)));
  return result;
}


