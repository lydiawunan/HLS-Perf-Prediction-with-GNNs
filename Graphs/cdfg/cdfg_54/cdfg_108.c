#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1012644733
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, long p_4, float p_7, unsigned short p_15,
                  short p_19)
{
  short v_21;
  double v_17;
  unsigned long v_13;
  short v_11;
  char v_9;
  unsigned long v;
  unsigned char result;
  v_21 = (short)26530;
  v_17 = (double)p_15;
  v_13 = (unsigned long)p_15;
  v_11 = (short)p_15;
  v_9 = (char)-40;
  v = (unsigned long)p_4;
  while (v_13 >= ((unsigned long)p_15 + 3603368084UL) % 13495UL - (unsigned long)(- (
                 v_17 + (double)p_19))) {
    v_9 = (int)v_21 + 205;
    v_17 = (double)p_4;
    v = 4294945446UL;
    v_13 = (unsigned long)((unsigned int)p_7 * (169460681U - (unsigned int)p_15)) / (
           - v + 134UL);
  }
  while_0_break: ;
  if (~ (- ((unsigned long)p_4 & v)) > (unsigned long)(- ((int)((char)p_7) - (int)v_9) << (
                                                       (int)v_11 & 31))) 
    result = (unsigned char)p;
  else result = (unsigned char)(! p_4);
  return result;
}


