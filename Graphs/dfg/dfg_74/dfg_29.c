#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 795723375
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, double p_4, unsigned long long p_7[3][1][5],
                       signed char p_9, unsigned short p_11)
{
  unsigned long long v_15;
  short v_13;
  long v;
  unsigned long long result;
  v_15 = 71222503ULL;
  v_13 = (short)p_4;
  v = (long)p_4;
  v = (long)(~ ((unsigned long long)v - ! ((unsigned long long)p_11 - v_15)));
  result = (unsigned long long)(~ ((long)((double)((unsigned long long)v ^ p_7[0][0][2]) * (
                                          p_4 + (double)p_9)) - (-24103L + p) / (
                                                                (long)p_9 % 739823323L + 318L)));
  result = ~ ((unsigned long long)v_13 + result) | 4294942088ULL;
  result = (unsigned long long)(p * (long)(- p_4)) * ((unsigned long long)(
                                                      v % (v + 782L)) + 
                                                      (p_7[1][0][2] ^ (unsigned long long)p_9) / (
                                                      result / (unsigned long long)(
                                                      (int)p_11 + 280) + 1006ULL));
  return result;
}


