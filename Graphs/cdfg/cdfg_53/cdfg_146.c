#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 827522371
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, int p_5, long long p_7, unsigned int p_9,
         long p_13)
{
  long long v_15;
  unsigned long v_11;
  unsigned long long v;
  char result;
  v_15 = -14562LL;
  v_11 = 856819256UL;
  if (v_15 > 233LL) v = 191ULL ^ (599778690ULL + p) * (unsigned long long)(
                                 (long long)p_5 + p_7);
  else {
    v = (unsigned long long)(! (((unsigned long)p_9 | v_11) - (unsigned long)(! p_13)));
    v = v;
    v = v;
  }
  result = (char)v;
  return result;
}


