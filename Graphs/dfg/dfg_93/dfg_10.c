#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 244061505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, long p_9[1], signed char p_11)
{
  unsigned long v_15;
  unsigned char v_13;
  float v_7;
  signed char v_5;
  unsigned char v;
  float result;
  v_15 = (unsigned long)p_9[0];
  v_13 = (unsigned char)177;
  v_7 = (float)(0UL % (((unsigned long)(- p_9[0]) / (unsigned long)((
                                                                    54009U ^ (unsigned int)p) + 428U) - (
                        (unsigned long)((int)p_11 | (int)v_13) - v_15)) + 174UL));
  v_5 = (signed char)v_7;
  v = (unsigned char)(! (- ((int)p + 23830 % ((int)v_5 + 703))));
  result = (float)(! (- v));
  return result;
}


