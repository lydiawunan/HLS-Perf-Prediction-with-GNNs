#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 339946894
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p[1], unsigned short p_13)
{
  signed char v_11;
  char v_9;
  double v_6;
  signed char v_4;
  unsigned long v;
  unsigned char result;
  v_9 = (char)34;
  v_6 = 544535007.299;
  v = p[0];
  v_11 = (signed char)(~ 18446744073709544442ULL);
  result = (unsigned char)(- p_13);
  v_4 = (signed char)(((unsigned long long)v_9 - 818458678ULL) / (unsigned long long)(
                      (690531218UL << ((int)(~ result) % ((int)v_11 * 110 + 71) & 31)) + 111UL));
  result = (unsigned char)(- ((double)(v >> ((int)v_4 & 31)) + (v_6 + (double)p[0])) / 710.);
  return result;
}


