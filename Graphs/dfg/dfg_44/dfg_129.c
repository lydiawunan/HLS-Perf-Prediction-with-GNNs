#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205868150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, double p_7[1][1], unsigned int p_9,
                  short p_11, signed char p_15[4][3][2])
{
  short v_23;
  signed char v_21;
  short v_19;
  unsigned short v_17;
  char v_13;
  char v_5;
  float v;
  unsigned char result;
  v_23 = (short)p_9;
  v_21 = (signed char)107;
  v_19 = (short)16226;
  v_17 = (unsigned short)43994;
  v_13 = (char)(((int)v_17 * (int)v_19) / ((int)p_7[0][0] + 790) - ((int)v_21 + (
                                                                    (int)((short)(- p_7[0][0])) + (int)v_23)));
  v_5 = (char)0;
  v = (float)((double)v_5 / (- p_7[0][0] + 606.));
  result = (unsigned char)(- (- (v - -71.f)) + (float)((unsigned long)(- (- v)) / (
                                                       - (53122UL - (unsigned long)p) + 490UL)));
  return result;
}


