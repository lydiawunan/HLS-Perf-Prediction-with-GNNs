#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 97761653
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, unsigned char p_5, unsigned long long p_9)
{
  unsigned long long v_19;
  unsigned char v_17;
  float v_15;
  char v_13;
  long long v_11;
  unsigned char v_7;
  short v;
  long result;
  v_19 = 18446744072889408166ULL;
  v_13 = (char)-41;
  v_11 = (long long)p;
  v_7 = (unsigned char)102;
  v = (short)-17798;
  result = (long)p_5;
  v_15 = (float)(- (- p_9));
  while ((unsigned long long)(! ((long long)(- v) % -58031LL)) <= (((unsigned long long)result / (
                                                                    p + 440ULL)) / (unsigned long long)(
                                                                   (int)(~ p_5) + 344)) * (
                                                                  (unsigned long long)(- v_7) % (
                                                                  p_9 + 276ULL))) {
    v_17 = (unsigned char)((unsigned long long)p_5 % (488751523ULL / (
                                                      (unsigned long long)v_11 / (
                                                      v_19 + 540ULL) + 629ULL) + 582ULL));
    result = (long)(((double)((int)v_17 % ((int)p_5 + 870)) + 775.660893575 / (
                                                              (double)v + 832.)) * (double)(
                    (long long)(! p_5) * (859710657LL & (long long)v_13)));
    v_7 = (unsigned char)(p_9 + (unsigned long long)((8458 % ((int)((short)v_15) + 664)) * -1112924476));
  }
  while_0_break: ;
  return result;
}


