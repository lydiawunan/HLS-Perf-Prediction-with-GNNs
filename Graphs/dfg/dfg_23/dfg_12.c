#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 19236278
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, float p_5, double p_7, signed char p_11[3][1][5],
         char p_15)
{
  double v_19;
  unsigned short v_17;
  int v_13;
  unsigned short v_9;
  double v;
  long result;
  v_17 = (unsigned short)18091;
  v_13 = -54732;
  result = (long)p_7;
  v_19 = (double)result;
  v_9 = (unsigned short)((-21254 ^ (int)(- p_15) / -59) * (- ((int)((signed char)8525048036.79) / (
                                                              (int)p_11[1][0][4] + 526)) / (
                                                           (int)(- p_7 * (
                                                                 (double)v_17 - v_19)) + 599)));
  v = (double)(! (((int)((double)p_5 / (p_7 + 963.)) * ((int)v_9 / ((int)p_11[0][0][4] + 292))) % (
                  (90 + v_13) + 971)));
  result = (long)(43174 + (int)((unsigned short)((double)(((int)p / -106922456) / 470) / (
                                                 v + 1013.))));
  return result;
}


