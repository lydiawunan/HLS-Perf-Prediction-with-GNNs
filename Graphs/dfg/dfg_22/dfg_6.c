#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 726556138
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p)
{
  unsigned short v_11;
  signed char v_9;
  signed char v_7;
  unsigned char v_4;
  unsigned char v;
  unsigned char result;
  v_9 = (signed char)-51;
  v_7 = (signed char)-24;
  v_11 = (unsigned short)((int)-2.54340461586e+38 + ((int)((short)-2288921412.77) / 17638) % 54447);
  v = (unsigned char)((int)v_7 % (((int)2.2785035426e+38 + ((int)v_9 / (
                                                            (int)v_11 + 959) + (int)(~ v_11))) + 392));
  v_4 = p;
  result = (unsigned char)(! (((int)v - (int)v_4) + (int)p));
  return result;
}


