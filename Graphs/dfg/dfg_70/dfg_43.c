#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 995653712
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, int p_9)
{
  unsigned char v_7;
  unsigned short v_5;
  short v;
  unsigned long result;
  result = 451163351UL;
  v_7 = (unsigned char)p_9;
  v_5 = (unsigned short)(- (9812 * ~ ((int)p - (int)v_7)));
  v = (short)v_5;
  result = (unsigned long)v - result * (128UL / (unsigned long)((int)p + 596));
  return result;
}


