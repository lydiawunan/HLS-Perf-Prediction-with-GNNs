#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 453862635
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p)
{
  long long v_11;
  unsigned long long v_9;
  unsigned short v_6;
  float v_4;
  unsigned char v;
  unsigned char result;
  v_11 = (long long)p;
  v_9 = (unsigned long long)p;
  v_4 = 6703202816.f;
  v_6 = (unsigned short)v_11;
  v_6 = (unsigned short)((unsigned long long)v_6 & v_9);
  v = (unsigned char)((37559L - ~ (-12156L - (long)v_6)) + (long)p);
  result = (unsigned char)(- (((float)((int)v / -14814) + 2611384832.f) - - (
                              v_4 * 21900.f)));
  return result;
}


