#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 56248785
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned long long p_11)
{
  unsigned long v_17;
  float v_15;
  signed char v_13;
  double v_9;
  double v_7;
  unsigned short v_4;
  unsigned short v;
  char result;
  v_17 = 3118100UL;
  v_15 = 828.891723633f;
  v_13 = (signed char)79;
  v_7 = 2.88193967067e+38;
  v_9 = (double)((- p_11 & (unsigned long long)(- (54267 % ((int)v_13 + 416)))) - (unsigned long long)(
                 (unsigned long)(! ((int)((char)v_15) % -85)) * (! v_17 ^ 61185UL)));
  v = (unsigned short)(- (- (v_7 - (double)p) * v_9));
  v_4 = (unsigned short)p;
  result = (char)(~ (~ ((int)v / ((int)v_4 + 595))));
  return result;
}


