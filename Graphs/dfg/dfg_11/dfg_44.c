#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 286015619
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, long long p_5, double p_9,
                       unsigned int p_13, int p_15)
{
  long v_17;
  char v_11;
  unsigned int v_7;
  unsigned short v;
  unsigned long long result;
  v_17 = (long)p_15;
  v_7 = 4187568488U;
  v = (unsigned short)((unsigned long)((unsigned int)(((float)p_13 + -4655539712.f) / (
                                                      (float)(~ p_15) + 225.f)) - (
                                       179675824U - (unsigned int)p)) * (
                       (4294965761UL - (unsigned long)(~ v_17)) * (unsigned long)v_17));
  v_11 = (char)67;
  v = (unsigned short)(((long long)((int)(~ v) - -11) % ((-805722692LL & 
                                                          4054133409LL % (
                                                          p_5 + 611LL)) + 879LL)) % (long long)(
                       (int)(- (- p_9)) * (((int)v * (int)v_11) % ((int)(! v) + 114)) + 840));
  result = (unsigned long long)((long long)((unsigned int)(! (~ p)) * (
                                            (unsigned int)(64 / ((int)p + 596)) % (
                                            (unsigned int)-2.85575854246e+38 / 4149852719U + 475U))) ^ (
                                (long long)v - ~ (p_5 % (long long)(v_7 + 410U))));
  return result;
}


