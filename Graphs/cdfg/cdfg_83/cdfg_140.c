#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 940055844
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p)
{
  unsigned long long v_11;
  unsigned long long v_9;
  int v_7;
  double v_4;
  int v;
  unsigned char result;
  v_11 = (unsigned long long)p;
  v_7 = -1056566920;
  v_4 = 811.790409936;
  v = p;
  result = (unsigned char)100;
  v_9 = (unsigned long long)(v_7 >> ((int)(- (- v_4)) & 31));
  while ((unsigned long)(~ v / ((int)v_4 + 527)) + - ((unsigned long)p % 4294922217UL) == (unsigned long)v_7) {
    v_7 = v_11 * (v_9 & 398628581ULL);
    v_11 = 18446744073709551605ULL;
    v_9 = 2543ULL;
    v_4 = (double)p;
  }
  while_0_break: ;
  return result;
}


