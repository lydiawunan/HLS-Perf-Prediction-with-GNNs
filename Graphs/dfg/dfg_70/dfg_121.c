#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 251893242
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned char p_4, char p_7, int p_9)
{
  long v_15;
  char v_13;
  unsigned long long v_11;
  long v;
  char result;
  v_15 = 454222523L;
  v_13 = (char)(~ (3869021380UL + (unsigned long)v_15));
  v_11 = (unsigned long long)((long long)v_13 / 6335LL);
  v = 41734L << (~ ((unsigned long long)(- p_9) + v_11) & 31ULL);
  result = (char)((long)p * ((((long)p_4 + v) % (v * 54810L + 834L)) * (long)(
                             -775962003 >> ((int)p_7 & 31))));
  return result;
}


