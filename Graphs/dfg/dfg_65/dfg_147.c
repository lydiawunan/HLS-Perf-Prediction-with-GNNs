#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 40666434
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, double p_5, unsigned short p_11)
{
  unsigned short v_15;
  long v_13;
  char v_9;
  unsigned long long v_7;
  char v;
  long long result;
  v_13 = 846374120L;
  v = (char)-64;
  result = (long long)p;
  v_15 = p_11;
  v_9 = (char)p_11;
  v_7 = (unsigned long long)(((long long)((long)((int)v_9 * (int)p_11) | 
                                          v_13 * 16299L) + (result * result) / (long long)(
                                                           (int)v_15 % -350831987 + 788)) * ! result);
  result = (long long)((unsigned long long)((int)v + - ((int)p & (int)((unsigned char)p_5))) * (
                       18446744073709494375ULL + v_7));
  return result;
}


