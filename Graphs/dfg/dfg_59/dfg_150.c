#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 186886937
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p)
{
  float v_4;
  int v;
  unsigned char result;
  v_4 = (float)p;
  v = (int)v_4;
  result = (unsigned char)v_4;
  v_4 = (float)(short)29841;
  result = (unsigned char)((int)(- result) - ((int)7385064007.15 % (v + 774) + (int)v_4) % (
                                             (int)(! (! p)) + 280));
  return result;
}


