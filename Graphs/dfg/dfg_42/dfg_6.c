#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 8678871
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, unsigned long long p_11)
{
  signed char v_15;
  long long v_13;
  short v_9;
  int v_7;
  short v_5;
  unsigned int v;
  char result;
  v_15 = (signed char)p;
  v_9 = (short)p;
  v_5 = (short)p_11;
  v = p;
  v_13 = (long long)(! ((p_11 + (unsigned long long)v_15) + (unsigned long long)-379.686057762) & (unsigned long long)(~ p));
  v_7 = (int)(~ (~ (p_11 % (unsigned long long)(v + 418U)) * (unsigned long long)v_13));
  v = (unsigned int)((unsigned long long)((4294967273U % (- p + 1008U)) % (
                                          p * (unsigned int)v_5 + 531U)) * ~ (
                     (unsigned long long)(v_7 | (int)v_9) ^ ! p_11));
  result = (char)(4294960483U - (- p - v));
  return result;
}


