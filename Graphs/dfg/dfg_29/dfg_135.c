#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 924122526
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, int p_5, unsigned char p_7,
                   unsigned short p_23)
{
  unsigned int v_25;
  signed char v_21;
  short v_19;
  double v_17;
  unsigned short v_15;
  double v_13;
  float v_11;
  char v_9;
  double v;
  unsigned short result;
  v_25 = (unsigned int)p_23;
  v_21 = (signed char)p_5;
  v_19 = (short)108;
  v_17 = (double)p;
  v_15 = (unsigned short)21901;
  v_13 = -9.04470032096e+37;
  v_9 = (char)-103;
  result = (unsigned short)((unsigned int)v_19 - (unsigned int)(5 % (
                                                                ((int)v_21 & (int)p_7) + 570)) * (
                                                 ((unsigned int)p_23 + v_25) % (unsigned int)(
                                                 (int)v_15 + 757)));
  v_11 = (float)(! (~ (-165 / (p_5 + 439))) ^ (int)(- (-3.12691170734e+38 - v_13) / (
                                                    (double)(~ (60 % (
                                                                p_5 + 704))) + 925.)));
  v = ((double)p_7 * - (- v_13)) / ((double)(! ((int)result ^ (int)((unsigned short)(
                                                (double)v_15 + v_17)))) + 740.);
  result = (unsigned short)(((int)((unsigned short)v) * (int)p) * (119 * (
                                                                   p_5 % (
                                                                   (int)p_7 + 644) & (int)(
                                                                   (float)v_9 / (
                                                                   v_11 + 320.f)))));
  return result;
}


