//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 212240505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, unsigned char p_7, long p_9,
                  long long p_11, float p_13)
{
  unsigned short v_15;
  long long v_4;
  char v;
  unsigned long result;
  v_15 = (unsigned short)p_9;
  v_4 = p_11;
  result = (unsigned long)p_11;
  v = (char)((long long)(- ((unsigned long)p_7 - result)) * (- p_11 % (
                                                             (long long)(
                                                             p_13 / (
                                                             (float)v_15 + 726.f)) + 497LL)) - ! p_11);
  v = (char)(~ ((long)v % (((long)(~ p_7) | (p_9 << 27)) + 432L)));
  result = (unsigned long)(31653ULL * (0ULL / (((unsigned long long)(
                                                (long long)result * v_4) & p) + 757ULL)));
  result = (unsigned long)(~ ((long long)(~ ((unsigned int)v % 34110U)) / (
                              ((long long)(9433UL % (result + 664UL)) + ~ v_4) + 417LL)));
  return result;
}


