#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 17187920
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, short p_5)
{
  unsigned int v_7;
  unsigned long v;
  char result;
  v = (unsigned long)p;
  result = (char)p_5;
  v_7 = (unsigned int)(~ (-1065680745LL >> (((int)((char)-1.9055067817e+48) - (int)(! p)) & 63)));
  v = ! (((unsigned long)(- v_7) ^ v) % (unsigned long)((int)(- (- result)) + 160));
  result = (char)((unsigned long)(! ((int)result - (int)result) - (int)p_5) % (
                  (16768UL + (136428976UL ^ v)) * ! (5394UL % (v + 32UL)) + 392UL));
  result = (char)(- (~ (v & 101UL) * (unsigned long)((int)(! p) - (int)result)));
  return result;
}


