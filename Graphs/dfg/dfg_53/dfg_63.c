#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1041321099
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, unsigned short p_15)
{
  unsigned long v_17;
  double v_13;
  short v_11;
  signed char v_8;
  int v_6;
  unsigned long v_4;
  unsigned short v;
  long result;
  v_17 = (unsigned long)p;
  v_13 = 772.462275046;
  v_11 = (short)p_15;
  v_8 = (signed char)118;
  v_6 = (int)p_15;
  v = (unsigned short)47715;
  result = 52137L;
  v_4 = ((unsigned long)((unsigned int)v % 4294933821U >> (((unsigned int)v_8 + p) & 31U)) - (unsigned long)(
         (long)(- v_11) / ((long)v_13 % (result + 539L) + 694L))) ^ 1269737936UL / (
                                                                    (
                                                                    (unsigned long)p_15 + v_17) + 355UL);
  v = (unsigned short)(! (v_4 + (unsigned long)(~ v_6)));
  result = (long)v;
  result = - result;
  return result;
}


