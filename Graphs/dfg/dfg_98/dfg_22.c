#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1033937931
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, double p_5, unsigned long long p_7,
                unsigned long long p_9, unsigned char p_11)
{
  float v_13;
  unsigned int v;
  signed char result;
  v_13 = 2.04634990696e+38f;
  v = 29520118U;
  result = (signed char)((long long)(- (~ v) - (unsigned int)((float)(
                                                              p_9 / (
                                                              p_7 + 17ULL)) * v_13)) / (
                         - ((p << 60LL) + (long long)(p_5 * 3620769650.)) + 744LL));
  v = 605618811U;
  v = (unsigned int)(((unsigned long long)(! p_11) - ! (18446744073709523428ULL % (unsigned long long)(
                                                        v + 880U))) / (
                     ~ p_9 + 940ULL));
  result = (signed char)(((double)((p * 27LL) * ((long long)v / (p + 340LL))) / (
                          (- p_5 + (double)p_7) + 819.)) / ((double)(
                                                            (unsigned long long)3.30712507588e+38 % (
                                                            ((unsigned long long)(~ result) - 
                                                             p_9 * 52265ULL) + 403ULL)) + 138.));
  return result;
}


