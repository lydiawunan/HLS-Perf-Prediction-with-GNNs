#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 845162830
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, unsigned long p_13, unsigned char p_19)
{
  signed char v_17;
  unsigned short v_15;
  unsigned char v_10;
  unsigned int v_8;
  unsigned char v_6;
  unsigned char v_4;
  long v;
  double result;
  v_17 = (signed char)-81;
  v_15 = (unsigned short)40441;
  v_10 = (unsigned char)p;
  v_8 = (unsigned int)p_19;
  result = -6570150936.73;
  v_6 = (unsigned char)(((p / ((unsigned long)result + 849UL) - 4294904064UL / (
                                                                p_13 + 189UL)) - (unsigned long)(
                         ((int)((char)-2770749952.f) / -94) / ((int)v_15 + 497))) - (unsigned long)(
                        (int)v_17 / (32928 / (((int)p_19 - 448762878) + 816) + 146)));
  v = (long)(((unsigned long)(29 + (int)v_10) + (p + p % (p + 177UL))) - ! (
             4154958857UL + 147UL * p_13));
  v_4 = (unsigned char)((29UL + (unsigned long)(- v_6) / ((unsigned long)v % (unsigned long)(
                                                          v_8 + 1011U) + 610UL)) ^ 4294967173UL);
  result = (double)(v * (long)v_4);
  return result;
}


