#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 141353401
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, unsigned long p_4, unsigned long long p_6,
         unsigned long long p_9, short p_11)
{
  unsigned long long v_19;
  unsigned int v_17;
  unsigned short v_15;
  signed char v_13;
  unsigned short v;
  long result;
  v_19 = (unsigned long long)p_11;
  v_15 = (unsigned short)35151;
  v_13 = (signed char)-80;
  v_17 = (unsigned int)(~ ((8586ULL + v_19 / (p + 553ULL)) - ! (18446744073709494250ULL | p)));
  v = (unsigned short)((p / (p + 608ULL) & (unsigned long long)(3744674497U / (unsigned int)(
                                                                (int)p_11 + 983))) * (unsigned long long)(
                       (int)(~ v_13) / ((int)v_15 % 42 + 307)) - (unsigned long long)(~ v_17) / (
                                                                 ((p_9 + (unsigned long long)p_4) + (unsigned long long)(
                                                                  p_4 * 4877UL)) + 406ULL));
  result = (long)(30601ULL + ~ ((unsigned long long)(- v) - ! p_9));
  result = (long)(- (18446744073709503750ULL / (p + 407ULL) & (unsigned long long)(
                     (unsigned long)result - p_4)) - ~ (~ (- p_6)));
  return result;
}


