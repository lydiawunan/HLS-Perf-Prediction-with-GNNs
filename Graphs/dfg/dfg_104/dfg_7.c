#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 665280063
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, unsigned long long p_4)
{
  unsigned long v_9;
  signed char v_7;
  unsigned long v;
  short result;
  v_9 = (unsigned long)p;
  v = (unsigned long)(~ (char)-104);
  v_7 = (signed char)v_9;
  result = (short)(- (v % 59146UL) + (unsigned long)v_7);
  result = (short)(! ((unsigned long long)(! (-713627876L - (long)p)) + ! (
                      p_4 - (unsigned long long)result)));
  return result;
}


