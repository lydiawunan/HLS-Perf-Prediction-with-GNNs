#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 597612960
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, double p_7, unsigned long p_11, unsigned long p_13[3])
{
  char v_17;
  char v_15;
  char v_9;
  unsigned char v_5;
  short v;
  short result;
  v_17 = (char)-67;
  v = (short)p_7;
  v_15 = v_17;
  v_9 = (char)(- (~ p_13[0]));
  v_5 = (unsigned char)(((unsigned long)-1.84513490121e+38 + (unsigned long)v_9 / (
                                                             p_11 + 280UL)) / (
                        p_13[1] + 910UL) - (unsigned long)(((int)(~ v_9) + -45) % (
                                                           (int)v_15 + 360)));
  result = (short)(- (((int)p / ((int)p + 97) - (int)(- v)) / ((int)(- (
                                                               (double)v_5 - p_7)) + 61)));
  return result;
}


