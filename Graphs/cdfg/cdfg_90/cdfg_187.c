#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 648643921
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p)
{
  long v_12;
  unsigned long v_10;
  char v_8;
  double v_6;
  unsigned long v_4;
  double v;
  signed char result;
  v_12 = (long)p;
  v_10 = 4221727986UL;
  v_8 = (char)p;
  v_6 = -2.84792387624e+38;
  v = (double)p;
  v_4 = - (~ (~ p));
  result = (signed char)((v / -4166939894.75) * (double)(v_4 / ((unsigned long)v_6 + 351UL)) - (double)(
                         (unsigned long)v_8 % (v_10 + 628UL) + ((unsigned long)v_12 - p)));
  return result;
}


