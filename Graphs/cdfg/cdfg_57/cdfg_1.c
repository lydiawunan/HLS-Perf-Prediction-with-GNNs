#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 399991180
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, long p_5[4][4][2], signed char p_7,
                 unsigned long long p_13)
{
  unsigned int v_15;
  int v_11;
  short v_9;
  signed char v;
  unsigned int result;
  v_15 = 10309U;
  v_11 = (int)p_13;
  v_9 = (short)-27106;
  v = (signed char)63;
  result = (unsigned int)((p_13 / 27ULL - (unsigned long long)(! v_15)) * (unsigned long long)(
                          (int)(~ v) * - v_11));
  if (1025ULL == (unsigned long long)((unsigned int)((int)p_7 % ((int)v_9 + 400)) / (
                                      result + 139U) - (unsigned int)(! (~ v_11)))) 
    result = (unsigned int)p;
  else {
    v = (signed char)(-63734L * ! p_5[2][0][1]);
    result = (unsigned int)v;
  }
  return result;
}


