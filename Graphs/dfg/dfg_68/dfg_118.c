#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 385759747
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, unsigned short p_17)
{
  unsigned long long v_21;
  double v_19;
  unsigned short v_15;
  int v_13;
  unsigned int v_11;
  int v_8;
  long long v_6;
  int v_4;
  short v;
  unsigned short result;
  v_19 = (double)p;
  v_15 = p_17;
  v_13 = -113432619;
  v_11 = 151665637U;
  v_8 = (int)p;
  v_6 = 535323700LL;
  v_4 = (int)p;
  v = (short)p_17;
  result = (unsigned short)14044;
  v_21 = (unsigned long long)((long long)((int)(- p_17) % (-31156 % (
                                                           (int)((short)(
                                                           (double)v_13 + v_19)) + 15) + 900)) ^ (
                              (long long)(11776 << 6) + (long long)((int)p - (int)p_17) * (
                                                        v_6 + (long long)v_8)));
  v_6 = (long long)((unsigned long long)((((unsigned int)result ^ v_11) - (unsigned int)(
                                          v_13 ^ (int)v_15)) >> ((unsigned int)(- (
                                                                 (double)p_17 / (
                                                                 v_19 + 21.))) & 31U)) / (
                    (v_21 ^ (unsigned long long)(-7588LL / (long long)(
                                                 ((int)v - (int)((short)8355518571.17)) + 382))) + 334ULL));
  v = (short)p;
  result = (unsigned short)((long long)(! v) / (! ((long long)v_4 + v_6) + 552LL) ^ 
                            (long long)(- (~ v_8)) * ((long long)(- p) * ! v_6));
  return result;
}


