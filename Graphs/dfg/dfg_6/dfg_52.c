//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 890860699
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p)
{
  unsigned long long v_9;
  int v_7;
  unsigned char v_5;
  long v;
  unsigned long result;
  v_9 = (unsigned long long)p;
  v_7 = (int)p;
  v = (long)p;
  v_5 = (unsigned char)141;
  v_7 = (int)(~ ((unsigned long long)v_7 / ((v_9 + (unsigned long long)v) + 912ULL) ^ (unsigned long long)p));
  v = 963392211L;
  result = (unsigned long)((unsigned long long)(((long)p / (v + 263L) + (long)v_5) | (long)(! (
                                                v_7 - 31354))) * v_9);
  return result;
}


