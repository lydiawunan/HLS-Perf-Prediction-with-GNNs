#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 226332079
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p)
{
  char v_13;
  signed char v_11;
  unsigned long long v_9;
  long long v_6;
  long v_4;
  unsigned int v;
  unsigned short result;
  v_13 = (char)p;
  v_11 = (signed char)p;
  v_9 = 9263ULL;
  v_6 = 2703LL;
  v_4 = -39735L;
  v = (unsigned int)p;
  result = (unsigned short)(((long)p + v_4) - (long)(- (! ((int)v_11 / (
                                                           (int)v_13 + 380)))));
  v_4 = (long)((int)(- result) % ((int)p + 249));
  result = (unsigned short)(~ ((unsigned long long)(~ (v >> (v_4 & 31L))) / (
                               ((unsigned long long)(-1.19857302313e+37f / (
                                                     (float)v_6 + 84.f)) + 
                                (unsigned long long)p % (v_9 + 965ULL)) + 391ULL)));
  return result;
}


