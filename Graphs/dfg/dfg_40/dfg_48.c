#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 887990060
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned long p_13)
{
  unsigned int v_10;
  int v_8;
  unsigned int v_6;
  unsigned char v_4;
  int v;
  unsigned long result;
  v_10 = (unsigned int)p;
  v_8 = (int)p_13;
  v = (int)(((unsigned long long)((unsigned int)(-738071984 - v_8) + ! v_10) ^ 721087252ULL) * (unsigned long long)(
            (unsigned long)p - ! (4294955076UL * p_13)));
  v_6 = 4294967285U;
  v_4 = (unsigned char)v_6;
  result = (unsigned long)(~ ((! v - (int)v_4) + v));
  return result;
}


