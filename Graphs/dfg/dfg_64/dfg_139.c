#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 188425355
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, int p_11[2])
{
  int v_9;
  short v_6;
  unsigned int v_4;
  short v;
  double result;
  v_9 = 582650815;
  v = (short)p_11[0];
  result = (double)p;
  v_6 = (short)(- (0ULL - ((unsigned long long)(~ v_9) + (18446744073628000731ULL + (unsigned long long)p_11[0]))));
  v_4 = (unsigned int)((int)result % (((int)(- p) + (v_9 % ((int)v + 520) + p_11[0])) + 464));
  v = (short)(! 772309385ULL);
  result = (double)(- (~ ((18446744073127484756ULL | (unsigned long long)v) % (unsigned long long)(
                          (v_4 + (unsigned int)v_6) + 1011U))));
  return result;
}


