#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 666178091
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, unsigned short p_4, double p_9[3], float p_13,
        long p_17)
{
  long v_19;
  unsigned short v_15;
  float v_11;
  unsigned long v_7;
  int v;
  int result;
  v_19 = (long)p_4;
  v_15 = (unsigned short)45299;
  v_11 = (float)p_4;
  v = 1017321576;
  v_7 = (unsigned long)(((unsigned long long)((int)(-916.690022725 - p_9[0]) + v) + 
                         4960ULL % ((unsigned long long)(- v_11) + 857ULL)) + (unsigned long long)(
                        (long)((double)(- p_13) + (double)v_15 * p_9[2]) % (
                        - (p_17 + v_19) + 65L)));
  v = (int)(! (~ (~ v_7)));
  result = v;
  result = - ((int)p ^ ~ (result - (int)p_4));
  return result;
}


