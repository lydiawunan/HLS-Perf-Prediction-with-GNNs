#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 236767640
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p)
{
  float v_10;
  short v_8;
  unsigned int v_6;
  float v_4;
  unsigned short v;
  unsigned char result;
  v_10 = (float)p;
  v_4 = 7970996736.f;
  v_6 = (unsigned int)p;
  v_8 = (short)(- v_10);
  v = (unsigned short)(((unsigned int)(- (-3.f * v_4)) * (- v_6 / (unsigned int)(
                                                          (int)v_8 + 385))) / (
                       v_6 + 518U));
  result = (unsigned char)(~ v);
  return result;
}


