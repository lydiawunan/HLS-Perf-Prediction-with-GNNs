#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 565102022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, double p_7)
{
  unsigned short v_4;
  long long v;
  char result;
  v = -7941LL;
  v_4 = (unsigned short)(- (- p_7));
  v = ~ v * v + (long long)((unsigned long)((long)p * -29643L) + 4247146113UL);
  v = 800LL << (-519576225LL / ((103LL + ((long long)v_4 + v)) + 218LL) & 63LL);
  result = (char)v;
  return result;
}


