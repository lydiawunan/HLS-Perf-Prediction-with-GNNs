#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 448471325
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned int p_11, unsigned char p_13)
{
  long v_8;
  char v_6;
  long v_4;
  short v;
  long result;
  v_8 = (long)p;
  v_6 = (char)p_13;
  v_4 = -267240646L;
  result = (long)((unsigned long long)((long)((int)(~ p_13) ^ 3625) + 
                                       15515L / ((long)p % (v_4 + 9L) + 319L)) - 302710141ULL);
  v_4 = (long)((unsigned int)(- ((double)((unsigned long long)v_8 - 509961943ULL) / (
                                 -376.384771901 / ((double)v_4 + 339.) + 922.))) / (
               ! ((unsigned int)(! p) % (p_11 + 737U)) + 261U));
  v = (short)((unsigned long)(v_4 & -23673L) + ! ((unsigned long)(- v_6) ^ (
                                                  6835817UL & (unsigned long)result)));
  result = (long)((float)(- ((unsigned long long)((int)v >> 2UL) / 49826ULL)) + 1.13120677434e+38f);
  return result;
}


