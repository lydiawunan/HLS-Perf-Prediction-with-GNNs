#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 176642269
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, signed char p_4, int p_6, short p_9,
                  short p_11)
{
  short v_23;
  unsigned long long v_21;
  char v_19;
  unsigned long long v_17;
  unsigned short v_15;
  double v_13;
  int v;
  unsigned long result;
  v_23 = (short)-8458;
  v_21 = 18446744072975874402ULL;
  v_19 = (char)p_4;
  v_15 = (unsigned short)28595;
  v_13 = (double)p_11;
  v_17 = 0ULL;
  v = (int)(((unsigned long long)v_15 - (~ v_17 - (unsigned long long)(
                                         -46346L & (long)v_15))) ^ (unsigned long long)v_19);
  v_13 = (double)p_6;
  result = (unsigned long)((((int)p ^ (int)p_4 / (p_6 + 569)) + ((int)((signed char)1.85475415288e+38f) % (
                                                                 (int)p + 619) + (
                                                                 v + (int)p_9))) + (int)(
                           (double)((int)(- p_11) % 41) - v_13));
  return result;
}


