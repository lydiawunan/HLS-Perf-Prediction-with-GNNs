#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1026938719
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p)
{
  unsigned char v_13;
  unsigned long v_11;
  char v_9;
  double v_6;
  long long v_4;
  unsigned long v;
  unsigned char result;
  v_13 = (unsigned char)40;
  v_11 = (unsigned long)p;
  v_9 = (char)p;
  v_6 = (double)p;
  v_4 = (long long)p;
  result = (unsigned char)151;
  v = (unsigned long)(~ (33437 / ((int)result + 686) - (int)-2.85038095964e+38));
  while ((long long)v == v_4 - (long long)((int)v_6 ^ ((int)p - (int)result))) {
    v_4 = (long long)(- p);
    v_6 = ((v_6 + -56.) - (double)(v_11 + (unsigned long)v_9)) / ((double)(~ v) + 641.);
    v_6 = (double)(9ULL + (unsigned long long)((unsigned long)((unsigned int)v_13 * 3607645555U) ^ (
                                               (unsigned long)v_6 - v_11)));
  }
  while_0_break: ;
  return result;
}


