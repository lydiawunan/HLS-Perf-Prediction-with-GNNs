#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 73542708
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p)
{
  int v_11;
  long v_9;
  unsigned long v_7;
  char v_4;
  unsigned char v;
  long long result;
  v_11 = (int)p;
  v_7 = 4255675104UL;
  result = 59673LL;
  v_4 = (char)(((long long)p / (((long long)v_11 & result) + 379LL)) * (long long)p);
  v = (unsigned char)(! p);
  v_9 = (long)v_7;
  result = (long long)((unsigned long long)((unsigned int)(761.125915527f - (float)(
                                                           (int)v | (int)v_4)) - (
                                            (unsigned int)-929.751936986 % (
                                            p + 174U) ^ (unsigned int)(~ v_4))) - (
                       (unsigned long long)(v_7 % 30572UL - (unsigned long)(- p)) & ! (
                       18446744073709521435ULL / (unsigned long long)(
                       v_9 + 725L))));
  return result;
}


