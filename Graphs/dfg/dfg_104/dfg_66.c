#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 918414616
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, unsigned char p_11)
{
  unsigned long v_13;
  char v_9;
  int v_7;
  long v_5;
  short v;
  signed char result;
  v_13 = 4294955969UL;
  v_9 = (char)23;
  v_7 = (int)p_11;
  result = (signed char)50;
  v_9 = v_9;
  v_5 = (long)((unsigned long)((int)result / (v_7 * (int)v_9 + 832) - (int)p_11) | v_13);
  v = (short)v_5;
  result = (signed char)(- ((unsigned long long)v / (1654ULL / ((unsigned long long)p % 48877ULL + 11ULL) + 589ULL)));
  return result;
}


