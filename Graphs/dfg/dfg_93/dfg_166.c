#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 862971833
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p)
{
  unsigned int v_11;
  short v_8;
  short v_6;
  short v_4;
  int v;
  unsigned char result;
  v_11 = (unsigned int)p;
  v_8 = (short)p;
  v_6 = (short)p;
  v_4 = (short)p;
  v = -613;
  result = (unsigned char)226;
  v_6 = (short)((int)(- (((float)v_11 - p) * (p / (p + 616.f)))) - ((
                                                                    982 % (
                                                                    v + 82)) % 44149 + (int)(
                                                                    (
                                                                    p + p) * (float)v_6)));
  result = (unsigned char)(- ((v % ((int)v_4 / ((int)v_6 + 134) + 552)) / (
                              (int)((unsigned char)((float)v_8 * p)) / (
                              (int)(~ result) + 183) + 859)));
  result = ~ result;
  result = result;
  return result;
}


