#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 207504125
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, unsigned long p_7, long long p_13)
{
  unsigned int v_11;
  long long v_9;
  unsigned long v_5;
  short v;
  unsigned long result;
  v_9 = (long long)p;
  v_5 = 611419295UL;
  result = (unsigned long)p_13;
  v = (short)-81;
  while ((unsigned long)v > ((124UL - p) * ~ v_5) / (! p_7 + 130UL)) {
    v_11 = (unsigned int)p;
    v_9 = ~ (v_9 >> (v_11 & 63U)) >> ((long long)(3302464768.f + (float)p_13) & 63LL);
    v = (short)(! (~ -312598796L));
  }
  while_0_break: ;
  return result;
}


