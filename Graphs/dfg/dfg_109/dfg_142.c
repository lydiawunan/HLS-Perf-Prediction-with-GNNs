#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 617938308
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p)
{
  unsigned char v_8;
  long v_6;
  unsigned long v_4;
  unsigned char v;
  long result;
  v_8 = (unsigned char)p;
  v_4 = 21944UL;
  v_6 = (long)((unsigned long)((int)(~ v_8)) * ((unsigned long)(- p) / 3231191389UL));
  v = (unsigned char)v_6;
  result = 55947L;
  result = (long)((unsigned long)((int)v % ((int)(~ (! v)) + 299)) - (
                  (unsigned long)(~ (-111 << (v_4 & 7UL))) - ((unsigned long)(~ result) ^ 45740UL)));
  return result;
}


