#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 222649461
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, unsigned char p_7, long p_11,
                  unsigned short p_13[2][1][5], long long p_15)
{
  unsigned long long v_17;
  unsigned long long v_9;
  long long v_5;
  unsigned short v;
  unsigned long result;
  v_17 = (unsigned long long)p_15;
  v_9 = ((unsigned long long)(p_11 / (long)((int)(- p_13[0][0][4]) + 1015)) + 
         (unsigned long long)p_15 * ((unsigned long long)p_13[0][0][3] + v_17)) - 177867640ULL;
  v_5 = (long long)v_9;
  v = (unsigned short)(! (~ ((v_5 - (long long)p) % (long long)((int)p_7 + 1023))));
  result = (unsigned long)((unsigned long long)p * (unsigned long long)(! v));
  return result;
}


