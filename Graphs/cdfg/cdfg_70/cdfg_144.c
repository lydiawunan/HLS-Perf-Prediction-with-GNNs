#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 554790150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p)
{
  int v_9;
  unsigned char v_6;
  unsigned short v_4;
  unsigned long long v;
  unsigned short result;
  v_9 = -665159105;
  v_6 = (unsigned char)216;
  v_4 = (unsigned short)7433;
  v = (unsigned long long)(- ((int)p % (v_9 + 538) & v_9));
  result = (unsigned short)(((v / ((unsigned long long)-1.89146856583e+38 + 614ULL)) / (unsigned long long)(
                             (int)((unsigned short)-3.25170328891e+38f) / (
                             (int)v_4 + 687) + 254)) / (unsigned long long)(
                            (int)(! (~ v_6)) + 242));
  return result;
}


