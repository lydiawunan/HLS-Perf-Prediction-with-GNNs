#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 976178478
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, unsigned long p_5[5], unsigned char p_7,
         unsigned long p_9)
{
  unsigned long long v_17;
  signed char v_15;
  unsigned char v_13;
  double v_11;
  int v;
  char result;
  v_15 = (signed char)103;
  v_13 = (unsigned char)p;
  v_11 = -6435728107.4;
  v = (int)p_7;
  result = (char)119;
  while ((! p_9 & (unsigned long)((long)(v << (p_9 & 31UL)) / (48373L / (
                                                               (long)v_11 + 700L) + 773L))) > 0) {
    v_13 = (long long)v_15 & ((long long)v_13 + -383661780LL);
    v_17 = (unsigned long long)(~ (6077UL + 3327302462UL / (p_5[2] + 608UL)));
    v_15 = (signed char)p_7;
    v_11 = (double)(~ (~ (~ v_17)));
  }
  while_0_break: ;
  result = (char)((unsigned long)((int)p % (v % 58508 + 987)) - (unsigned long)(- result) % (
                                                                p_5[2] / (unsigned long)(
                                                                (int)p_7 + 436) + 365UL));
  return result;
}


