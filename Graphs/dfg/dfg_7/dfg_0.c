//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 868120387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, unsigned long p_9)
{
  long long v_11;
  int v_6;
  long v_4;
  unsigned short v;
  unsigned short result;
  v_11 = 583716984LL;
  v_4 = (long)p_9;
  v_6 = (int)(- (~ (((unsigned long long)p_9 - p) - (unsigned long long)(
                    v_11 + 125LL))));
  result = (unsigned short)65369;
  v = (unsigned short)(- ((unsigned long long)-168.442577312 - ~ p));
  result = (unsigned short)((long)((int)result << ((int)(~ v) & 15)) * ~ (
                            35053L % (v_4 + 950L) + (long)((int)3977077186.83 + v_6)));
  return result;
}


