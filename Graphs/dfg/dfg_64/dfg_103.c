#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 531459675
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned char p_9, signed char p_11[5])
{
  unsigned char v_15;
  unsigned short v_13;
  long v_6;
  char v_4;
  int v;
  char result;
  v_15 = (unsigned char)61;
  v_13 = (unsigned short)p_11[2];
  v_6 = -1024815295L;
  v_4 = (char)p_11[4];
  result = (char)(24.3088054657f / ((float)v_15 + 608.f));
  v_4 = (char)((28040ULL - (unsigned long long)v_6) * (unsigned long long)(
               (int)(~ v_4) >> (p & 7UL)) - ((unsigned long long)p_9 - 
                                             ((unsigned long long)p_9 * 136210545ULL) * (unsigned long long)(
                                             (int)p_11[2] << ((int)v_13 & 7))));
  v = (int)(! (- ((unsigned int)(~ v_4) + (unsigned int)result / 3302638005U)));
  result = (char)(- (! (! v)));
  return result;
}


