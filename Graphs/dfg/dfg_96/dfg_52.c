#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 801443417
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, signed char p_7, float p_13[5], short p_15)
{
  char v_19;
  unsigned long v_17;
  unsigned long v_11;
  unsigned short v_9;
  unsigned short v_4;
  short v;
  float result;
  v_19 = (char)p_15;
  v_17 = (unsigned long)p_13[3];
  v_11 = (unsigned long)p;
  v_9 = (unsigned short)p_7;
  v = p_15;
  v_4 = (unsigned short)229;
  result = (float)((- p / 29702.) / ((double)(~ v_17) + 599.) - (double)(- (
                   (float)((int)v_19 % ((int)v_4 + 324)) - p_13[3])));
  v_4 = (unsigned short)((unsigned long)(- (- p_13[4]) * (float)(- (- v_4))) - (
                         (unsigned long)((-97 / ((int)p_15 + 990)) % 748) + v_17));
  result = (float)((unsigned long)(((double)((int)v / 38459) - -6.02502172209e+40) - (
                                   (double)v_4 - (p - -3.00153902383e+38))) % (
                   ((unsigned long)((int)((unsigned short)(result - (float)p_7)) + (int)v_9) & ~ (
                    540138956UL - v_11)) + 981UL));
  return result;
}


