#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704921447
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned long p_13)
{
  double v_15;
  long long v_11;
  unsigned char v_9;
  unsigned int v_7;
  unsigned long v_5;
  short v;
  char result;
  v_11 = (long long)p_13;
  v_9 = (unsigned char)237;
  v_7 = 4294908663U;
  v_5 = 4240729112UL;
  v = (short)p;
  v_11 = v_11;
  v_15 = (double)(~ (- p));
  v_5 = (unsigned long)((double)(v_11 * (long long)((335.200180516 + (double)p) - (double)p_13)) - - (
                        (double)v_5 * v_15 + -9.11360246256e+37));
  result = (char)(((unsigned long)(! ((int)p * (int)v)) + ~ (v_5 * (unsigned long)v_7)) * (unsigned long)v_9);
  return result;
}


