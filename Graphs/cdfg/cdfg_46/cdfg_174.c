#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 844760407
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p)
{
  long long v_5;
  char v;
  char result;
  v_5 = (long long)p;
  v = (char)39;
  if (0LL != ((long long)((unsigned int)v + p) & (-16LL + v_5)) / 83LL) 
    result = (char)p;
  else result = ~ (char)-23;
  return result;
}


