#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 867110682
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p)
{
  int v_13;
  long v_10;
  unsigned int v_8;
  unsigned long long v_6;
  float v_4;
  short v;
  float result;
  v_13 = 635204987;
  v_6 = 214628866ULL;
  v_4 = (float)p;
  v_10 = (long)(- (! (4199884360U + p) + ! p));
  v_8 = (unsigned int)v_13;
  v = (short)(((unsigned long long)((unsigned long)v_4 | 63165UL) * v_6 - (unsigned long long)(~ (
               (unsigned long)v_8 - (unsigned long)v_10))) | (unsigned long long)p);
  result = (float)v;
  return result;
}


