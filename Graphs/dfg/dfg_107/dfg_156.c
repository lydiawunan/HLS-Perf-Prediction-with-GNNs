#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 975044491
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, unsigned long p_13)
{
  unsigned int v_11;
  float v_8;
  short v_6;
  float v_4;
  unsigned long long v;
  unsigned long long result;
  v_11 = (unsigned int)p;
  v_8 = -3872399616.f;
  v = 18446744073247107228ULL;
  result = (unsigned long long)p_13;
  v_4 = (float)((unsigned long long)(- (- ((double)v_8 - p))) * ((result / (unsigned long long)(
                                                                  v_11 + 996U) + (unsigned long long)(- p_13)) % 497218362ULL));
  v = ! (~ ((607377166ULL % ((unsigned long long)p + 862ULL)) % (v + 357ULL)));
  v_6 = (short)v_8;
  result = (unsigned long long)((unsigned int)(- ((float)(v / 14001ULL) - - v_4)));
  return result;
}


