#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 986661324
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p)
{
  unsigned long v_6;
  char v_4;
  unsigned int v;
  short result;
  v_6 = (unsigned long)p;
  v_4 = (char)-53;
  v = (unsigned int)(~ ((unsigned long)v_4 / (v_6 + 187UL) + (unsigned long)p));
  result = (short)(~ 0U);
  return result;
}


