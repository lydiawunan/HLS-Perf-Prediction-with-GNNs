#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 260743048
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, long long p_5, int p_7, int p_9, long p_17[3])
{
  signed char v_21;
  unsigned int v_19;
  unsigned short v_15;
  int v_13;
  unsigned short v_11;
  signed char v;
  short result;
  v_21 = (signed char)p;
  v_19 = (unsigned int)p_5;
  v_15 = (unsigned short)p_9;
  v_13 = (int)((18446744073709551614ULL + (505870225ULL + (unsigned long long)p_17[2]) % (unsigned long long)(
                                          (unsigned int)p_7 / (v_19 + 768U) + 609U)) * (unsigned long long)(
               32283 * ! (-16 & (int)v_21)));
  v_11 = (unsigned short)(! (~ (unsigned char)253));
  v = (signed char)(((p_9 | (int)v_11) * v_13) / ((int)v_15 + 848));
  result = (short)(! (((long long)((unsigned long)v * p) + - p_5) / (long long)(
                      ((int)4837729865.77 + (p_7 - -2615)) + 543)));
  return result;
}


