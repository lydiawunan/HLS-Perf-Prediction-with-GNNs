#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 648462556
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, int p_13, unsigned short p_17)
{
  signed char v_19;
  double v_15;
  double v_11;
  signed char v_8;
  char v_6;
  signed char v_4;
  double v;
  unsigned short result;
  v_19 = (signed char)114;
  v_15 = (double)p;
  v_11 = -8.54271550154e+37;
  v = -881393257.634;
  v_6 = (char)(- (- ((p_13 / ((int)v_15 + 612)) * ((int)p_17 * (int)v_19))));
  v_8 = (signed char)(- (- (v - (double)((int)p / ((int)((short)v_11) + 302)))));
  v_4 = ~ (! v_8);
  result = (unsigned short)(((int)((signed char)(- (- v))) % ((int)v_4 + 69)) * (int)v_6);
  return result;
}


