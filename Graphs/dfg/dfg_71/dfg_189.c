#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 532552857
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned char p_5, short p_9)
{
  double v_11;
  unsigned char v_7;
  double v;
  double result;
  v_11 = (double)p_9;
  v_7 = (unsigned char)(~ (- (((int)p_9 + (int)p) ^ (int)v_11)));
  v = (double)(signed char)102;
  v = (double)(! (((long long)((int)((unsigned char)v) << ((int)v_7 & 7)) - -28805LL) % 140LL));
  result = (double)(- ((int)(~ p) << ((int)((unsigned char)v) % ((int)p_5 + 296) & 7)) % (
                    (int)p_5 + 837));
  return result;
}


