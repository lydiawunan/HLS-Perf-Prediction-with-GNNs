#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 615280960
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p)
{
  unsigned long v_15;
  unsigned short v_13;
  unsigned int v_11;
  double v_9;
  char v_7;
  int v_5;
  unsigned long v;
  unsigned char result;
  v_15 = 4294928247UL;
  v_13 = (unsigned short)57537;
  v_11 = 192600011U;
  v_9 = (double)p;
  v_7 = (char)p;
  v_5 = -840686130;
  v = (unsigned long)p;
  result = (unsigned char)234;
  while (825217849. != ((v_9 * (double)result) / ((double)((unsigned int)p * v_11) + 489.)) * (double)(
                       (float)p - -718.143005371f)) {
    v_13 = (int)v_13 % -482208146;
    v_5 = (int)((26838LL / (long long)((int)p + 432)) / (long long)((int)v_7 + 901) - (long long)p);
    v_7 = (char)((unsigned long)p / ((unsigned long)(~ v_11) * ~ v_15 + 67UL));
    result = (unsigned char)((long long)(! (- p)) * ((long long)((int)p / (
                                                                 (int)v_7 + 41)) * -163243285LL));
  }
  while_0_break: ;
  result = (unsigned char)((((unsigned long)p + v) ^ v / (unsigned long)(
                                                     v_5 + 48)) * (unsigned long)(
                           (double)((int)result | (int)v_7) / (- v_9 + 96.)));
  return result;
}


