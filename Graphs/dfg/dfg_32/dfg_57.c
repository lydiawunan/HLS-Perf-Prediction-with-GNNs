#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 484928
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, int p_5, unsigned long p_7, int p_11,
                  char p_13[2])
{
  signed char v_9;
  unsigned long long v;
  unsigned char result;
  v_9 = (signed char)(- -4286557674.11);
  v = (unsigned long long)(- ((unsigned long)((long)((int)p_13[0] % 112) ^ -9391L) - p_7));
  result = (unsigned char)((- p - (v % (unsigned long long)(p_5 + 580) + (unsigned long long)p_7)) / (
                           (((unsigned long long)(p_7 + (unsigned long)v_9) ^ 
                             1001303665ULL * (unsigned long long)p_11) ^ (unsigned long long)(- p_11)) + 48ULL));
  return result;
}


