#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 83177055
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p)
{
  unsigned long long v_15;
  int v_13;
  long long v_11;
  double v_9;
  unsigned char v_7;
  unsigned short v_5;
  unsigned int v;
  double result;
  v_15 = (unsigned long long)p;
  v_13 = (int)p;
  v_11 = (long long)p;
  v_9 = (double)p;
  v = (unsigned int)p;
  v_7 = (unsigned char)((unsigned long long)(v_13 % 38401) % (((unsigned long long)(
                                                               (long)(
                                                               v_9 - 17453.) - p) - v_15) + 224ULL));
  v_9 = (double)(! (! (p ^ -731546050L)));
  v_5 = (unsigned short)(515420756. * (((double)v_7 + v_9) + (double)v_11) - (double)v);
  result = (double)((long long)p + (long long)v % ((long long)(~ v_5) % 434257920LL + 680LL));
  return result;
}


